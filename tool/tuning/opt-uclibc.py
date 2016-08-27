#!/usr/bin/python
import os
import os.path
import subprocess as subp
import sys
import thread
import os
__author__ = 'huwx@pku.edu.cn'

opt_args = 'AggressiveDCE,ArgumentPromotion,CFGSimplification,ConstantMerge\
,DeadArgElimination,DeadStoreElimination,DeadTypeElimination,FunctionAttrs\
,FunctionInlining,GlobalDCE,GlobalOptimizer,GVN,IndVarSimplify\
,InstructionCombining,IPConstantPropagation,JumpThreading,LICM\
,LoopDeletion,LoopRotate,LoopUnroll,LoopUnswitch,MemCpyOpt\
,PromoteMemoryToRegister,PruneEH,Reassociate,ScalarReplAggregates\
,SCCP,SimplifyLibCalls,StripDeadPrototypes,TailCallElimination'.split(',')

program = 'base64,basename,cat,chcon,chgrp,chown,chroot,cksum,comm,cp,csplit,cut\
,date,df,dircolors,dirname,echo,env,expand,expr,factor,fmt,fold\
,head,hostid,hostname,id,ginstall,join,kill,link,ln,logname,ls,md5sum,mkdir\
,mkfifo,mknod,mktemp,mv,nice,nl,nohup,od,paste,pathchk,pinky,pr,printenv,printf\
,ptx,pwd,readlink,rm,rmdir,runcon,seq,setuidgid,shred,shuf,sleep,sort,split\
,stat,stty,sum,sync,tac,tail,tee,touch,tr,tsort,tty,uname,unexpand,uniq,unlink\
,uptime,users,wc,whoami,who,yes'.split(',')

soptbin = '../bin/llvm-ld-sopt'

bca_path = '/home/huwx/tool/klee/3rd_party/klee-uclibc'
bca_file = '/home/huwx/tool/klee/install/lib/klee/runtime/klee-uclibc.bca'
llvm_ar = '/home/huwx/tool/llvm/prebuild/llvm-clang-2.9/bin/llvm-ar'
opt_dir = 'klee-uclibc-opt'
target_bca = 'klee-uclibc.bca.opt'
opt_data_folder = 'libopt'
output_dir = 'output'
tmp_dir = 'tmp'

def exccmd(cmd):
	print 'run command,', cmd
	p = os.popen(cmd, "r")
	rs = []
	line = ""
	while True:
		line = p.readline()
		if not line:
			break
		#print line
		rs.append(line.strip())
	return rs
	

def mkdir_pathwithfilename(path):
	folders = path.split('/')
	root = folders[0]
	for f in range(1,len(folders)):
		if not os.path.exists(root):
			os.mkdir(root)
		root = root + '/' + folders[f]


def main():
	global opt_dir
	files = exccmd(' '.join([llvm_ar, 't', bca_file]))
	opted = []
	print 'uclibc gots', len(files), 'bitcode files'
	optcfgs = os.listdir(opt_data_folder)
	data = os.getcwd().split('-')
	begin = int(data[-2])
	end = int(data[-1])
	for i in range(begin, end):
		if i>=len(program):
			break
		cfg = program[i] + '.csv'
		if cfg.startswith('.'):
			continue
		if not os.path.exists(opt_data_folder+'/'+cfg):
			continue
		tirggers = open( opt_data_folder+'/'+cfg,'r').readline().split(',')[0:len(opt_args)]
		cur_opt_args = []
		mvto = output_dir + '/' + cfg[:-4] + '/' + target_bca
		mkdir_pathwithfilename(mvto)
		if os.path.exists(mvto):
			print mvto, 'exists'
			continue
		for tgcnt in range(0, len(opt_args)):
			tirggers[tgcnt] = tirggers[tgcnt].strip()
			if tirggers[tgcnt] == 'on':
				cur_opt_args.append(opt_args[tgcnt])
			if tirggers[tgcnt] != 'off' and tirggers[tgcnt] != 'on':
				print  'error flag', cfg, tgcnt, tirggers[tgcnt], opt_args[tgcnt]
		if len(cur_opt_args) == len( opt_args):
			print 'warnning all flags turn on',cfg
		cur_opt_args = ','.join(cur_opt_args)

		for f in files:
			print 'processing', f
			fabspath = '/'.join([bca_path, f])
			if os.path.exists(fabspath):
				topath = '/'.join([opt_dir, f])
				opted.append(topath)
				mkdir_pathwithfilename(topath)
				optcmd = ' '.join([soptbin, '-opt-flag='+cur_opt_args, fabspath, '-o', topath])
				rs = exccmd(optcmd)
				if not os.path.exists(topath):
					print topath, 'not generated'
					exit(0)
				print 'status', len(rs)

				if os.path.exists(topath) and os.path.exists(topath+'.bc'):
					# deal with this situation
					exccmd('rm '+topath)
					exccmd('mv '+topath+'.bc '+topath)
			else:
				print fabspath, 'not exists'
				exit(0)

		for f in files:
			insertbcacmd = ' '.join(['cd', opt_dir , '&&', llvm_ar, 'r', target_bca, f])
			exccmd(insertbcacmd)

		
		exccmd('mv ' + opt_dir + '/' + target_bca + '  ' + mvto)
		if os.path.exists(opt_dir + '/' + target_bca):
			print 'warnning', opt_dir + '/' + target_bca, 'exists'
			exit(0)
		if not os.path.exists(mvto):
			print 'error', mvto, 'not exists'
			exit(0)

		exccmd(' '.join(['mv', opt_dir, tmp_dir+'/'+cfg+'_'+opt_dir]))
		if os.path.exists(opt_dir):
			print 'error', opt_dir, 'exists'
			exit(0)

		#optfiles = exccmd(' '.join([llvm_ar, 't', target_bca]))
		#print 'target opted klee-uclibc includes',len(optfiles),'files'

if __name__ == '__main__':
	main()

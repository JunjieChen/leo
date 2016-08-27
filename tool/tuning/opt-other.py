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
bclibs = ['../otherlib/libklee-libc.bca', '../otherlib/libkleeRuntimeIntrinsic.bca', '../otherlib/libkleeRuntimePOSIX.bca']
llvm_ar = '/home/huwx/tool/llvm/prebuild/llvm-clang-2.9/bin/llvm-ar'
opt_dir = 'other-opt'
target_bc_affix = '.opt'
opt_data_folder = 'libopt'
output_dir = 'output'


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

def main():
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
		for tgcnt in range(0, len(opt_args)):
			tirggers[tgcnt] = tirggers[tgcnt].strip()
			if tirggers[tgcnt] == 'on':
				cur_opt_args.append(opt_args[tgcnt])
			if tirggers[tgcnt] != 'off' and tirggers[tgcnt] != 'on':
				print  'error flag', cfg, tgcnt, tirggers[tgcnt], opt_args[tgcnt]
		if len(cur_opt_args) == len( opt_args):
			print 'warnning all flags turn on',cfg
		cur_opt_args = ','.join(cur_opt_args)

		for f in bclibs:
			print 'processing', f
			if os.path.exists(f):
				fname = f.split('/')[-1]
				topath = output_dir + '/' + cfg[:-4] + '/' + fname
				optcmd = ' '.join([soptbin, '-opt-flag='+cur_opt_args, f, '-o', topath])
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
				print f, 'not exists'
				exit(0)

if __name__ == '__main__':
	main()

import os
import datetime
import os.path
import subprocess as subp
import sys
import thread

os.system('export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib/x86_64-linux-gnu')
os.system('export C_INCLUDE_PATH=/usr/include/x86_64-linux-gnu')
os.system('export CPLUS_INCLUDE_PATH=/usr/include/x86_64-linux-gnu')
os.system('export PATH=$PATH:/SEIDISK/chenjj/tool/klee/29/llvm-gcc4.2-2.9-x86_64-linux/bin')

opt_args= ' AggressiveDCE, ArgumentPromotion, CFGSimplification, ConstantMerge\
, DeadArgElimination, DeadStoreElimination, DeadTypeElimination, FunctionAttrs\
, FunctionInlining, GlobalDCE, GlobalOptimizer, GVN, IndVarSimplify\
, InstructionCombining, IPConstantPropagation, JumpThreading, LICM\
, LoopDeletion, LoopRotate, LoopUnroll, LoopUnswitch, MemCpyOpt\
, PromoteMemoryToRegister, PruneEH, Reassociate, ScalarReplAggregates\
, SCCP, SimplifyLibCalls, StripDeadPrototypes, TailCallElimination'.split(',')

opt_args_order= 'CFGSimplification,PromoteMemoryToRegister,GlobalOptimizer,GlobalDCE,IPConstantPropagation\
,DeadArgElimination,InstructionCombining,CFGSimplification,PruneEH,FunctionAttrs\
,FunctionInlining,ArgumentPromotion,SimplifyLibCalls,InstructionCombining,JumpThreading\
,CFGSimplification,ScalarReplAggregates,InstructionCombining,TailCallElimination\
,CFGSimplification,Reassociate,LoopRotate,LICM,LoopUnswitch,InstructionCombining\
,IndVarSimplify,LoopDeletion,LoopUnroll,InstructionCombining,GVN,MemCpyOpt\
,SCCP,InstructionCombining,DeadStoreElimination,AggressiveDCE,CFGSimplification\
,StripDeadPrototypes,DeadTypeElimination,ConstantMerge'.split(',')

program='base64,basename,cat,chcon,chgrp,chown,chroot,cksum,comm,cp,csplit,cut,date\
,df,dircolors,dirname,echo,env,expand,expr,factor,fmt,fold,hostid,hostname\
,id,join,link,ln,logname,ls,mkdir,mkfifo,mknod,mktemp,nice\
,nl,nohup,od,paste,pathchk,pinky,pr,printenv,printf,pwd,readlink,runcon\
,seq,setuidgid,shuf,sleep,split,stat,stty,tee\
,touch,tr,tsort,tty,uname,unexpand,uniq,unlink,uptime,users,who,whoami'.split(',')
#expr,join,ls,od,tr
#head,mv,ptx,sort,sum,tac,tail,wc
klee_default_arg = '--simplify-sym-indices --write-cvcs --write-cov\
 --output-module -use-cache=false -use-cex-cache=false --max-memory=1000\
  --use-forked-solver --libc=uclibc --posix-runtime\
   --allow-external-sym-calls --only-output-states-covering-new\
    --max-sym-array-size=4096 --max-instruction-time=30. --max-time=600\
     --watchdog --max-memory-inhibit=false --max-static-fork-pct=1\
      --max-static-solve-pct=1 --max-static-cpfork-pct=1 --switch-type=internal\
       --search=dfs --use-batching-search --batch-instructions=10000'

klee_opt_arg = {'opt':'--optimize --opt-flag='} #replace <option>  # this line disable & enable all the args # should work with diffeent version of klee 

bc_arg={'*':'--sym-args 0 1 10 --sym-args 0 2 2 --sym-files 1 8',
	'dd':'--sym-args 0 3 10 --sym-files 1 8', 
	'dircolors': '--sym-args 0 3 10 --sym-files 2 12',
	'echo': '--sym-args 0 4 300 --sym-files 2 30',
	'expr': '--sym-args 0 1 10 --sym-args 0 3 2',
    'mknod': '--sym-args 0 1 10 --sym-args 0 3 2 --sym-files 1 8',
    'od': '--sym-args 0 3 10 --sym-files 2 12',
    'pathchk': '--sym-args 0 1 2 --sym-args 0 1 300 --sym-files 1 8',
    'printf': '--sym-args 0 3 10 --sym-files 2 12'
	}

machinelearning='SMO-31'.split(',')

klee_bin = {'raw':'/SEIDISK/chenjj/tool/klee/29kleenew/multiklee/7/klee-install/bin/klee','modified':'/SEIDISK/chenjj/tool/klee/29kleenew/multiklee/7/klee-install/bin/klee'}

programpath = '/SEIDISK/chenjj/symbolic_optimization/ICSE17/10mintrainingset/predict/10min/programs/1/gen'

outputdir='/SEIDISK/chenjj/symbolic_optimization/ICSE17/10mintrainingset/predict/10min/tests'

#combination = '/SEIDISK/chenjj/symbolic_optimization/predict/final-2/coreutil-76/record-4'

def wirtefile(fname ,str):
	t = open(fname,'wa')
	t.write(str)

def exccmd(cmd):
    p=os.popen(cmd,"r")
    rs=[]
    line=""
    while True:
         line=p.readline()
         if not line:
              break
         #print line
         #rs.append(line.strip())
    return rs

def prepareKlee(target):
	klee_runtime = '/SEIDISK/chenjj/tool/klee/29kleenew/multiklee/7/klee-install/lib/klee/runtime'  # change me
	klee_opted_lib_dir = '/SEIDISK/chenjj/symbolic_optimization/ICSE17/10mintrainingset/predict/10min/programs/1/output'
	orifiles = ['klee-uclibc.bca', 'libklee-libc.bca', 'libkleeRuntimeIntrinsic.bca', 'libkleeRuntimePOSIX.bca']
	optedfiles = ['klee-uclibc.bca.opt', 'libklee-libc.bca', 'libkleeRuntimeIntrinsic.bca', 'libkleeRuntimePOSIX.bca']
	for i in range(0, 4):
		orifile = klee_runtime + '/' + orifiles[i]
		optedfile = klee_opted_lib_dir + '/' + target + '/' + optedfiles[i]
		os.system('rm ' + orifile)
		if os.path.exists(orifile):
			print 'cannot remove', orifile
			return 0
		os.system('ln -s %s %s' % (optedfile, orifile))
		if not os.path.exists(orifile):
			print 'cannot make link', orifile
			return 0
	return 1

def main():
	#instance
	# KLEE + OPT + DEFAULT + PROGRAM + PROGRAM_ARG
	for ml in machinelearning:
		#combinationml = combination + '/' + ml
		outputdirml = outputdir + '/' + ml

		os.system('mkdir ' + outputdirml)
		
		for prog in program:

			if prepareKlee(prog) == 0:
				continue

			# combinationfile = open(combinationml + '/' + prog + '.csv')
			# onoroff = combinationfile.readlines()[0].strip().split(',')
			
			# opt_order = dict()
			# for jj in range(0,len(opt_args)):
			# 	opt_order[opt_args[jj].strip()] = onoroff[jj]

			# if opt_order[opt_args[25].strip()] == 'off':
			# 	opt_order[opt_args[22].strip()] = 'off'

			path = outputdirml+'/'+prog
			exebin = programpath+'/'+prog
			if os.path.exists(path):
				continue
			else:
				os.mkdir(path)
			progarg=''
			if prog in bc_arg.keys():
				progarg = bc_arg[prog]
			else:
				progarg = bc_arg['*']

			kleeexefile = klee_bin['modified']
			# optcombination = ''
			# for ii in range(0, len(opt_args_order)):
			# 	if opt_order[opt_args_order[ii].strip()] == 'on':
			# 		optcombination = optcombination + opt_args_order[ii].strip() + ','
			
			# kleeoptarg = klee_opt_arg['opt']+optcombination[:-1];

			command = ' '.join([kleeexefile,klee_default_arg, exebin+'.bc', progarg])
			print command
			command2 = 'mv '+programpath+"/klee* "+path
			print command2
			exccmd(command)
			exccmd(command2)
			exccmd( 'rm '+programpath+"/klee* ")
			#step one execute the klee
			#step two create corresponding dir
			#if dir exists , continue!

if __name__ == '__main__':
	main()


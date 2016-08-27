import os
import datetime
import os.path
import subprocess as subp
import sys
import thread

opt_args= ' AggressiveDCE, ArgumentPromotion, CFGSimplification, ConstantMerge\
, DeadArgElimination, DeadStoreElimination, DeadTypeElimination, FunctionAttrs\
, FunctionInlining, GlobalDCE, GlobalOptimizer, GVN, IndVarSimplify\
, InstructionCombining, IPConstantPropagation, JumpThreading, LICM\
, LoopDeletion, LoopRotate, LoopUnroll, LoopUnswitch, MemCpyOpt\
, PromoteMemoryToRegister, PruneEH, Reassociate, ScalarReplAggregates\
, SCCP, SimplifyLibCalls, StripDeadPrototypes, TailCallElimination'.split(',')

program='base64,basename,cat,chcon,chgrp,chown,chroot,cksum,comm,cp,csplit,cut,date\
,df,dircolors,dirname,echo,env,expand,expr,factor,fmt,fold,head,hostid,hostname\
,id,join,link,ln,logname,ls,mkdir,mkfifo,mknod,mktemp,mv,nice\
,nl,nohup,od,paste,pathchk,pinky,pr,printenv,printf,ptx,pwd,readlink,runcon\
,seq,setuidgid,shuf,sleep,sort,split,stat,stty,sum,tac,tail,tee\
,touch,tr,tsort,tty,uname,unexpand,uniq,unlink,uptime,users,wc,who,whoami'.split(',')

machinelearning='SMO-31'.split(',')

dir_each_program='/SEIDISK/chenjj/symbolic_optimization/ICSE17/10mintrainingset/preprocess/predict_library/training'

dir_each_optimization_output='/SEIDISK/chenjj/symbolic_optimization/ICSE17/10mintrainingset/preprocess/predict_library/record'

os.system('mkdir '+dir_each_optimization_output)

for ml in range(0,len(machinelearning)):
	mlpath=dir_each_optimization_output + '/' + machinelearning[ml]
	os.system('mkdir '+mlpath)

	for pro in program:
		path = os.path.join(dir_each_program, pro) 

		for opt in opt_args:
			pathfile = os.path.join(path, opt.strip())

			train = os.path.join(pathfile, 'train.csv')
			test = os.path.join(pathfile, 'test.csv')

			output = os.path.join(mlpath, pro+'.csv')
			os.system("java -jar predicttest-smo-31-smote.jar " + train + " " + test + " " + str(ml) + " " + output) 

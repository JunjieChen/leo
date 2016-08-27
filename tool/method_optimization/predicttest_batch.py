import os
import datetime
import os.path
import subprocess as subp
import sys,time
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

dir_each_program='/SEIDISK/chenjj/symbolic_optimization/ICSE17/10mintrainingset/preprocess/predict_method/training'
dir_each_test='/SEIDISK/chenjj/symbolic_optimization/ICSE17/10mintrainingset/preprocess/predict_method/testing'

dir_each_optimization_output='/SEIDISK/chenjj/symbolic_optimization/ICSE17/10mintrainingset/preprocess/predict_method/output_test'
os.system('mkdir '+dir_each_optimization_output)

for ml in range(0,len(machinelearning)):
	mlpath=dir_each_optimization_output + '/' + machinelearning[ml]
	os.system('mkdir '+mlpath)

	for pro in program:
		os.system('mkdir '+mlpath+'/'+pro)
		pathtest = os.path.join(dir_each_test, pro) 

		pathtrain = os.path.join(dir_each_program, pro) 
		maxtime=0.0
		for opt in opt_args:
			start=time.time()
			pathfile = os.path.join(pathtrain, opt.strip())
			train = os.path.join(pathfile, 'train.csv')
			flag = 0
			for f in os.listdir(pathtest):
				test = os.path.join(pathtest, f)
				print test
				output = os.path.join(mlpath+'/'+pro, f.split('.csv')[0]+'.csv')
				if flag==0:
					os.system("java -jar predicttest-smo-31-smote-new.jar " + train + " " + test + " " + str(ml) + " " + output) 
					flag=1
				else:
					os.system("java -jar predicttest-smo-31-smote-trained.jar " + train + " " + test + " " + output)
			end=time.time()
			if (end-start) > maxtime:
				maxtime=end-start
		print str(maxtime)
		break
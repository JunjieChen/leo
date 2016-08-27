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

os.system('mkdir ./testing/')

for pro in program:

	os.system('mkdir ./testing/' + pro.strip())

	feature=open('out_fun_detail.csv.fun.csv')

	for line in feature.xreadlines():

		nPostmp = line.index(',')
		proname=line[0:nPostmp].strip()

		if proname == pro:
			nPos = line.index(',')
			number=line[nPos + 1:]
			nnPos=number.index(',')
			nnumber=number[nnPos + 1:]
			func=number[0:nnPos].split('ici_features_function.')[-1].split('.fre.ft')[0]

			optfile=file('./testing/'+pro.strip()+'/'+ func +'.csv','a+')
			for jj in range(0,55): #####################
				optfile.write(str(jj)+',')
			optfile.write(str(55))

			optfile.write('\n')

			optfile.write(nnumber.strip())
			optfile.write(',' + 'on'+'\n')
			optfile.write(nnumber.strip())
			optfile.write(',' + 'off'+'\n')

			optfile.close()


	feature.close()



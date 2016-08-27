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

programs='base64,basename,cat,chcon,chgrp,chown,chroot,cksum,comm,cp,csplit,cut,date\
,df,dircolors,dirname,echo,env,expand,expr,factor,fmt,fold,head,hostid,hostname\
,id,join,link,ln,logname,ls,mkdir,mkfifo,mknod,mktemp,mv,nice\
,nl,nohup,od,paste,pathchk,pinky,pr,printenv,printf,ptx,pwd,readlink,runcon\
,seq,setuidgid,shuf,sleep,sort,split,stat,stty,sum,tac,tail,tee\
,touch,tr,tsort,tty,uname,unexpand,uniq,unlink,uptime,users,wc,who,whoami'.split(',')

os.system('mkdir ./training/')

for pro in programs:
	os.system('mkdir ./training/' + pro)
	kk=1
	for opt in opt_args:
		os.system('mkdir ./training/'+pro+'/'+opt.strip())
		kk+=1
		listclasses=[]
		classes=open('outmethod-2.csv')
		feature=open('out_fun_detail.csv.fun.csv')
		for lineclasses in classes.xreadlines():
			if lineclasses.split(',')[0].strip() != pro:
				listclasses.append(lineclasses.split(',')[kk].strip())
			else:
				testclass=lineclasses.split(',')[kk].strip()


		optfile=file('./training/'+pro+'/'+opt.strip()+'/'+'train.csv','a+')



		for jj in range(0,55): 
			optfile.write(str(jj)+',')
		optfile.write(str(55))

		optfile.write('\n')


		hh=0
		for line in feature.xreadlines():

			nPostmp = line.index(',')
			proname=line[0:nPostmp].strip()

			if proname == pro:

				hh-=1
			elif (listclasses[hh] != 'uncertain') and (proname != pro):
				nPos = line.index(',')
				number=line[nPos + 1:]
				nPos1 = number.index(',')
				number1 = number[nPos1 + 1:]
				optfile.write(number1.strip())
				optfile.write(',' + listclasses[hh]+'\n')

			hh+=1
		
		classes.close()
		feature.close()
		optfile.close()


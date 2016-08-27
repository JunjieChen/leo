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

os.system('mkdir ./training')

for pro in program:
	os.system('mkdir ./training/' + pro)
	kk=0
	for opt in opt_args:
		os.system('mkdir ./training/'+pro+'/'+opt.strip())
		kk+=1
		listclasses=[]
		classes=open('outprogram-2.csv')
		feature=open('library-feature.csv')
		for lineclasses in classes.xreadlines():
			if lineclasses.split(',')[0].strip() != pro:
				listclasses.append(lineclasses.split(',')[kk].strip())
			else:
				testclass=lineclasses.split(',')[kk].strip()


		optfile=file('./training/'+pro+'/'+opt.strip()+'/'+'train.csv','a+')

		optfile_test=file('./training/'+pro+'/'+opt.strip()+'/'+'test.csv','a+')

		for jj in range(0,688): #####################
			optfile.write(str(jj)+',')
			optfile_test.write(str(jj)+',')
		optfile.write(str(688))
		optfile_test.write(str(688))

		optfile.write('\n')
		optfile_test.write('\n')

		hh=0
		for line in feature.xreadlines():

			nPostmp = line.index(',')
			proname=line[0:nPostmp].strip()

			if proname == pro:
				nPos = line.index(',')
				number=line[nPos + 1:]
				optfile_test.write(number.strip())
				optfile_test.write(',on'+'\n')
				optfile_test.write(number.strip())
				optfile_test.write(',off'+'\n')
				hh-=1
			elif (listclasses[hh] != 'uncertain') and (proname != pro):
				nPos = line.index(',')
				number=line[nPos + 1:]
				optfile.write(number.strip())
				optfile.write(','+listclasses[hh]+'\n')

			hh+=1
			

			
			
		classes.close()
		feature.close()
		optfile.close()
		optfile_test.close()

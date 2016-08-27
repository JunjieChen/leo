import os
import datetime
import os.path
import subprocess as subp
import sys
import thread

program='base64,basename,cat,chcon,chgrp,chown,chroot,cksum,comm,cp,csplit,cut,date\
,df,dircolors,dirname,echo,env,expand,expr,factor,fmt,fold,hostid,hostname\
,id,join,link,ln,logname,ls,mkdir,mkfifo,mknod,mktemp,nice\
,nl,nohup,od,paste,pathchk,pinky,pr,printenv,printf,pwd,readlink,runcon\
,seq,setuidgid,shuf,sleep,split,stat,stty,tee\
,touch,tr,tsort,tty,uname,unexpand,uniq,unlink,uptime,users,who,whoami'.split(',')

klee_replay_bin ={'raw':'/SEIDISK/chenjj/tool/klee/29kleenew/multiklee/1/klee-install/bin/klee-replay','modified':'/SEIDISK/chenjj/tool/klee/29kleenew/multiklee/1/klee-install/bin/klee-replay'}

programpath = '/SEIDISK/chenjj/symbolic_optimization/predict/predict-2/ml_batch/run/1/coreutils-6.11-3/obj-gcov/src'
outputdir='/SEIDISK/chenjj/symbolic_optimization/ICSE17/10mintrainingset/predict/10min/tests'
gcovsuffix =  'gcovinfo'

machinelearning='SMO-31'.split(',')

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

def main():
	#instance
	# KLEE + OPT + DEFAULT + PROGRAM + PROGRAM_ARG
	for ml in machinelearning:
		outputdirml = outputdir+'/'+ml
		for prog in program:
			path = outputdirml+'/'+prog
			exebin = programpath+'/'+prog
			if os.path.exists(path):
				pass
			else:
				continue
					
			pathopt = path
			klee_replay = klee_replay_bin['modified']		

			subpaths = os.listdir(pathopt)
			
			# info per folder
			for subpath in subpaths:
				if subpath == 'klee-last':
					continue
				sp = '/'.join([pathopt, subpath])
				print 'Explore',sp
				rmcmd = ' '.join(['rm -f',programpath+'/*.gcda','1>/dev/null 2>&1'])
				exccmd(rmcmd)
				
				rpcmd = ' '.join([klee_replay, exebin, sp+'/*.ktest'])
				print rpcmd
				exccmd(rpcmd)
				os.system('mkdir ' + sp+'/'+gcovsuffix)
				gcovout = 'cd '+programpath+' && gcov '+exebin+' 1>>'+sp+'/'+gcovsuffix+'/all-gcovout.txt 2>&1'
				print gcovout
				exccmd(gcovout)
				mvcmd = ' '.join(['mv',programpath+'/*.gcda',sp+'/'+gcovsuffix])
				mvcmd1 = ' '.join(['mv',programpath+'/*.gcov',sp+'/'+gcovsuffix])
				exccmd(mvcmd)
				exccmd(mvcmd1)
				print mvcmd
				print mvcmd1
					#return 
				
				#step one execute the klee
				#step two create corresponding dir
				#if dir exists , continue!

if __name__ == '__main__':
	main()


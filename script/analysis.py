import os
import datetime
import os.path
import subprocess as subp
import sys
import thread

resultpath='/SEIDISK/chenjj/symbolic_optimization/ICSE17/10mintrainingset/predict/10min/tests'

#expr,join,ls,od,tr
#head,mv,ptx,sort,sum,tac,tail,wc

program='base64,basename,cat,chcon,chgrp,chown,chroot,cksum,comm,cp,csplit,cut,date\
,df,dircolors,dirname,echo,env,expand,expr,factor,fmt,fold,hostid,hostname\
,id,join,link,ln,logname,ls,mkdir,mkfifo,mknod,mktemp,nice\
,nl,nohup,od,paste,pathchk,pinky,pr,printenv,printf,pwd,readlink,runcon\
,seq,setuidgid,shuf,sleep,split,stat,stty,tee\
,touch,tr,tsort,tty,uname,unexpand,uniq,unlink,uptime,users,who,whoami'.split(',')

machinelearning='SMO-31'.split(',')

def parseCovData(covfile):
	#Lines executed:80.65% of 62
	f = open(covfile,'r')
	d = f.readlines()
	f.close()
	if len(d) > 1:
		if 'Lines executed:' in d[1]:
			s = d[1].split('Lines executed:')[1].split('% of')[0]
		else:
			return 0.0
	else:
		return 0.0
	return float(s)

def write2csv(ofile,csvdata):
	o = open(ofile,'w')
	for key1 in program:
		d = [key1]
		d.append(str(csvdata[key1])+'%')
		o.write(', '.join(d))
		o.write('\n')
	o.close()

def main():
	# binname / optname / opt
	# /SEIDISK/chenjj/symbolic_optimization/test-1/results/  cksum/  all_opt/klee-out-0/gcovinfo/all-gcovout.txt
	csvdata=dict()

	for ml in machinelearning:
		outcsv = 'out-' + ml + '.csv'
		mlpath = '/'.join([resultpath,ml])
		for bin in program:
			binpath = '/'.join([mlpath,bin])

			covfile = '/'.join([binpath, 'klee-out-0/gcovinfo/all-gcovout.txt'])
			csvdata[bin] = parseCovData(covfile)
			print bin,csvdata[bin]
		write2csv(outcsv,csvdata)

if __name__ == '__main__':
	main()
import os

program = 'base64,basename,cat,chcon,chgrp,chown,chroot,cksum,comm,cp,csplit,cut\
,date,df,dircolors,dirname,echo,env,expand,expr,factor,fmt,fold\
,head,hostid,hostname,id,ginstall,join,kill,link,ln,logname,ls,md5sum,mkdir\
,mkfifo,mknod,mktemp,mv,nice,nl,nohup,od,paste,pathchk,pinky,pr,printenv,printf\
,ptx,pwd,readlink,rm,rmdir,runcon,seq,setuidgid,shred,shuf,sleep,sort,split\
,stat,stty,sum,sync,tac,tail,tee,touch,tr,tsort,tty,uname,unexpand,uniq,unlink\
,uptime,users,wc,whoami,who,yes'.split(',')

#program = 'expr,join,ls,od,tr'.split(',')

SMO_Path =  os.getcwd() + '/methodopt'
Gen_Dir = os.getcwd() + '/gen'
Origin_Lib = os.getcwd() + '/coreutils_obj_llvm/lib/libcoreutils.a'
Opt_Lib_Path = os.getcwd() + '/output'
Opt_Lib_Name = 'libcoreutils.a.opt'
Src_Dir = os.getcwd() + '/coreutils_obj_llvm/src'
Lib_Opt = os.getcwd() + '/libopt'
bin_path = os.getcwd() + '/../bin'

def prepare(target):
	os.system('rm '+Origin_Lib)
	opt_lib = Opt_Lib_Path + "/" + target + "/" + Opt_Lib_Name
	if os.path.exists(Origin_Lib):
		print 'cannot remove', Origin_Lib
		return 0
	os.system('ln -s %s %s'%(opt_lib, Origin_Lib))
	if not os.path.exists(Origin_Lib):
		print 'cannot make link', Origin_Lib
		print 'ln -s %s %s'%(opt_lib, Origin_Lib)
		return 0
	return 1

data = os.getcwd().split('-')
begin = int(data[-2])
end = int(data[-1])


for i in range(begin, end):
	if i>=len(program):
	    break;
	p = program[i]

	if p.startswith('.'):
		continue
	print 'now', p
	if prepare(p) == 0:
		print 'softlink error',p
		continue
	if os.path.exists(Gen_Dir+"/"+p+'.bc'):
		continue

	env_cmd = 'export PATH=' + bin_path + ':/home/huwx/tool/llvm/prebuild/llvm-clang-2.9/bin:/home/huwx/tool/llvm/prebuild/llvm-gcc-4.2/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games'
	cd_to_src = 'cd ' + Src_Dir
	make_cmd = 'make SPLITCC_OPTDIR=%s TARGET=%s DEFAULTOPT=%s CC=splitcc.py %s' % (SMO_Path, p,Lib_Opt,  p)
	mv_cmd = 'mv %s.bc %s' % (p, Gen_Dir)
	clean_cmd = './clean.sh'
	clean_cmd = "make clean"
	compile_cmd = '&&'.join([env_cmd, cd_to_src, clean_cmd,make_cmd, mv_cmd, clean_cmd])
	os.system(compile_cmd)
	if not os.path.exists(Gen_Dir+"/"+p+'.bc'):
		print 'error',p
		exit(1)




def prepareKlee(target):
	klee_runtime = '../install/lib/klee/runtime'  # change me
	klee_opted_lib_dir = '/home/huwx/workspace/0119_lib_optimized/output'
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


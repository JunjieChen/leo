mkdir tmp
mkdir gen
mkdir coreutils_obj_llvm
cd coreutils_obj_llvm && export PATH=/home/huwx/tool/llvm/prebuild/llvm-gcc-4.2/bin:/home/huwx/tool/llvm/prebuild/llvm-clang-2.9/bin:$PATH  &&../../subject/coreutils-6.11/configure -disable-nls CFLAGS="-g" && make CC=/home/huwx/tool/klee/klee.git/scripts/klee-gcc













typedef long unsigned int size_t;



typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
struct _IO_FILE;



typedef struct _IO_FILE FILE;





typedef struct _IO_FILE __FILE;




typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ ));




typedef __gnuc_va_list va_list;
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__ ));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__ ));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__ ));








extern FILE *tmpfile (void) ;
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ )) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ )) ;
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);
extern int fcloseall (void);









extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__ )) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ )) ;




extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__ )) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ )) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;








extern void perror (__const char *__s);






extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));





typedef long int ptrdiff_t;
typedef int wchar_t;
extern int rpl_vfprintf (FILE *fp, const char *format, va_list args)
       __attribute__ ((__format__ (__printf__, 2, 0)));
extern int rpl_vprintf (const char *format, va_list args)
       __attribute__ ((__format__ (__printf__, 1, 0)));
  extern int rpl_asprintf (char **result, const char *format, ...)
    __attribute__ ((__format__ (__printf__, 2, 3)));
  extern int rpl_vasprintf (char **result, const char *format, va_list args)
    __attribute__ ((__format__ (__printf__, 2, 0)));






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
typedef __pid_t pid_t;





typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;


typedef __clock_t clock_t;





typedef __time_t time_t;



typedef __clockid_t clockid_t;
typedef __timer_t timer_t;



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;








typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));




typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;



typedef __sigset_t sigset_t;





struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };

struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
typedef long int __fd_mask;
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);





__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));






typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;









typedef long int __jmp_buf[8];



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));




extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));




extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));




extern void __assert_fail (__const char *__assertion, __const char *__file,
      unsigned int __line, __const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
      unsigned int __line,
      __const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));






struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long int __unused[3];
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long int __unused[3];



  };
extern int stat (__const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern int stat64 (__const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, __const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int fstatat64 (int __fd, __const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));







extern int lstat (__const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int lstat64 (__const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int lchmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ ));





extern int fchmodat (int __fd, __const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ ));




extern __mode_t getumask (void) __attribute__ ((__nothrow__ ));



extern int mkdir (__const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, __const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));






extern int mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, __const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (__const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, __const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, __const char *__path,
        __const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, __const struct timespec __times[2]) __attribute__ ((__nothrow__ ));
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, __const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, __const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, __const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4)));
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, __const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, __const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, __const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, __const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, __const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 5)));




































typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (__const char *__name, int __type)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int eaccess (__const char *__name, int __type)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ ));
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ ));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ )) ;




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ )) ;
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ ));
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ ));






extern int usleep (__useconds_t __useconds);
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ )) ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (__const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ )) ;
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ )) ;





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ ));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ )) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ ));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ ));



extern char **__environ;

extern char **environ;





extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern int execv (__const char *__path, char *__const __argv[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (__const char *__file, char *__const __argv[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (__const char *__file, char *__const __argv[],
      char *__const __envp[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) __attribute__ ((__nothrow__ )) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };


extern long int pathconf (__const char *__path, int __name)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ ));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ ));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ ));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ ));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ ));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ ));
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ ));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ ));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ ));
extern int setpgrp (void) __attribute__ ((__nothrow__ ));
extern __pid_t setsid (void) __attribute__ ((__nothrow__ ));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ ));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ ));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ ));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ ));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ ));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ )) ;



extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ ));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ ));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ ));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ ));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ ));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ ));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ ));





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ ));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ ));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ ));



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ ));






extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ ));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ ));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ ));





extern int ttyslot (void) __attribute__ ((__nothrow__ ));




extern int link (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (__const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ ));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ ));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ ));







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ )) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ ));


extern int revoke (__const char *__file) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) __attribute__ ((__nothrow__ ));



extern char *getusershell (void) __attribute__ ((__nothrow__ ));
extern void endusershell (void) __attribute__ ((__nothrow__ ));
extern void setusershell (void) __attribute__ ((__nothrow__ ));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ )) ;






extern int chroot (__const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern char *gnu_getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
extern int fsync (int __fd);






extern int syncfs (int __fd) __attribute__ ((__nothrow__ ));






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ ));





extern int getpagesize (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ ));
extern int truncate (__const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int truncate64 (__const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ )) ;
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ )) ;
extern int brk (void *__addr) __attribute__ ((__nothrow__ )) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ ));
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ ));
extern int lockf (int __fd, int __cmd, __off_t __len) ;
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
extern int fdatasync (int __fildes);







extern char *crypt (__const char *__key, __const char *__salt)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__libc_block, int __edflag) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern void swab (__const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));







extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ));









union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ )) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;

typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;



extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3))) ;
extern char *l64a (long int __n) __attribute__ ((__nothrow__ )) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern long int random (void) __attribute__ ((__nothrow__ ));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ ));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ ));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ ));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ ));







extern double drand48 (void) __attribute__ ((__nothrow__ ));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ ));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ ));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ ));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ ));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ ));








extern void *valloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));







extern void quick_exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ ));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (__const char *__command) ;






extern char *canonicalize_file_name (__const char *__name)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ )) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__ )) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ )) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ )) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ ));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (__const char *__key) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__ ));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ ));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ )) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));








struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (__const struct timeval *__tv,
    __const struct timezone *__tz)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int adjtime (__const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__ ));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };




typedef enum __itimer_which __itimer_which_t;






extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__ ));




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__ ));




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, __const struct timeval __tvp[2]) __attribute__ ((__nothrow__ ));






extern int futimesat (int __fd, __const char *__file,
        __const struct timeval __tvp[2]) __attribute__ ((__nothrow__ ));












struct timex
{
  unsigned int modes;
  long int offset;
  long int freq;
  long int maxerror;
  long int esterror;
  int status;
  long int constant;
  long int precision;
  long int tolerance;
  struct timeval time;
  long int tick;

  long int ppsfreq;
  long int jitter;
  int shift;
  long int stabil;
  long int jitcnt;
  long int calcnt;
  long int errcnt;
  long int stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};




extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) __attribute__ ((__nothrow__ ));




struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;



extern clock_t clock (void) __attribute__ ((__nothrow__ ));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ ));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ ));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));





extern char *strptime (__const char *__restrict __s,
         __const char *__restrict __fmt, struct tm *__tp)
     __attribute__ ((__nothrow__ ));







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ ));



extern char *strptime_l (__const char *__restrict __s,
    __const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) __attribute__ ((__nothrow__ ));






extern struct tm *gmtime (__const time_t *__timer) __attribute__ ((__nothrow__ ));



extern struct tm *localtime (__const time_t *__timer) __attribute__ ((__nothrow__ ));





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));





extern char *asctime (__const struct tm *__tp) __attribute__ ((__nothrow__ ));


extern char *ctime (__const time_t *__timer) __attribute__ ((__nothrow__ ));







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ ));


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ ));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ ));



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) __attribute__ ((__nothrow__ ));
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ ));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ ));


extern int dysize (int __year) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ ));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ ));


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     __attribute__ ((__nothrow__ ));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ ));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ ));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ ));


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ ));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ ));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ ));
extern int getdate_err;
extern struct tm *getdate (__const char *__string);
extern int getdate_r (__const char *__restrict __string,
        struct tm *__restrict __resbufp);



int rpl_nanosleep (struct timespec const *__rqtp, struct timespec *__rmtp);














extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern void *rawmemchr (__const void *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern void *memrchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));

extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *strchrnul (__const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern char *strcasestr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));

extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));





extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ ));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern char *basename (__const char *__filename) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

extern int mbscasecmp (const char *s1, const char *s2);











extern int *__errno_location (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern char *program_invocation_name, *program_invocation_short_name;




typedef int error_t;


enum
{
  EXIT_CANNOT_INVOKE = 126,
  EXIT_ENOENT = 127
};

extern int volatile exit_failure;


static inline void
initialize_exit_failure (int status)
{
  if (status != 1)
    exit_failure = status;
}







struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };




enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;

  unsigned char f_handle[0];
};





extern ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    __attribute__ ((__nothrow__ ));






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);






extern ssize_t vmsplice (int __fdout, const struct iovec *__iov,
    size_t __count, unsigned int __flags);





extern ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
         __off64_t *__offout, size_t __len,
         unsigned int __flags);





extern ssize_t tee (int __fdin, int __fdout, size_t __len,
      unsigned int __flags);






extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) __attribute__ ((__nothrow__ ));





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);









extern int fcntl (int __fd, int __cmd, ...);
extern int open (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
extern int open64 (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
extern int openat (int __fd, __const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
extern int openat64 (int __fd, __const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
extern int creat (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));
extern int creat64 (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));
extern int posix_fadvise (int __fd, __off_t __offset, __off_t __len,
     int __advise) __attribute__ ((__nothrow__ ));
extern int posix_fadvise64 (int __fd, __off64_t __offset, __off64_t __len,
       int __advise) __attribute__ ((__nothrow__ ));
extern int posix_fallocate (int __fd, __off_t __offset, __off_t __len);
extern int posix_fallocate64 (int __fd, __off64_t __offset, __off64_t __len);


struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };


struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
typedef struct __dirstream DIR;






extern DIR *opendir (__const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
extern struct dirent64 *readdir64 (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
extern int readdir64_r (DIR *__restrict __dirp,
   struct dirent64 *__restrict __entry,
   struct dirent64 **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern int scandir (__const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (__const struct dirent *),
      int (*__cmp) (__const struct dirent **,
      __const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
extern int scandir64 (__const char *__restrict __dir,
        struct dirent64 ***__restrict __namelist,
        int (*__selector) (__const struct dirent64 *),
        int (*__cmp) (__const struct dirent64 **,
        __const struct dirent64 **))
     __attribute__ ((__nonnull__ (1, 2)));
extern int scandirat (int __dfd, __const char *__restrict __dir,
        struct dirent ***__restrict __namelist,
        int (*__selector) (__const struct dirent *),
        int (*__cmp) (__const struct dirent **,
        __const struct dirent **))
     __attribute__ ((__nonnull__ (2, 3)));
extern int scandirat64 (int __dfd, __const char *__restrict __dir,
   struct dirent64 ***__restrict __namelist,
   int (*__selector) (__const struct dirent64 *),
   int (*__cmp) (__const struct dirent64 **,
          __const struct dirent64 **))
     __attribute__ ((__nonnull__ (2, 3)));




extern int alphasort (__const struct dirent **__e1,
        __const struct dirent **__e2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int alphasort64 (__const struct dirent64 **__e1,
   __const struct dirent64 **__e2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));
extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
      size_t __nbytes,
      __off64_t *__restrict __basep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));






extern int versionsort (__const struct dirent **__e1,
   __const struct dirent **__e2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int versionsort64 (__const struct dirent64 **__e1,
     __const struct dirent64 **__e2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));








enum
{
  NOT_AN_INODE_NUMBER = 0
};




static inline int
timespec_cmp (struct timespec a, struct timespec b)
{
  return (a.tv_sec < b.tv_sec ? -1
   : a.tv_sec > b.tv_sec ? 1
   : a.tv_nsec - b.tv_nsec);
}

void gettime (struct timespec *);
int settime (struct timespec const *);

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef unsigned long int uintptr_t;
typedef long int intmax_t;
typedef unsigned long int uintmax_t;






typedef int __gwchar_t;





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ ));


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ ));


extern intmax_t wcstoimax (__const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));


extern uintmax_t wcstoumax (__const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));



enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const));






extern int isalnum (int) __attribute__ ((__nothrow__ ));
extern int isalpha (int) __attribute__ ((__nothrow__ ));
extern int iscntrl (int) __attribute__ ((__nothrow__ ));
extern int isdigit (int) __attribute__ ((__nothrow__ ));
extern int islower (int) __attribute__ ((__nothrow__ ));
extern int isgraph (int) __attribute__ ((__nothrow__ ));
extern int isprint (int) __attribute__ ((__nothrow__ ));
extern int ispunct (int) __attribute__ ((__nothrow__ ));
extern int isspace (int) __attribute__ ((__nothrow__ ));
extern int isupper (int) __attribute__ ((__nothrow__ ));
extern int isxdigit (int) __attribute__ ((__nothrow__ ));



extern int tolower (int __c) __attribute__ ((__nothrow__ ));


extern int toupper (int __c) __attribute__ ((__nothrow__ ));








extern int isblank (int) __attribute__ ((__nothrow__ ));






extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__ ));






extern int isascii (int __c) __attribute__ ((__nothrow__ ));



extern int toascii (int __c) __attribute__ ((__nothrow__ ));



extern int _toupper (int) __attribute__ ((__nothrow__ ));
extern int _tolower (int) __attribute__ ((__nothrow__ ));
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ ));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ ));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));

static inline unsigned char to_uchar (char ch) { return ch; }

enum
{
  __LC_CTYPE = 0,
  __LC_NUMERIC = 1,
  __LC_TIME = 2,
  __LC_COLLATE = 3,
  __LC_MONETARY = 4,
  __LC_MESSAGES = 5,
  __LC_ALL = 6,
  __LC_PAPER = 7,
  __LC_NAME = 8,
  __LC_ADDRESS = 9,
  __LC_TELEPHONE = 10,
  __LC_MEASUREMENT = 11,
  __LC_IDENTIFICATION = 12
};





struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
};



extern char *setlocale (int __category, __const char *__locale) __attribute__ ((__nothrow__ ));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ ));


extern __locale_t newlocale (int __category_mask, __const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__ ));
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));











__inline





static const char *
pgettext_aux (const char *domain,
       const char *msg_ctxt_id, const char *msgid,
       int category)
{
  const char *translation = ((void) (category), ((void) (domain), ((const char *) (msg_ctxt_id))));
  if (translation == msg_ctxt_id)
    return msgid;
  else
    return translation;
}


__inline





static const char *
npgettext_aux (const char *domain,
        const char *msg_ctxt_id, const char *msgid,
        const char *msgid_plural, unsigned long int n,
        int category)
{
  const char *translation =
    ((void) (category), ((void) (domain), ((n) == 1 ? ((void) (msgid_plural), (const char *) (msg_ctxt_id)) : ((void) (msg_ctxt_id), (const char *) (msgid_plural)))));
  if (translation == msg_ctxt_id || translation == msgid_plural)
    return (n == 1 ? msgid : msgid_plural);
  else
    return translation;
}





__inline





static const char *
dcpgettext_expr (const char *domain,
   const char *msgctxt, const char *msgid,
   int category)
{
  size_t msgctxt_len = strlen (msgctxt) + 1;
  size_t msgid_len = strlen (msgid) + 1;
  const char *translation;

  char msg_ctxt_id[msgctxt_len + msgid_len];
    {
      memcpy (msg_ctxt_id, msgctxt, msgctxt_len - 1);
      msg_ctxt_id[msgctxt_len - 1] = '\004';
      memcpy (msg_ctxt_id + msgctxt_len, msgid, msgid_len);
      translation = ((void) (category), ((void) (domain), ((const char *) (msg_ctxt_id))));




      if (translation != msg_ctxt_id)
 return translation;
    }
  return msgid;
}







__inline





static const char *
dcnpgettext_expr (const char *domain,
    const char *msgctxt, const char *msgid,
    const char *msgid_plural, unsigned long int n,
    int category)
{
  size_t msgctxt_len = strlen (msgctxt) + 1;
  size_t msgid_len = strlen (msgid) + 1;
  const char *translation;

  char msg_ctxt_id[msgctxt_len + msgid_len];
    {
      memcpy (msg_ctxt_id, msgctxt, msgctxt_len - 1);
      msg_ctxt_id[msgctxt_len - 1] = '\004';
      memcpy (msg_ctxt_id + msgctxt_len, msgid, msgid_len);
      translation = ((void) (category), ((void) (domain), ((n) == 1 ? ((void) (msgid_plural), (const char *) (msg_ctxt_id)) : ((void) (msg_ctxt_id), (const char *) (msgid_plural)))));




      if (!(translation == msg_ctxt_id || translation == msgid_plural))
 return translation;
    }
  return (n == 1 ? msgid : msgid_plural);
}
static inline unsigned long int
select_plural (uintmax_t n)
{


  enum { PLURAL_REDUCER = 1000000 };
  return (n <= (9223372036854775807L * 2UL + 1UL) ? n : n % PLURAL_REDUCER + PLURAL_REDUCER);
}
extern void xalloc_die (void) __attribute__ ((__noreturn__));

void *xmalloc (size_t s);
void *xzalloc (size_t s);
void *xcalloc (size_t n, size_t s);
void *xrealloc (void *p, size_t s);
void *x2realloc (void *p, size_t *pn);
void *xmemdup (void const *p, size_t s);
char *xstrdup (char const *str);
   void *xnmalloc (size_t n, size_t s);
   void *xnrealloc (void *p, size_t n, size_t s);
   void *x2nrealloc (void *p, size_t *pn, size_t s);
   char *xcharalloc (size_t n);

char *base_name (char const *file);
char *dir_name (char const *file);
size_t base_len (char const *file);
size_t dir_len (char const *file);
char *last_component (char const *file);

_Bool strip_trailing_slashes (char *file);

int mkdirat (int fd, char const *file, mode_t mode);
void openat_restore_fail (int) __attribute__ ((__noreturn__));
void openat_save_fail (int) __attribute__ ((__noreturn__));
int fchmodat (int fd, char const *file, mode_t mode, int flag);
int fchownat (int fd, char const *file, uid_t owner, gid_t group, int flag);




static inline int
chownat (int fd, char const *file, uid_t owner, gid_t group)
{
  return fchownat (fd, file, owner, group, 0);
}

static inline int
lchownat (int fd, char const *file, uid_t owner, gid_t group)
{
  return fchownat (fd, file, owner, group, 0x100);
}

static inline int
chmodat (int fd, char const *file, mode_t mode)
{
  return fchmodat (fd, file, mode, 0);
}

static inline int
lchmodat (int fd, char const *file, mode_t mode)
{
  return fchmodat (fd, file, mode, 0x100);
}

static inline _Bool
dot_or_dotdot (char const *file_name)
{
  if (file_name[0] == '.')
    {
      char sep = file_name[(file_name[1] == '.') + 1];
      return (! sep || ((sep) == '/'));
    }
  else
    return 0;
}


static inline struct dirent const *
readdir_ignoring_dot_and_dotdot (DIR *dirp)
{
  while (1)
    {
      struct dirent const *dp = readdir (dirp);
      if (dp == ((void *)0) || ! dot_or_dotdot (dp->d_name))
 return dp;
    }
}


static inline _Bool
is_empty_dir (int fd_cwd, char const *dir)
{
  DIR *dirp;
  struct dirent const *dp;
  int saved_errno;
  int fd = openat (fd_cwd, dir,
     (00 | 0200000
      | 0400 | 0400000 | 04000));

  if (fd < 0)
    return 0;

  dirp = fdopendir (fd);
  if (dirp == ((void *)0))
    {
      close (fd);
      return 0;
    }

  (*__errno_location ()) = 0;
  dp = readdir_ignoring_dot_and_dotdot (dirp);
  saved_errno = (*__errno_location ());
  closedir (dirp);
  if (dp != ((void *)0))
    return 0;
  return saved_errno == 0 ? 1 : 0;
}






enum
{
  GETOPT_HELP_CHAR = ((-127 - 1) - 2),
  GETOPT_VERSION_CHAR = ((-127 - 1) - 3)
};
void close_stdin_set_file_name (const char *file);
void close_stdin (void);
void close_stdout_set_file_name (const char *file);
void close_stdout (void);

extern const char version_etc_copyright[];

extern void version_etc_va (FILE *stream,
       const char *command_name, const char *package,
       const char *version, va_list authors);

extern void version_etc (FILE *stream,
    const char *command_name, const char *package,
    const char *version,
                                         ...);
static inline size_t
gcd (size_t u, size_t v)
{
  do
    {
      size_t t = u % v;
      u = v;
      v = t;
    }
  while (v);

  return u;
}





static inline size_t
lcm (size_t u, size_t v)
{
  return u * (v / gcd (u, v));
}






static inline void *
ptr_align (void const *ptr, size_t alignment)
{
  char const *p0 = ptr;
  char const *p1 = p0 + alignment - 1;
  return (void *) (p1 - (size_t) p1 % alignment);
}
static inline void
emit_bug_reporting_address (void)
{




  printf (((const char *) ("\nReport bugs to <%s>.\n")), "bug-coreutils@gnu.org");
}





struct dev_ino
{
  ino_t st_ino;
  dev_t st_dev;
};

struct cycle_check_state
{
  struct dev_ino dev_ino;
  uintmax_t chdir_counter;
  int magic;
};

void cycle_check_init (struct cycle_check_state *state);
_Bool cycle_check (struct cycle_check_state *state, struct stat const *sb);
extern void error (int __status, int __errnum, const char *__format, ...)
     __attribute__ ((__format__ (__printf__, 3, 4)));

extern void error_at_line (int __status, int __errnum, const char *__fname,
      unsigned int __lineno, const char *__format, ...)
     __attribute__ ((__format__ (__printf__, 5, 6)));




extern void (*error_print_progname) (void);


extern unsigned int error_message_count;



extern int error_one_per_line;



_Bool euidaccess_stat (struct stat const *st, int mode);

char const *file_type (struct stat const *);


typedef size_t (*Hash_hasher) (const void *, size_t);
typedef _Bool (*Hash_comparator) (const void *, const void *);
typedef void (*Hash_data_freer) (void *);
typedef _Bool (*Hash_processor) (void *, void *);

struct hash_entry
  {
    void *data;
    struct hash_entry *next;
  };

struct hash_tuning
  {



    float shrink_threshold;
    float shrink_factor;
    float growth_threshold;
    float growth_factor;
    _Bool is_n_buckets;
  };

typedef struct hash_tuning Hash_tuning;

struct hash_table;

typedef struct hash_table Hash_table;


size_t hash_get_n_buckets (const Hash_table *);
size_t hash_get_n_buckets_used (const Hash_table *);
size_t hash_get_n_entries (const Hash_table *);
size_t hash_get_max_bucket_length (const Hash_table *);
_Bool hash_table_ok (const Hash_table *);
void hash_print_statistics (const Hash_table *, FILE *);
void *hash_lookup (const Hash_table *, const void *);


void *hash_get_first (const Hash_table *);
void *hash_get_next (const Hash_table *, const void *);
size_t hash_get_entries (const Hash_table *, void **, size_t);
size_t hash_do_for_each (const Hash_table *, Hash_processor, void *);


size_t hash_string (const char *, size_t);
void hash_reset_tuning (Hash_tuning *);
Hash_table *hash_initialize (size_t, const Hash_tuning *,
        Hash_hasher, Hash_comparator,
        Hash_data_freer);
void hash_clear (Hash_table *);
void hash_free (Hash_table *);


_Bool hash_rehash (Hash_table *, size_t);
void *hash_insert (Hash_table *, const void *);
void *hash_delete (Hash_table *, const void *);





extern size_t hash_pjw (void const *x, size_t tablesize);

struct _obstack_chunk
{
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};

struct obstack
{
  long chunk_size;
  struct _obstack_chunk *chunk;
  char *object_base;
  char *next_free;
  char *chunk_limit;
  union
  {
    long int tempint;
    void *tempptr;
  } temp;
  int alignment_mask;



  struct _obstack_chunk *(*chunkfun) (void *, long);
  void (*freefun) (void *, struct _obstack_chunk *);
  void *extra_arg;
  unsigned use_extra_arg:1;
  unsigned maybe_empty_object:1;



  unsigned alloc_failed:1;


};



extern void _obstack_newchunk (struct obstack *, int);
extern int _obstack_begin (struct obstack *, int, int,
       void *(*) (long), void (*) (void *));
extern int _obstack_begin_1 (struct obstack *, int, int,
        void *(*) (void *, long),
        void (*) (void *, void *), void *);
extern int _obstack_memory_used (struct obstack *);






extern void obstack_free (struct obstack *obstack, void *block);






extern void (*obstack_alloc_failed_handler) (void);


extern int obstack_exit_failure;
char const *quote_n (int n, char const *name);
char const *quote (char const *name);

enum rm_interactive
{


  RMI_ALWAYS = 3,
  RMI_SOMETIMES,
  RMI_NEVER
};

struct rm_options
{

  _Bool ignore_missing_files;


  enum rm_interactive interactive;







  _Bool one_file_system;


  _Bool recursive;



  struct dev_ino *root_dev_ino;


  _Bool stdin_tty;


  _Bool verbose;







  _Bool require_restore_cwd;
};

enum RM_status
{

  RM_OK = 2,
  RM_USER_DECLINED,
  RM_ERROR,
  RM_NONEMPTY_DIR
};
enum RM_status rm (size_t n_files, char const *const *file,
     struct rm_options const *x);
struct dev_ino *
get_root_dev_ino (struct dev_ino *root_d_i);

_Bool can_write_any_file (void);
_Bool yesno (void);
enum
  {
    CONSECUTIVE_READDIR_UNLINK_THRESHOLD = 10
  };







enum Ternary
  {
    T_UNKNOWN = 2,
    T_NO,
    T_YES
  };
typedef enum Ternary Ternary;




enum Prompt_action
  {
    PA_DESCEND_INTO_DIR = 2,
    PA_REMOVE_DIR
  };



enum { HT_UNREMOVABLE_INITIAL_CAPACITY = 13 };



struct AD_ent
{




  Hash_table *unremovable;




  enum RM_status status;




  struct dev_ino dev_ino;
};
extern char *program_name;

struct dirstack_state
{





  struct obstack dir_stack;





  struct obstack len_stack;






  struct obstack Active_dir;


  struct cycle_check_state cycle_check_state;






  jmp_buf current_arg_jumpbuf;
};
typedef struct dirstack_state Dirstack_state;



static char *g_buf;
static size_t g_n_allocated;





static int
cache_fstatat (int fd, char const *file, struct stat *st, int flag)
{
  if (st->st_size == -1 && fstatat (fd, file, st, flag) != 0)
    {
      st->st_size = -2;
      st->st_ino = (*__errno_location ());
    }
  if (0 <= st->st_size)
    return 0;
  (*__errno_location ()) = (int) st->st_ino;
  return -1;
}


static inline struct stat *
cache_stat_init (struct stat *st)
{
  st->st_size = -1;
  return st;
}


static inline _Bool
cache_statted (struct stat *st)
{
  return (st->st_size != -1);
}


static inline _Bool
cache_stat_ok (struct stat *st)
{
  return (0 <= st->st_size);
}


static void
hash_freer (void *x)
{
  free (x);
}

static _Bool
hash_compare_strings (void const *x, void const *y)
{
  return (strcmp (x, y) == 0) ? 1 : 0;
}

static inline void
push_dir (Dirstack_state *ds, const char *rm_dir_name)
{
  size_t len = strlen (rm_dir_name);


  while (1 < len && rm_dir_name[len - 1] == '/')
    --len;


  __extension__ ({ struct obstack *__o = (&ds->dir_stack); int __len = (len); if (__o->next_free + __len > __o->chunk_limit) _obstack_newchunk (__o, __len); memcpy (__o->next_free, rm_dir_name, __len); __o->next_free += __len; (void) 0; });


  __extension__ ({ struct obstack *__o = (&ds->dir_stack); if (__o->next_free + 1 > __o->chunk_limit) _obstack_newchunk (__o, 1); (*((__o)->next_free)++ = ('/')); (void) 0; });


  ++len;


  __extension__ ({ struct obstack *__o = (&ds->len_stack); int __len = (sizeof (len)); if (__o->next_free + __len > __o->chunk_limit) _obstack_newchunk (__o, __len); memcpy (__o->next_free, &len, __len); __o->next_free += __len; (void) 0; });
}



static inline char *
top_dir (Dirstack_state const *ds)
{
  size_t n_lengths = __extension__ ({ struct obstack const *__o = (&ds->len_stack); (unsigned) (__o->next_free - __o->object_base); }) / sizeof (size_t);
  size_t *length = ((void *) (&ds->len_stack)->object_base);
  size_t top_len = length[n_lengths - 1];
  char const *p = ((&ds->dir_stack)->next_free) - top_len;
  char *q = xmalloc (top_len);
  memcpy (q, p, top_len - 1);
  q[top_len - 1] = 0;
  return q;
}

static inline void
pop_dir (Dirstack_state *ds)
{
  size_t n_lengths = __extension__ ({ struct obstack const *__o = (&ds->len_stack); (unsigned) (__o->next_free - __o->object_base); }) / sizeof (size_t);
  size_t *length = ((void *) (&ds->len_stack)->object_base);

  ((n_lengths > 0) ? (void) (0) : __assert_fail ("n_lengths > 0", "../../../subject/coreutils-6.11/src/remove.c", 268, __PRETTY_FUNCTION__));
  size_t top_len = length[n_lengths - 1];
  ((top_len >= 2) ? (void) (0) : __assert_fail ("top_len >= 2", "../../../subject/coreutils-6.11/src/remove.c", 270, __PRETTY_FUNCTION__));


  ((__extension__ ({ struct obstack const *__o = (&ds->dir_stack); (unsigned) (__o->next_free - __o->object_base); }) >= top_len) ? (void) (0) : __assert_fail ("__extension__ ({ struct obstack const *__o = (&ds->dir_stack); (unsigned) (__o->next_free - __o->object_base); }) >= top_len", "../../../subject/coreutils-6.11/src/remove.c", 273, __PRETTY_FUNCTION__));
  __extension__ ({ struct obstack *__o = (&ds->dir_stack); int __len = (-top_len); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; });


  ((__extension__ ({ struct obstack const *__o = (&ds->len_stack); (unsigned) (__o->next_free - __o->object_base); }) >= sizeof (size_t)) ? (void) (0) : __assert_fail ("__extension__ ({ struct obstack const *__o = (&ds->len_stack); (unsigned) (__o->next_free - __o->object_base); }) >= sizeof (size_t)", "../../../subject/coreutils-6.11/src/remove.c", 277, __PRETTY_FUNCTION__));
  __extension__ ({ struct obstack *__o = (&ds->len_stack); int __len = (-(int) sizeof (size_t)); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; });
}







static size_t
right_justify (char *dst, size_t dst_len, const char *src, size_t src_len,
        char **result, _Bool *truncated)
{
  const char *sp;
  char *dp;

  if (src_len <= dst_len)
    {
      sp = src;
      dp = dst + (dst_len - src_len);
      *truncated = 0;
    }
  else
    {
      sp = src + (src_len - dst_len);
      dp = dst;
      src_len = dst_len;
      *truncated = 1;
    }

  *result = memcpy (dp, sp, src_len);
  return dst_len - src_len;
}





static char *
full_filename0 (Dirstack_state const *ds, const char *filename)
{
  size_t rm_dir_len = __extension__ ({ struct obstack const *__o = (&ds->dir_stack); (unsigned) (__o->next_free - __o->object_base); });
  char *rm_dir_name = ((void *) (&ds->dir_stack)->object_base);
  size_t filename_len = strlen (filename);
  size_t n_bytes_needed = rm_dir_len + filename_len + 1;

  if (g_n_allocated < n_bytes_needed)
    {
      char *new_buf = realloc (g_buf, n_bytes_needed);
      if (new_buf == ((void *)0))
 return ((void *)0);

      g_buf = new_buf;
      g_n_allocated = n_bytes_needed;
    }

  if ((strcmp (filename, ".") == 0) && rm_dir_len)
    {



      char *p = mempcpy (g_buf, rm_dir_name, rm_dir_len - 1);
      *p = 0;
    }
  else
    {


      memcpy (mempcpy (g_buf, rm_dir_name, rm_dir_len), filename, filename_len + 1);
      ((strlen (g_buf) + 1 == n_bytes_needed) ? (void) (0) : __assert_fail ("strlen (g_buf) + 1 == n_bytes_needed", "../../../subject/coreutils-6.11/src/remove.c", 347, __PRETTY_FUNCTION__));
    }

  return g_buf;
}





static char *
xfull_filename (Dirstack_state const *ds, const char *filename)
{
  char *buf = full_filename0 (ds, filename);
  if (buf == ((void *)0))
    xalloc_die ();
  return buf;
}
static char *
full_filename_ (Dirstack_state const *ds, const char *filename)
{
  int saved_errno = (*__errno_location ());
  char *full_name = full_filename0 (ds, filename);
  if (full_name)
    {
      (*__errno_location ()) = saved_errno;
      return full_name;
    }

  {


    static char static_buf[512];
    _Bool file_truncated;
    _Bool dir_truncated;
    size_t n_bytes_remaining;
    char *p;
    char *rm_dir_name = ((void *) (&ds->dir_stack)->object_base);
    size_t rm_dir_len = __extension__ ({ struct obstack const *__o = (&ds->dir_stack); (unsigned) (__o->next_free - __o->object_base); });

    free (g_buf);
    n_bytes_remaining = right_justify (static_buf, 512, filename,
           strlen (filename) + 1, &p,
           &file_truncated);
    right_justify (static_buf, n_bytes_remaining, rm_dir_name, rm_dir_len,
     &p, &dir_truncated);
    if (file_truncated || dir_truncated)
      {
 memcpy (static_buf, "[...]",
  sizeof ("[...]") - 1);
      }
    (*__errno_location ()) = saved_errno;
    return p;
  }
}

static inline size_t
AD_stack_height (Dirstack_state const *ds)
{
  return __extension__ ({ struct obstack const *__o = (&ds->Active_dir); (unsigned) (__o->next_free - __o->object_base); }) / sizeof (struct AD_ent);
}

static inline struct AD_ent *
AD_stack_top (Dirstack_state const *ds)
{
  return (struct AD_ent *)
    ((char *) ((&ds->Active_dir)->next_free) - sizeof (struct AD_ent));
}

static void
AD_stack_pop (Dirstack_state *ds)
{
  ((0 < AD_stack_height (ds)) ? (void) (0) : __assert_fail ("0 < AD_stack_height (ds)", "../../../subject/coreutils-6.11/src/remove.c", 427, __PRETTY_FUNCTION__));


  struct AD_ent *top = AD_stack_top (ds);
  if (top->unremovable)
    hash_free (top->unremovable);
  __extension__ ({ struct obstack *__o = (&ds->Active_dir); int __len = (-(int) sizeof (struct AD_ent)); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; });
}

static void
AD_stack_clear (Dirstack_state *ds)
{
  while (0 < AD_stack_height (ds))
    {
      AD_stack_pop (ds);
    }
}

static Dirstack_state *
ds_init (void)
{
  Dirstack_state *ds = xmalloc (sizeof *ds);
  _obstack_begin ((&ds->dir_stack), 0, 0, (void *(*) (long)) malloc, (void (*) (void *)) free);
  _obstack_begin ((&ds->len_stack), 0, 0, (void *(*) (long)) malloc, (void (*) (void *)) free);
  _obstack_begin ((&ds->Active_dir), 0, 0, (void *(*) (long)) malloc, (void (*) (void *)) free);
  return ds;
}

static void
ds_clear (Dirstack_state *ds)
{
  __extension__ ({ struct obstack *__o = (&ds->dir_stack); void *__obj = (__extension__ ({ struct obstack *__o1 = (&ds->dir_stack); void *__value = (void *) __o1->object_base; if (__o1->next_free == __value) __o1->maybe_empty_object = 1; __o1->next_free = ((sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (((__o1->next_free) - (sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (__o1->alignment_mask)) & ~(__o1->alignment_mask))); if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) __o1->next_free = __o1->chunk_limit; __o1->object_base = __o1->next_free; __value; })); if (__obj > (void *)__o->chunk && __obj < (void *)__o->chunk_limit) __o->next_free = __o->object_base = (char *)__obj; else (obstack_free) (__o, __obj); });
  __extension__ ({ struct obstack *__o = (&ds->len_stack); void *__obj = (__extension__ ({ struct obstack *__o1 = (&ds->len_stack); void *__value = (void *) __o1->object_base; if (__o1->next_free == __value) __o1->maybe_empty_object = 1; __o1->next_free = ((sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (((__o1->next_free) - (sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (__o1->alignment_mask)) & ~(__o1->alignment_mask))); if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) __o1->next_free = __o1->chunk_limit; __o1->object_base = __o1->next_free; __value; })); if (__obj > (void *)__o->chunk && __obj < (void *)__o->chunk_limit) __o->next_free = __o->object_base = (char *)__obj; else (obstack_free) (__o, __obj); });
  while (0 < AD_stack_height (ds))
    AD_stack_pop (ds);
  __extension__ ({ struct obstack *__o = (&ds->Active_dir); void *__obj = (__extension__ ({ struct obstack *__o1 = (&ds->Active_dir); void *__value = (void *) __o1->object_base; if (__o1->next_free == __value) __o1->maybe_empty_object = 1; __o1->next_free = ((sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (((__o1->next_free) - (sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (__o1->alignment_mask)) & ~(__o1->alignment_mask))); if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) __o1->next_free = __o1->chunk_limit; __o1->object_base = __o1->next_free; __value; })); if (__obj > (void *)__o->chunk && __obj < (void *)__o->chunk_limit) __o->next_free = __o->object_base = (char *)__obj; else (obstack_free) (__o, __obj); });
}

static void
ds_free (Dirstack_state *ds)
{
  __extension__ ({ struct obstack *__o = (&ds->dir_stack); void *__obj = (((void *)0)); if (__obj > (void *)__o->chunk && __obj < (void *)__o->chunk_limit) __o->next_free = __o->object_base = (char *)__obj; else (obstack_free) (__o, __obj); });
  __extension__ ({ struct obstack *__o = (&ds->len_stack); void *__obj = (((void *)0)); if (__obj > (void *)__o->chunk && __obj < (void *)__o->chunk_limit) __o->next_free = __o->object_base = (char *)__obj; else (obstack_free) (__o, __obj); });
  __extension__ ({ struct obstack *__o = (&ds->Active_dir); void *__obj = (((void *)0)); if (__obj > (void *)__o->chunk && __obj < (void *)__o->chunk_limit) __o->next_free = __o->object_base = (char *)__obj; else (obstack_free) (__o, __obj); });
  free (ds);
}
static char *
AD_pop_and_chdir (DIR *dirp, int *fdp, Dirstack_state *ds)
{
  struct AD_ent *leaf_dir_ent = AD_stack_top(ds);
  struct dev_ino leaf_dev_ino = leaf_dir_ent->dev_ino;
  enum RM_status old_status = leaf_dir_ent->status;
  struct AD_ent *top;



  char *prev_dir = top_dir (ds);

  AD_stack_pop (ds);
  pop_dir (ds);
  top = AD_stack_top (ds);
  do { if ((&ds->cycle_check_state)->chdir_counter == 0) abort (); if ((((&ds->cycle_check_state)->dev_ino).st_ino == (leaf_dev_ino).st_ino && ((&ds->cycle_check_state)->dev_ino).st_dev == (leaf_dev_ino).st_dev)) { (&ds->cycle_check_state)->dev_ino.st_dev = (top->dev_ino).st_dev; (&ds->cycle_check_state)->dev_ino.st_ino = (top->dev_ino).st_ino; } } while (0);



  do { if ((old_status) == RM_ERROR || ((old_status) == RM_USER_DECLINED && (top->status) == RM_OK)) (top->status) = (old_status); } while (0);

  ((AD_stack_height (ds)) ? (void) (0) : __assert_fail ("AD_stack_height (ds)", "../../../subject/coreutils-6.11/src/remove.c", 527, __PRETTY_FUNCTION__));

  if (1 < AD_stack_height (ds))
    {
      struct stat sb;
      int fd = openat (dirfd (dirp), "..", 00);
      if (closedir (dirp) != 0)
 {
   error (0, (*__errno_location ()), ((const char *) ("FATAL: failed to close directory %s")),
   quote (full_filename_ (ds, prev_dir)));
   goto next_cmdline_arg;
 }




      if (fd < 0)
 fd = openat (-100, xfull_filename (ds, "."), 00);

      if (fd < 0)
 {
   error (0, (*__errno_location ()), ((const char *) ("FATAL: cannot open .. from %s")),
   quote (full_filename_ (ds, prev_dir)));
   goto next_cmdline_arg;
 }

      if (fstat (fd, &sb))
 {
   error (0, (*__errno_location ()),
   ((const char *) ("FATAL: cannot ensure %s (returned to via ..) is safe")),
   quote (full_filename_ (ds, ".")));
   goto close_and_next;
 }


      if ( ! ((sb).st_ino == (top->dev_ino).st_ino && (sb).st_dev == (top->dev_ino).st_dev))
 {
   error (0, 0, ((const char *) ("FATAL: directory %s changed dev/ino")),
   quote (full_filename_ (ds, ".")));
 close_and_next:;
   close (fd);

 next_cmdline_arg:;
   free (prev_dir);
   longjmp (ds->current_arg_jumpbuf, 1);
 }
      *fdp = fd;
    }
  else
    {
      if (closedir (dirp) != 0)
 {
   error (0, (*__errno_location ()), ((const char *) ("FATAL: failed to close directory %s")),
   quote (full_filename_ (ds, prev_dir)));
   goto next_cmdline_arg;
 }
      *fdp = -100;
    }

  return prev_dir;
}


static Hash_table *
AD_ensure_initialized (Hash_table **ht)
{
  if (*ht == ((void *)0))
    {
      *ht = hash_initialize (HT_UNREMOVABLE_INITIAL_CAPACITY, ((void *)0), hash_pjw,
        hash_compare_strings, hash_freer);
      if (*ht == ((void *)0))
 xalloc_die ();
    }

  return *ht;
}



static void
AD_mark_helper (Hash_table **ht, char *filename)
{
  void *ent = hash_insert (AD_ensure_initialized (ht), filename);
  if (ent == ((void *)0))
    xalloc_die ();
  else
    {
      if (ent != filename)
 free (filename);
    }
}


static void
AD_mark_as_unremovable (Dirstack_state *ds, char const *filename)
{
  AD_mark_helper (&AD_stack_top(ds)->unremovable, xstrdup (filename));
}





static void
AD_mark_current_as_unremovable (Dirstack_state *ds)
{
  struct AD_ent *top = AD_stack_top (ds);
  char *curr = top_dir (ds);

  ((1 < AD_stack_height (ds)) ? (void) (0) : __assert_fail ("1 < AD_stack_height (ds)", "../../../subject/coreutils-6.11/src/remove.c", 636, __PRETTY_FUNCTION__));

  --top;
  AD_mark_helper (&top->unremovable, curr);
}



static void
AD_push_initial (Dirstack_state *ds)
{
  struct AD_ent *top;


  __extension__ ({ struct obstack *__o = (&ds->Active_dir); int __len = (sizeof (struct AD_ent)); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; });


  top = AD_stack_top (ds);
  top->unremovable = ((void *)0);




  top->dev_ino.st_dev = ((dev_t) (! (! ((dev_t) 0 < (dev_t) -1)) ? (dev_t) -1 : ~ (~ (dev_t) 0 << (sizeof (dev_t) * 8 - 1))));
  top->dev_ino.st_ino = ((ino_t) (! (! ((ino_t) 0 < (ino_t) -1)) ? (ino_t) -1 : ~ (~ (ino_t) 0 << (sizeof (ino_t) * 8 - 1))));
}
static void
AD_push (int fd_cwd, Dirstack_state *ds, char const *dir,
  struct stat const *dir_sb_from_parent)
{
  struct AD_ent *top;

  push_dir (ds, dir);



  if (! 1)
    {
      struct stat sb;
      if (fstat (fd_cwd, &sb) != 0)
 {
   error (0, (*__errno_location ()), ((const char *) ("FATAL: cannot enter directory %s")),
   quote (full_filename_ (ds, ".")));
   longjmp (ds->current_arg_jumpbuf, 1);
 }

      if ( ! ((sb).st_ino == (*dir_sb_from_parent).st_ino && (sb).st_dev == (*dir_sb_from_parent).st_dev))
 {
   error (0, 0,
   ((const char *) ("FATAL: just-changed-to directory %s changed dev/ino")),
   quote (full_filename_ (ds, ".")));
   longjmp (ds->current_arg_jumpbuf, 1);
 }
    }

  if (cycle_check (&ds->cycle_check_state, dir_sb_from_parent))
    {
      error (0, 0, ((const char *) ("WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n")),




      quote (full_filename_ (ds, ".")));
      longjmp (ds->current_arg_jumpbuf, 1);
    }


  __extension__ ({ struct obstack *__o = (&ds->Active_dir); int __len = (sizeof (struct AD_ent)); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; });


  ((AD_stack_height (ds) == 1 + __extension__ ({ struct obstack const *__o = (&ds->len_stack); (unsigned) (__o->next_free - __o->object_base); }) / sizeof (size_t)) ? (void) (0) : __assert_fail ("AD_stack_height (ds) == 1 + __extension__ ({ struct obstack const *__o = (&ds->len_stack); (unsigned) (__o->next_free - __o->object_base); }) / sizeof (size_t)", "../../../subject/coreutils-6.11/src/remove.c", 715, __PRETTY_FUNCTION__));



  top = AD_stack_top (ds);
  top->dev_ino.st_dev = dir_sb_from_parent->st_dev;
  top->dev_ino.st_ino = dir_sb_from_parent->st_ino;
  top->unremovable = ((void *)0);
}

static inline _Bool
AD_is_removable (Dirstack_state const *ds, char const *file)
{
  struct AD_ent *top = AD_stack_top (ds);
  return ! (top->unremovable && hash_lookup (top->unremovable, file));
}






static int
write_protected_non_symlink (int fd_cwd,
        char const *file,
        Dirstack_state const *ds,
        struct stat *buf)
{
  if (can_write_any_file ())
    return 0;
  if (cache_fstatat (fd_cwd, file, buf, 0x100) != 0)
    return -1;
  if (((((buf->st_mode)) & 0170000) == (0120000)))
    return 0;
  {

    size_t file_name_len
      = __extension__ ({ struct obstack const *__o = (&ds->dir_stack); (unsigned) (__o->next_free - __o->object_base); }) + strlen (file);

    if ((((4096)<(8192))?(4096):(8192)) <= file_name_len)
      return ! euidaccess_stat (buf, 2);
    if (euidaccess (xfull_filename (ds, file), 2) == 0)
      return 0;
    if ((*__errno_location ()) == 13)
      {
 (*__errno_location ()) = 0;
 return 1;
      }



    return -1;
  }
}
static enum RM_status
prompt (int fd_cwd, Dirstack_state const *ds, char const *filename,
 int *pdirent_type, struct stat *sbuf,
 struct rm_options const *x, enum Prompt_action mode,
 Ternary *is_empty)
{
  int write_protected = 0;
  int dirent_type = *pdirent_type;

  *is_empty = T_UNKNOWN;

  if (x->interactive == RMI_NEVER)
    return RM_OK;

  int wp_errno = 0;

  if (!x->ignore_missing_files
      && ((x->interactive == RMI_ALWAYS) || x->stdin_tty)
      && dirent_type != DT_LNK)
    {
      write_protected = write_protected_non_symlink (fd_cwd, filename, ds, sbuf);
      wp_errno = (*__errno_location ());
    }

  if (write_protected || x->interactive == RMI_ALWAYS)
    {
      if (0 <= write_protected && dirent_type == DT_UNKNOWN)
 {
   if (cache_fstatat (fd_cwd, filename, sbuf, 0x100) == 0)
     {
       if (((((sbuf->st_mode)) & 0170000) == (0120000)))
  dirent_type = DT_LNK;
       else if (((((sbuf->st_mode)) & 0170000) == (0040000)))
  dirent_type = DT_DIR;

       *pdirent_type = dirent_type;
     }
   else
     {

       write_protected = -1;
       wp_errno = (*__errno_location ());
     }
 }

      if (0 <= write_protected)
 switch (dirent_type)
   {
   case DT_LNK:

     if (x->interactive != RMI_ALWAYS)
       return RM_OK;
     break;

   case DT_DIR:
     if (!x->recursive)
       {
  write_protected = -1;
  wp_errno = 21;
       }
     break;
   }

      char const *quoted_name = quote (full_filename_ (ds, filename));

      if (write_protected < 0)
 {
   error (0, wp_errno, ((const char *) ("cannot remove %s")), quoted_name);
   return RM_ERROR;
 }





      if (dirent_type == DT_DIR
   && mode == PA_DESCEND_INTO_DIR
   && ((*is_empty = (is_empty_dir (fd_cwd, filename) ? T_YES : T_NO))
       == T_NO))
 fprintf (stderr,
   (write_protected
    ? ((const char *) ("%s: descend into write-protected directory %s? "))
    : ((const char *) ("%s: descend into directory %s? "))),
   program_name, quoted_name);
      else
 {
   if (cache_fstatat (fd_cwd, filename, sbuf, 0x100) != 0)
     {
       error (0, (*__errno_location ()), ((const char *) ("cannot remove %s")), quoted_name);
       return RM_ERROR;
     }





   fprintf (stderr,
     (write_protected
      ? ((const char *) ("%s: remove write-protected %s %s? "))
      : ((const char *) ("%s: remove %s %s? "))),
     program_name, file_type (sbuf), quoted_name);
 }

      if (!yesno ())
 return RM_USER_DECLINED;
    }
  return RM_OK;
}





static inline _Bool
is_dir_lstat (int fd_cwd, char const *filename, struct stat *st)
{
  int saved_errno = (*__errno_location ());
  _Bool is_dir =
    (cache_fstatat (fd_cwd, filename, st, 0x100) == 0
     && ((((st->st_mode)) & 0170000) == (0040000)));
  (*__errno_location ()) = saved_errno;
  return is_dir;
}





static inline _Bool
is_nondir_lstat (int fd_cwd, char const *filename, struct stat *st)
{
  int saved_errno = (*__errno_location ());
  _Bool is_non_dir =
    (cache_fstatat (fd_cwd, filename, st, 0x100) == 0
     && !((((st->st_mode)) & 0170000) == (0040000)));
  (*__errno_location ()) = saved_errno;
  return is_non_dir;
}
static inline _Bool
nonexistent_file_errno (int errnum)
{






  switch (errnum)
    {
    case 2:
    case 20:
      return 1;
    default:
      return 0;
    }
}


static inline _Bool
ignorable_missing (struct rm_options const *x, int errnum)
{
  return x->ignore_missing_files && nonexistent_file_errno (errnum);
}





static enum RM_status
remove_entry (int fd_cwd, Dirstack_state const *ds, char const *filename,
       int dirent_type_arg, struct stat *st,
       struct rm_options const *x)
{
  Ternary is_empty_directory;
  enum RM_status s = prompt (fd_cwd, ds, filename, &dirent_type_arg, st, x,
        PA_DESCEND_INTO_DIR,
        &is_empty_directory);
  int dirent_type = dirent_type_arg;
  if (s != RM_OK)
    return s;
  if (1)
    {
      if (dirent_type == DT_DIR && ! x->recursive)
 {
   error (0, 21, ((const char *) ("cannot remove %s")),
   quote (full_filename_ (ds, filename)));
   return RM_ERROR;
 }





      if (is_empty_directory == T_YES)
 do { if (unlinkat (fd_cwd, filename, 0x200) == 0) { if ((x)->verbose) printf (((const char *) ("removed directory: %s\n")), quote (full_filename_ (ds, filename))); return RM_OK; } if (ignorable_missing (x, (*__errno_location ()))) return RM_OK; if ((*__errno_location ()) == 39 || (*__errno_location ()) == 17) return RM_NONEMPTY_DIR; } while (0);







      if (dirent_type == DT_DIR)
 return RM_NONEMPTY_DIR;

      do { if (unlinkat (fd_cwd, filename, 0) == 0) { if ((x)->verbose) printf (((const char *) ("removed %s\n")), quote (full_filename_ (ds, filename))); return RM_OK; } if (ignorable_missing (x, (*__errno_location ()))) return RM_OK; } while (0);




      if (! x->recursive && (*__errno_location ()) == 1 && is_dir_lstat (fd_cwd,
           filename, st))
 (*__errno_location ()) = 21;

      if (! x->recursive
   || (cache_stat_ok (st) && !((((st->st_mode)) & 0170000) == (0040000)))
   || (((*__errno_location ()) == 13 || (*__errno_location ()) == 1)
       && is_nondir_lstat (fd_cwd, filename, st))
   )
 {
   if (ignorable_missing (x, (*__errno_location ())))
     return RM_OK;



   error (0, (*__errno_location ()), ((const char *) ("cannot remove %s")),
   quote (full_filename_ (ds, filename)));
   return RM_ERROR;
 }
      ((!cache_stat_ok (st) || ((((st->st_mode)) & 0170000) == (0040000))) ? (void) (0) : __assert_fail ("!cache_stat_ok (st) || ((((st->st_mode)) & 0170000) == (0040000))", "../../../subject/coreutils-6.11/src/remove.c", 1113, __PRETTY_FUNCTION__));
    }
  else
    {




      if (dirent_type == DT_UNKNOWN)
 {
   if (fstatat (fd_cwd, filename, st, 0x100))
     {
       if (ignorable_missing (x, (*__errno_location ())))
  return RM_OK;

       error (0, (*__errno_location ()), ((const char *) ("cannot remove %s")),
       quote (full_filename_ (ds, filename)));
       return RM_ERROR;
     }

   if (((((st->st_mode)) & 0170000) == (0040000)))
     dirent_type = DT_DIR;
 }

      if (dirent_type != DT_DIR)
 {


   do { if (unlinkat (fd_cwd, filename, 0) == 0) { if ((x)->verbose) printf (((const char *) ("removed %s\n")), quote (full_filename_ (ds, filename))); return RM_OK; } if (ignorable_missing (x, (*__errno_location ()))) return RM_OK; } while (0);


   error (0, (*__errno_location ()), ((const char *) ("cannot remove %s")),
   quote (full_filename_ (ds, filename)));
   return RM_ERROR;
 }

      if (! x->recursive)
 {
   error (0, 21, ((const char *) ("cannot remove %s")),
   quote (full_filename_ (ds, filename)));
   return RM_ERROR;
 }

      if (is_empty_directory == T_YES)
 {
   do { if (unlinkat (fd_cwd, filename, 0x200) == 0) { if ((x)->verbose) printf (((const char *) ("removed directory: %s\n")), quote (full_filename_ (ds, filename))); return RM_OK; } if (ignorable_missing (x, (*__errno_location ()))) return RM_OK; if ((*__errno_location ()) == 39 || (*__errno_location ()) == 17) return RM_NONEMPTY_DIR; } while (0);


 }
    }

  return RM_NONEMPTY_DIR;
}
static DIR *
fd_to_subdirp (int fd_cwd, char const *f,
        int prev_errno,
        struct stat *subdir_sb,
        int *cwd_errno __attribute__ ((__unused__)))
{
  int open_flags = 00 | 0400 | 0400000 | 04000;
  int fd_sub = openat (fd_cwd, f, open_flags, 0);
  int saved_errno;




  if (fd_sub < 0)
    return ((void *)0);
  else if (fstat (fd_sub, subdir_sb) != 0)
    saved_errno = (*__errno_location ());
  else if (((((subdir_sb->st_mode)) & 0170000) == (0040000)))
    {
      DIR *subdir_dirp = fdopendir (fd_sub);
      if (subdir_dirp)
 return subdir_dirp;
      saved_errno = (*__errno_location ());
    }
  else
    saved_errno = (prev_errno ? prev_errno : 20);

  close (fd_sub);
  (*__errno_location ()) = saved_errno;
  return ((void *)0);
}
static enum RM_status
remove_cwd_entries (DIR **dirp,
      Dirstack_state *ds, char **subdir, struct stat *subdir_sb,
      struct rm_options const *x)
{
  struct AD_ent *top = AD_stack_top (ds);
  enum RM_status status = top->status;
  size_t n_unlinked_since_opendir_or_last_rewind = 0;

  ((((status) == RM_OK || (status) == RM_USER_DECLINED || (status) == RM_ERROR)) ? (void) (0) : __assert_fail ("((status) == RM_OK || (status) == RM_USER_DECLINED || (status) == RM_ERROR)", "../../../subject/coreutils-6.11/src/remove.c", 1233, __PRETTY_FUNCTION__));
  *subdir = ((void *)0);

  while (1)
    {
      struct dirent const *dp;
      enum RM_status tmp_status;
      const char *f;



      (*__errno_location ()) = 0;
      dp = readdir_ignoring_dot_and_dotdot (*dirp);
      if (dp == ((void *)0))
 {
   if ((*__errno_location ()))
     {

     }
   else if ((CONSECUTIVE_READDIR_UNLINK_THRESHOLD <= (n_unlinked_since_opendir_or_last_rewind)))
     {



       rewinddir (*dirp);
       n_unlinked_since_opendir_or_last_rewind = 0;
       continue;
     }
   break;
 }

      f = dp->d_name;


      if ( ! AD_is_removable (ds, f))
 continue;





      cache_stat_init (subdir_sb);
      tmp_status = remove_entry (dirfd (*dirp), ds, f,
     ((dp)->d_type), subdir_sb, x);
      switch (tmp_status)
 {
 case RM_OK:




   ++n_unlinked_since_opendir_or_last_rewind;
   break;

 case RM_ERROR:
 case RM_USER_DECLINED:
   AD_mark_as_unremovable (ds, f);
   do { if ((tmp_status) == RM_ERROR || ((tmp_status) == RM_USER_DECLINED && (status) == RM_OK)) (status) = (tmp_status); } while (0);
   break;

 case RM_NONEMPTY_DIR:
   {
     DIR *subdir_dirp = fd_to_subdirp (dirfd (*dirp), f,
           (*__errno_location ()), subdir_sb, ((void *)0));
     if (subdir_dirp == ((void *)0))
       {
  status = RM_ERROR;



  if (ignorable_missing (x, (*__errno_location ())))
    {

    }
  else
    {


      int saved_errno = (*__errno_location ());
      if (unlinkat (dirfd (*dirp), f, 0x200) == 0)
        status = RM_OK;
      else
        error (0, saved_errno,
        ((const char *) ("cannot remove %s")), quote (full_filename_ (ds, f)));
    }

  if (status == RM_ERROR)
    AD_mark_as_unremovable (ds, f);
  break;
       }

     *subdir = xstrdup (f);
     if (closedir (*dirp) != 0)
       {
  error (0, 0, ((const char *) ("failed to close directory %s")),
         quote (full_filename_ (ds, ".")));
  status = RM_ERROR;
       }
     *dirp = subdir_dirp;

     break;
   }
 }


      do { if ((status) == RM_ERROR || ((status) == RM_USER_DECLINED && (top->status) == RM_OK)) (top->status) = (status); } while (0);

      if (*subdir)
 break;
    }


  ((*dirp != ((void *)0)) ? (void) (0) : __assert_fail ("*dirp != ((void *)0)", "../../../subject/coreutils-6.11/src/remove.c", 1345, __PRETTY_FUNCTION__));
  ((0 <= fcntl (dirfd (*dirp), 1)) ? (void) (0) : __assert_fail ("0 <= fcntl (dirfd (*dirp), 1)", "../../../subject/coreutils-6.11/src/remove.c", 1346, __PRETTY_FUNCTION__));

  return status;
}
static enum RM_status
remove_dir (int fd_cwd, Dirstack_state *ds, char const *dir,
     struct stat *dir_st,
     struct rm_options const *x, int *cwd_errno)
{
  enum RM_status status;
  dev_t current_dev = dir_st->st_dev;
  DIR *dirp = fd_to_subdirp (fd_cwd, dir, 0, dir_st, cwd_errno);

  if (dirp == ((void *)0))
    {


      if (ignorable_missing (x, (*__errno_location ())))
 {

 }
      else
 {


   int saved_errno = (*__errno_location ());
   if (unlinkat (fd_cwd, dir, 0x200) == 0)
     return RM_OK;

   error (0, saved_errno,
   ((const char *) ("cannot remove %s")), quote (full_filename_ (ds, dir)));
 }

      return RM_ERROR;
    }

  if ((x->root_dev_ino && ((*dir_st).st_ino == (*x->root_dev_ino).st_ino && (*dir_st).st_dev == (*x->root_dev_ino).st_dev)))
    {
      do { if ((strcmp (full_filename_ (ds, dir), "/") == 0)) error (0, 0, ((const char *) ("it is dangerous to operate recursively on %s")), quote (full_filename_ (ds, dir))); else error (0, 0, ((const char *) ("it is dangerous to operate recursively on %s (same as %s)")), quote_n (0, full_filename_ (ds, dir)), quote_n (1, "/")); error (0, 0, ((const char *) ("use --no-preserve-root to override this failsafe"))); } while (0);
      status = RM_ERROR;
      goto closedir_and_return;
    }

  AD_push (dirfd (dirp), ds, dir, dir_st);
  do { AD_stack_top(ds)->status = RM_OK; } while (0);

  status = RM_OK;

  while (1)
    {
      char *subdir = ((void *)0);
      struct stat subdir_sb;
      enum RM_status tmp_status;

      tmp_status = remove_cwd_entries (&dirp, ds, &subdir, &subdir_sb, x);

      if (tmp_status != RM_OK)
 {
   do { if ((tmp_status) == RM_ERROR || ((tmp_status) == RM_USER_DECLINED && (status) == RM_OK)) (status) = (tmp_status); } while (0);
   AD_mark_current_as_unremovable (ds);
 }
      if (subdir)
 {
   if ( ! x->one_file_system
        || subdir_sb.st_dev == current_dev)
     {
       AD_push (dirfd (dirp), ds, subdir, &subdir_sb);
       do { AD_stack_top(ds)->status = RM_OK; } while (0);
       free (subdir);
       continue;
     }





   error (0, 0, ((const char *) ("skipping %s, since it's on a different device")),
   quote (full_filename_ (ds, subdir)));
   free (subdir);
   AD_mark_current_as_unremovable (ds);
   tmp_status = RM_ERROR;
   do { if ((tmp_status) == RM_ERROR || ((tmp_status) == RM_USER_DECLINED && (status) == RM_OK)) (status) = (tmp_status); } while (0);
 }





      {
 int fd;


 char *empty_dir = AD_pop_and_chdir (dirp, &fd, ds);
 dirp = ((void *)0);
 ((fd != -100 || AD_stack_height (ds) == 1) ? (void) (0) : __assert_fail ("fd != -100 || AD_stack_height (ds) == 1", "../../../subject/coreutils-6.11/src/remove.c", 1467, __PRETTY_FUNCTION__));


 if (tmp_status == RM_OK)
   {
     struct stat empty_st;
     Ternary is_empty;
     int dirent_type = DT_DIR;
     enum RM_status s = prompt (fd, ds, empty_dir, &dirent_type,
           cache_stat_init (&empty_st), x,
           PA_REMOVE_DIR, &is_empty);

     if (s != RM_OK)
       {
  free (empty_dir);
  status = s;
  if (fd != -100)
    close (fd);
  goto closedir_and_return;
       }

     if (unlinkat (fd, empty_dir, 0x200) == 0)
       {
  if (x->verbose)
    printf (((const char *) ("removed directory: %s\n")),
     quote (full_filename_ (ds, empty_dir)));
       }
     else
       {
  error (0, (*__errno_location ()), ((const char *) ("cannot remove directory %s")),
         quote (full_filename_ (ds, empty_dir)));
  AD_mark_as_unremovable (ds, empty_dir);
  status = RM_ERROR;
  do { if ((status) == RM_ERROR || ((status) == RM_USER_DECLINED && (AD_stack_top(ds)->status) == RM_OK)) (AD_stack_top(ds)->status) = (status); } while (0);
       }
   }

 free (empty_dir);

 if (fd == -100)
   break;

 dirp = fdopendir (fd);
 if (dirp == ((void *)0))
   {
     error (0, (*__errno_location ()), ((const char *) ("FATAL: cannot return to .. from %s")),
     quote (full_filename_ (ds, ".")));
     close (fd);
     longjmp (ds->current_arg_jumpbuf, 1);
   }
      }
    }



  AD_stack_pop (ds);

 closedir_and_return:;
  if (dirp != ((void *)0) && closedir (dirp) != 0)
    {
      error (0, 0, ((const char *) ("failed to close directory %s")),
      quote (full_filename_ (ds, ".")));
      status = RM_ERROR;
    }

  return status;
}




static enum RM_status
rm_1 (Dirstack_state *ds, char const *filename,
      struct rm_options const *x, int *cwd_errno)
{
  char const *base = last_component (filename);
  if (dot_or_dotdot (base))
    {
      error (0, 0, ((const char *) (base == filename ? "cannot remove directory %s" : "cannot remove %s directory %s")),


      quote_n (0, base), quote_n (1, filename));
      return RM_ERROR;
    }

  struct stat st;
  cache_stat_init (&st);
  cycle_check_init (&ds->cycle_check_state);
  if (x->root_dev_ino)
    {
      if (cache_fstatat (-100, filename, &st, 0x100) != 0)
 {
   if (ignorable_missing (x, (*__errno_location ())))
     return RM_OK;
   error (0, (*__errno_location ()), ((const char *) ("cannot remove %s")), quote (filename));
   return RM_ERROR;
 }
      if (((st).st_ino == (*(x->root_dev_ino)).st_ino && (st).st_dev == (*(x->root_dev_ino)).st_dev))
 {
   error (0, 0, ((const char *) ("cannot remove root directory %s")), quote (filename));
   return RM_ERROR;
 }
    }

  AD_push_initial (ds);
  do { AD_stack_top(ds)->status = RM_OK; } while (0);

  enum RM_status status = remove_entry (-100, ds, filename,
     DT_UNKNOWN, &st, x);
  if (status == RM_NONEMPTY_DIR)
    {



      if (_setjmp (ds->current_arg_jumpbuf))
 status = RM_ERROR;
      else
 status = remove_dir (-100, ds, filename, &st, x, cwd_errno);

      AD_stack_clear (ds);
    }

  ds_clear (ds);
  return status;
}



extern enum RM_status
rm (size_t n_files, char const *const *file, struct rm_options const *x)
{
  enum RM_status status = RM_OK;
  Dirstack_state *ds = ds_init ();
  int cwd_errno = 0;
  size_t i;

  for (i = 0; i < n_files; i++)
    {
      if (cwd_errno && (! ((((file[i])[0]) == '/') || 0 < 0)))
 {
   error (0, 0, ((const char *) ("cannot remove relative-named %s")), quote (file[i]));
   status = RM_ERROR;
 }
      else
 {
   enum RM_status s = rm_1 (ds, file[i], x, &cwd_errno);
   ((((s) == RM_OK || (s) == RM_USER_DECLINED || (s) == RM_ERROR)) ? (void) (0) : __assert_fail ("((s) == RM_OK || (s) == RM_USER_DECLINED || (s) == RM_ERROR)", "../../../subject/coreutils-6.11/src/remove.c", 1613, __PRETTY_FUNCTION__));
   do { if ((s) == RM_ERROR || ((s) == RM_USER_DECLINED && (status) == RM_OK)) (status) = (s); } while (0);
 }
    }

  if (x->require_restore_cwd && cwd_errno)
    {
      error (0, cwd_errno,
      ((const char *) ("cannot restore current working directory")));
      status = RM_ERROR;
    }

  ds_free (ds);

  return status;
}

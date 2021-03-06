









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
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
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

extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
struct option
{
  const char *name;


  int has_arg;
  int *flag;
  int val;
};
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ ));
extern int getopt_long (int ___argc, char *const *___argv,
   const char *__shortopts,
          const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ ));
extern int getopt_long_only (int ___argc, char *const *___argv,
        const char *__shortopts,
               const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ ));






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





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;


typedef __clock_t clock_t;





typedef __time_t time_t;



typedef __clockid_t clockid_t;
typedef __timer_t timer_t;



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





typedef long unsigned int size_t;



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

typedef int wchar_t;








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
typedef long int ptrdiff_t;
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





extern int rpl_vfprintf (FILE *fp, const char *format, va_list args)
       __attribute__ ((__format__ (__printf__, 2, 0)));
extern int rpl_vprintf (const char *format, va_list args)
       __attribute__ ((__format__ (__printf__, 1, 0)));
  extern int rpl_asprintf (char **result, const char *format, ...)
    __attribute__ ((__format__ (__printf__, 2, 3)));
  extern int rpl_vasprintf (char **result, const char *format, va_list args)
    __attribute__ ((__format__ (__printf__, 2, 0)));

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
extern void error (int __status, int __errnum, const char *__format, ...)
     __attribute__ ((__format__ (__printf__, 3, 4)));

extern void error_at_line (int __status, int __errnum, const char *__fname,
      unsigned int __lineno, const char *__format, ...)
     __attribute__ ((__format__ (__printf__, 5, 6)));




extern void (*error_print_progname) (void);


extern unsigned int error_message_count;



extern int error_one_per_line;
_Bool hard_locale (int);
extern int gnu_mbswidth (const char *string, int flags);



extern int mbsnwidth (const char *buf, size_t nbytes, int flags);
char const *quote_n (int n, char const *name);
char const *quote (char const *name);
static inline long int
get_stat_atime_ns (struct stat const *st)
{

  return ((st)->st_atim).tv_nsec;





}


static inline long int
get_stat_ctime_ns (struct stat const *st)
{

  return ((st)->st_ctim).tv_nsec;





}


static inline long int
get_stat_mtime_ns (struct stat const *st)
{

  return ((st)->st_mtim).tv_nsec;





}


static inline long int
get_stat_birthtime_ns (struct stat const *st)
{






  (void) st;
  return 0;

}


static inline struct timespec
get_stat_atime (struct stat const *st)
{

  return ((st)->st_atim);






}


static inline struct timespec
get_stat_ctime (struct stat const *st)
{

  return ((st)->st_ctim);






}


static inline struct timespec
get_stat_mtime (struct stat const *st)
{

  return ((st)->st_mtim);






}



static inline struct timespec
get_stat_birthtime (struct stat const *st)
{
  struct timespec t;
  t.tv_sec = -1;
  t.tv_nsec = -1;

  (void) st;
  return t;
}

FILE *fopen_safer (char const *, char const *);
FILE *tmpfile_safer (void);

size_t nstrftime (char *, size_t, char const *, struct tm const *, int, int);


enum strtol_error
  {
    LONGINT_OK = 0,



    LONGINT_OVERFLOW = 1,
    LONGINT_INVALID_SUFFIX_CHAR = 2,

    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = (LONGINT_INVALID_SUFFIX_CHAR
       | LONGINT_OVERFLOW),
    LONGINT_INVALID = 4
  };
typedef enum strtol_error strtol_error;




strtol_error xstrtol (const char *, char **, int, long int *, const char *);
strtol_error xstrtoul (const char *, char **, int, unsigned long int *, const char *);
strtol_error xstrtoimax (const char *, char **, int, intmax_t *, const char *);
strtol_error xstrtoumax (const char *, char **, int, uintmax_t *, const char *);
void xstrtol_fatal (enum strtol_error,
      int, char, struct option const *,
      char const *) __attribute__ ((__noreturn__));
struct COLUMN;
struct COLUMN
  {
    FILE *fp;
    char const *name;
    enum
      {
 OPEN,
 FF_FOUND,

 ON_HOLD,
 CLOSED
      }
    status;


    _Bool (*print_func) (struct COLUMN *);


    void (*char_func) (char);

    int current_line;
    int lines_stored;
    int lines_to_print;
    int start_position;
    _Bool numbered;
    _Bool full_page_printed;





  };

typedef struct COLUMN COLUMN;



static int char_to_clump (char c);
static _Bool read_line (COLUMN *p);
static _Bool print_page (void);
static _Bool print_stored (COLUMN *p);
static _Bool open_file (char *name, COLUMN *p);
static _Bool skip_to_page (uintmax_t page);
static void print_header (void);
static void pad_across_to (int position);
static void add_line_number (COLUMN *p);
static void getoptarg (char *arg, char switch_char, char *character,
         int *number);
void usage (int status);
static void print_files (int number_of_files, char **av);
static void init_parameters (int number_of_files);
static void init_header (char const *filename, int desc);
static _Bool init_fps (int number_of_files, char **av);
static void init_funcs (void);
static void init_store_cols (void);
static void store_columns (void);
static void balance (int total_stored);
static void store_char (char c);
static void pad_down (int lines);
static void read_rest_of_line (COLUMN *p);
static void skip_read (COLUMN *p, int column_number);
static void print_char (char c);
static void cleanup (void);
static void print_sep_string (void);
static void separator_string (const char *optarg_S);


char *program_name;


static COLUMN *column_vector;





static char *buff;



static int buff_current;



static size_t buff_allocated;





static int *line_vector;






static int *end_vector;


static _Bool parallel_files = 0;



static _Bool align_empty_cols;



static _Bool empty_line;






static _Bool FF_only;




static _Bool explicit_columns = 0;


static _Bool extremities = 1;



static _Bool keep_FF = 0;
static _Bool print_a_FF = 0;



static _Bool print_a_header;


static _Bool use_form_feed = 0;


static _Bool have_read_stdin = 0;


static _Bool print_across_flag = 0;


static _Bool storing_columns = 1;





static _Bool balance_columns = 0;


static int lines_per_page = 66;



enum { lines_per_header = 5 };
static int lines_per_body;
enum { lines_per_footer = 5 };



static int chars_per_line = 72;


static _Bool truncate_lines = 0;



static _Bool join_lines = 0;



static int chars_per_column;


static _Bool untabify_input = 0;


static char input_tab_char = '\t';



static int chars_per_input_tab = 8;


static _Bool tabify_output = 0;


static char output_tab_char = '\t';


static int chars_per_output_tab = 8;




static int spaces_not_printed;


static int chars_per_margin = 0;





static int output_position;





static int input_position;



static _Bool failed_opens = 0;
static int columns = 1;



static uintmax_t first_page_number = 0;
static uintmax_t last_page_number = (18446744073709551615UL);


static int files_ready_to_read = 0;


static uintmax_t page_number;
static int line_number;



static int power_10;


static _Bool numbered_lines = 0;


static char number_separator = '\t';



static int line_count = 1;




static _Bool skip_count = 1;



static int start_line_num = 1;


static int chars_per_number = 5;




static int number_width;


static char *number_buff;



static _Bool use_esc_sequence = 0;



static _Bool use_cntrl_prefix = 0;


static _Bool double_space = 0;



static int total_files = 0;


static _Bool ignore_failed_opens = 0;



static _Bool use_col_separator = 0;




static char *col_sep_string = "";
static int col_sep_length = 0;
static char *column_separator = " ";
static char *line_separator = "\t";



static int separators_not_printed;



static int padding_not_printed;



static _Bool pad_vertically;


static char *custom_header;


static char const *date_format;


static char *date_text;
static char const *file_text;


static int header_width_available;

static char *clump_buff;





static _Bool last_line = 0;



enum
{
  COLUMNS_OPTION = 127 + 1,
  PAGES_OPTION
};

static char const short_options[] =
  "-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:";

static struct option const long_options[] =
{
  {"pages", 1, ((void *)0), PAGES_OPTION},
  {"columns", 1, ((void *)0), COLUMNS_OPTION},
  {"across", 0, ((void *)0), 'a'},
  {"show-control-chars", 0, ((void *)0), 'c'},
  {"double-space", 0, ((void *)0), 'd'},
  {"date-format", 1, ((void *)0), 'D'},
  {"expand-tabs", 2, ((void *)0), 'e'},
  {"form-feed", 0, ((void *)0), 'f'},
  {"header", 1, ((void *)0), 'h'},
  {"output-tabs", 2, ((void *)0), 'i'},
  {"join-lines", 0, ((void *)0), 'J'},
  {"length", 1, ((void *)0), 'l'},
  {"merge", 0, ((void *)0), 'm'},
  {"number-lines", 2, ((void *)0), 'n'},
  {"first-line-number", 1, ((void *)0), 'N'},
  {"indent", 1, ((void *)0), 'o'},
  {"no-file-warnings", 0, ((void *)0), 'r'},
  {"separator", 2, ((void *)0), 's'},
  {"sep-string", 2, ((void *)0), 'S'},
  {"omit-header", 0, ((void *)0), 't'},
  {"omit-pagination", 0, ((void *)0), 'T'},
  {"show-nonprinting", 0, ((void *)0), 'v'},
  {"width", 1, ((void *)0), 'w'},
  {"page-width", 1, ((void *)0), 'W'},
  {"help", 0, ((void *)0), GETOPT_HELP_CHAR},
  {"version", 0, ((void *)0), GETOPT_VERSION_CHAR},
  {((void *)0), 0, ((void *)0), 0}
};




static int
cols_ready_to_print (void)
{
  COLUMN *q;
  int i;
  int n;

  n = 0;
  for (q = column_vector, i = 0; i < columns; ++q, ++i)
    if (q->status == OPEN ||
 q->status == FF_FOUND ||
 (storing_columns && q->lines_stored > 0 && q->lines_to_print > 0))
      ++n;
  return n;
}




static _Bool
first_last_page (int oi, char c, char const *pages)
{
  char *p;
  uintmax_t first;
  uintmax_t last = (18446744073709551615UL);
  strtol_error err = xstrtoumax (pages, &p, 10, &first, "");
  if (err != LONGINT_OK && err != LONGINT_INVALID_SUFFIX_CHAR)
    xstrtol_fatal (err, oi, c, long_options, pages);

  if (p == pages || !first)
    return 0;

  if (*p == ':')
    {
      char const *p1 = p + 1;
      err = xstrtoumax (p1, &p, 10, &last, "");
      if (err != LONGINT_OK)
 xstrtol_fatal (err, oi, c, long_options, pages);
      if (p1 == p || last < first)
 return 0;
    }

  if (*p)
    return 0;

  first_page_number = first;
  last_page_number = last;
  return 1;
}





static void
parse_column_count (char const *s)
{
  long int tmp_long;
  if (xstrtol (s, ((void *)0), 10, &tmp_long, "") != LONGINT_OK
      || !(1 <= tmp_long && tmp_long <= 2147483647))
    error (1, 0,
    ((const char *) ("invalid number of columns: %s")), quote (s));

  columns = tmp_long;
  explicit_columns = 1;
}



static void
separator_string (const char *optarg_S)
{
  col_sep_length = (int) strlen (optarg_S);
  col_sep_string = xmalloc (col_sep_length + 1);
  strcpy (col_sep_string, optarg_S);
}

int
main (int argc, char **argv)
{
  int n_files;
  _Bool old_options = 0;
  _Bool old_w = 0;
  _Bool old_s = 0;
  char **file_names;


  char *column_count_string = ((void *)0);
  size_t n_digits = 0;
  size_t n_alloc = 0;

  ;
  program_name = argv[0];
  setlocale (__LC_ALL, "");
  ;
  ;

  atexit (close_stdout);

  n_files = 0;
  file_names = (argc > 1
  ? xmalloc ((argc - 1) * sizeof (char *))
  : ((void *)0));

  for (;;)
    {
      int oi = -1;
      int c = getopt_long (argc, argv, short_options, long_options, &oi);
      if (c == -1)
 break;

      if (((unsigned int) (c) - '0' <= 9))
 {

   if (n_digits + 1 >= n_alloc)
     column_count_string
       = ((void) (!!sizeof (struct { unsigned int verify_error_if_negative_size__: (sizeof *(column_count_string) == 1) ? 1 : -1; })), x2realloc (column_count_string, &n_alloc));
   column_count_string[n_digits++] = c;
   column_count_string[n_digits] = '\0';
   continue;
 }

      n_digits = 0;

      switch (c)
 {
 case 1:

   if (! (first_page_number == 0
   && *optarg == '+' && first_last_page (-2, '+', optarg + 1)))
     file_names[n_files++] = optarg;
   break;

 case PAGES_OPTION:
   {
     if (! optarg)
       error (1, 0,
       ((const char *) ("`--pages=FIRST_PAGE[:LAST_PAGE]' missing argument")));
     else if (! first_last_page (oi, 0, optarg))
       error (1, 0, ((const char *) ("Invalid page range %s")),
       quote (optarg));
     break;
   }

 case COLUMNS_OPTION:
   {
     parse_column_count (optarg);




     free (column_count_string);
     column_count_string = ((void *)0);
     n_alloc = 0;
     break;
   }

 case 'a':
   print_across_flag = 1;
   storing_columns = 0;
   break;
 case 'b':
   balance_columns = 1;
   break;
 case 'c':
   use_cntrl_prefix = 1;
   break;
 case 'd':
   double_space = 1;
   break;
 case 'D':
   date_format = optarg;
   break;
 case 'e':
   if (optarg)
     getoptarg (optarg, 'e', &input_tab_char,
         &chars_per_input_tab);

   untabify_input = 1;
   break;
 case 'f':
 case 'F':
   use_form_feed = 1;
   break;
 case 'h':
   custom_header = optarg;
   break;
 case 'i':
   if (optarg)
     getoptarg (optarg, 'i', &output_tab_char,
         &chars_per_output_tab);

   tabify_output = 1;
   break;
 case 'J':
   join_lines = 1;
   break;
 case 'l':
   {
     long int tmp_long;
     if (xstrtol (optarg, ((void *)0), 10, &tmp_long, "") != LONGINT_OK
  || tmp_long <= 0 || tmp_long > 2147483647)
       {
  error (1, 0,
         ((const char *) ("`-l PAGE_LENGTH' invalid number of lines: %s")),
         quote (optarg));
       }
     lines_per_page = tmp_long;
     break;
   }
 case 'm':
   parallel_files = 1;
   storing_columns = 0;
   break;
 case 'n':
   numbered_lines = 1;
   if (optarg)
     getoptarg (optarg, 'n', &number_separator,
         &chars_per_number);
   break;
 case 'N':
   skip_count = 0;
   {
     long int tmp_long;
     if (xstrtol (optarg, ((void *)0), 10, &tmp_long, "") != LONGINT_OK
  || tmp_long > 2147483647)
       {
  error (1, 0,
         ((const char *) ("`-N NUMBER' invalid starting line number: %s")),
         quote (optarg));
       }
     start_line_num = tmp_long;
     break;
   }
 case 'o':
   {
     long int tmp_long;
     if (xstrtol (optarg, ((void *)0), 10, &tmp_long, "") != LONGINT_OK
  || tmp_long < 0 || tmp_long > 2147483647)
       error (1, 0,
       ((const char *) ("`-o MARGIN' invalid line offset: %s")), quote (optarg));
     chars_per_margin = tmp_long;
     break;
   }
 case 'r':
   ignore_failed_opens = 1;
   break;
 case 's':
   old_options = 1;
   old_s = 1;
   if (!use_col_separator && optarg)
     separator_string (optarg);
   break;
 case 'S':
   old_s = 0;

   col_sep_string = "";
   col_sep_length = 0;
   use_col_separator = 1;
   if (optarg)
     separator_string (optarg);
   break;
 case 't':
   extremities = 0;
   keep_FF = 1;
   break;
 case 'T':
   extremities = 0;
   keep_FF = 0;
   break;
 case 'v':
   use_esc_sequence = 1;
   break;
 case 'w':
   old_options = 1;
   old_w = 1;
   {
     long int tmp_long;
     if (xstrtol (optarg, ((void *)0), 10, &tmp_long, "") != LONGINT_OK
         || tmp_long <= 0 || tmp_long > 2147483647)
       error (1, 0,
       ((const char *) ("`-w PAGE_WIDTH' invalid number of characters: %s")),
       quote (optarg));
     if (!truncate_lines)
       chars_per_line = tmp_long;
     break;
   }
 case 'W':
   old_w = 0;
   truncate_lines = 1;
   {
     long int tmp_long;
     if (xstrtol (optarg, ((void *)0), 10, &tmp_long, "") != LONGINT_OK
  || tmp_long <= 0 || tmp_long > 2147483647)
       error (1, 0,
       ((const char *) ("`-W PAGE_WIDTH' invalid number of characters: %s")),
       quote (optarg));
     chars_per_line = tmp_long;
     break;
   }
 case GETOPT_HELP_CHAR: usage (0); break;;
 case GETOPT_VERSION_CHAR: version_etc (stdout, "pr", "GNU coreutils", "6.11", "Pete TerMaat", "Roland Huebner", (char *) ((void *)0)); exit (0); break;;
 default:
   usage (1);
   break;
 }
    }

  if (column_count_string)
    {
      parse_column_count (column_count_string);
      free (column_count_string);
    }

  if (! date_format)
    date_format = (getenv ("POSIXLY_CORRECT") && !hard_locale (__LC_TIME)
     ? "%b %e %H:%M %Y"
     : "%Y-%m-%d %H:%M");


  if (first_page_number == 0)
    first_page_number = 1;

  if (parallel_files & explicit_columns)
    error (1, 0,
  ((const char *) ("Cannot specify number of columns when printing in parallel.")));

  if (parallel_files & print_across_flag)
    error (1, 0,
       ((const char *) ("Cannot specify both printing across and printing in parallel.")));





  if (old_options)
    {
      if (old_w)
        {
          if (parallel_files | explicit_columns)
     {

       truncate_lines = 1;
       if (old_s)


         use_col_separator = 1;
     }
   else


     join_lines = 1;
 }
      else if (!use_col_separator)
        {

          if (old_s & (parallel_files | explicit_columns))
     {
       if (!truncate_lines)
  {


    join_lines = 1;
    if (col_sep_length > 0)

      use_col_separator = 1;
  }
       else



  use_col_separator = 1;
     }
 }
    }

  for (; optind < argc; optind++)
    {
      file_names[n_files++] = argv[optind];
    }

  if (n_files == 0)
    {

      print_files (0, ((void *)0));
    }
  else
    {
      if (parallel_files)
 print_files (n_files, file_names);
      else
 {
   int i;
   for (i = 0; i < n_files; i++)
     print_files (1, &file_names[i]);
 }
    }

  cleanup ();

  if (have_read_stdin && fclose (stdin) == (-1))
    error (1, (*__errno_location ()), ((const char *) ("standard input")));
  if (failed_opens)
    exit (1);
  exit (0);
}







static void
getoptarg (char *arg, char switch_char, char *character, int *number)
{
  if (!((unsigned int) (*arg) - '0' <= 9))
    *character = *arg++;
  if (*arg)
    {
      long int tmp_long;
      if (xstrtol (arg, ((void *)0), 10, &tmp_long, "") != LONGINT_OK
   || tmp_long <= 0 || tmp_long > 2147483647)
 {
   error (0, 0,
      ((const char *) ("`-%c' extra characters or invalid number in the argument: %s")),
   switch_char, quote (arg));
   usage (1);
 }
      *number = tmp_long;
    }
}



static void
init_parameters (int number_of_files)
{
  int chars_used_by_number = 0;

  lines_per_body = lines_per_page - lines_per_header - lines_per_footer;
  if (lines_per_body <= 0)
    {
      extremities = 0;
      keep_FF = 1;
    }
  if (extremities == 0)
    lines_per_body = lines_per_page;

  if (double_space)
    lines_per_body = lines_per_body / 2;



  if (number_of_files == 0)
    parallel_files = 0;

  if (parallel_files)
    columns = number_of_files;



  if (storing_columns)
    balance_columns = 1;


  if (columns > 1)
    {
      if (!use_col_separator)
 {

   if (join_lines)
     col_sep_string = line_separator;
   else
     col_sep_string = column_separator;

   col_sep_length = 1;
   use_col_separator = 1;
 }


      else if (!join_lines && *col_sep_string == '\t')
        col_sep_string = column_separator;

      truncate_lines = 1;
      tabify_output = 1;
    }
  else
    storing_columns = 0;


  if (join_lines)
    truncate_lines = 0;

  if (numbered_lines)
    {
      int tmp_i;
      int chars_per_default_tab = 8;

      line_count = start_line_num;







      if (number_separator == '\t')
 number_width = chars_per_number +
   ((chars_per_default_tab) - ((chars_per_number) % (chars_per_default_tab)));
      else
 number_width = chars_per_number + 1;



      if (parallel_files)
 chars_used_by_number = number_width;



      tmp_i = chars_per_number;
      for (power_10 = 1; tmp_i > 0; --tmp_i)
        power_10 = 10 * power_10;
    }

  chars_per_column = (chars_per_line - chars_used_by_number -
       (columns - 1) * col_sep_length) / columns;

  if (chars_per_column < 1)
    error (1, 0, ((const char *) ("page width too narrow")));

  if (numbered_lines)
    {
      free (number_buff);
      number_buff = xmalloc (2 * chars_per_number);
    }






  free (clump_buff);
  clump_buff = xmalloc ((((8)>(chars_per_input_tab))?(8):(chars_per_input_tab)));
}
static _Bool
init_fps (int number_of_files, char **av)
{
  int i, files_left;
  COLUMN *p;
  FILE *firstfp;
  char const *firstname;

  total_files = 0;

  free (column_vector);
  column_vector = xnmalloc (columns, sizeof (COLUMN));

  if (parallel_files)
    {
      files_left = number_of_files;
      for (p = column_vector; files_left--; ++p, ++av)
 {
   if (! open_file (*av, p))
     {
       --p;
       --columns;
     }
 }
      if (columns == 0)
 return 0;
      init_header ("", -1);
    }
  else
    {
      p = column_vector;
      if (number_of_files > 0)
 {
   if (! open_file (*av, p))
     return 0;
   init_header (*av, fileno (p->fp));
   p->lines_stored = 0;
 }
      else
 {
   p->name = ((const char *) ("standard input"));
   p->fp = stdin;
   have_read_stdin = 1;
   p->status = OPEN;
   p->full_page_printed = 0;
   ++total_files;
   init_header ("", -1);
   p->lines_stored = 0;
 }

      firstname = p->name;
      firstfp = p->fp;
      for (i = columns - 1, ++p; i; --i, ++p)
 {
   p->name = firstname;
   p->fp = firstfp;
   p->status = OPEN;
   p->full_page_printed = 0;
   p->lines_stored = 0;
 }
    }
  files_ready_to_read = total_files;
  return 1;
}







static void
init_funcs (void)
{
  int i, h, h_next;
  COLUMN *p;

  h = chars_per_margin;

  if (!truncate_lines)
    h_next = 0;
  else
    {



      if (parallel_files & numbered_lines)
 h_next = h + chars_per_column + number_width;
      else
 h_next = h + chars_per_column;
    }



  h = h + col_sep_length;



  for (p = column_vector, i = 1; i < columns; ++p, ++i)
    {
      if (storing_columns)
 {
   p->char_func = store_char;
   p->print_func = print_stored;
 }
      else

 {
   p->char_func = print_char;
   p->print_func = read_line;
 }



      p->numbered = numbered_lines && (!parallel_files || i == 1);
      p->start_position = h;





      if (!truncate_lines)
 {
   h = 0;
   h_next = 0;
 }
      else
 {
   h = h_next + col_sep_length;
   h_next = h + chars_per_column;
 }
    }





  if (storing_columns & balance_columns)
    {
      p->char_func = store_char;
      p->print_func = print_stored;
    }
  else
    {
      p->char_func = print_char;
      p->print_func = read_line;
    }

  p->numbered = numbered_lines && (!parallel_files || i == 1);
  p->start_position = h;
}






static _Bool
open_file (char *name, COLUMN *p)
{
  if ((strcmp (name, "-") == 0))
    {
      p->name = ((const char *) ("standard input"));
      p->fp = stdin;
      have_read_stdin = 1;
    }
  else
    {
      p->name = name;
      p->fp = fopen_safer (name, "r");
    }
  if (p->fp == ((void *)0))
    {
      failed_opens = 1;
      if (!ignore_failed_opens)
 error (0, (*__errno_location ()), "%s", name);
      return 0;
    }
  p->status = OPEN;
  p->full_page_printed = 0;
  ++total_files;
  return 1;
}






static void
close_file (COLUMN *p)
{
  COLUMN *q;
  int i;

  if (p->status == CLOSED)
    return;
  if (ferror_unlocked (p->fp))
    error (1, (*__errno_location ()), "%s", p->name);
  if (fileno (p->fp) != 0 && fclose (p->fp) != 0)
    error (1, (*__errno_location ()), "%s", p->name);

  if (!parallel_files)
    {
      for (q = column_vector, i = columns; i; ++q, --i)
 {
   q->status = CLOSED;
   if (q->lines_stored == 0)
     {
       q->lines_to_print = 0;
     }
 }
    }
  else
    {
      p->status = CLOSED;
      p->lines_to_print = 0;
    }

  --files_ready_to_read;
}







static void
hold_file (COLUMN *p)
{
  COLUMN *q;
  int i;

  if (!parallel_files)
    for (q = column_vector, i = columns; i; ++q, --i)
      {
 if (storing_columns)
   q->status = FF_FOUND;
 else
   q->status = ON_HOLD;
      }
  else
    p->status = ON_HOLD;

  p->lines_to_print = 0;
  --files_ready_to_read;
}




static void
reset_status (void)
{
  int i = columns;
  COLUMN *p;

  for (p = column_vector; i; --i, ++p)
    if (p->status == ON_HOLD)
      {
 p->status = OPEN;
 files_ready_to_read++;
      }

  if (storing_columns)
    {
      if (column_vector->status == CLOSED)

        files_ready_to_read = 0;
      else
        files_ready_to_read = 1;
    }
}
static void
print_files (int number_of_files, char **av)
{
  init_parameters (number_of_files);
  if (! init_fps (number_of_files, av))
    return;
  if (storing_columns)
    init_store_cols ();

  if (first_page_number > 1)
    {
      if (!skip_to_page (first_page_number))
 return;
      else
 page_number = first_page_number;
    }
  else
    page_number = 1;

  init_funcs ();

  line_number = line_count;
  while (print_page ())
    ;
}





static void
init_header (char const *filename, int desc)
{
  char *buf = ((void *)0);
  struct stat st;
  struct timespec t;
  int ns;
  struct tm *tm;


  if ((strcmp (filename, "-") == 0))
    desc = -1;
  if (0 <= desc && fstat (desc, &st) == 0)
    t = get_stat_mtime (&st);
  else
    {
      static struct timespec timespec;
      if (! timespec.tv_sec)
 gettime (&timespec);
      t = timespec;
    }

  ns = t.tv_nsec;
  tm = localtime (&t.tv_sec);
  if (tm == ((void *)0))
    {
      buf = xmalloc ((((sizeof (long int) * 8 - (! ((__typeof__ (long int)) 0 < (__typeof__ (long int)) -1))) * 146 / 485 + (! ((__typeof__ (long int)) 0 < (__typeof__ (long int)) -1)) + 1) + 1)
       + (((10)>((((sizeof (int) * 8 - (! ((__typeof__ (int)) 0 < (__typeof__ (int)) -1))) * 146 / 485 + (! ((__typeof__ (int)) 0 < (__typeof__ (int)) -1)) + 1) + 1)))?(10):((((sizeof (int) * 8 - (! ((__typeof__ (int)) 0 < (__typeof__ (int)) -1))) * 146 / 485 + (! ((__typeof__ (int)) 0 < (__typeof__ (int)) -1)) + 1) + 1))));
      sprintf (buf, "%ld.%09d", (long int) t.tv_sec, ns);
    }
  else
    {
      size_t bufsize = nstrftime (((void *)0), (18446744073709551615UL), date_format, tm, 0, ns) + 1;
      buf = xmalloc (bufsize);
      nstrftime (buf, bufsize, date_format, tm, 0, ns);
    }

  free (date_text);
  date_text = buf;
  file_text = custom_header ? custom_header : desc < 0 ? "" : filename;
  header_width_available = (chars_per_line
       - gnu_mbswidth (date_text, 0)
       - gnu_mbswidth (file_text, 0));
}
static void
init_page (void)
{
  int j;
  COLUMN *p;

  if (storing_columns)
    {
      store_columns ();
      for (j = columns - 1, p = column_vector; j; --j, ++p)
 {
   p->lines_to_print = p->lines_stored;
 }


      if (balance_columns)
 {
   p->lines_to_print = p->lines_stored;
 }


      else
 {
   if (p->status == OPEN)
     {
       p->lines_to_print = lines_per_body;
     }
   else
     p->lines_to_print = 0;
 }
    }
  else
    for (j = columns, p = column_vector; j; --j, ++p)
      if (p->status == OPEN)
 {
   p->lines_to_print = lines_per_body;
 }
      else
 p->lines_to_print = 0;
}





static void
align_column (COLUMN *p)
{
  padding_not_printed = p->start_position;
  if (padding_not_printed - col_sep_length > 0)
    {
      pad_across_to (padding_not_printed - col_sep_length);
      padding_not_printed = 0;
    }

  if (use_col_separator)
    print_sep_string ();

  if (p->numbered)
    add_line_number (p);
}
static _Bool
print_page (void)
{
  int j;
  int lines_left_on_page;
  COLUMN *p;
  _Bool pv;

  init_page ();

  if (cols_ready_to_print () == 0)
    return 0;

  if (extremities)
    print_a_header = 1;


  pad_vertically = 0;
  pv = 0;

  lines_left_on_page = lines_per_body;
  if (double_space)
    lines_left_on_page *= 2;

  while (lines_left_on_page > 0 && cols_ready_to_print () > 0)
    {
      output_position = 0;
      spaces_not_printed = 0;
      separators_not_printed = 0;
      pad_vertically = 0;
      align_empty_cols = 0;
      empty_line = 1;

      for (j = 1, p = column_vector; j <= columns; ++j, ++p)
 {
   input_position = 0;
   if (p->lines_to_print > 0 || p->status == FF_FOUND)
     {
       FF_only = 0;
       padding_not_printed = p->start_position;
       if (!(p->print_func) (p))
  read_rest_of_line (p);
       pv |= pad_vertically;

       --p->lines_to_print;
       if (p->lines_to_print <= 0)
  {
    if (cols_ready_to_print () <= 0)
      break;
  }


       if (parallel_files && p->status != OPEN)
  {
    if (empty_line)
      align_empty_cols = 1;
    else if (p->status == CLOSED ||
      (p->status == ON_HOLD && FF_only))
      align_column (p);
  }
     }
   else if (parallel_files)
     {

       if (empty_line)
  align_empty_cols = 1;
       else
  align_column (p);
     }


   if (use_col_separator)
     ++separators_not_printed;
 }

      if (pad_vertically)
 {
   putchar_unlocked ('\n');
   --lines_left_on_page;
 }

      if (cols_ready_to_print () <= 0 && !extremities)
 break;

      if (double_space & pv)
 {
   putchar_unlocked ('\n');
   --lines_left_on_page;
 }
    }

  if (lines_left_on_page == 0)
    for (j = 1, p = column_vector; j <= columns; ++j, ++p)
      if (p->status == OPEN)
 p->full_page_printed = 1;

  pad_vertically = pv;

  if (pad_vertically & extremities)
    pad_down (lines_left_on_page + lines_per_footer);
  else if (keep_FF & print_a_FF)
    {
      putchar_unlocked ('\f');
      print_a_FF = 0;
    }

  if (last_page_number < page_number)
    return 0;

  reset_status ();

  return 1;
}
static void
init_store_cols (void)
{
  int total_lines = lines_per_body * columns;
  int chars_if_truncate = total_lines * (chars_per_column + 1);

  free (line_vector);

  line_vector = xmalloc ((total_lines + 1) * sizeof (int *));

  free (end_vector);
  end_vector = xmalloc (total_lines * sizeof (int *));

  free (buff);
  buff_allocated = (use_col_separator
      ? 2 * chars_if_truncate
      : chars_if_truncate);
  buff = xmalloc (buff_allocated);
}
static void
store_columns (void)
{
  int i, j;
  int line = 0;
  int buff_start;
  int last_col;
  COLUMN *p;

  buff_current = 0;
  buff_start = 0;

  if (balance_columns)
    last_col = columns;
  else
    last_col = columns - 1;

  for (i = 1, p = column_vector; i <= last_col; ++i, ++p)
    p->lines_stored = 0;

  for (i = 1, p = column_vector; i <= last_col && files_ready_to_read;
       ++i, ++p)
    {
      p->current_line = line;
      for (j = lines_per_body; j && files_ready_to_read; --j)

 if (p->status == OPEN)
   {
     input_position = 0;

     if (!read_line (p))
       read_rest_of_line (p);

     if (p->status == OPEN
  || buff_start != buff_current)
       {
  ++p->lines_stored;
  line_vector[line] = buff_start;
  end_vector[line++] = input_position;
  buff_start = buff_current;
       }
   }
    }


  line_vector[line] = buff_start;

  if (balance_columns)
    balance (line);
}

static void
balance (int total_stored)
{
  COLUMN *p;
  int i, lines;
  int first_line = 0;

  for (i = 1, p = column_vector; i <= columns; ++i, ++p)
    {
      lines = total_stored / columns;
      if (i <= total_stored % columns)
 ++lines;

      p->lines_stored = lines;
      p->current_line = first_line;

      first_line += lines;
    }
}



static void
store_char (char c)
{
  if (buff_current >= buff_allocated)
    {

      buff = ((void) (!!sizeof (struct { unsigned int verify_error_if_negative_size__: (sizeof *(buff) == 1) ? 1 : -1; })), x2realloc (buff, &buff_allocated));
    }
  buff[buff_current++] = c;
}

static void
add_line_number (COLUMN *p)
{
  int i;
  char *s;
  int left_cut;



  if (line_number < power_10)
    sprintf (number_buff, "%*d", chars_per_number, line_number);
  else
    {
      left_cut = line_number % power_10;
      sprintf (number_buff, "%0*d", chars_per_number, left_cut);
    }
  line_number++;
  s = number_buff;
  for (i = chars_per_number; i > 0; i--)
    (p->char_func) (*s++);

  if (columns > 1)
    {



      if (number_separator == '\t')
        {
          i = number_width - chars_per_number;
          while (i-- > 0)
     (p->char_func) (' ');
        }
      else
        (p->char_func) (number_separator);
    }
  else



    {
      (p->char_func) (number_separator);
      if (number_separator == '\t')
        output_position = ((output_position) + ((chars_per_output_tab) - ((output_position) % (chars_per_output_tab))));

    }

  if (truncate_lines & !parallel_files)
    input_position += number_width;
}




static void
pad_across_to (int position)
{
  int h = output_position;

  if (tabify_output)
    spaces_not_printed = position - output_position;
  else
    {
      while (++h <= position)
 putchar_unlocked (' ');
      output_position = position;
    }
}






static void
pad_down (int lines)
{
  int i;

  if (use_form_feed)
    putchar_unlocked ('\f');
  else
    for (i = lines; i; --i)
      putchar_unlocked ('\n');
}







static void
read_rest_of_line (COLUMN *p)
{
  int c;
  FILE *f = p->fp;

  while ((c = getc_unlocked (f)) != '\n')
    {
      if (c == '\f')
 {
   if ((c = getc_unlocked (f)) != '\n')
     ungetc (c, f);
   if (keep_FF)
     print_a_FF = 1;
   hold_file (p);
   break;
 }
      else if (c == (-1))
 {
   close_file (p);
   break;
 }
    }
}
static void
skip_read (COLUMN *p, int column_number)
{
  int c;
  FILE *f = p->fp;
  int i;
  _Bool single_ff = 0;
  COLUMN *q;


  if ((c = getc_unlocked (f)) == '\f' && p->full_page_printed)


    if ((c = getc_unlocked (f)) == '\n')
      c = getc_unlocked (f);

  p->full_page_printed = 0;



  if (c == '\f')
    single_ff = 1;



  if (last_line)
    p->full_page_printed = 1;

  while (c != '\n')
    {
      if (c == '\f')
 {


   if (last_line)
     {
       if (!parallel_files)
  for (q = column_vector, i = columns; i; ++q, --i)
    q->full_page_printed = 0;
       else
  p->full_page_printed = 0;
     }

   if ((c = getc_unlocked (f)) != '\n')
     ungetc (c, f);
   hold_file (p);
   break;
 }
      else if (c == (-1))
 {
   close_file (p);
   break;
 }
      c = getc_unlocked (f);
    }

  if (skip_count)
    if ((!parallel_files || column_number == 1) && !single_ff)
      ++line_count;
}







static void
print_white_space (void)
{
  int h_new;
  int h_old = output_position;
  int goal = h_old + spaces_not_printed;

  while (goal - h_old > 1
  && (h_new = ((h_old) + ((chars_per_output_tab) - ((h_old) % (chars_per_output_tab))))) <= goal)
    {
      putchar_unlocked (output_tab_char);
      h_old = h_new;
    }
  while (++h_old <= goal)
    putchar_unlocked (' ');

  output_position = goal;
  spaces_not_printed = 0;
}






static void
print_sep_string (void)
{
  char *s;
  int l = col_sep_length;

  s = col_sep_string;

  if (separators_not_printed <= 0)
    {

      if (spaces_not_printed > 0)
 print_white_space ();
    }
  else
    {
      for (; separators_not_printed > 0; --separators_not_printed)
 {
   while (l-- > 0)
     {


       if (*s == ' ')
  {


    s++;
    ++spaces_not_printed;
  }
       else
  {
    if (spaces_not_printed > 0)
      print_white_space ();
    putchar_unlocked (*s++);
    ++output_position;
  }
     }

   if (spaces_not_printed > 0)
     print_white_space ();
 }
    }
}




static void
print_clump (COLUMN *p, int n, char *clump)
{
  while (n--)
    (p->char_func) (*clump++);
}
static void
print_char (char c)
{
  if (tabify_output)
    {
      if (c == ' ')
 {
   ++spaces_not_printed;
   return;
 }
      else if (spaces_not_printed > 0)
 print_white_space ();


      if (! ((*__ctype_b_loc ())[(int) ((to_uchar (c)))] & (unsigned short int) _ISprint))
 {
   if (c == '\b')
     --output_position;
 }
      else
 ++output_position;
    }
  putchar_unlocked (c);
}




static _Bool
skip_to_page (uintmax_t page)
{
  uintmax_t n;
  int i;
  int j;
  COLUMN *p;

  for (n = 1; n < page; ++n)
    {
      for (i = 1; i < lines_per_body; ++i)
 {
   for (j = 1, p = column_vector; j <= columns; ++j, ++p)
     if (p->status == OPEN)
       skip_read (p, j);
 }
      last_line = 1;
      for (j = 1, p = column_vector; j <= columns; ++j, ++p)
 if (p->status == OPEN)
   skip_read (p, j);

      if (storing_columns)
 for (j = 1, p = column_vector; j <= columns; ++j, ++p)
   if (p->status != CLOSED)
     p->status = ON_HOLD;

      reset_status ();
      last_line = 0;

      if (files_ready_to_read < 1)
        {


   error (0, 0,
   ((const char *) ("starting page number %""l" "u" " exceeds page count %""l" "u")),

   page, n);
          break;
 }
    }
  return files_ready_to_read > 0;
}






static void
print_header (void)
{
  char page_text[256 + ((sizeof (page_number) * 8 - (! ((__typeof__ (page_number)) 0 < (__typeof__ (page_number)) -1))) * 146 / 485 + (! ((__typeof__ (page_number)) 0 < (__typeof__ (page_number)) -1)) + 1)];
  int available_width;
  int lhs_spaces;
  int rhs_spaces;

  output_position = 0;
  pad_across_to (chars_per_margin);
  print_white_space ();

  if (page_number == 0)
    error (1, 0, ((const char *) ("Page number overflow")));




  sprintf (page_text, ((const char *) ("Page %""l" "u")), page_number++);
  available_width = header_width_available - gnu_mbswidth (page_text, 0);
  available_width = (((0)>(available_width))?(0):(available_width));
  lhs_spaces = available_width >> 1;
  rhs_spaces = available_width - lhs_spaces;

  printf ("\n\n%s%*s%s%*s%s\n\n\n",
   date_text, lhs_spaces, " ", file_text, rhs_spaces, " ", page_text);

  print_a_header = 0;
  output_position = 0;
}
static _Bool
read_line (COLUMN *p)
{
  int c;
  int chars ;
  int last_input_position;
  int j, k;
  COLUMN *q;


  c = getc_unlocked (p->fp);

  last_input_position = input_position;

  if (c == '\f' && p->full_page_printed)
    if ((c = getc_unlocked (p->fp)) == '\n')
      c = getc_unlocked (p->fp);
  p->full_page_printed = 0;

  switch (c)
    {
    case '\f':
      if ((c = getc_unlocked (p->fp)) != '\n')
 ungetc (c, p->fp);
      FF_only = 1;
      if (print_a_header & !storing_columns)
 {
   pad_vertically = 1;
   print_header ();
 }
      else if (keep_FF)
 print_a_FF = 1;
      hold_file (p);
      return 1;
    case (-1):
      close_file (p);
      return 1;
    case '\n':
      break;
    default:
      chars = char_to_clump (c);
    }

  if (truncate_lines && input_position > chars_per_column)
    {
      input_position = last_input_position;
      return 0;
    }

  if (p->char_func != store_char)
    {
      pad_vertically = 1;

      if (print_a_header & !storing_columns)
 print_header ();

      if (parallel_files & align_empty_cols)
 {

   k = separators_not_printed;
   separators_not_printed = 0;
   for (j = 1, q = column_vector; j <= k; ++j, ++q)
     {
       align_column (q);
       separators_not_printed += 1;
     }
   padding_not_printed = p->start_position;
   if (truncate_lines)
     spaces_not_printed = chars_per_column;
   else
     spaces_not_printed = 0;
   align_empty_cols = 0;
 }

      if (padding_not_printed - col_sep_length > 0)
 {
   pad_across_to (padding_not_printed - col_sep_length);
   padding_not_printed = 0;
 }

      if (use_col_separator)
 print_sep_string ();
    }

  if (p->numbered)
    add_line_number (p);

  empty_line = 0;
  if (c == '\n')
    return 1;

  print_clump (p, chars, clump_buff);

  for (;;)
    {
      c = getc_unlocked (p->fp);

      switch (c)
 {
 case '\n':
   return 1;
 case '\f':
   if ((c = getc_unlocked (p->fp)) != '\n')
     ungetc (c, p->fp);
   if (keep_FF)
     print_a_FF = 1;
   hold_file (p);
   return 1;
 case (-1):
   close_file (p);
   return 1;
 }

      last_input_position = input_position;
      chars = char_to_clump (c);
      if (truncate_lines && input_position > chars_per_column)
 {
   input_position = last_input_position;
   return 0;
 }

      print_clump (p, chars, clump_buff);
    }
}
static _Bool
print_stored (COLUMN *p)
{
  COLUMN *q;
  int i;

  int line = p->current_line++;
  char *first = &buff[line_vector[line]];
  char *last = &buff[line_vector[line + 1]];

  pad_vertically = 1;

  if (print_a_header)
    print_header ();

  if (p->status == FF_FOUND)
    {
      for (i = 1, q = column_vector; i <= columns; ++i, ++q)
 q->status = ON_HOLD;
      if (column_vector->lines_to_print <= 0)
 {
   if (!extremities)
     pad_vertically = 0;
   return 1;
 }
    }

  if (padding_not_printed - col_sep_length > 0)
    {
      pad_across_to (padding_not_printed - col_sep_length);
      padding_not_printed = 0;
    }

  if (use_col_separator)
    print_sep_string ();

  while (first != last)
    print_char (*first++);

  if (spaces_not_printed == 0)
    {
      output_position = p->start_position + end_vector[line];
      if (p->start_position - col_sep_length == chars_per_margin)
 output_position -= col_sep_length;
    }

  return 1;
}
static int
char_to_clump (char c)
{
  unsigned char uc = c;
  char *s = clump_buff;
  int i;
  char esc_buff[4];
  int width;
  int chars;
  int chars_per_c = 8;

  if (c == input_tab_char)
    chars_per_c = chars_per_input_tab;

  if (c == input_tab_char || c == '\t')
    {
      width = ((chars_per_c) - ((input_position) % (chars_per_c)));

      if (untabify_input)
 {
   for (i = width; i; --i)
     *s++ = ' ';
   chars = width;
 }
      else
 {
   *s = c;
   chars = 1;
 }

    }
  else if (! ((*__ctype_b_loc ())[(int) ((uc))] & (unsigned short int) _ISprint))
    {
      if (use_esc_sequence)
 {
   width = 4;
   chars = 4;
   *s++ = '\\';
   sprintf (esc_buff, "%03o", uc);
   for (i = 0; i <= 2; ++i)
     *s++ = esc_buff[i];
 }
      else if (use_cntrl_prefix)
 {
   if (uc < 0200)
     {
       width = 2;
       chars = 2;
       *s++ = '^';
       *s++ = c ^ 0100;
     }
   else
     {
       width = 4;
       chars = 4;
       *s++ = '\\';
       sprintf (esc_buff, "%03o", uc);
       for (i = 0; i <= 2; ++i)
  *s++ = esc_buff[i];
     }
 }
      else if (c == '\b')
 {
   width = -1;
   chars = 1;
   *s = c;
 }
      else
 {
   width = 0;
   chars = 1;
   *s = c;
 }
    }
  else
    {
      width = 1;
      chars = 1;
      *s = c;
    }


  if (width < 0 && input_position == 0)
    {
      chars = 0;
      input_position = 0;
    }
  else if (width < 0 && input_position <= -width)
    input_position = 0;
  else
    input_position += width;

  return chars;
}






static void
cleanup (void)
{
  free (number_buff);
  free (clump_buff);
  free (column_vector);
  free (line_vector);
  free (end_vector);
  free (buff);
}



void
usage (int status)
{
  if (status != 0)
    fprintf (stderr, ((const char *) ("Try `%s --help' for more information.\n")),
      program_name);
  else
    {
      printf (((const char *) ("Usage: %s [OPTION]... [FILE]...\n")),


       program_name);

      fputs_unlocked (((const char *) ("Paginate or columnate FILE(s) for printing.\n\n")),stdout);



      fputs_unlocked (((const char *) ("Mandatory arguments to long options are mandatory for short options too.\n")),stdout);


      fputs_unlocked (((const char *) ("  +FIRST_PAGE[:LAST_PAGE], --pages=FIRST_PAGE[:LAST_PAGE]\n                    begin [stop] printing with page FIRST_[LAST_]PAGE\n  -COLUMN, --columns=COLUMN\n                    output COLUMN columns and print columns down,\n                    unless -a is used. Balance number of lines in the\n                    columns on each page.\n")),stdout);







      fputs_unlocked (((const char *) ("  -a, --across      print columns across rather than down, used together\n                    with -COLUMN\n  -c, --show-control-chars\n                    use hat notation (^G) and octal backslash notation\n  -d, --double-space\n                    double space the output\n")),stdout);







      fputs_unlocked (((const char *) ("  -D, --date-format=FORMAT\n                    use FORMAT for the header date\n  -e[CHAR[WIDTH]], --expand-tabs[=CHAR[WIDTH]]\n                    expand input CHARs (TABs) to tab WIDTH (8)\n  -F, -f, --form-feed\n                    use form feeds instead of newlines to separate pages\n                    (by a 3-line page header with -F or a 5-line header\n                    and trailer without -F)\n")),stdout);
      fputs_unlocked (((const char *) ("  -h HEADER, --header=HEADER\n                    use a centered HEADER instead of filename in page header,\n                    -h \"\" prints a blank line, don't use -h\"\"\n  -i[CHAR[WIDTH]], --output-tabs[=CHAR[WIDTH]]\n                    replace spaces with CHARs (TABs) to tab WIDTH (8)\n  -J, --join-lines  merge full lines, turns off -W line truncation, no column\n                    alignment, --sep-string[=STRING] sets separators\n")),stdout);
      fputs_unlocked (((const char *) ("  -l PAGE_LENGTH, --length=PAGE_LENGTH\n                    set the page length to PAGE_LENGTH (66) lines\n                    (default number of lines of text 56, and with -F 63)\n  -m, --merge       print all files in parallel, one in each column,\n                    truncate lines, but join lines of full length with -J\n")),stdout);






      fputs_unlocked (((const char *) ("  -n[SEP[DIGITS]], --number-lines[=SEP[DIGITS]]\n                    number lines, use DIGITS (5) digits, then SEP (TAB),\n                    default counting starts with 1st line of input file\n  -N NUMBER, --first-line-number=NUMBER\n                    start counting with NUMBER at 1st line of first\n                    page printed (see +FIRST_PAGE)\n")),stdout);







      fputs_unlocked (((const char *) ("  -o MARGIN, --indent=MARGIN\n                    offset each line with MARGIN (zero) spaces, do not\n                    affect -w or -W, MARGIN will be added to PAGE_WIDTH\n  -r, --no-file-warnings\n                    omit warning when a file cannot be opened\n")),stdout);






      fputs_unlocked (((const char *) ("  -s[CHAR],--separator[=CHAR]\n                    separate columns by a single character, default for CHAR\n                    is the <TAB> character without -w and \'no char\' with -w\n                    -s[CHAR] turns off line truncation of all 3 column\n                    options (-COLUMN|-a -COLUMN|-m) except -w is set\n")),stdout);






      fputs_unlocked (((const char *) ("  -SSTRING, --sep-string[=STRING]\n")),stdout);


      fputs_unlocked (((const char *) ("                    separate columns by STRING,\n                    without -S: Default separator <TAB> with -J and <space>\n                    otherwise (same as -S\" \"), no effect on column options\n  -t, --omit-header  omit page headers and trailers\n")),stdout);





      fputs_unlocked (((const char *) ("  -T, --omit-pagination\n                    omit page headers and trailers, eliminate any pagination\n                    by form feeds set in input files\n  -v, --show-nonprinting\n                    use octal backslash notation\n  -w PAGE_WIDTH, --width=PAGE_WIDTH\n                    set page width to PAGE_WIDTH (72) characters for\n                    multiple text-column output only, -s[char] turns off (72)\n")),stdout);
      fputs_unlocked (((const char *) ("  -W PAGE_WIDTH, --page-width=PAGE_WIDTH\n                    set page width to PAGE_WIDTH (72) characters always,\n                    truncate lines, except -J option is set, no interference\n                    with -S or -s\n")),stdout);





      fputs_unlocked (((const char *) ("      --help     display this help and exit\n")),stdout);
      fputs_unlocked (((const char *) ("      --version  output version information and exit\n")),stdout);
      fputs_unlocked (((const char *) ("\n-t is implied if PAGE_LENGTH <= 10.  With no FILE, or when\nFILE is -, read standard input.\n")),stdout);




      emit_bug_reporting_address ();
    }
  exit (status);
}

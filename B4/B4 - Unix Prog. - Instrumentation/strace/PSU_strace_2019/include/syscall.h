/*
** EPITECH PROJECT, 2020
** PSU_strace_2019
** File description:
** TODO: add description
*/

#ifndef PSU_STRACE_2019_SYSCALL_H
#define PSU_STRACE_2019_SYSCALL_H

#include <stddef.h>

typedef enum sys_type_s
{
    UNKNOWN,
    INT,
    UNSIGNED_INT,
    CONST_CHAR_E,
    SSIZE_T,
    VOID_P,
    SIZE_T,
    STRUCT_STAT_E,
    STRUCT_POLLFD_E,
    LONG,
    UNSIGNED_LONG,
    OFF_T,
    VOID_E,
    CONST_VOID_E,
    STRUCT_SHMID_DS_E,
    CHAR_E,
    KEY_T,
    STRUCT_TIMESPEC_E,
    STRUCT_ITIMERVAL_E,
    PID_T,
    CONST_STRUCT_SIGACTION_E,
    STRUCT_SIGACTION_E,
    SIGSET_T_E,
    CONST_STRUCT_IOVEC_E,
    LOFF_T,
    STRUCT_POLL_FD_E,
    STRUCT_SOCKADDR_E,
    INT_E,
    CONST_CHAR_E_CONST,
    STRUCT_MSGBUF_E,
    STRUCT_MSQID_DS_E,
    STRUCT_LINUX_DIRENT_E,
    MODE_T,
    UID_T,
    GID_T,
    STRUCT_TIMEVAL_E,
    STRUCT_TIMEZONE_E,
    STRUCT_RLIMIT_E,
    STRUCT_RUSAGE_E,
    STRUCT_SYSINFO_E,
    GID_T_E,
    UID_T_E,
    CONST_STACK_T_E,
    STACK_T_E,
    STRUCT_UTIMBUF_E,
    UMODE_T,
    UNSIGNED,
    STRUCT_USTAT_E,
    STRUCT_STATFS_E,
    STRUCT___SYSCTL_ARGS_E,
    STRUCT_TASK_STRUCT_E,
    UNSIGNED_LONG_E,
    STRUCT_TIMEX_E,
    QID_T,
    STRUCT_PT_REGS_E,
    CADDR_T,
    AIO_CONTEXT_T,
    STRUCT_IOCB_E,
    STRUCT_IO_EVENT_E,
    U64,
    STRUCT_LINUX_DIRENT64_E,
    CONST_CLOCKID_T,
    CONST_STRUCT_TIMESPEC_E,
    STRUCT_EPOLL_EVENT_E,
    VOID,
    U32,
    __S32,
    CONST_UNSIGNED_LONG_E,
    FD_SET_E,
    CONST_SIGSET_T_E,
    STRUCT_ROBUST_LIST_HEAD_E,
    STRUCT_ROBUST_LIST_HEAD_EE,
    SIZE_T_E,
    LOFF_T_E,
    CONST_VOID_EE,
    CONST_INT_E,
    STRUCT_MSGHDR_E,
    STRUCT_PERF_EVENT_ATTR_E,
    SIGINFO_T_E,
    CONST_CHAR___USER_E,
    CHAR___USER_E,
    STRUCT_SCHED_ATTR___USER_E,
    STRUCT_STATX_E,
    NFDS_T,
    UNSIGNED_CHAR_E,
    OFF_T_E,
    CONST_STRUCT_SOCKADDR_E,
    SOCKLEN_T,
    SOCKLEN_T_E,
    CONST_STRUCT_MSGHDR_E,
    STRUCT_UTSNAME_E,
    STRUCT_SEMBUF_E,
    CLOCK_T,
    STRUCT_TMS_E,
    ENUM__PTRACE_REQUEST,
    CAP_USER_HEADER_T,
    CAP_USER_DATA_T,
    CONST_CAP_USER_DATA_T,
    ID_T,
    CONST_STRUCT_SCHED_PARAM_E,
    STRUCT_SCHED_PARAM_E,
    CONST_STRUCT_RLIMIT_E,
    CONST_STRUCT_TIMEZONE_E,
    CONST_STRUCT_TIMEVAL_E,
    STRUCT_NFSCTL_ARG_E,
    UNION_NFSCTL_RES_E,
    STRUCT_STRBUF_E,
    CONST_STRUCT_STRBUF_E,
    OFF64_T,
    TIME_T_E,
    TIME_T,
    CONST_CPU_SET_T_E,
    CPU_SET_T_E,
    STRUCT_USER_DESC_E,
    AIO_CONTEXT_T_E,
    STRUCT_IOCB_EE,
    CLOCKID_T,
    STRUCT_SIGEVENT_E,
    TIMER_T_E,
    TIMER_T,
    CONST_STRUCT_ITIMERSPEC_E,
    STRUCT_ITIMERSPEC_E,
    MQD_T,
    STRUCT_MQ_ATTR_E,
    UNSIGNED_INT_E,
    CONST_STRUCT_SIGEVENT_E,
    STRUCT_KEXEC_SEGMENT_E,
    IDTYPE_T,
    KEY_SERIAL_T,
    UINT64_T,
    STRUCT_FILE_HANDLE_E,
    STRUCT_MMSGHDR_E,
    UNSIGNED_E,
    STRUCT_GETCPU_CACHE_E,
    UNION_BPF_ATTR_E,
    CHAR_EE
} sys_type;

typedef struct syscall_s
{
    int id;
    char *name;
    sys_type return_type;
    sys_type p1;
    sys_type p2;
    sys_type p3;
    sys_type p4;
    sys_type p5;
    sys_type p6;
} syscall_t;

static const syscall_t syscalls[] =
{
    {0, "read", SSIZE_T, INT, VOID_E, SIZE_T, UNKNOWN, UNKNOWN, UNKNOWN},
    {1, "write", SSIZE_T, INT, CONST_VOID_E, SIZE_T, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {2, "open", INT, CONST_CHAR_E, INT, MODE_T, UNKNOWN, UNKNOWN, UNKNOWN},
    {3, "close", INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {4, "stat", INT, CONST_CHAR_E, STRUCT_STAT_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {5, "fstat", INT, INT, STRUCT_STAT_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {6, "lstat", INT, CONST_CHAR_E, STRUCT_STAT_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {7, "poll", INT, STRUCT_POLL_FD_E, NFDS_T, INT, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {8, "lseek", OFF_T, INT, OFF_T, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {9, "mmap", VOID_E, VOID_E, SIZE_T, INT, INT, OFF_T, UNKNOWN},

    {10, "mprotect", INT, VOID_E, SIZE_T, UNSIGNED_LONG, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {11, "munmap", INT, VOID_E, SIZE_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {12, "brk", INT, VOID_E, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {13, "rt_sigaction", INT, INT, CONST_STRUCT_SIGACTION_E,
        STRUCT_SIGACTION_E, SIZE_T, UNKNOWN, UNKNOWN},
    {14, "rt_sigprocmask", INT, INT, SIGSET_T_E, SIGSET_T_E, SIZE_T,
        UNKNOWN, UNKNOWN},
    {15, "rt_sigreturn", INT, UNSIGNED_LONG, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {16, "ioctl", INT, UNSIGNED_INT, UNSIGNED_INT, UNSIGNED_LONG,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {17, "pread64", SSIZE_T, UNSIGNED_LONG, CHAR_E, SIZE_T, LOFF_T,
        UNKNOWN, UNKNOWN},
    {18, "pwrite64", SSIZE_T, UNSIGNED_INT, CONST_CHAR_E, SIZE_T, LOFF_T,
        UNKNOWN, UNKNOWN},
    {19, "readv", SSIZE_T, UNSIGNED_LONG, CONST_STRUCT_IOVEC_E,
        UNSIGNED_LONG, UNKNOWN, UNKNOWN, UNKNOWN},

    {20, "writev", SSIZE_T, INT, CONST_STRUCT_IOVEC_E, INT, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {21, "access", INT, CONST_CHAR_E, INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {22, "pipe", INT, INT_E, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {23, "select", INT, INT, FD_SET_E, FD_SET_E, FD_SET_E,
        STRUCT_TIMEVAL_E, UNKNOWN},
    {24, "sched_yield", INT, VOID, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {25, "mremap", VOID_E, VOID_E, SIZE_T, SIZE_T, INT, VOID_E, UNKNOWN},
    {26, "msync", INT, VOID_E, SIZE_T, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {27, "mincore", INT, VOID_E, SIZE_T, UNSIGNED_CHAR_E, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {28, "madvise", INT, VOID_E, SIZE_T, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {29, "shmget", INT, KEY_T, SIZE_T, INT, UNKNOWN, UNKNOWN, UNKNOWN},

    {30, "shmat", VOID_E, INT, CHAR_E, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {31, "shmctl", INT, INT, INT, STRUCT_SHMID_DS_E, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {32, "dup", INT, UNSIGNED_INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {33, "dup2", INT, UNSIGNED_INT, UNSIGNED_INT, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {34, "pause", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {35, "nanosleep", INT, STRUCT_TIMESPEC_E, STRUCT_TIMESPEC_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {36, "getitimer", INT, INT, STRUCT_ITIMERVAL_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {37, "alarm", UNSIGNED_INT, UNSIGNED_INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {38, "setitimer", INT, INT, STRUCT_ITIMERVAL_E, STRUCT_ITIMERVAL_E,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {39, "getpid", PID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},

    {40, "sendfile", SSIZE_T, INT, INT, OFF_T_E, SIZE_T, UNKNOWN, UNKNOWN},
    {41, "socket", INT, INT, INT, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {42, "connect", INT, INT, CONST_STRUCT_SOCKADDR_E, SOCKLEN_T,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {43, "accept", INT, INT, STRUCT_SOCKADDR_E, SOCKLEN_T_E, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {44, "sendto", SSIZE_T, INT, CONST_VOID_E, SIZE_T, INT,
        CONST_STRUCT_SOCKADDR_E, SOCKLEN_T},
    {45, "recvfrom", SSIZE_T, INT, VOID_E, SIZE_T, INT,
        STRUCT_SOCKADDR_E, SOCKLEN_T_E},
    {46, "sendmsg", SSIZE_T, INT, CONST_STRUCT_MSGHDR_E, INT, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {47, "recvmsg", SSIZE_T, INT, STRUCT_MSGHDR_E, INT, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {48, "shutdown", INT, INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {49, "bind", INT, INT, CONST_STRUCT_SOCKADDR_E, SOCKLEN_T, UNKNOWN,
        UNKNOWN, UNKNOWN},

    {50, "listen", INT, INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {51, "getsockname", INT, INT, STRUCT_SOCKADDR_E, INT_E, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {52, "getpeername", INT, INT, STRUCT_SOCKADDR_E, INT_E, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {53, "socketpair", INT, INT, INT, INT, INT_E, UNKNOWN, UNKNOWN},
    {54, "setsockopt", INT, INT, INT, INT, CHAR_E, INT, UNKNOWN},
    {55, "getsockopt", INT, INT, INT, INT, CHAR_E, INT_E, UNKNOWN},
    {56, "clone", INT, UNSIGNED_LONG, UNSIGNED_LONG, VOID_E, VOID_E,
        UNSIGNED_INT, UNKNOWN},
    {57, "fork", PID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {58, "vfork", PID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {59, "execve", INT, CONST_CHAR_E, CONST_CHAR_E_CONST,
        CONST_CHAR_E_CONST, UNKNOWN, UNKNOWN, UNKNOWN},

    {60, "exit", VOID, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {61, "wait4", PID_T, PID_T, INT_E, INT, STRUCT_RUSAGE_E, UNKNOWN,
        UNKNOWN},
    {62, "kill", INT, PID_T, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {63, "uname", INT, STRUCT_UTSNAME_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {64, "semget", INT, KEY_T, INT, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {65, "semop", INT, INT, STRUCT_SEMBUF_E, SIZE_T, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {66, "semctl", INT, INT, INT, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {67, "shmdt", INT, CONST_VOID_E, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {68, "msgget", INT, KEY_T, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {69, "msgsnd", INT, INT, CONST_VOID_E, SIZE_T, INT, UNKNOWN, UNKNOWN},

    {70, "msgrcv", INT, INT, STRUCT_MSGBUF_E, SIZE_T, LONG, INT, UNKNOWN},
    {71, "msgctl", INT, INT, INT, STRUCT_MSQID_DS_E, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {72, "fcntl", INT, UNSIGNED_INT, UNSIGNED_INT, UNSIGNED_LONG,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {73, "flock", INT, UNSIGNED_INT, UNSIGNED_INT, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {74, "fsync", INT, UNSIGNED_INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {75, "fdatasync", INT, UNSIGNED_INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {76, "truncate", INT, CONST_CHAR_E, LONG, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {77, "ftruncate", INT, UNSIGNED_INT, UNSIGNED_LONG, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {78, "getdents", INT, UNSIGNED_INT, STRUCT_LINUX_DIRENT_E,
        UNSIGNED_INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {79, "getcwd", CHAR_E, CHAR_E, UNSIGNED_LONG, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},

    {80, "chdir", INT, CONST_CHAR_E, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {81, "fchdir", INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {82, "rename", INT, CONST_CHAR_E, CONST_CHAR_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {83, "mkdir", INT, CONST_CHAR_E, MODE_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {84, "rmdir", INT, CONST_CHAR_E, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {85, "creat", INT, CONST_CHAR_E, MODE_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {86, "link", INT, CONST_CHAR_E, CONST_CHAR_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {87, "unlink", INT, CONST_CHAR_E, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {88, "symlink", INT, CONST_CHAR_E, CONST_CHAR_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {89, "readlink", SSIZE_T, CONST_CHAR_E, CHAR_E, SIZE_T, UNKNOWN,
        UNKNOWN, UNKNOWN},

    {90, "chmod", INT, CONST_CHAR_E, MODE_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {91, "fchmod", INT, UNSIGNED_INT, MODE_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {92, "chown", INT, CONST_CHAR_E, UID_T, GID_T, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {93, "fchown", INT, UNSIGNED_INT, UID_T, GID_T, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {94, "lchown", INT, CONST_CHAR_E, UID_T, GID_T, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {95, "umask", MODE_T, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {96, "gettimeofday", INT, STRUCT_TIMEVAL_E, STRUCT_TIMEZONE_E,
        UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {97, "getrlimit", INT, UNSIGNED_INT, STRUCT_RLIMIT_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {98, "getrusage", INT, INT, STRUCT_RUSAGE_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {99, "sysinfo", INT, STRUCT_SYSINFO_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},

    {100, "times", CLOCK_T, STRUCT_TMS_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {101, "ptrace", LONG, ENUM__PTRACE_REQUEST, PID_T, VOID_E, VOID_E,
        UNKNOWN, UNKNOWN},
    {102, "getuid", UID_T, VOID, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {103, "syslog", INT, INT, CHAR_E, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {104, "getgid", GID_T, VOID, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {105, "setuid", INT, UID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {106, "setgid", INT, GID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {107, "geteuid", UID_T, VOID, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {108, "getegid", GID_T, VOID, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {109, "setpgid", INT, PID_T, PID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},

    {110, "getppid", PID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {111, "getpgrp", PID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {112, "setsid", PID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {113, "setreuid", INT, UID_T, UID_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {114, "setregid", INT, GID_T, GID_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {115, "getgroups", INT, INT, GID_T_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {116, "setgroups", INT, INT, GID_T_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {117, "setresuid", INT, UID_T_E, UID_T_E, UID_T_E, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {118, "getresuid", INT, UID_T_E, UID_T_E, UID_T_E, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {119, "setresgid", INT, GID_T, GID_T, GID_T, UNKNOWN, UNKNOWN, UNKNOWN},

    {120, "getresgid", INT, GID_T_E, GID_T_E, GID_T_E, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {121, "getpgid", PID_T, PID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {122, "setfsuid", INT, UID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {123, "setfsgid", INT, UID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {124, "getsid", PID_T, PID_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {125, "capget", INT, CAP_USER_HEADER_T, CAP_USER_DATA_T, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {126, "capset", INT, CAP_USER_HEADER_T, CONST_CAP_USER_DATA_T,
        UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {127, "sigpending", INT, SIGSET_T_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {128, "sigtimedwait", INT, CONST_SIGSET_T_E, SIGINFO_T_E,
        CONST_STRUCT_TIMESPEC_E, UNKNOWN, UNKNOWN, UNKNOWN},
    {129, "rt_sigqueueinfo", INT, PID_T, INT, SIGINFO_T_E, UNKNOWN,
        UNKNOWN, UNKNOWN},

    {130, "rt_sigsuspend", INT, SIGSET_T_E, SIZE_T, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {131, "sigaltstack", INT, CONST_STACK_T_E, STACK_T_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {132, "utime", INT, CHAR_E, STRUCT_UTIMBUF_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {133, "mknod", INT, CONST_CHAR_E, UMODE_T, UNSIGNED, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {134, "uselib", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {135, "personality", INT, UNSIGNED_INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {136, "ustat", INT, UNSIGNED, STRUCT_USTAT_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {137, "statfs", INT, CONST_CHAR_E, STRUCT_STATFS_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {138, "fstatfs", INT, UNSIGNED_INT, STRUCT_STATFS_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {139, "sysfs", INT, INT, UNSIGNED_LONG, UNSIGNED_LONG, UNKNOWN,
        UNKNOWN, UNKNOWN},

    {140, "getpriority", INT, INT, ID_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {141, "setpriority", INT, INT, ID_T, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {142, "sched_setparam", INT, PID_T, CONST_STRUCT_SCHED_PARAM_E,
        UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {143, "sched_getparam", INT, PID_T, STRUCT_SCHED_PARAM_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {144, "sched_setscheduler", INT, PID_T, INT,
        CONST_STRUCT_SCHED_PARAM_E, UNKNOWN, UNKNOWN, UNKNOWN},
    {145, "sched_getscheduler", INT, PID_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {146, "sched_get_priority_max", INT, INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {147, "sched_get_priority_min", INT, INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {148, "sched_rr_get_interval", INT, PID_T, STRUCT_TIMESPEC_E,
        UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {149, "mlock", INT, CONST_VOID_E, SIZE_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},

    {150, "munlock", INT, INT, UNSIGNED_LONG, SIZE_T, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {151, "mlockall", INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {152, "munlockall", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {153, "vhangup", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {154, "modify_ldt", INT, INT, VOID_E, UNSIGNED_LONG, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {155, "pivot_root", INT, CONST_CHAR_E, CONST_CHAR_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {156, "_sysctl", INT, STRUCT___SYSCTL_ARGS_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {157, "prctl", INT, INT, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG,
        UNKNOWN, UNSIGNED_LONG},
    {158, "arch_prctl", INT, INT, VOID_E,
        UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {159, "adjtimex", INT, STRUCT_TIMEX_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},

    {160, "setrlimit", INT, INT, CONST_STRUCT_RLIMIT_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {161, "chroot", INT, CONST_CHAR_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {162, "sync", VOID, VOID, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {163, "acct", INT, CONST_CHAR_E, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {164, "settimeofday", INT, CONST_STRUCT_TIMEVAL_E,
        CONST_STRUCT_TIMEZONE_E, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {165, "mount", INT, CONST_CHAR_E, CONST_CHAR_E, CONST_CHAR_E,
        UNSIGNED_LONG, CONST_VOID_E, UNKNOWN},
    {166, "umount2", INT, CONST_CHAR_E, INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {167, "swapon", INT, CONST_CHAR_E, INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {168, "swapoff", INT, CONST_CHAR_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {169, "reboot", INT, INT, INT, INT, VOID_E, UNKNOWN, UNKNOWN},

    {170, "sethostname", INT, CHAR_E, INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {171, "setdomainname", INT, CHAR_E, INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {172, "iopl", INT, UNSIGNED_INT, STRUCT_PT_REGS_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {173, "ioperm", INT, UNSIGNED_LONG, UNSIGNED_LONG, INT, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {174, "create_module", CADDR_T, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {175, "init_module", INT, VOID_E, UNSIGNED_LONG, CONST_CHAR_E,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {176, "delete_module", INT, CONST_CHAR_E, UNSIGNED_INT, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {177, "get_kernel_syms", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {178, "query_module", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {179, "quotactl", INT, UNSIGNED_INT, CONST_CHAR_E, QID_T, VOID_E,
        UNKNOWN, UNKNOWN},

    {180, "nfsservctl", LONG, INT, STRUCT_NFSCTL_ARG_E,
        UNION_NFSCTL_RES_E, UNKNOWN, UNKNOWN, UNKNOWN},
    {181, "getpmsg", INT, INT, STRUCT_STRBUF_E, STRUCT_STRBUF_E, INT_E,
        INT_E, UNKNOWN},
    {182, "putpmsg", INT, INT, CONST_STRUCT_STRBUF_E,
        CONST_STRUCT_STRBUF_E, INT, INT, UNKNOWN},
    {183, "afs_syscall", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {184, "tuxcall", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {185, "security", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {186, "gettid", PID_T, VOID, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {187, "readahead", SSIZE_T, INT, OFF64_T, SIZE_T, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {188, "setxattr", INT, CONST_CHAR_E, CONST_CHAR_E, CONST_VOID_E,
        SIZE_T, INT, UNKNOWN},
    {189, "lsetxattr", INT, CONST_CHAR_E, CONST_CHAR_E, CONST_VOID_E,
        SIZE_T, INT, UNKNOWN},

    {190, "fsetxattr", INT, INT, CONST_CHAR_E, CONST_VOID_E, SIZE_T, INT,
        UNKNOWN},
    {191, "getxattr", SSIZE_T, CONST_CHAR_E, CONST_CHAR_E, VOID_E,
        SIZE_T, UNKNOWN, UNKNOWN},
    {192, "lgetxattr", SSIZE_T, CONST_CHAR_E, CONST_CHAR_E, VOID_E,
        SIZE_T, UNKNOWN, UNKNOWN},
    {193, "fgetxattr", SSIZE_T, INT, CONST_CHAR_E, VOID_E, SIZE_T,
        UNKNOWN, UNKNOWN},
    {194, "listxattr", SSIZE_T, CONST_CHAR_E, CHAR_E, SIZE_T, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {195, "llistxattr", SIZE_T, CONST_CHAR_E, CHAR_E, SIZE_T, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {196, "flistxattr", SIZE_T, INT, CHAR_E, SIZE_T, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {197, "removexattr", INT, CONST_CHAR_E, CONST_CHAR_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {198, "lremovexattr", INT, CONST_CHAR_E, CONST_CHAR_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {199, "fremovexattr", INT, INT, CONST_CHAR_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},

    {200, "tkill", INT, INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {201, "time", TIME_T, TIME_T_E, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {202, "futex", INT, INT_E, INT, INT, CONST_STRUCT_TIMESPEC_E, INT_E,
        INT},
    {203, "sched_setaffinity", INT, PID_T, SIZE_T, CONST_CPU_SET_T_E,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {204, "sched_getaffinity", INT, PID_T, SIZE_T, CPU_SET_T_E, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {205, "set_thread_area", INT, STRUCT_USER_DESC_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {206, "io_setup", INT, UNSIGNED, AIO_CONTEXT_T_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {207, "io_destroy", INT, AIO_CONTEXT_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {208, "io_getevents", INT, AIO_CONTEXT_T, LONG, LONG,
        STRUCT_IO_EVENT_E, STRUCT_TIMESPEC_E, UNKNOWN},
    {209, "io_submit", INT, AIO_CONTEXT_T, LONG, STRUCT_IOCB_EE, UNKNOWN,
        UNKNOWN, UNKNOWN},

    {210, "io_cancel", INT, AIO_CONTEXT_T, STRUCT_IOCB_E,
        STRUCT_IO_EVENT_E, UNKNOWN, UNKNOWN, UNKNOWN},
    {211, "get_thread_area", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {212, "lookup_dcookie", INT, U64, LONG, LONG, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {213, "epoll_create", INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {214, "epoll_ctl_old", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {215, "epoll_wait_old", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {216, "remap_file_pages", INT, UNSIGNED_LONG, UNSIGNED_LONG,
        UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNKNOWN},
    {217, "getdents64", INT, UNSIGNED_INT, STRUCT_LINUX_DIRENT64_E,
        UNSIGNED_INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {218, "set_tid_address", LONG, INT_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {219, "restart_syscall", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},

    {220, "semtimedop", INT, INT, STRUCT_SEMBUF_E, SIZE_T,
        CONST_STRUCT_TIMESPEC_E, UNKNOWN, UNKNOWN},
    {221, "posix_fadvise", INT, INT, OFF_T, OFF_T, INT, UNKNOWN, UNKNOWN},
    {222, "timer_create", INT, CLOCKID_T, STRUCT_SIGEVENT_E, TIMER_T_E,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {223, "timer_settime", INT, TIMER_T, INT, CONST_STRUCT_ITIMERSPEC_E,
        STRUCT_ITIMERSPEC_E, UNKNOWN, UNKNOWN},
    {224, "timer_gettime", INT, TIMER_T, STRUCT_ITIMERSPEC_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {225, "timer_getoverrun", INT, TIMER_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {226, "timer_delete", INT, TIMER_T, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {227, "clock_settime", INT, CLOCKID_T, CONST_STRUCT_TIMESPEC_E,
        UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {228, "clock_gettime", INT, CLOCKID_T, STRUCT_TIMESPEC_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {229, "clock_getres", INT, CLOCKID_T, STRUCT_TIMESPEC_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},

    {230, "clock_nanosleep", INT, CONST_CLOCKID_T, INT,
        CONST_STRUCT_TIMESPEC_E, STRUCT_TIMESPEC_E, UNKNOWN, UNKNOWN},
    {231, "exit_group", VOID, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {232, "epoll_wait", INT, INT, STRUCT_EPOLL_EVENT_E, INT, INT,
        UNKNOWN, UNKNOWN},
    {233, "epoll_ctl", INT, INT, INT, INT, STRUCT_EPOLL_EVENT_E, UNKNOWN,
        UNKNOWN},
    {234, "tgkill", INT, PID_T, PID_T, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {235, "utimes", INT, CHAR_E, STRUCT_TIMEVAL_E, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {236, "vserver", UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {237, "mbind", LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG,
        UNSIGNED_LONG_E, UNSIGNED_LONG, UNSIGNED},
    {238, "set_mempolicy", LONG, INT, UNSIGNED_LONG_E, UNSIGNED_LONG,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {239, "get_mempolicy", LONG, INT_E, UNSIGNED_LONG_E, UNSIGNED_LONG,
        UNSIGNED_LONG, UNSIGNED_LONG, UNKNOWN},

    {240, "mq_open", MQD_T, CONST_CHAR_E, INT, MODE_T, STRUCT_MQ_ATTR_E,
        UNKNOWN, UNKNOWN},
    {241, "mq_unlink", INT, CONST_CHAR_E, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {242, "mq_timedsend", INT, MQD_T, CONST_CHAR_E, SIZE_T, UNSIGNED_INT,
        CONST_STRUCT_TIMESPEC_E, UNKNOWN},
    {243, "mq_timedreceive", SSIZE_T, MQD_T, CHAR_E, SIZE_T,
        UNSIGNED_INT_E, CONST_STRUCT_TIMESPEC_E, UNKNOWN},
    {244, "mq_notify", INT, MQD_T, CONST_STRUCT_SIGEVENT_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {245, "mq_getsetattr", INT, MQD_T, STRUCT_MQ_ATTR_E,
        STRUCT_MQ_ATTR_E, UNKNOWN, UNKNOWN, UNKNOWN},
    {246, "kexec_load", LONG, UNSIGNED_LONG, UNSIGNED_LONG,
        STRUCT_KEXEC_SEGMENT_E, UNSIGNED_LONG, UNKNOWN, UNKNOWN},
    {247, "waitid", INT, IDTYPE_T, ID_T, SIGINFO_T_E, INT, UNKNOWN,
        UNKNOWN},
    {248, "add_key", KEY_SERIAL_T, CONST_CHAR_E, CONST_CHAR_E,
        CONST_VOID_E, SIZE_T, KEY_SERIAL_T, UNKNOWN},
    {249, "request_key", KEY_SERIAL_T, CONST_CHAR_E, CONST_CHAR_E,
        CONST_CHAR_E, KEY_SERIAL_T, UNKNOWN, UNKNOWN},

    {250, "keyctl", LONG, INT, UNSIGNED_LONG, UNSIGNED_LONG,
        UNSIGNED_LONG, UNSIGNED_LONG, UNKNOWN},
    {251, "ioprio_set", INT, INT, INT, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {252, "ioprio_get", INT, INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {253, "inotify_init", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {254, "inotify_add_watch", INT, INT, CONST_CHAR_E, U32, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {255, "inotify_rm_watch", INT, INT, __S32, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {256, "migrate_pages", LONG, PID_T, UNSIGNED_LONG,
        CONST_UNSIGNED_LONG_E, CONST_UNSIGNED_LONG_E, UNKNOWN, UNKNOWN},
    {257, "openat", INT, INT, CONST_CHAR_E, INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {258, "mkdirat", INT, INT, CONST_CHAR_E, INT, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {259, "mknodat", INT, INT, CONST_CHAR_E, INT, UNSIGNED, UNKNOWN,
        UNKNOWN},

    {260, "fchownat", INT, INT, CONST_CHAR_E, UID_T, GID_T, INT, UNKNOWN},
    {261, "futimesat", INT, INT, CONST_CHAR_E, CONST_STRUCT_TIMEVAL_E,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {262, "newfstatat", INT, INT, CONST_CHAR_E, STRUCT_STAT_E, INT,
        UNKNOWN, UNKNOWN},
    {263, "unlinkat", INT, INT, CONST_CHAR_E, INT, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {264, "renameat", INT, INT, CONST_CHAR_E, INT, CONST_CHAR_E, UNKNOWN,
        UNKNOWN},
    {265, "linkat", INT, INT, CONST_CHAR_E, INT, CONST_CHAR_E, INT,
        UNKNOWN},
    {266, "symlinkat", INT, CONST_CHAR_E, INT, CONST_CHAR_E, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {267, "readlinkat", SSIZE_T, INT, CONST_CHAR_E, CHAR_E, SIZE_T,
        UNKNOWN, UNKNOWN},
    {268, "fchmodat", INT, INT, CONST_CHAR_E, MODE_T, INT, UNKNOWN,
        UNKNOWN},
    {269, "faccessat", INT, INT, CONST_CHAR_E, INT, INT, UNKNOWN, UNKNOWN},

    {270, "pselect6", INT, INT, FD_SET_E, FD_SET_E, FD_SET_E,
        STRUCT_TIMESPEC_E, VOID_E},
    {271, "ppoll", INT, STRUCT_POLLFD_E, UNSIGNED_INT, STRUCT_TIMESPEC_E,
        CONST_SIGSET_T_E, SIZE_T, UNKNOWN},
    {272, "unshare", INT, UNSIGNED_LONG, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {273, "set_robust_list", LONG, STRUCT_ROBUST_LIST_HEAD_E, SIZE_T,
        UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {274, "get_robust_list", LONG, INT, STRUCT_ROBUST_LIST_HEAD_EE,
        SIZE_T_E, UNKNOWN, UNKNOWN, UNKNOWN},
    {275, "splice", SSIZE_T, INT, LOFF_T_E, INT, LOFF_T_E, SIZE_T,
        UNSIGNED},
    {276, "tee", SSIZE_T, INT, INT, SIZE_T, UNSIGNED_INT, UNKNOWN, UNKNOWN},
    {277, "sync_file_range", SSIZE_T, LONG, LOFF_T, LOFF_T, LONG,
        UNKNOWN, UNKNOWN},
    {278, "vmsplice", SSIZE_T, INT, CONST_STRUCT_IOVEC_E, UNSIGNED_LONG,
        UNSIGNED_INT, UNKNOWN, UNKNOWN},
    {279, "move_pages", LONG, PID_T, UNSIGNED_LONG, CONST_VOID_EE,
        CONST_INT_E, INT_E, INT},

    {280, "utimensat", INT, INT, CONST_CHAR_E, CONST_STRUCT_TIMESPEC_E,
        INT, UNKNOWN, UNKNOWN},
    {281, "epoll_pwait", INT, INT, STRUCT_EPOLL_EVENT_E, INT, INT,
        CONST_SIGSET_T_E, UNKNOWN},
    {282, "signalfd", INT, INT, CONST_SIGSET_T_E, INT, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {283, "timerfd_create", INT, INT, INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {284, "eventfd", INT, UNSIGNED_INT, INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {285, "fallocate", INT, INT, INT, OFF_T, OFF_T, UNKNOWN, UNKNOWN},
    {286, "timerfd_settime", INT, INT, INT, CONST_STRUCT_ITIMERSPEC_E,
        STRUCT_ITIMERSPEC_E, UNKNOWN, UNKNOWN},
    {287, "timerfd_gettime", INT, INT, STRUCT_ITIMERSPEC_E, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {288, "accept4", INT, INT, STRUCT_SOCKADDR_E, SOCKLEN_T_E, INT,
        UNKNOWN, UNKNOWN},
    {289, "signalfd", INT, INT, CONST_SIGSET_T_E, INT, UNKNOWN, UNKNOWN,
        UNKNOWN},

    {290, "eventfd2", INT, UNSIGNED_INT, INT, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {291, "epoll_create1", INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {292, "dup3", INT, UNSIGNED_INT, UNSIGNED_INT, INT, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {293, "pipe2", INT, INT_E, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {294, "inotify_init1", INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {295, "preadv", SSIZE_T, UNSIGNED_LONG, CONST_STRUCT_IOVEC_E,
        UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNKNOWN},
    {296, "pwritev", SSIZE_T, UNSIGNED_LONG, CONST_STRUCT_IOVEC_E,
        UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNKNOWN},
    {297, "rt_tgsigqueueinfo", INT, PID_T, PID_T, INT, SIGINFO_T_E,
        UNKNOWN, UNKNOWN},
    {298, "perf_event_open", INT, STRUCT_PERF_EVENT_ATTR_E, PID_T, INT,
        INT, UNSIGNED_LONG, UNKNOWN},
    {299, "recvmmsg", INT, INT, STRUCT_MSGHDR_E, UNSIGNED_INT,
        UNSIGNED_INT, STRUCT_TIMESPEC_E, UNKNOWN},

    {300, "fanotify_init", INT, UNSIGNED_INT, UNSIGNED_INT, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {301, "fanotify_mark", INT, INT, UNSIGNED_INT, UINT64_T, INT,
        CONST_CHAR_E, UNKNOWN},
    {302, "prlimit", INT, PID_T, INT, CONST_STRUCT_RLIMIT_E,
        STRUCT_RLIMIT_E, UNKNOWN, UNKNOWN},
    {303, "name_to_handle_at", INT, INT, CONST_CHAR_E,
        STRUCT_FILE_HANDLE_E, INT_E, INT, UNKNOWN},
    {304, "open_by_handle_at", INT, INT, STRUCT_FILE_HANDLE_E, INT,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {305, "clock_adjtime", INT, VOID, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {306, "syncfs", INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {307, "sendmmsg", INT, INT, STRUCT_MMSGHDR_E, UNSIGNED_INT, INT,
        UNKNOWN, UNKNOWN},
    {308, "setns", INT, INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {309, "getcpu", INT, UNSIGNED_E, UNSIGNED_E, STRUCT_GETCPU_CACHE_E,
        UNKNOWN, UNKNOWN, UNKNOWN},

    {310, "process_vm_readv", SSIZE_T, PID_T, CONST_STRUCT_IOVEC_E,
        UNSIGNED_LONG, CONST_STRUCT_IOVEC_E, UNSIGNED_LONG, UNKNOWN},
    {311, "process_vm_writev", SSIZE_T, PID_T, CONST_STRUCT_IOVEC_E,
        UNSIGNED_LONG, CONST_STRUCT_IOVEC_E, UNSIGNED_LONG, UNKNOWN},
    {312, "kcmp", INT, PID_T, PID_T, INT, UNSIGNED_LONG, UNSIGNED_LONG,
        UNKNOWN},
    {313, "finit_module", INT, INT, CONST_CHAR___USER_E, INT, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {314, "sched_setattr", INT, PID_T, STRUCT_SCHED_ATTR___USER_E,
        UNSIGNED_INT, UNKNOWN, UNKNOWN, UNKNOWN},
    {315, "sched_getattr", INT, PID_T, STRUCT_SCHED_ATTR___USER_E,
        UNSIGNED_INT, UNSIGNED_INT, UNKNOWN, UNKNOWN},
    {316, "renameat2", INT, INT, CONST_CHAR___USER_E, INT,
        CONST_CHAR___USER_E, UNSIGNED_INT, UNKNOWN},
    {317, "seccomp", INT, UNSIGNED_INT, UNSIGNED_INT,
        CONST_CHAR___USER_E, UNKNOWN, UNKNOWN, UNKNOWN},
    {318, "getrandom", SSIZE_T, CHAR___USER_E, SIZE_T, UNSIGNED_INT,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {319, "memfd_create", INT, CONST_CHAR___USER_E, UNSIGNED_INT,
        UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},

    {320, "kexec_file_load", LONG, INT, INT, UNSIGNED_LONG, CONST_CHAR_E,
        UNSIGNED_LONG, UNKNOWN},
    {321, "bpf", INT, INT, UNION_BPF_ATTR_E, UNSIGNED_INT, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {322, "execveat", INT, INT, CONST_CHAR_E, CHAR_EE, CHAR_EE, INT,
        UNKNOWN},
    {323, "userfaultfd", INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {324, "membarrier", INT, INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN},
    {325, "mlock2", INT, CONST_VOID_E, SIZE_T, INT, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {326, "copy_file_range", SSIZE_T, INT, LOFF_T_E, INT, LOFF_T_E,
        SIZE_T, UNSIGNED_INT},
    {327, "preadv2", SSIZE_T, INT, CONST_STRUCT_IOVEC_E, INT, OFF_T, INT,
        UNKNOWN},
    {328, "pwritev2", SSIZE_T, INT, CONST_STRUCT_IOVEC_E, INT, OFF_T,
        INT, UNKNOWN},
    {329, "pkey_mprotect", INT, VOID_E, SIZE_T, INT, INT, UNKNOWN, UNKNOWN},

    {330, "pkey_alloc", INT, UNSIGNED_LONG, UNSIGNED_LONG, UNKNOWN,
        UNKNOWN, UNKNOWN, UNKNOWN},
    {331, "pkey_free", INT, INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {332, "statx", INT, INT, CONST_CHAR_E, INT, UNSIGNED_INT,
        STRUCT_STATX_E, UNKNOWN},
    {333, "io_pgetevents", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN, UNKNOWN},
    {334, "rseq", INT, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN,
        UNKNOWN},
    {335, "pkey_mprotect", INT, VOID_E, SIZE_T, INT, INT, UNKNOWN, UNKNOWN},
};


#endif //PSU_STRACE_2019_SYSCALL_H

typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
float16
float2
typedef pointer32 ImageBaseOffset32;

typedef long long    int16;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long long    uint16;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef unsigned short    wchar16;
typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef ulong DWORD;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef ushort WORD;

typedef BYTE *LPBYTE;

typedef void *HANDLE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef ulonglong ULONG_PTR;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef PCONTEXT LPCONTEXT;

typedef ulonglong DWORD64;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef void *PVOID;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _DISPATCHER_CONTEXT _DISPATCHER_CONTEXT, *P_DISPATCHER_CONTEXT;

struct _DISPATCHER_CONTEXT {
};

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef struct _exception _exception, *P_exception;

struct _exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};

typedef struct _SETJMP_FLOAT128 _SETJMP_FLOAT128, *P_SETJMP_FLOAT128;

typedef struct _SETJMP_FLOAT128 SETJMP_FLOAT128;

typedef SETJMP_FLOAT128 _JBTYPE;

struct _SETJMP_FLOAT128 {
    ulonglong Part[2];
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef char *va_list;

typedef ulonglong uintptr_t;

typedef int mbstate_t;

typedef struct lconv lconv, *Plconv;

struct lconv {
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
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

typedef ulonglong size_t;

typedef uint ULONG;

typedef uint pthread_mutexattr_t;

typedef undefined complex long double[32];

typedef ulonglong _Unwind_Word;


// WARNING! conflicting data type names: /DWARF/DWORD64 - /basetsd.h/DWORD64

typedef dword complex _Float16;

typedef ulonglong pointer;


// WARNING! conflicting data type names: /DWARF/DWORD - /WinDef.h/DWORD

typedef qword complex float;

typedef bool _Bool;

typedef int16 __int128;

typedef float2 _Float16;


// WARNING! conflicting data type names: /DWARF/word - /word

typedef int pthread_once_t;

typedef ulonglong _Unwind_Ptr;

typedef ulonglong _Unwind_Exception_Class;

typedef undefined complex double[16];

typedef float2 __bf16;

typedef uint pthread_key_t;

typedef longlong intptr_t;

typedef qword ULONG64;

typedef float16 _Float128;

typedef undefined complex _Float128[32];

typedef int _Unwind_Action;


// WARNING! conflicting data type names: /DWARF/winnt.h/PEXCEPTION_RECORD - /winnt.h/PEXCEPTION_RECORD


// WARNING! conflicting data type names: /DWARF/winnt.h/_DISPATCHER_CONTEXT - /excpt.h/_DISPATCHER_CONTEXT

typedef struct _DISPATCHER_CONTEXT DISPATCHER_CONTEXT;


// WARNING! conflicting data type names: /DWARF/winnt.h/_CONTEXT - /excpt.h/_CONTEXT

typedef struct _CONTEXT CONTEXT;

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

typedef struct _UNWIND_HISTORY_TABLE UNWIND_HISTORY_TABLE;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

typedef struct _RUNTIME_FUNCTION *PRUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

struct _UNWIND_HISTORY_TABLE_ENTRY {
    ULONG_PTR ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    ULONG_PTR LowAddress;
    ULONG_PTR HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};


// WARNING! conflicting data type names: /DWARF/winnt.h/XMM_SAVE_AREA32 - /winnt.h/XMM_SAVE_AREA32

typedef struct _M128A *PM128A;

typedef struct _UNWIND_HISTORY_TABLE *PUNWIND_HISTORY_TABLE;

typedef struct _XMM_SAVE_AREA32 _XMM_SAVE_AREA32, *P_XMM_SAVE_AREA32;

struct _XMM_SAVE_AREA32 {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};


// WARNING! conflicting data type names: /DWARF/winnt.h/_EXCEPTION_RECORD - /excpt.h/_EXCEPTION_RECORD


// WARNING! conflicting data type names: /DWARF/winnt.h/PCONTEXT - /winnt.h/PCONTEXT

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS *PKNONVOLATILE_CONTEXT_POINTERS;

typedef ulonglong *PULONG64;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    PM128A FloatingContext[16];
    PULONG64 IntegerContext[16];
};

typedef int (*PEXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef struct _DISPATCHER_CONTEXT *PDISPATCHER_CONTEXT;


// WARNING! conflicting data type names: /DWARF/winnt.h/EXCEPTION_RECORD - /winnt.h/EXCEPTION_RECORD

typedef union anon_union_512_3_a3503179_for__CONTEXT_38 anon_union_512_3_a3503179_for__CONTEXT_38, *Panon_union_512_3_a3503179_for__CONTEXT_38;

typedef struct anon_struct_416_18_1bcf7cc9_for_anon_union_512_3_a3503179_for__CONTEXT_38_2 anon_struct_416_18_1bcf7cc9_for_anon_union_512_3_a3503179_for__CONTEXT_38_2, *Panon_struct_416_18_1bcf7cc9_for_anon_union_512_3_a3503179_for__CONTEXT_38_2;

struct anon_struct_416_18_1bcf7cc9_for_anon_union_512_3_a3503179_for__CONTEXT_38_2 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union anon_union_512_3_a3503179_for__CONTEXT_38 {
    XMM_SAVE_AREA32 FltSave;
    XMM_SAVE_AREA32 FloatSave;
    struct anon_struct_416_18_1bcf7cc9_for_anon_union_512_3_a3503179_for__CONTEXT_38_2 field_2;
};

typedef ulonglong *PDWORD64;

typedef intptr_t pthread_mutex_t;

typedef struct _Unwind_Context _Unwind_Context, *P_Unwind_Context;

struct _Unwind_Context {
    _Unwind_Word cfa;
    _Unwind_Word ra;
    _Unwind_Word reg[2];
    PDISPATCHER_CONTEXT disp;
};

typedef enum ix86_arch_indices {
    X86_ARCH_CMOV=0,
    X86_ARCH_CMPXCHG=1,
    X86_ARCH_CMPXCHG8B=2,
    X86_ARCH_XADD=3,
    X86_ARCH_BSWAP=4,
    X86_ARCH_LAST=5
} ix86_arch_indices;

typedef enum ix86_tune_indices {
    X86_TUNE_SCHEDULE=0,
    X86_TUNE_PARTIAL_REG_DEPENDENCY=1,
    X86_TUNE_SSE_PARTIAL_REG_DEPENDENCY=2,
    X86_TUNE_SSE_PARTIAL_REG_FP_CONVERTS_DEPENDENCY=3,
    X86_TUNE_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY=4,
    X86_TUNE_DEST_FALSE_DEP_FOR_GLC=5,
    X86_TUNE_SSE_SPLIT_REGS=6,
    X86_TUNE_PARTIAL_FLAG_REG_STALL=7,
    X86_TUNE_MOVX=8,
    X86_TUNE_MEMORY_MISMATCH_STALL=9,
    X86_TUNE_FUSE_CMP_AND_BRANCH_32=10,
    X86_TUNE_FUSE_CMP_AND_BRANCH_64=11,
    X86_TUNE_FUSE_CMP_AND_BRANCH_SOFLAGS=12,
    X86_TUNE_FUSE_ALU_AND_BRANCH=13,
    X86_TUNE_FUSE_MOV_AND_ALU=14,
    X86_TUNE_FUSE_ALU_AND_BRANCH_MEM=15,
    X86_TUNE_FUSE_ALU_AND_BRANCH_MEM_IMM=16,
    X86_TUNE_FUSE_ALU_AND_BRANCH_RIP_RELATIVE=17,
    X86_TUNE_ACCUMULATE_OUTGOING_ARGS=18,
    X86_TUNE_PROLOGUE_USING_MOVE=19,
    X86_TUNE_EPILOGUE_USING_MOVE=20,
    X86_TUNE_USE_LEAVE=21,
    X86_TUNE_PUSH_MEMORY=22,
    X86_TUNE_SINGLE_PUSH=23,
    X86_TUNE_DOUBLE_PUSH=24,
    X86_TUNE_SINGLE_POP=25,
    X86_TUNE_DOUBLE_POP=26,
    X86_TUNE_PAD_SHORT_FUNCTION=27,
    X86_TUNE_PAD_RETURNS=28,
    X86_TUNE_FOUR_JUMP_LIMIT=29,
    X86_TUNE_ALIGN_TIGHT_LOOPS=30,
    X86_TUNE_SOFTWARE_PREFETCHING_BENEFICIAL=31,
    X86_TUNE_LCP_STALL=32,
    X86_TUNE_READ_MODIFY=33,
    X86_TUNE_USE_INCDEC=34,
    X86_TUNE_INTEGER_DFMODE_MOVES=35,
    X86_TUNE_OPT_AGU=36,
    X86_TUNE_AVOID_LEA_FOR_ADDR=37,
    X86_TUNE_SLOW_IMUL_IMM32_MEM=38,
    X86_TUNE_SLOW_IMUL_IMM8=39,
    X86_TUNE_AVOID_MEM_OPND_FOR_CMOVE=40,
    X86_TUNE_SINGLE_STRINGOP=41,
    X86_TUNE_PREFER_KNOWN_REP_MOVSB_STOSB=42,
    X86_TUNE_MISALIGNED_MOVE_STRING_PRO_EPILOGUES=43,
    X86_TUNE_USE_SAHF=44,
    X86_TUNE_USE_CLTD=45,
    X86_TUNE_USE_BT=46,
    X86_TUNE_AVOID_FALSE_DEP_FOR_BMI=47,
    X86_TUNE_AVOID_FALSE_DEP_FOR_TZCNT=48,
    X86_TUNE_AVOID_FALSE_DEP_FOR_BLS=49,
    X86_TUNE_ADJUST_UNROLL=50,
    X86_TUNE_ONE_IF_CONV_INSN=51,
    X86_TUNE_AVOID_MFENCE=52,
    X86_TUNE_EXPAND_ABS=53,
    X86_TUNE_USE_HIMODE_FIOP=54,
    X86_TUNE_USE_SIMODE_FIOP=55,
    X86_TUNE_USE_FFREEP=56,
    X86_TUNE_EXT_80387_CONSTANTS=57,
    X86_TUNE_GENERAL_REGS_SSE_SPILL=58,
    X86_TUNE_SSE_UNALIGNED_LOAD_OPTIMAL=59,
    X86_TUNE_SSE_UNALIGNED_STORE_OPTIMAL=60,
    X86_TUNE_SSE_PACKED_SINGLE_INSN_OPTIMAL=61,
    X86_TUNE_SSE_TYPELESS_STORES=62,
    X86_TUNE_SSE_LOAD0_BY_PXOR=63,
    X86_TUNE_INTER_UNIT_MOVES_TO_VEC=64,
    X86_TUNE_INTER_UNIT_MOVES_FROM_VEC=65,
    X86_TUNE_INTER_UNIT_CONVERSIONS=66,
    X86_TUNE_PREFER_BCST_FROM_INTEGER=67,
    X86_TUNE_SPLIT_MEM_OPND_FOR_FP_CONVERTS=68,
    X86_TUNE_USE_VECTOR_FP_CONVERTS=69,
    X86_TUNE_USE_VECTOR_CONVERTS=70,
    X86_TUNE_SLOW_PSHUFB=71,
    X86_TUNE_AVOID_4BYTE_PREFIXES=72,
    X86_TUNE_USE_GATHER_2PARTS=73,
    X86_TUNE_USE_SCATTER_2PARTS=74,
    X86_TUNE_USE_GATHER_4PARTS=75,
    X86_TUNE_USE_SCATTER_4PARTS=76,
    X86_TUNE_USE_GATHER_8PARTS=77,
    X86_TUNE_USE_SCATTER_8PARTS=78,
    X86_TUNE_AVOID_128FMA_CHAINS=79,
    X86_TUNE_AVOID_256FMA_CHAINS=80,
    X86_TUNE_AVOID_512FMA_CHAINS=81,
    X86_TUNE_V2DF_REDUCTION_PREFER_HADDPD=82,
    X86_TUNE_SSE_MOVCC_USE_BLENDV=83,
    X86_TUNE_SSE_REDUCTION_PREFER_PSHUF=84,
    X86_TUNE_AVX256_UNALIGNED_LOAD_OPTIMAL=85,
    X86_TUNE_AVX256_UNALIGNED_STORE_OPTIMAL=86,
    X86_TUNE_AVX256_SPLIT_REGS=87,
    X86_TUNE_AVX128_OPTIMAL=88,
    X86_TUNE_AVX256_OPTIMAL=89,
    X86_TUNE_AVX256_AVOID_VEC_PERM=90,
    X86_TUNE_AVX512_SPLIT_REGS=91,
    X86_TUNE_AVX256_MOVE_BY_PIECES=92,
    X86_TUNE_AVX512_MOVE_BY_PIECES=93,
    X86_TUNE_AVX512_TWO_EPILOGUES=94,
    X86_TUNE_AVX512_MASKED_EPILOGUES=95,
    X86_TUNE_DOUBLE_WITH_ADD=96,
    X86_TUNE_ALWAYS_FANCY_MATH_387=97,
    X86_TUNE_UNROLL_STRLEN=98,
    X86_TUNE_SHIFT1=99,
    X86_TUNE_ZERO_EXTEND_WITH_AND=100,
    X86_TUNE_PROMOTE_HIMODE_IMUL=101,
    X86_TUNE_FAST_PREFIX=102,
    X86_TUNE_READ_MODIFY_WRITE=103,
    X86_TUNE_MOVE_M1_VIA_OR=104,
    X86_TUNE_NOT_UNPAIRABLE=105,
    X86_TUNE_PARTIAL_REG_STALL=106,
    X86_TUNE_PARTIAL_MEMORY_READ_STALL=107,
    X86_TUNE_PROMOTE_QIMODE=108,
    X86_TUNE_PROMOTE_HI_REGS=109,
    X86_TUNE_HIMODE_MATH=110,
    X86_TUNE_SPLIT_LONG_MOVES=111,
    X86_TUNE_USE_XCHGB=112,
    X86_TUNE_USE_MOV0=113,
    X86_TUNE_NOT_VECTORMODE=114,
    X86_TUNE_AVOID_VECTOR_DECODE=115,
    X86_TUNE_BRANCH_PREDICTION_HINTS_TAKEN=116,
    X86_TUNE_BRANCH_PREDICTION_HINTS_NOT_TAKEN=117,
    X86_TUNE_QIMODE_MATH=118,
    X86_TUNE_PROMOTE_QI_REGS=119,
    X86_TUNE_SLOW_STC=120,
    X86_TUNE_USE_RCR=121,
    X86_TUNE_LAST=122
} ix86_tune_indices;

typedef enum ix86_reduc_unroll_factor {
    X86_REDUC_FMA=0,
    X86_REDUC_DOT_PROD=1,
    X86_REDUC_SAD=2,
    X86_REDUC_LAST=3
} ix86_reduc_unroll_factor;

typedef struct __emutls_object __emutls_object, *P__emutls_object;

typedef union anon_union_8_2_e12cd27e_for_loc anon_union_8_2_e12cd27e_for_loc, *Panon_union_8_2_e12cd27e_for_loc;

union anon_union_8_2_e12cd27e_for_loc {
    pointer offset;
    void *ptr;
};

struct __emutls_object {
    word size;
    word align;
    union anon_union_8_2_e12cd27e_for_loc loc;
    void *templ;
};

typedef struct __emutls_array __emutls_array, *P__emutls_array;

struct __emutls_array {
    pointer size;
    void **data[0];
};

typedef enum _Unwind_Reason_Code {
    _URC_NO_REASON=0,
    _URC_FOREIGN_EXCEPTION_CAUGHT=1,
    _URC_FATAL_PHASE2_ERROR=2,
    _URC_FATAL_PHASE1_ERROR=3,
    _URC_NORMAL_STOP=4,
    _URC_END_OF_STACK=5,
    _URC_HANDLER_FOUND=6,
    _URC_INSTALL_CONTEXT=7,
    _URC_CONTINUE_UNWIND=8
} _Unwind_Reason_Code;

typedef struct _Unwind_Exception _Unwind_Exception, *P_Unwind_Exception;

typedef _Unwind_Reason_Code (*_Unwind_Personality_Fn)(int, _Unwind_Action, _Unwind_Exception_Class, struct _Unwind_Exception *, struct _Unwind_Context *);

typedef void (*_Unwind_Exception_Cleanup_Fn)(enum _Unwind_Reason_Code, struct _Unwind_Exception *);

struct _Unwind_Exception {
    _Unwind_Exception_Class exception_class;
    _Unwind_Exception_Cleanup_Fn exception_cleanup;
    _Unwind_Word private_[6];
};

typedef _Unwind_Reason_Code (*_Unwind_Stop_Fn)(int, _Unwind_Action, _Unwind_Exception_Class, struct _Unwind_Exception *, struct _Unwind_Context *, void *);

typedef _Unwind_Reason_Code (*_Unwind_Trace_Fn)(struct _Unwind_Context *, void *);

typedef pthread_mutex_t __gthread_mutex_t;

typedef pthread_once_t __gthread_once_t;

typedef pthread_key_t __gthread_key_t;

typedef void (*func_ptr)(void);


// WARNING! conflicting data type names: /winnt.h/CONTEXT - /DWARF/winnt.h/CONTEXT


// WARNING! conflicting data type names: /winnt.h/_RUNTIME_FUNCTION - /DWARF/winnt.h/_RUNTIME_FUNCTION

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_238 _union_238, *P_union_238;

union _union_238 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_238 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};


// WARNING! conflicting data type names: /winnt.h/PRUNTIME_FUNCTION - /DWARF/winnt.h/PRUNTIME_FUNCTION


// WARNING! conflicting data type names: /winnt.h/UNWIND_HISTORY_TABLE_ENTRY - /DWARF/winnt.h/UNWIND_HISTORY_TABLE_ENTRY

typedef union _union_61 _union_61, *P_union_61;


// WARNING! conflicting data type names: /winnt.h/PM128A - /DWARF/winnt.h/PM128A

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef union _union_63 _union_63, *P_union_63;

typedef struct _struct_64 _struct_64, *P_struct_64;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);


// WARNING! conflicting data type names: /winnt.h/_UNWIND_HISTORY_TABLE - /DWARF/winnt.h/_UNWIND_HISTORY_TABLE

typedef CHAR *LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef wchar_t WCHAR;


// WARNING! conflicting data type names: /winnt.h/_KNONVOLATILE_CONTEXT_POINTERS - /DWARF/winnt.h/_KNONVOLATILE_CONTEXT_POINTERS

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef WCHAR *LPWSTR;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef WCHAR *LPCWSTR;


// WARNING! conflicting data type names: /winnt.h/PUNWIND_HISTORY_TABLE - /DWARF/winnt.h/PUNWIND_HISTORY_TABLE


// WARNING! conflicting data type names: /winnt.h/_UNWIND_HISTORY_TABLE_ENTRY - /DWARF/winnt.h/_UNWIND_HISTORY_TABLE_ENTRY


// WARNING! conflicting data type names: /winnt.h/PKNONVOLATILE_CONTEXT_POINTERS - /DWARF/winnt.h/PKNONVOLATILE_CONTEXT_POINTERS


// WARNING! conflicting data type names: /winnt.h/PEXCEPTION_ROUTINE - /DWARF/winnt.h/PEXCEPTION_ROUTINE

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR *PDWORD_PTR;

typedef longlong INT_PTR;

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef DWORD *PDWORD;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

struct HBRUSH__ {
    int unused;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef long *LPLONG;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef INT_PTR (*FARPROC)(void);

typedef struct HDC__ *HDC;

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef HANDLE *LPHANDLE;

typedef BOOL *LPBOOL;

typedef struct HICON__ *HICON;

typedef void *HGDIOBJ;

typedef BYTE *PBYTE;

typedef void *LPCVOID;

typedef struct HBRUSH__ *HBRUSH;

typedef DWORD COLORREF;

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress; // Apply ImageBaseOffset32 to see reference
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_16 IMAGE_RESOURCE_DIR_STRING_U_16, *PIMAGE_RESOURCE_DIR_STRING_U_16;

struct IMAGE_RESOURCE_DIR_STRING_U_16 {
    word Length;
    wchar16 NameString[8];
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;

struct IMAGE_THUNK_DATA64 {
    qword StartAddressOfRawData;
    qword EndAddressOfRawData;
    qword AddressOfIndex;
    qword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct HWAVEOUT__ HWAVEOUT__, *PHWAVEOUT__;

struct HWAVEOUT__ {
    int unused;
};

typedef struct tWAVEFORMATEX tWAVEFORMATEX, *PtWAVEFORMATEX;

struct tWAVEFORMATEX {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
};

typedef struct wavehdr_tag wavehdr_tag, *Pwavehdr_tag;

typedef struct wavehdr_tag *LPWAVEHDR;

struct wavehdr_tag {
    LPSTR lpData;
    DWORD dwBufferLength;
    DWORD dwBytesRecorded;
    DWORD_PTR dwUser;
    DWORD dwFlags;
    DWORD dwLoops;
    struct wavehdr_tag *lpNext;
    DWORD_PTR reserved;
};

typedef struct tWAVEFORMATEX WAVEFORMATEX;

typedef WAVEFORMATEX *LPCWAVEFORMATEX;

typedef struct HWAVEOUT__ *HWAVEOUT;

typedef HWAVEOUT *LPHWAVEOUT;

typedef UINT MMRESULT;

typedef struct lsda_header_info lsda_header_info, *Plsda_header_info;

struct lsda_header_info { // PlaceHolder Structure
};

typedef struct __forced_unwind __forced_unwind, *P__forced_unwind;

struct __forced_unwind { // PlaceHolder Structure
};

typedef struct __class_type_info __class_type_info, *P__class_type_info;

struct __class_type_info { // PlaceHolder Structure
};

typedef struct __foreign_exception __foreign_exception, *P__foreign_exception;

struct __foreign_exception { // PlaceHolder Structure
};

typedef struct __si_class_type_info __si_class_type_info, *P__si_class_type_info;

struct __si_class_type_info { // PlaceHolder Structure
};

typedef struct __upcast_result __upcast_result, *P__upcast_result;

struct __upcast_result { // PlaceHolder Structure
};

typedef struct __dyncast_result __dyncast_result, *P__dyncast_result;

struct __dyncast_result { // PlaceHolder Structure
};

typedef undefined __sub_kind;

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Structure
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct bad_exception { // PlaceHolder Structure
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Structure
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Structure
};

typedef struct __concurrence_lock_error __concurrence_lock_error, *P__concurrence_lock_error;

struct __concurrence_lock_error { // PlaceHolder Structure
};

typedef struct __concurrence_unlock_error __concurrence_unlock_error, *P__concurrence_unlock_error;

struct __concurrence_unlock_error { // PlaceHolder Structure
};

typedef void (*_invalid_parameter_handler)(wchar_t *, wchar_t *, wchar_t *, uint, uintptr_t);



undefined4 __mingw_app_type;
undefined8 __xc_a;
undefined4 _MINGW_INSTALL_DEBUG_MATHERR;
undefined4 argc;
undefined FUN_140001000;
undefined8 argv;
undefined4 _fmode;
undefined safe_flush;
undefined8 envp;
undefined4 managedapp;
undefined4 has_cctor;
undefined _gnu_exception_handler;
undefined4 _commode;
undefined __xc_z;
undefined4 _newmode;
undefined4 __native_startup_state;
undefined __xi_a;
undefined __xi_z;
undefined4 __globallocalestatus;
undefined8 __native_startup_lock;
undefined .text;
undefined4 _dowildcard;
undefined8 __mingw_oldexcpt_handler;
undefined4 __mingw_initltsdyn_force;
undefined4 __mingw_initltssuo_force;
undefined4 __mingw_initltsdrot_force;
undefined obj;
undefined *PTR_GetProcAddress_14002e5a0;
undefined *DAT_140023000;
undefined DAT_140028000;
undefined8 hmod_libgcc;
undefined .weak.__deregister_frame_info.hmod_libgcc;
undefined __gcc_deregister_frame;
undefined DAT_140024100;
undefined1 isSound1Finished;
undefined1 isSound2Finished;
undefined1 isSound3Finished;
undefined1 isSound4Finished;
undefined1 isSound5Finished;
undefined1 isSound6Finished;
undefined1 isSound7Finished;
undefined1 isSound8Finished;
undefined1 isSound9Finished;
undefined SoundPhase1;
undefined4 screenWidth;
undefined4 screenHeight;
undefined SoundPhase2;
undefined SoundPhase3;
undefined SoundPhase4;
undefined SoundPhase5;
undefined SoundPhase6;
undefined SoundPhase7;
undefined SoundPhase8;
undefined SoundPhase9;
undefined DAT_140024363;
undefined DAT_140025908;
pointer PTR_s_decimal32_140025c40;
pointer PTR_s_decimal64_140025c60;
pointer PTR_s_decimal128_140025c80;
pointer PTR_DAT_140025ca0;
pointer PTR_s_char8_t_140025cc0;
pointer PTR_s_char16_t_140025ce0;
pointer PTR_s_char32_t_140025d00;
pointer PTR_s_decltype(nullptr)_140025d20;
pointer PTR_s__Float_140025d40;
pointer cplus_demangle_builtin_types;
pointer PTR_s_std_bfloat16_t_140025d60;
pointer cplus_demangle_operators;
undefined DAT_1400245f5;
undefined1 DAT_1400245f9;
undefined DAT_1400245fe;
undefined1 DAT_1400245ff;
undefined1 DAT_140024601;
undefined1 DAT_140024617;
undefined DAT_14002461c;
undefined1 DAT_14002480b;
undefined1 DAT_14002480e;
undefined1 DAT_140024856;
undefined DAT_14002485d;
undefined1 DAT_14002485e;
undefined1 DAT_140024860;
undefined1 DAT_140024870;
undefined1 DAT_14002476a;
undefined DAT_140024876;
undefined DAT_14002476f;
undefined1 DAT_140024877;
undefined1 DAT_140024879;
undefined1 DAT_140024a86;
undefined1 DAT_140024a88;
undefined1 DAT_140024a9f;
undefined1 DAT_140024aa2;
undefined1 DAT_140024b8e;
undefined1 DAT_140024b90;
undefined1 DAT_140024b9a;
undefined DAT_140024b9e;
undefined1 DAT_140024b9f;
undefined DAT_140024ba3;
undefined1 DAT_140024ba4;
undefined DAT_140024ba9;
undefined d_growable_string_callback_adapter;
IMAGE_DOS_HEADER IMAGE_DOS_HEADER_140000000;
pointer p.0;
undefined __do_global_dtors;
undefined8 __RUNTIME_PSEUDO_RELOC_LIST_END__;
undefined4 initialized;
undefined4 _CRT_MT;
undefined8 .CRT$XDZ;
undefined4 maxSections;
undefined8 the_secs;
undefined4 was_init.0;
undefined8 stUserMathErr;
undefined __mingwthr_cs;
undefined4 __mingwthr_cs_init;
undefined8 key_dtor_list;
IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER_140000188;
dword DWORD_14002e000;
__gthread_mutex_t emutls_mutex;
__gthread_key_t emutls_key;
__gthread_once_t once;
undefined emutls_init;
pointer emutls_size;
undefined fpi.0;
undefined DAT_140026086;
undefined DAT_14002608a;
undefined __tens_D2A;
undefined dtoa_CritSec;
undefined4 dtoa_CS_init;
undefined dtoa_lock_cleanup;
undefined freelist;
pointer pmem_next;
undefined8 p5s;
undefined p05.0;
undefined *PTR__fmode_14002e778;
undefined *PTR__commode_14002e758;
undefined *PTR__acmdln_14002e730;
undefined *PTR___initenv_14002e710;
undefined8 handler;
undefined .rdata;
undefined state_mbrtowc.0;
undefined1 .rdata;
undefined fallback_IsDBCSLeadByteEx;
undefined8 call_IsDBCSLeadByteEx.0;
undefined8 idList;
undefined8 idListCnt;
undefined mtx_pthr_locked;
undefined8 idListMax;
undefined8 idListNextId;
undefined8 pthr_root;
undefined8 pthr_last;
undefined4 _pthread_tls;
undefined8 once_obj;
undefined once_global;
pointer __imp___acrt_iob_func;
undefined _pthread_once_cleanup;
undefined _pthread_key_lock;
undefined4 _pthread_key_max;
undefined4 _pthread_key_sch;
undefined8 _pthread_key_dest;
undefined pthread_tls_init;
undefined _pthread_tls_once;
undefined4 _pthread_concur;
undefined4 _pthread_cancelling;
undefined8 _pthread_get_handle_information;
undefined _pthread_invoke_cancel;
undefined pthread_create_wrapper;
undefined4 dummy_concurrency_level;
pointer __imp_mbsrtowcs;
undefined8 _pthread_set_thread_description;
undefined8 _pthread_get_system_time_best_as_file_time;
undefined *PTR_GetSystemTimeAsFileTime_14002e5b8;
undefined8 _pthread_get_tick_count_64;
undefined rwl_global;
undefined cond_locked;
undefined st_cancelwrite;
undefined cleanup_wait;
undefined *PTR__assert_14002e740;
undefined4 state_mbsrtowcs.0;
undefined *PTR_~__class_type_info_1400269b0;
undefined *PTR_~__si_class_type_info_140026a40;
pointer typeinfo;
undefined *typeinfo;
undefined8 DAT_140023208;
void *DAT_140023210;
undefined1 emergency_pool;
undefined *PTR_~__concurrence_lock_error_140026aa0;
undefined *PTR_~__concurrence_unlock_error_140026ad0;
undefined DAT_1400242f1;
undefined1 terminating;
undefined ~__concurrence_lock_error;
undefined ~__concurrence_unlock_error;
undefined __do_upcast;
undefined *PTR_~bad_alloc_140026b30;
pointer __terminate_handler;
undefined __verbose_terminate_handler;
pointer __unexpected_handler;
undefined terminate;
undefined8 __new_handler;
undefined ~bad_alloc;
longlong DAT_140023218;
undefined __emutls_v._ZZN12_GLOBAL__N_1L10get_globalEvE6global;
undefined __gxx_exception_cleanup;
undefined __gxx_personality_imp;
size_t DAT_140023218;
undefined DAT_140023208;
undefined8 DAT_140023210;
undefined __tcf_ZN12_GLOBAL__N_1L14emergency_poolE;
undefined *PTR_~bad_exception_140026b00;
undefined ~bad_exception;

void FUN_140001000(void)

{
  return;
}



void safe_flush(void)

{
  fflush((FILE *)0x0);
  return;
}



int WinMainCRTStartup(void)

{
  int iVar1;
  
  __mingw_app_type = 1;
  iVar1 = __tmainCRTStartup();
  return iVar1;
}



int mainCRTStartup(void)

{
  int iVar1;
  
  __mingw_app_type = 0;
  iVar1 = __tmainCRTStartup();
  return iVar1;
}



int __tmainCRTStartup(void)

{
  undefined1 uVar1;
  int iVar2;
  FILE *_File;
  undefined7 extraout_var;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong unaff_GS_OFFSET;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 *local_38;
  longlong local_30;
  undefined4 local_28;
  int local_24;
  longlong local_20;
  longlong local_18;
  int local_c;
  
  local_28 = 0x30;
  local_30 = *(longlong *)(unaff_GS_OFFSET + 0x30);
  local_20 = *(longlong *)(local_30 + 8);
  local_c = 0;
  local_24 = 0;
  while( true ) {
    local_38 = &__native_startup_lock;
    local_40 = local_20;
    local_48 = 0;
    LOCK();
    local_18 = __native_startup_lock;
    if (__native_startup_lock == 0) {
      __native_startup_lock = local_20;
      local_18 = 0;
    }
    UNLOCK();
    if (local_18 == 0) goto LAB_140001128;
    if (local_18 == local_20) break;
    Sleep(1000);
  }
  local_c = 1;
LAB_140001128:
  if (__native_startup_state == 1) {
    _amsg_exit(0x1f);
  }
  if (__native_startup_state == 0) {
    __native_startup_state = 1;
    _File = __acrt_iob_func(2);
    setvbuf(_File,(char *)0x0,4,0);
    iVar2 = atexit(safe_flush);
    if (iVar2 != 0) {
                    // WARNING: Subroutine does not return
      abort();
    }
    _pei386_runtime_relocator();
    __mingw_oldexcpt_handler = SetUnhandledExceptionFilter(_gnu_exception_handler);
    mingw_set_invalid_parameter_handler(FUN_140001000);
    _text();
    uVar1 = check_managed_app();
    managedapp = (int)CONCAT71(extraout_var,uVar1);
    if (__mingw_app_type == 0) {
      __set_app_type(1);
    }
    else {
      __set_app_type(2);
    }
    puVar3 = (undefined4 *)__p__fmode();
    *puVar3 = _fmode;
    puVar3 = (undefined4 *)__p__commode();
    *puVar3 = _commode;
    local_24 = _text();
    if (local_24 < 0) {
      _amsg_exit(8);
    }
    if (_MINGW_INSTALL_DEBUG_MATHERR == 1) {
      __mingw_setusermatherr(_text);
    }
    if (__globallocalestatus == -1) {
      _configthreadlocale(-1);
    }
    iVar2 = _initterm_e((longlong *)&__xi_a,(longlong *)&__xi_z);
    if (iVar2 != 0) {
      _amsg_exit(10);
    }
    local_5c = _newmode;
    local_24 = __getmainargs(&argc,&argv,&envp,_dowildcard,&local_5c);
    if (local_24 < 0) {
      _amsg_exit(8);
    }
    uVar4 = duplicate_ppstrings(argc,(longlong *)&argv);
    local_24 = (int)uVar4;
    if (local_24 != 0) {
      _amsg_exit(8);
    }
    _initterm(&__xc_a,&__xc_z);
    __main();
    __native_startup_state = 2;
  }
  else {
    has_cctor = 1;
  }
  if (local_c == 0) {
    local_50 = &__native_startup_lock;
    local_58 = 0;
    LOCK();
    __native_startup_lock = 0;
    UNLOCK();
  }
  tls_callback_0(0,2);
  puVar5 = (undefined8 *)__p___initenv();
  *puVar5 = envp;
  local_24 = _text(argc,argv,envp);
  if (managedapp == 0) {
                    // WARNING: Subroutine does not return
    exit(local_24);
  }
  if (has_cctor == 0) {
    _cexit();
  }
  return local_24;
}



// WARNING: Removing unreachable block (ram,0x000140001433)
// WARNING: Removing unreachable block (ram,0x0001400014ca)
// WARNING: Removing unreachable block (ram,0x0001400014a2)
// WARNING: Removing unreachable block (ram,0x00014000148f)
// WARNING: Removing unreachable block (ram,0x00014000149b)
// WARNING: Removing unreachable block (ram,0x00014000148d)
// WARNING: Removing unreachable block (ram,0x00014000145f)

undefined1 check_managed_app(void)

{
  __mingw_initltsdrot_force = 1;
  __mingw_initltsdyn_force = 1;
  __mingw_initltssuo_force = 1;
  return 0;
}



undefined8 duplicate_ppstrings(int param_1,longlong *param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 uVar3;
  size_t sVar4;
  void *pvVar5;
  int local_1c;
  
  pvVar2 = malloc((longlong)(param_1 + 1) << 3);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 1;
  }
  else {
    lVar1 = *param_2;
    for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
      sVar4 = strlen(*(char **)(lVar1 + (longlong)local_1c * 8));
      pvVar5 = malloc(sVar4 + 1);
      *(void **)((longlong)local_1c * 8 + (longlong)pvVar2) = pvVar5;
      if (*(longlong *)((longlong)pvVar2 + (longlong)local_1c * 8) == 0) {
        return 1;
      }
      memcpy(*(void **)((longlong)pvVar2 + (longlong)local_1c * 8),
             *(void **)(lVar1 + (longlong)local_1c * 8),sVar4 + 1);
    }
    *(undefined8 *)((longlong)pvVar2 + (longlong)local_1c * 8) = 0;
    *param_2 = (longlong)pvVar2;
    uVar3 = 0;
  }
  return uVar3;
}



int __cdecl atexit(_func_5014 *param_1)

{
  int iVar1;
  
  iVar1 = _crt_atexit(param_1);
  return iVar1;
}



void _text(void)

{
  return;
}



undefined8 _weak___deregister_frame_info_hmod_libgcc(void)

{
  return 0;
}



void __gcc_register_frame(void)

{
  HMODULE hModule;
  code *pcVar1;
  
  hModule = GetModuleHandleA("libgcc_s_dw2-1.dll");
  if (hModule == (HMODULE)0x0) {
    pcVar1 = _text;
    DAT_140023000 = _weak___deregister_frame_info_hmod_libgcc;
  }
  else {
    hmod_libgcc = LoadLibraryA("libgcc_s_dw2-1.dll");
    pcVar1 = GetProcAddress(hModule,"__register_frame_info");
    DAT_140023000 = GetProcAddress(hModule,"__deregister_frame_info");
    if (pcVar1 == (FARPROC)0x0) goto LAB_1400016ee;
  }
  (*pcVar1)(&DAT_140028000,&obj);
LAB_1400016ee:
  atexit(__gcc_deregister_frame);
  return;
}



void __gcc_deregister_frame(void)

{
  if (DAT_140023000 != (code *)0x0) {
    (*DAT_140023000)(&DAT_140028000);
  }
  if (hmod_libgcc != (HMODULE)0x0) {
                    // WARNING: Could not recover jumptable at 0x00014000174e. Too many branches
                    // WARNING: Treating indirect jump as call
    FreeLibrary(hmod_libgcc);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// SoundPhase1(void*)

undefined8 SoundPhase1(void)

{
  ushort uVar1;
  char cVar2;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [14];
  undefined1 auVar29 [12];
  unkbyte10 Var30;
  undefined1 auVar31 [14];
  undefined1 auVar32 [12];
  unkbyte10 Var33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [14];
  undefined1 auVar41 [12];
  unkbyte9 Var42;
  short sVar43;
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  undefined1 (*pauVar46) [16];
  short sVar47;
  uint uVar48;
  uint uVar67;
  uint uVar68;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  longlong lVar69;
  longlong lVar71;
  longlong lVar72;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  longlong lVar93;
  undefined1 auVar73 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  ushort uVar110;
  ushort uVar111;
  ushort uVar112;
  undefined1 auVar94 [16];
  undefined1 auVar98 [16];
  undefined1 auVar102 [16];
  undefined1 auVar106 [16];
  ushort uVar133;
  uint uVar134;
  ushort uVar135;
  ushort uVar136;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar118 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar137 [16];
  short sVar138;
  short sVar148;
  short sVar149;
  short sVar150;
  short sVar151;
  undefined1 auVar144 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  short sVar152;
  short sVar154;
  undefined2 uVar155;
  short sVar156;
  short sVar157;
  short sVar158;
  undefined1 auVar153 [16];
  undefined1 auVar159 [16];
  uint uVar160;
  longlong lVar161;
  uint uVar177;
  uint uVar178;
  longlong lVar179;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar167 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined4 uVar180;
  uint uVar196;
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar188 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar194 [16];
  ushort uVar197;
  ushort uVar199;
  ushort uVar200;
  longlong lVar198;
  ushort uVar201;
  ushort uVar202;
  undefined2 uVar203;
  ushort uVar205;
  ushort uVar206;
  longlong lVar204;
  ushort uVar207;
  ushort uVar209;
  ushort uVar210;
  undefined2 uVar211;
  longlong lVar208;
  ushort uVar212;
  ushort uVar213;
  undefined2 uVar214;
  ushort uVar216;
  ushort uVar217;
  longlong lVar215;
  HWAVEOUT local_110;
  WAVEFORMATEX local_108;
  undefined1 local_e8 [12];
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  undefined4 local_bc;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined4 uVar49;
  undefined6 uVar50;
  undefined1 auVar52 [12];
  undefined8 uVar51;
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  undefined1 auVar53 [12];
  undefined1 auVar58 [16];
  undefined1 auVar61 [16];
  undefined1 auVar54 [14];
  undefined1 auVar64 [16];
  undefined2 uVar66;
  longlong lVar70;
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar74 [16];
  undefined1 auVar78 [16];
  undefined1 auVar82 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar83 [16];
  ushort uVar86;
  ushort uVar87;
  ushort uVar88;
  undefined1 auVar95 [16];
  undefined1 auVar99 [16];
  undefined1 auVar103 [16];
  undefined1 auVar96 [16];
  undefined1 auVar100 [16];
  undefined1 auVar104 [16];
  undefined1 auVar97 [16];
  undefined1 auVar101 [16];
  undefined1 auVar105 [16];
  ushort uVar107;
  ushort uVar108;
  ushort uVar109;
  undefined1 auVar125 [16];
  undefined1 auVar116 [16];
  undefined1 auVar119 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar117 [16];
  undefined1 auVar120 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined4 uVar139;
  undefined6 uVar140;
  undefined8 uVar141;
  undefined1 auVar142 [12];
  undefined1 auVar143 [14];
  undefined1 auVar145 [16];
  undefined1 auVar162 [12];
  undefined1 auVar165 [16];
  undefined1 auVar168 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar166 [16];
  undefined1 auVar169 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined6 uVar181;
  undefined1 auVar186 [16];
  undefined1 auVar189 [16];
  undefined1 auVar182 [12];
  undefined1 auVar187 [16];
  undefined1 auVar190 [16];
  undefined1 auVar183 [14];
  undefined1 auVar193 [16];
  undefined2 uVar195;
  
  local_108.wFormatTag = 1;
  local_108.nChannels = 1;
  local_108.nSamplesPerSec = 8000;
  local_108.nAvgBytesPerSec = 8000;
  local_108.nBlockAlign = 1;
  local_108.wBitsPerSample = 8;
  local_108.cbSize = 0;
  waveOutOpen(&local_110,0xffffffff,&local_108,0,0,0);
  pauVar44 = operator_new__(0x36b00);
  auVar137._8_2_ = 0xff;
  auVar137._0_8_ = 0xff00ff00ff00ff;
  auVar137._10_2_ = 0xff;
  auVar137._12_2_ = 0xff;
  auVar137._14_2_ = 0xff;
  pauVar45 = pauVar44;
  auVar113 = _DAT_140024100;
  do {
    lVar70 = auVar113._0_8_;
    lVar93 = auVar113._8_8_;
    lVar69 = lVar70 + 2;
    lVar208 = lVar70 + 4;
    lVar215 = lVar93 + 4;
    pauVar46 = pauVar45 + 1;
    uVar68 = (uint)lVar69;
    uVar89 = (uint)(lVar93 + 2);
    uVar48 = auVar113._0_4_;
    uVar67 = auVar113._8_4_;
    auVar52._0_8_ = CONCAT44(uVar67,uVar48);
    auVar52._8_4_ = uVar68;
    lVar161 = lVar70 + 8;
    lVar179 = lVar93 + 8;
    lVar71 = lVar70 + 6;
    lVar198 = lVar70 + 0xc;
    lVar204 = lVar93 + 0xc;
    uVar90 = (uint)(lVar93 + 6);
    uVar110 = (ushort)lVar69;
    uVar213 = (ushort)lVar71;
    uVar111 = (ushort)((ulonglong)lVar69 >> 0x10);
    uVar216 = (ushort)((ulonglong)lVar71 >> 0x10);
    uVar112 = (ushort)(lVar93 + 2);
    uVar217 = (ushort)(lVar93 + 6);
    uVar196 = uVar68 >> 9;
    auVar184._0_10_ = (unkuint10)uVar196 << 0x40;
    lVar69 = lVar70 + 10;
    uVar178 = (uint)lVar69;
    uVar91 = (uint)(lVar93 + 10);
    uVar160 = (uint)lVar161;
    uVar177 = (uint)lVar179;
    auVar162._0_8_ = CONCAT44(uVar177,uVar160);
    auVar162._8_4_ = uVar178;
    lVar72 = lVar70 + 0xe;
    auVar159._0_8_ = lVar70 + 0x10;
    auVar159._8_8_ = lVar93 + 0x10;
    uVar92 = (uint)(lVar93 + 0xe);
    uVar68 = uVar68 >> 0xb;
    auVar55._0_10_ = (unkuint10)uVar68 << 0x40;
    uVar212 = (ushort)((ulonglong)lVar215 >> 0x10);
    uVar88 = auVar113._10_2_;
    auVar75._12_2_ = uVar88;
    auVar75._0_12_ = auVar52;
    auVar75._14_2_ = uVar212;
    auVar74._12_4_ = auVar75._12_4_;
    auVar74._0_10_ = auVar52._0_10_;
    uVar210 = (ushort)lVar215;
    auVar74._10_2_ = uVar210;
    uVar87 = auVar113._8_2_;
    auVar73._10_6_ = auVar74._10_6_;
    auVar73._8_2_ = uVar87;
    auVar73._0_8_ = auVar52._0_8_;
    uVar209 = (ushort)((ulonglong)lVar208 >> 0x10);
    auVar18._2_8_ = auVar73._8_8_;
    auVar18._0_2_ = uVar209;
    uVar86 = auVar113._2_2_;
    auVar18._10_6_ = 0;
    auVar80._0_2_ = auVar113._0_2_;
    uVar207 = (ushort)lVar208;
    auVar144._12_4_ = 0;
    auVar144._0_12_ = SUB1612(auVar18 << 0x30,4);
    auVar144 = auVar144 << 0x20;
    auVar79._0_12_ = auVar144._0_12_;
    auVar79._12_2_ = uVar209;
    auVar79._14_2_ = uVar216;
    auVar78._12_4_ = auVar79._12_4_;
    auVar78._0_10_ = auVar144._0_10_;
    auVar78._10_2_ = uVar111;
    auVar77._10_6_ = auVar78._10_6_;
    auVar77._0_8_ = auVar144._0_8_;
    auVar77._8_2_ = uVar86;
    auVar19._2_8_ = auVar77._8_8_;
    auVar19._0_2_ = uVar213;
    auVar19._10_6_ = 0;
    auVar76._12_4_ = 0;
    auVar76._0_12_ = SUB1612(auVar19 << 0x30,4);
    auVar76 = auVar76 << 0x20;
    auVar83._0_12_ = auVar76._0_12_;
    auVar83._12_2_ = uVar213;
    auVar83._14_2_ = uVar217;
    auVar82._12_4_ = auVar83._12_4_;
    auVar82._0_10_ = auVar76._0_10_;
    auVar82._10_2_ = uVar210;
    auVar81._10_6_ = auVar82._10_6_;
    auVar81._0_8_ = auVar76._0_8_;
    auVar81._8_2_ = uVar207;
    auVar80._8_8_ = auVar81._8_8_;
    auVar80._6_2_ = uVar112;
    auVar80._4_2_ = uVar110;
    auVar80._2_2_ = uVar87;
    uVar201 = (ushort)((ulonglong)lVar204 >> 0x10);
    uVar109 = (ushort)((ulonglong)lVar179 >> 0x10);
    auVar97._12_2_ = uVar109;
    auVar97._0_12_ = auVar162;
    auVar97._14_2_ = uVar201;
    auVar96._12_4_ = auVar97._12_4_;
    auVar96._0_10_ = auVar162._0_10_;
    uVar200 = (ushort)lVar204;
    auVar96._10_2_ = uVar200;
    uVar108 = (ushort)lVar179;
    auVar95._10_6_ = auVar96._10_6_;
    auVar95._8_2_ = uVar108;
    auVar95._0_8_ = auVar162._0_8_;
    uVar199 = (ushort)((ulonglong)lVar198 >> 0x10);
    auVar20._2_8_ = auVar95._8_8_;
    auVar20._0_2_ = uVar199;
    uVar107 = (ushort)((ulonglong)lVar161 >> 0x10);
    auVar20._10_6_ = 0;
    auVar102._0_2_ = (ushort)lVar161;
    uVar197 = (ushort)lVar198;
    auVar94._12_4_ = 0;
    auVar94._0_12_ = SUB1612(auVar20 << 0x30,4);
    auVar94 = auVar94 << 0x20;
    uVar133 = (ushort)lVar69;
    uVar202 = (ushort)lVar72;
    uVar135 = (ushort)((ulonglong)lVar69 >> 0x10);
    uVar205 = (ushort)((ulonglong)lVar72 >> 0x10);
    uVar136 = (ushort)(lVar93 + 10);
    uVar206 = (ushort)(lVar93 + 0xe);
    auVar101._0_12_ = auVar94._0_12_;
    auVar101._12_2_ = uVar199;
    auVar101._14_2_ = uVar205;
    auVar100._12_4_ = auVar101._12_4_;
    auVar100._0_10_ = auVar94._0_10_;
    auVar100._10_2_ = uVar135;
    auVar99._10_6_ = auVar100._10_6_;
    auVar99._0_8_ = auVar94._0_8_;
    auVar99._8_2_ = uVar107;
    auVar21._2_8_ = auVar99._8_8_;
    auVar21._0_2_ = uVar202;
    auVar21._10_6_ = 0;
    auVar98._12_4_ = 0;
    auVar98._0_12_ = SUB1612(auVar21 << 0x30,4);
    auVar98 = auVar98 << 0x20;
    auVar105._0_12_ = auVar98._0_12_;
    auVar105._12_2_ = uVar202;
    auVar105._14_2_ = uVar206;
    auVar104._12_4_ = auVar105._12_4_;
    auVar104._0_10_ = auVar98._0_10_;
    auVar104._10_2_ = uVar200;
    auVar103._10_6_ = auVar104._10_6_;
    auVar103._0_8_ = auVar98._0_8_;
    auVar103._8_2_ = uVar197;
    auVar102._8_8_ = auVar103._8_8_;
    auVar102._6_2_ = uVar136;
    auVar102._4_2_ = uVar133;
    auVar102._2_2_ = uVar108;
    auVar113 = auVar137 & auVar102;
    auVar144 = auVar137 & auVar80;
    uVar1 = auVar144._0_2_;
    cVar2 = (uVar1 != 0) * (uVar1 < 0x100) * auVar144[0] - (0xff < uVar1);
    uVar1 = auVar144._2_2_;
    cVar3 = (uVar1 != 0) * (uVar1 < 0x100) * auVar144[2] - (0xff < uVar1);
    uVar1 = auVar144._4_2_;
    cVar4 = (uVar1 != 0) * (uVar1 < 0x100) * auVar144[4] - (0xff < uVar1);
    uVar1 = auVar144._6_2_;
    cVar5 = (uVar1 != 0) * (uVar1 < 0x100) * auVar144[6] - (0xff < uVar1);
    sVar47 = auVar144._8_2_;
    cVar6 = (0 < sVar47) * (sVar47 < 0x100) * auVar144[8] - (0xff < sVar47);
    sVar47 = auVar144._10_2_;
    cVar7 = (0 < sVar47) * (sVar47 < 0x100) * auVar144[10] - (0xff < sVar47);
    sVar47 = auVar144._12_2_;
    cVar8 = (0 < sVar47) * (sVar47 < 0x100) * auVar144[0xc] - (0xff < sVar47);
    sVar47 = auVar144._14_2_;
    cVar9 = (0 < sVar47) * (sVar47 < 0x100) * auVar144[0xe] - (0xff < sVar47);
    uVar1 = auVar113._0_2_;
    cVar10 = (uVar1 != 0) * (uVar1 < 0x100) * auVar113[0] - (0xff < uVar1);
    uVar1 = auVar113._2_2_;
    cVar11 = (uVar1 != 0) * (uVar1 < 0x100) * auVar113[2] - (0xff < uVar1);
    uVar1 = auVar113._4_2_;
    cVar12 = (uVar1 != 0) * (uVar1 < 0x100) * auVar113[4] - (0xff < uVar1);
    uVar1 = auVar113._6_2_;
    cVar13 = (uVar1 != 0) * (uVar1 < 0x100) * auVar113[6] - (0xff < uVar1);
    sVar47 = auVar113._8_2_;
    cVar14 = (0 < sVar47) * (sVar47 < 0x100) * auVar113[8] - (0xff < sVar47);
    sVar47 = auVar113._10_2_;
    cVar15 = (0 < sVar47) * (sVar47 < 0x100) * auVar113[10] - (0xff < sVar47);
    sVar47 = auVar113._12_2_;
    cVar16 = (0 < sVar47) * (sVar47 < 0x100) * auVar113[0xc] - (0xff < sVar47);
    sVar47 = auVar113._14_2_;
    cVar17 = (0 < sVar47) * (sVar47 < 0x100) * auVar113[0xe] - (0xff < sVar47);
    uVar66 = (undefined2)((uint)lVar215 >> 9);
    auVar184._12_4_ = (undefined4)(CONCAT26(uVar212 >> 9,CONCAT24(uVar88 >> 9,uVar196)) >> 0x20);
    auVar184._10_2_ = uVar66;
    uVar195 = (undefined2)(uVar67 >> 9);
    auVar23._4_6_ = auVar184._10_6_;
    auVar23._2_2_ = uVar195;
    auVar23._0_2_ = uVar209 >> 9;
    auVar23._10_6_ = 0;
    auVar191._0_2_ = (undefined2)(uVar48 >> 9);
    auVar22._12_4_ = 0;
    auVar22._0_12_ = SUB1612(auVar23 << 0x30,4);
    uVar155 = (undefined2)((uint)lVar71 >> 9);
    auVar187._0_12_ = SUB1612(auVar22 << 0x20,0);
    auVar187._12_2_ = uVar209 >> 9;
    auVar187._14_2_ = uVar216 >> 9;
    auVar186._12_4_ = auVar187._12_4_;
    auVar186._0_10_ = SUB1610(auVar22 << 0x20,0);
    auVar186._10_2_ = uVar111 >> 9;
    auVar24._4_6_ = auVar186._10_6_;
    auVar24._2_2_ = uVar86 >> 9;
    auVar24._0_2_ = uVar155;
    auVar24._10_6_ = 0;
    auVar185._12_4_ = 0;
    auVar185._0_12_ = SUB1612(auVar24 << 0x30,4);
    auVar185 = auVar185 << 0x20;
    uVar134 = uVar178 >> 9;
    auVar114._0_10_ = (unkuint10)uVar134 << 0x40;
    uVar178 = uVar178 >> 0xb;
    auVar163._0_10_ = (unkuint10)uVar178 << 0x40;
    auVar190._0_12_ = auVar185._0_12_;
    auVar190._12_2_ = uVar155;
    auVar190._14_2_ = (short)(uVar90 >> 9);
    auVar189._12_4_ = auVar190._12_4_;
    auVar189._0_10_ = auVar185._0_10_;
    auVar189._10_2_ = uVar66;
    auVar188._10_6_ = auVar189._10_6_;
    auVar188._0_8_ = auVar185._0_8_;
    auVar188._8_2_ = (short)((uint)lVar208 >> 9);
    auVar191._8_8_ = auVar188._8_8_;
    auVar191._6_2_ = (short)(uVar89 >> 9);
    auVar191._4_2_ = (short)uVar196;
    auVar191._2_2_ = uVar195;
    auVar114._12_4_ = (undefined4)(CONCAT26(uVar201 >> 9,CONCAT24(uVar109 >> 9,uVar134)) >> 0x20);
    uVar155 = (undefined2)((uint)lVar204 >> 9);
    auVar114._10_2_ = uVar155;
    uVar66 = (undefined2)(uVar177 >> 9);
    auVar26._4_6_ = auVar114._10_6_;
    auVar26._2_2_ = uVar66;
    auVar26._0_2_ = uVar199 >> 9;
    auVar26._10_6_ = 0;
    auVar121._0_2_ = (undefined2)(uVar160 >> 9);
    auVar25._12_4_ = 0;
    auVar25._0_12_ = SUB1612(auVar26 << 0x30,4);
    auVar191 = auVar191 & auVar137;
    uVar195 = (undefined2)((uint)lVar72 >> 9);
    auVar117._0_12_ = SUB1612(auVar25 << 0x20,0);
    auVar117._12_2_ = uVar199 >> 9;
    auVar117._14_2_ = uVar205 >> 9;
    auVar116._12_4_ = auVar117._12_4_;
    auVar116._0_10_ = SUB1610(auVar25 << 0x20,0);
    auVar116._10_2_ = uVar135 >> 9;
    auVar27._4_6_ = auVar116._10_6_;
    auVar27._2_2_ = uVar107 >> 9;
    auVar27._0_2_ = uVar195;
    auVar27._10_6_ = 0;
    auVar115._12_4_ = 0;
    auVar115._0_12_ = SUB1612(auVar27 << 0x30,4);
    auVar115 = auVar115 << 0x20;
    auVar153._0_2_ = auVar102._0_2_ >> 7;
    auVar153._2_2_ = uVar108 >> 7;
    auVar153._4_2_ = uVar133 >> 7;
    auVar153._6_2_ = uVar136 >> 7;
    auVar153._8_2_ = uVar197 >> 7;
    auVar153._10_2_ = uVar200 >> 7;
    auVar153._12_2_ = uVar202 >> 7;
    auVar153._14_2_ = uVar206 >> 7;
    auVar106._0_2_ = auVar102._0_2_ >> 4;
    auVar106._2_2_ = uVar108 >> 4;
    auVar106._4_2_ = uVar133 >> 4;
    auVar106._6_2_ = uVar136 >> 4;
    auVar106._8_2_ = uVar197 >> 4;
    auVar106._10_2_ = uVar200 >> 4;
    auVar106._12_2_ = uVar202 >> 4;
    auVar106._14_2_ = uVar206 >> 4;
    auVar120._0_12_ = auVar115._0_12_;
    auVar120._12_2_ = uVar195;
    auVar120._14_2_ = (short)(uVar92 >> 9);
    auVar119._12_4_ = auVar120._12_4_;
    auVar119._0_10_ = auVar115._0_10_;
    auVar119._10_2_ = uVar155;
    auVar118._10_6_ = auVar119._10_6_;
    auVar118._0_8_ = auVar115._0_8_;
    auVar118._8_2_ = (short)((uint)lVar198 >> 9);
    auVar121._8_8_ = auVar118._8_8_;
    auVar121._6_2_ = (short)(uVar91 >> 9);
    auVar121._4_2_ = (short)uVar134;
    auVar121._2_2_ = uVar66;
    auVar121 = auVar121 & auVar137;
    auVar153 = auVar153 & auVar137;
    auVar106 = auVar106 & auVar137;
    uVar1 = auVar191._0_2_;
    uVar108 = auVar191._2_2_;
    auVar192[1] = (uVar108 != 0) * (uVar108 < 0x100) * auVar191[2] - (0xff < uVar108);
    auVar192[0] = (uVar1 != 0) * (uVar1 < 0x100) * auVar191[0] - (0xff < uVar1);
    uVar1 = auVar191._4_2_;
    auVar192[2] = (uVar1 != 0) * (uVar1 < 0x100) * auVar191[4] - (0xff < uVar1);
    uVar1 = auVar191._6_2_;
    auVar192[3] = (uVar1 != 0) * (uVar1 < 0x100) * auVar191[6] - (0xff < uVar1);
    sVar47 = auVar191._8_2_;
    auVar192[4] = (0 < sVar47) * (sVar47 < 0x100) * auVar191[8] - (0xff < sVar47);
    sVar47 = auVar191._10_2_;
    auVar192[5] = (0 < sVar47) * (sVar47 < 0x100) * auVar191[10] - (0xff < sVar47);
    sVar47 = auVar191._12_2_;
    auVar192[6] = (0 < sVar47) * (sVar47 < 0x100) * auVar191[0xc] - (0xff < sVar47);
    sVar47 = auVar191._14_2_;
    auVar192[7] = (0 < sVar47) * (sVar47 < 0x100) * auVar191[0xe] - (0xff < sVar47);
    uVar1 = auVar121._0_2_;
    auVar192[8] = (uVar1 != 0) * (uVar1 < 0x100) * auVar121[0] - (0xff < uVar1);
    uVar1 = auVar121._2_2_;
    auVar192[9] = (uVar1 != 0) * (uVar1 < 0x100) * auVar121[2] - (0xff < uVar1);
    uVar1 = auVar121._4_2_;
    auVar192[10] = (uVar1 != 0) * (uVar1 < 0x100) * auVar121[4] - (0xff < uVar1);
    uVar1 = auVar121._6_2_;
    auVar192[0xb] = (uVar1 != 0) * (uVar1 < 0x100) * auVar121[6] - (0xff < uVar1);
    sVar47 = auVar121._8_2_;
    auVar192[0xc] = (0 < sVar47) * (sVar47 < 0x100) * auVar121[8] - (0xff < sVar47);
    sVar47 = auVar121._10_2_;
    auVar192[0xd] = (0 < sVar47) * (sVar47 < 0x100) * auVar121[10] - (0xff < sVar47);
    sVar47 = auVar121._12_2_;
    auVar192[0xe] = (0 < sVar47) * (sVar47 < 0x100) * auVar121[0xc] - (0xff < sVar47);
    sVar47 = auVar121._14_2_;
    auVar192[0xf] = (0 < sVar47) * (sVar47 < 0x100) * auVar121[0xe] - (0xff < sVar47);
    auVar122._0_2_ = auVar80._0_2_ >> 7;
    auVar122._2_2_ = uVar87 >> 7;
    auVar122._4_2_ = uVar110 >> 7;
    auVar122._6_2_ = uVar112 >> 7;
    auVar122._8_2_ = uVar207 >> 7;
    auVar122._10_2_ = uVar210 >> 7;
    auVar122._12_2_ = uVar213 >> 7;
    auVar122._14_2_ = uVar217 >> 7;
    auVar84._0_2_ = auVar80._0_2_ >> 4;
    auVar84._2_2_ = uVar87 >> 4;
    auVar84._4_2_ = uVar110 >> 4;
    auVar84._6_2_ = uVar112 >> 4;
    auVar84._8_2_ = uVar207 >> 4;
    auVar84._10_2_ = uVar210 >> 4;
    auVar84._12_2_ = uVar213 >> 4;
    auVar84._14_2_ = uVar217 >> 4;
    auVar122 = auVar122 & auVar137;
    auVar84 = auVar84 & auVar137;
    uVar1 = auVar122._0_2_;
    uVar108 = auVar122._2_2_;
    auVar123[1] = (uVar108 != 0) * (uVar108 < 0x100) * auVar122[2] - (0xff < uVar108);
    auVar123[0] = (uVar1 != 0) * (uVar1 < 0x100) * auVar122[0] - (0xff < uVar1);
    uVar1 = auVar122._4_2_;
    auVar123[2] = (uVar1 != 0) * (uVar1 < 0x100) * auVar122[4] - (0xff < uVar1);
    uVar1 = auVar122._6_2_;
    auVar123[3] = (uVar1 != 0) * (uVar1 < 0x100) * auVar122[6] - (0xff < uVar1);
    sVar47 = auVar122._8_2_;
    auVar123[4] = (0 < sVar47) * (sVar47 < 0x100) * auVar122[8] - (0xff < sVar47);
    sVar47 = auVar122._10_2_;
    auVar123[5] = (0 < sVar47) * (sVar47 < 0x100) * auVar122[10] - (0xff < sVar47);
    sVar47 = auVar122._12_2_;
    auVar123[6] = (0 < sVar47) * (sVar47 < 0x100) * auVar122[0xc] - (0xff < sVar47);
    sVar47 = auVar122._14_2_;
    auVar123[7] = (0 < sVar47) * (sVar47 < 0x100) * auVar122[0xe] - (0xff < sVar47);
    uVar1 = auVar153._0_2_;
    auVar123[8] = (uVar1 != 0) * (uVar1 < 0x100) * auVar153[0] - (0xff < uVar1);
    uVar1 = auVar153._2_2_;
    auVar123[9] = (uVar1 != 0) * (uVar1 < 0x100) * auVar153[2] - (0xff < uVar1);
    uVar1 = auVar153._4_2_;
    auVar123[10] = (uVar1 != 0) * (uVar1 < 0x100) * auVar153[4] - (0xff < uVar1);
    uVar1 = auVar153._6_2_;
    auVar123[0xb] = (uVar1 != 0) * (uVar1 < 0x100) * auVar153[6] - (0xff < uVar1);
    sVar47 = auVar153._8_2_;
    auVar123[0xc] = (0 < sVar47) * (sVar47 < 0x100) * auVar153[8] - (0xff < sVar47);
    sVar47 = auVar153._10_2_;
    auVar123[0xd] = (0 < sVar47) * (sVar47 < 0x100) * auVar153[10] - (0xff < sVar47);
    sVar47 = auVar153._12_2_;
    auVar123[0xe] = (0 < sVar47) * (sVar47 < 0x100) * auVar153[0xc] - (0xff < sVar47);
    sVar47 = auVar153._14_2_;
    auVar123[0xf] = (0 < sVar47) * (sVar47 < 0x100) * auVar153[0xe] - (0xff < sVar47);
    uVar1 = auVar84._0_2_;
    uVar108 = auVar84._2_2_;
    auVar85[1] = (uVar108 != 0) * (uVar108 < 0x100) * auVar84[2] - (0xff < uVar108);
    auVar85[0] = (uVar1 != 0) * (uVar1 < 0x100) * auVar84[0] - (0xff < uVar1);
    uVar1 = auVar84._4_2_;
    auVar85[2] = (uVar1 != 0) * (uVar1 < 0x100) * auVar84[4] - (0xff < uVar1);
    uVar1 = auVar84._6_2_;
    auVar85[3] = (uVar1 != 0) * (uVar1 < 0x100) * auVar84[6] - (0xff < uVar1);
    sVar47 = auVar84._8_2_;
    auVar85[4] = (0 < sVar47) * (sVar47 < 0x100) * auVar84[8] - (0xff < sVar47);
    sVar47 = auVar84._10_2_;
    auVar85[5] = (0 < sVar47) * (sVar47 < 0x100) * auVar84[10] - (0xff < sVar47);
    sVar47 = auVar84._12_2_;
    auVar85[6] = (0 < sVar47) * (sVar47 < 0x100) * auVar84[0xc] - (0xff < sVar47);
    sVar47 = auVar84._14_2_;
    auVar85[7] = (0 < sVar47) * (sVar47 < 0x100) * auVar84[0xe] - (0xff < sVar47);
    uVar1 = auVar106._0_2_;
    auVar85[8] = (uVar1 != 0) * (uVar1 < 0x100) * auVar106[0] - (0xff < uVar1);
    uVar1 = auVar106._2_2_;
    auVar85[9] = (uVar1 != 0) * (uVar1 < 0x100) * auVar106[2] - (0xff < uVar1);
    uVar1 = auVar106._4_2_;
    auVar85[10] = (uVar1 != 0) * (uVar1 < 0x100) * auVar106[4] - (0xff < uVar1);
    uVar1 = auVar106._6_2_;
    auVar85[0xb] = (uVar1 != 0) * (uVar1 < 0x100) * auVar106[6] - (0xff < uVar1);
    sVar47 = auVar106._8_2_;
    auVar85[0xc] = (0 < sVar47) * (sVar47 < 0x100) * auVar106[8] - (0xff < sVar47);
    sVar47 = auVar106._10_2_;
    auVar85[0xd] = (0 < sVar47) * (sVar47 < 0x100) * auVar106[10] - (0xff < sVar47);
    sVar47 = auVar106._12_2_;
    auVar85[0xe] = (0 < sVar47) * (sVar47 < 0x100) * auVar106[0xc] - (0xff < sVar47);
    sVar47 = auVar106._14_2_;
    auVar85[0xf] = (0 < sVar47) * (sVar47 < 0x100) * auVar106[0xe] - (0xff < sVar47);
    auVar192 = auVar192 | auVar123;
    sVar43 = CONCAT11(cVar9,cVar9);
    uVar49 = CONCAT31(CONCAT21(sVar43,cVar8),cVar8);
    uVar50 = CONCAT51(CONCAT41(uVar49,cVar7),cVar7);
    Var42 = CONCAT72(CONCAT61(uVar50,cVar6),CONCAT11(cVar6,cVar9));
    Var30 = CONCAT91(CONCAT81((longlong)((unkuint9)Var42 >> 8),cVar5),cVar5);
    auVar29._2_10_ = Var30;
    auVar29[1] = cVar4;
    auVar29[0] = cVar4;
    auVar28._2_12_ = auVar29;
    auVar28[1] = cVar3;
    auVar28[0] = cVar3;
    sVar152 = CONCAT11(cVar2,cVar2);
    sVar138 = CONCAT11(cVar10,cVar10);
    uVar139 = CONCAT13(cVar11,CONCAT12(cVar11,sVar138));
    uVar140 = CONCAT15(cVar12,CONCAT14(cVar12,uVar139));
    uVar141 = CONCAT17(cVar13,CONCAT16(cVar13,uVar140));
    auVar142._0_10_ = CONCAT19(cVar14,CONCAT18(cVar14,uVar141));
    auVar142[10] = cVar15;
    auVar142[0xb] = cVar15;
    auVar143[0xc] = cVar16;
    auVar143._0_12_ = auVar142;
    auVar143[0xd] = cVar16;
    auVar145[0xe] = cVar17;
    auVar145._0_14_ = auVar143;
    auVar145[0xf] = cVar17;
    auVar130._0_14_ = auVar192._0_14_;
    auVar130[0xe] = auVar192[7];
    auVar130[0xf] = auVar192[7];
    auVar129._14_2_ = auVar130._14_2_;
    auVar129._0_13_ = auVar192._0_13_;
    auVar129[0xd] = auVar192[6];
    auVar128._13_3_ = auVar129._13_3_;
    auVar128._0_12_ = auVar192._0_12_;
    auVar128[0xc] = auVar192[6];
    auVar127._12_4_ = auVar128._12_4_;
    auVar127._0_11_ = auVar192._0_11_;
    auVar127[0xb] = auVar192[5];
    auVar126._11_5_ = auVar127._11_5_;
    auVar126._0_10_ = auVar192._0_10_;
    auVar126[10] = auVar192[5];
    auVar125._10_6_ = auVar126._10_6_;
    auVar125._0_9_ = auVar192._0_9_;
    auVar125[9] = auVar192[4];
    auVar124._9_7_ = auVar125._9_7_;
    auVar124._0_8_ = auVar192._0_8_;
    auVar124[8] = auVar192[4];
    Var33 = CONCAT91(CONCAT81(auVar124._8_8_,auVar192[3]),auVar192[3]);
    auVar32._2_10_ = Var33;
    auVar32[1] = auVar192[2];
    auVar32[0] = auVar192[2];
    auVar31._2_12_ = auVar32;
    auVar31[1] = auVar192[1];
    auVar31[0] = auVar192[1];
    sVar47 = CONCAT11(auVar192[8],auVar192[8]);
    uVar180 = CONCAT13(auVar192[9],CONCAT12(auVar192[9],sVar47));
    uVar181 = CONCAT15(auVar192[10],CONCAT14(auVar192[10],uVar180));
    uVar51 = CONCAT17(auVar192[0xb],CONCAT16(auVar192[0xb],uVar181));
    auVar182._0_10_ = CONCAT19(auVar192[0xc],CONCAT18(auVar192[0xc],uVar51));
    auVar182[10] = auVar192[0xd];
    auVar182[0xb] = auVar192[0xd];
    auVar183[0xc] = auVar192[0xe];
    auVar183._0_12_ = auVar182;
    auVar183[0xd] = auVar192[0xe];
    auVar193[0xf] = auVar192[0xf];
    auVar193[0xe] = auVar193[0xf];
    auVar193._0_14_ = auVar183;
    auVar131._0_2_ = CONCAT11(auVar192[0],auVar192[0]) * sVar152;
    auVar131._2_2_ = auVar31._0_2_ * auVar28._0_2_;
    auVar131._4_2_ = auVar32._0_2_ * auVar29._0_2_;
    sVar154 = (short)Var30;
    auVar131._6_2_ = (short)Var33 * sVar154;
    sVar156 = (short)((unkuint9)Var42 >> 8);
    auVar131._8_2_ = auVar124._8_2_ * sVar156;
    sVar157 = (short)uVar50;
    auVar131._10_2_ = auVar126._10_2_ * sVar157;
    sVar158 = (short)uVar49;
    auVar131._12_2_ = auVar128._12_2_ * sVar158;
    auVar131._14_2_ = auVar129._14_2_ * sVar43;
    auVar194._0_2_ = sVar47 * sVar138;
    sVar148 = (short)((uint)uVar139 >> 0x10);
    auVar194._2_2_ = (short)((uint)uVar180 >> 0x10) * sVar148;
    sVar149 = (short)((uint6)uVar140 >> 0x20);
    auVar194._4_2_ = (short)((uint6)uVar181 >> 0x20) * sVar149;
    sVar150 = (short)((ulonglong)uVar141 >> 0x30);
    auVar194._6_2_ = (short)((ulonglong)uVar51 >> 0x30) * sVar150;
    sVar151 = (short)((unkuint10)auVar142._0_10_ >> 0x40);
    auVar194._8_2_ = (short)((unkuint10)auVar182._0_10_ >> 0x40) * sVar151;
    auVar194._10_2_ = auVar182._10_2_ * auVar142._10_2_;
    auVar194._12_2_ = auVar183._12_2_ * auVar143._12_2_;
    auVar194._14_2_ = auVar193._14_2_ * auVar145._14_2_;
    auVar131 = auVar131 & auVar137;
    auVar194 = auVar194 & auVar137;
    uVar1 = auVar131._0_2_;
    uVar108 = auVar131._2_2_;
    auVar132[1] = (uVar108 != 0) * (uVar108 < 0x100) * auVar131[2] - (0xff < uVar108);
    auVar132[0] = (uVar1 != 0) * (uVar1 < 0x100) * auVar131[0] - (0xff < uVar1);
    uVar1 = auVar131._4_2_;
    auVar132[2] = (uVar1 != 0) * (uVar1 < 0x100) * auVar131[4] - (0xff < uVar1);
    uVar1 = auVar131._6_2_;
    auVar132[3] = (uVar1 != 0) * (uVar1 < 0x100) * auVar131[6] - (0xff < uVar1);
    sVar47 = auVar131._8_2_;
    auVar132[4] = (0 < sVar47) * (sVar47 < 0x100) * auVar131[8] - (0xff < sVar47);
    sVar47 = auVar131._10_2_;
    auVar132[5] = (0 < sVar47) * (sVar47 < 0x100) * auVar131[10] - (0xff < sVar47);
    sVar47 = auVar131._12_2_;
    auVar132[6] = (0 < sVar47) * (sVar47 < 0x100) * auVar131[0xc] - (0xff < sVar47);
    sVar47 = auVar131._14_2_;
    auVar132[7] = (0 < sVar47) * (sVar47 < 0x100) * auVar131[0xe] - (0xff < sVar47);
    uVar1 = auVar194._0_2_;
    auVar132[8] = (uVar1 != 0) * (uVar1 < 0x100) * auVar194[0] - (0xff < uVar1);
    uVar1 = auVar194._2_2_;
    auVar132[9] = (uVar1 != 0) * (uVar1 < 0x100) * auVar194[2] - (0xff < uVar1);
    uVar1 = auVar194._4_2_;
    auVar132[10] = (uVar1 != 0) * (uVar1 < 0x100) * auVar194[4] - (0xff < uVar1);
    uVar1 = auVar194._6_2_;
    auVar132[0xb] = (uVar1 != 0) * (uVar1 < 0x100) * auVar194[6] - (0xff < uVar1);
    sVar47 = auVar194._8_2_;
    auVar132[0xc] = (0 < sVar47) * (sVar47 < 0x100) * auVar194[8] - (0xff < sVar47);
    sVar47 = auVar194._10_2_;
    auVar132[0xd] = (0 < sVar47) * (sVar47 < 0x100) * auVar194[10] - (0xff < sVar47);
    sVar47 = auVar194._12_2_;
    auVar132[0xe] = (0 < sVar47) * (sVar47 < 0x100) * auVar194[0xc] - (0xff < sVar47);
    sVar47 = auVar194._14_2_;
    auVar132[0xf] = (0 < sVar47) * (sVar47 < 0x100) * auVar194[0xe] - (0xff < sVar47);
    auVar55._12_4_ = (undefined4)(CONCAT26(uVar212 >> 0xb,CONCAT24(uVar88 >> 0xb,uVar68)) >> 0x20);
    uVar211 = (undefined2)((uint)lVar215 >> 0xb);
    auVar55._10_2_ = uVar211;
    uVar66 = (undefined2)(uVar67 >> 0xb);
    auVar35._4_6_ = auVar55._10_6_;
    auVar35._2_2_ = uVar66;
    auVar35._0_2_ = uVar209 >> 0xb;
    auVar35._10_6_ = 0;
    auVar62._0_2_ = (undefined2)(uVar48 >> 0xb);
    auVar34._12_4_ = 0;
    auVar34._0_12_ = SUB1612(auVar35 << 0x30,4);
    uVar214 = (undefined2)((uint)lVar71 >> 0xb);
    auVar58._0_12_ = SUB1612(auVar34 << 0x20,0);
    auVar58._12_2_ = uVar209 >> 0xb;
    auVar58._14_2_ = uVar216 >> 0xb;
    auVar57._12_4_ = auVar58._12_4_;
    auVar57._0_10_ = SUB1610(auVar34 << 0x20,0);
    auVar57._10_2_ = uVar111 >> 0xb;
    auVar36._4_6_ = auVar57._10_6_;
    auVar36._2_2_ = uVar86 >> 0xb;
    auVar36._0_2_ = uVar214;
    auVar36._10_6_ = 0;
    auVar56._12_4_ = 0;
    auVar56._0_12_ = SUB1612(auVar36 << 0x30,4);
    auVar56 = auVar56 << 0x20;
    auVar163._12_4_ =
         (undefined4)(CONCAT26(uVar201 >> 0xb,CONCAT24(uVar109 >> 0xb,uVar178)) >> 0x20);
    uVar195 = (undefined2)((uint)lVar204 >> 0xb);
    auVar163._10_2_ = uVar195;
    uVar155 = (undefined2)(uVar177 >> 0xb);
    auVar38._4_6_ = auVar163._10_6_;
    auVar38._2_2_ = uVar155;
    auVar38._0_2_ = uVar199 >> 0xb;
    auVar38._10_6_ = 0;
    auVar170._0_2_ = (undefined2)(uVar160 >> 0xb);
    auVar37._12_4_ = 0;
    auVar37._0_12_ = SUB1612(auVar38 << 0x30,4);
    uVar203 = (undefined2)((uint)lVar72 >> 0xb);
    auVar61._0_12_ = auVar56._0_12_;
    auVar61._12_2_ = uVar214;
    auVar61._14_2_ = (short)(uVar90 >> 0xb);
    auVar60._12_4_ = auVar61._12_4_;
    auVar60._0_10_ = auVar56._0_10_;
    auVar60._10_2_ = uVar211;
    auVar59._10_6_ = auVar60._10_6_;
    auVar59._0_8_ = auVar56._0_8_;
    auVar59._8_2_ = (short)((uint)lVar208 >> 0xb);
    auVar62._8_8_ = auVar59._8_8_;
    auVar62._6_2_ = (short)(uVar89 >> 0xb);
    auVar62._4_2_ = (short)uVar68;
    auVar62._2_2_ = uVar66;
    auVar166._0_12_ = SUB1612(auVar37 << 0x20,0);
    auVar166._12_2_ = uVar199 >> 0xb;
    auVar166._14_2_ = uVar205 >> 0xb;
    auVar165._12_4_ = auVar166._12_4_;
    auVar165._0_10_ = SUB1610(auVar37 << 0x20,0);
    auVar165._10_2_ = uVar135 >> 0xb;
    auVar39._4_6_ = auVar165._10_6_;
    auVar39._2_2_ = uVar107 >> 0xb;
    auVar39._0_2_ = uVar203;
    auVar39._10_6_ = 0;
    auVar164._12_4_ = 0;
    auVar164._0_12_ = SUB1612(auVar39 << 0x30,4);
    auVar164 = auVar164 << 0x20;
    auVar62 = auVar62 & auVar137;
    auVar169._0_12_ = auVar164._0_12_;
    auVar169._12_2_ = uVar203;
    auVar169._14_2_ = (short)(uVar92 >> 0xb);
    auVar168._12_4_ = auVar169._12_4_;
    auVar168._0_10_ = auVar164._0_10_;
    auVar168._10_2_ = uVar195;
    auVar167._10_6_ = auVar168._10_6_;
    auVar167._0_8_ = auVar164._0_8_;
    auVar167._8_2_ = (short)((uint)lVar198 >> 0xb);
    auVar170._8_8_ = auVar167._8_8_;
    auVar170._6_2_ = (short)(uVar91 >> 0xb);
    auVar170._4_2_ = (short)uVar178;
    auVar170._2_2_ = uVar155;
    auVar170 = auVar170 & auVar137;
    uVar1 = auVar62._0_2_;
    uVar108 = auVar62._2_2_;
    auVar63[1] = (uVar108 != 0) * (uVar108 < 0x100) * auVar62[2] - (0xff < uVar108);
    auVar63[0] = (uVar1 != 0) * (uVar1 < 0x100) * auVar62[0] - (0xff < uVar1);
    uVar1 = auVar62._4_2_;
    auVar63[2] = (uVar1 != 0) * (uVar1 < 0x100) * auVar62[4] - (0xff < uVar1);
    uVar1 = auVar62._6_2_;
    auVar63[3] = (uVar1 != 0) * (uVar1 < 0x100) * auVar62[6] - (0xff < uVar1);
    sVar47 = auVar62._8_2_;
    auVar63[4] = (0 < sVar47) * (sVar47 < 0x100) * auVar62[8] - (0xff < sVar47);
    sVar47 = auVar62._10_2_;
    auVar63[5] = (0 < sVar47) * (sVar47 < 0x100) * auVar62[10] - (0xff < sVar47);
    sVar47 = auVar62._12_2_;
    auVar63[6] = (0 < sVar47) * (sVar47 < 0x100) * auVar62[0xc] - (0xff < sVar47);
    sVar47 = auVar62._14_2_;
    auVar63[7] = (0 < sVar47) * (sVar47 < 0x100) * auVar62[0xe] - (0xff < sVar47);
    uVar1 = auVar170._0_2_;
    auVar63[8] = (uVar1 != 0) * (uVar1 < 0x100) * auVar170[0] - (0xff < uVar1);
    uVar1 = auVar170._2_2_;
    auVar63[9] = (uVar1 != 0) * (uVar1 < 0x100) * auVar170[2] - (0xff < uVar1);
    uVar1 = auVar170._4_2_;
    auVar63[10] = (uVar1 != 0) * (uVar1 < 0x100) * auVar170[4] - (0xff < uVar1);
    uVar1 = auVar170._6_2_;
    auVar63[0xb] = (uVar1 != 0) * (uVar1 < 0x100) * auVar170[6] - (0xff < uVar1);
    sVar47 = auVar170._8_2_;
    auVar63[0xc] = (0 < sVar47) * (sVar47 < 0x100) * auVar170[8] - (0xff < sVar47);
    sVar47 = auVar170._10_2_;
    auVar63[0xd] = (0 < sVar47) * (sVar47 < 0x100) * auVar170[10] - (0xff < sVar47);
    sVar47 = auVar170._12_2_;
    auVar63[0xe] = (0 < sVar47) * (sVar47 < 0x100) * auVar170[0xc] - (0xff < sVar47);
    sVar47 = auVar170._14_2_;
    auVar63[0xf] = (0 < sVar47) * (sVar47 < 0x100) * auVar170[0xe] - (0xff < sVar47);
    auVar113._8_4_ = 0x5050505;
    auVar113._0_8_ = 0x505050505050505;
    auVar113._12_4_ = 0x5050505;
    auVar63 = auVar63 & auVar113;
    auVar176._0_14_ = auVar63._0_14_;
    auVar176[0xe] = auVar63[7];
    auVar176[0xf] = auVar63[7];
    auVar175._14_2_ = auVar176._14_2_;
    auVar175._0_13_ = auVar63._0_13_;
    auVar175[0xd] = auVar63[6];
    auVar174._13_3_ = auVar175._13_3_;
    auVar174._0_12_ = auVar63._0_12_;
    auVar174[0xc] = auVar63[6];
    auVar173._12_4_ = auVar174._12_4_;
    auVar173._0_11_ = auVar63._0_11_;
    auVar173[0xb] = auVar63[5];
    auVar172._11_5_ = auVar173._11_5_;
    auVar172._0_10_ = auVar63._0_10_;
    auVar172[10] = auVar63[5];
    auVar171._10_6_ = auVar172._10_6_;
    auVar171._0_9_ = auVar63._0_9_;
    auVar171[9] = auVar63[4];
    uVar141 = CONCAT71(auVar171._9_7_,auVar63[4]);
    Var30 = CONCAT91(CONCAT81(uVar141,auVar63[3]),auVar63[3]);
    auVar41._2_10_ = Var30;
    auVar41[1] = auVar63[2];
    auVar41[0] = auVar63[2];
    auVar40._2_12_ = auVar41;
    auVar40[1] = auVar63[1];
    auVar40[0] = auVar63[1];
    sVar47 = CONCAT11(auVar63[8],auVar63[8]);
    uVar49 = CONCAT13(auVar63[9],CONCAT12(auVar63[9],sVar47));
    uVar50 = CONCAT15(auVar63[10],CONCAT14(auVar63[10],uVar49));
    uVar51 = CONCAT17(auVar63[0xb],CONCAT16(auVar63[0xb],uVar50));
    auVar53._0_10_ = CONCAT19(auVar63[0xc],CONCAT18(auVar63[0xc],uVar51));
    auVar53[10] = auVar63[0xd];
    auVar53[0xb] = auVar63[0xd];
    auVar54[0xc] = auVar63[0xe];
    auVar54._0_12_ = auVar53;
    auVar54[0xd] = auVar63[0xe];
    auVar64[0xf] = auVar63[0xf];
    auVar64[0xe] = auVar64[0xf];
    auVar64._0_14_ = auVar54;
    auVar146._0_2_ = sVar152 * CONCAT11(auVar63[0],auVar63[0]);
    auVar146._2_2_ = auVar28._0_2_ * auVar40._0_2_;
    auVar146._4_2_ = auVar29._0_2_ * auVar41._0_2_;
    auVar146._6_2_ = sVar154 * (short)Var30;
    auVar146._8_2_ = sVar156 * (short)uVar141;
    auVar146._10_2_ = sVar157 * auVar172._10_2_;
    auVar146._12_2_ = sVar158 * auVar174._12_2_;
    auVar146._14_2_ = sVar43 * auVar175._14_2_;
    auVar65._0_2_ = sVar47 * sVar138;
    auVar65._2_2_ = (short)((uint)uVar49 >> 0x10) * sVar148;
    auVar65._4_2_ = (short)((uint6)uVar50 >> 0x20) * sVar149;
    auVar65._6_2_ = (short)((ulonglong)uVar51 >> 0x30) * sVar150;
    auVar65._8_2_ = (short)((unkuint10)auVar53._0_10_ >> 0x40) * sVar151;
    auVar65._10_2_ = auVar53._10_2_ * auVar142._10_2_;
    auVar65._12_2_ = auVar54._12_2_ * auVar143._12_2_;
    auVar65._14_2_ = auVar64._14_2_ * auVar145._14_2_;
    auVar65 = auVar65 & auVar137;
    auVar146 = auVar146 & auVar137;
    uVar1 = auVar146._0_2_;
    uVar108 = auVar146._2_2_;
    auVar147[1] = (uVar108 != 0) * (uVar108 < 0x100) * auVar146[2] - (0xff < uVar108);
    auVar147[0] = (uVar1 != 0) * (uVar1 < 0x100) * auVar146[0] - (0xff < uVar1);
    uVar1 = auVar146._4_2_;
    auVar147[2] = (uVar1 != 0) * (uVar1 < 0x100) * auVar146[4] - (0xff < uVar1);
    uVar1 = auVar146._6_2_;
    auVar147[3] = (uVar1 != 0) * (uVar1 < 0x100) * auVar146[6] - (0xff < uVar1);
    sVar47 = auVar146._8_2_;
    auVar147[4] = (0 < sVar47) * (sVar47 < 0x100) * auVar146[8] - (0xff < sVar47);
    sVar47 = auVar146._10_2_;
    auVar147[5] = (0 < sVar47) * (sVar47 < 0x100) * auVar146[10] - (0xff < sVar47);
    sVar47 = auVar146._12_2_;
    auVar147[6] = (0 < sVar47) * (sVar47 < 0x100) * auVar146[0xc] - (0xff < sVar47);
    sVar47 = auVar146._14_2_;
    auVar147[7] = (0 < sVar47) * (sVar47 < 0x100) * auVar146[0xe] - (0xff < sVar47);
    uVar1 = auVar65._0_2_;
    auVar147[8] = (uVar1 != 0) * (uVar1 < 0x100) * auVar65[0] - (0xff < uVar1);
    uVar1 = auVar65._2_2_;
    auVar147[9] = (uVar1 != 0) * (uVar1 < 0x100) * auVar65[2] - (0xff < uVar1);
    uVar1 = auVar65._4_2_;
    auVar147[10] = (uVar1 != 0) * (uVar1 < 0x100) * auVar65[4] - (0xff < uVar1);
    uVar1 = auVar65._6_2_;
    auVar147[0xb] = (uVar1 != 0) * (uVar1 < 0x100) * auVar65[6] - (0xff < uVar1);
    sVar47 = auVar65._8_2_;
    auVar147[0xc] = (0 < sVar47) * (sVar47 < 0x100) * auVar65[8] - (0xff < sVar47);
    sVar47 = auVar65._10_2_;
    auVar147[0xd] = (0 < sVar47) * (sVar47 < 0x100) * auVar65[10] - (0xff < sVar47);
    sVar47 = auVar65._12_2_;
    auVar147[0xe] = (0 < sVar47) * (sVar47 < 0x100) * auVar65[0xc] - (0xff < sVar47);
    sVar47 = auVar65._14_2_;
    auVar147[0xf] = (0 < sVar47) * (sVar47 < 0x100) * auVar65[0xe] - (0xff < sVar47);
    *pauVar45 = auVar132 | auVar147 | auVar85;
    pauVar45 = pauVar46;
    auVar113 = auVar159;
  } while (pauVar44 + 14000 != pauVar46);
  local_bc = 0;
  local_e8._8_4_ = 0x36b00;
  local_dc = (undefined1  [16])0x0;
  local_cc = (undefined1  [16])0x0;
  local_e8._0_8_ = pauVar44;
  waveOutPrepareHeader(local_110,(LPWAVEHDR)local_e8,0x30);
  waveOutWrite(local_110,(LPWAVEHDR)local_e8,0x30);
  while ((local_dc[0xc] & 1) == 0) {
    Sleep(0x32);
  }
  waveOutUnprepareHeader(local_110,(LPWAVEHDR)local_e8,0x30);
  waveOutClose(local_110);
  operator_delete__(pauVar44);
  isSound1Finished = 1;
  return 0;
}



// SoundPhase2(void*)

undefined8 SoundPhase2(void)

{
  LPSTR pCVar1;
  ulonglong uVar2;
  HWAVEOUT local_70;
  WAVEFORMATEX local_68;
  undefined1 local_48 [12];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  
  local_68.wFormatTag = 1;
  local_68.nChannels = 1;
  local_68.nSamplesPerSec = 8000;
  local_68.nAvgBytesPerSec = 8000;
  local_68.nBlockAlign = 1;
  local_68.wBitsPerSample = 8;
  local_68.cbSize = 0;
  waveOutOpen(&local_70,0xffffffff,&local_68,0,0,0);
  pCVar1 = operator_new__(0x3e800);
  uVar2 = 0;
  do {
    pCVar1[uVar2] =
         ((byte)(uVar2 >> 4) | (byte)(uVar2 >> 8)) * (char)uVar2 & (byte)(uVar2 >> 5) |
         (byte)((uVar2 >> 7 | uVar2 >> 5) * uVar2 >> ((byte)(uVar2 >> 0xc) & 3));
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x3e800);
  local_1c = 0;
  local_48._8_4_ = 0x3e800;
  local_3c = (undefined1  [16])0x0;
  local_2c = (undefined1  [16])0x0;
  local_48._0_8_ = pCVar1;
  waveOutPrepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutWrite(local_70,(LPWAVEHDR)local_48,0x30);
  while ((local_3c[0xc] & 1) == 0) {
    Sleep(0x32);
  }
  waveOutUnprepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutClose(local_70);
  operator_delete__(pCVar1);
  isSound2Finished = 1;
  return 0;
}



// SoundPhase3(void*)

undefined8 SoundPhase3(void)

{
  LPSTR pCVar1;
  ulonglong uVar2;
  HWAVEOUT local_70;
  WAVEFORMATEX local_68;
  undefined1 local_48 [12];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  
  local_68.wFormatTag = 1;
  local_68.nChannels = 1;
  local_68.nSamplesPerSec = 8000;
  local_68.nAvgBytesPerSec = 8000;
  local_68.nBlockAlign = 1;
  local_68.wBitsPerSample = 8;
  local_68.cbSize = 0;
  waveOutOpen(&local_70,0xffffffff,&local_68,0,0,0);
  pCVar1 = operator_new__(280000);
  *pCVar1 = '\0';
  uVar2 = 1;
  do {
    pCVar1[uVar2] =
         ((byte)(uVar2 >> 0xb) & (byte)(uVar2 >> 0xc) & 3) *
         ((byte)(uVar2 >> 4) & (byte)(uVar2 >> 8)) |
         (((byte)(uVar2 >> 9) | (byte)(uVar2 >> 0xd)) & (byte)(uVar2 >> 6) & 0xf) * (char)uVar2 |
         ("36364646"[(uint)(uVar2 >> 0xd) & 7] + -0x30) * (char)uVar2 & (byte)(uVar2 >> 5);
    uVar2 = uVar2 + 1;
  } while (uVar2 != 280000);
  local_1c = 0;
  local_48._8_4_ = 280000;
  local_3c = (undefined1  [16])0x0;
  local_2c = (undefined1  [16])0x0;
  local_48._0_8_ = pCVar1;
  waveOutPrepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutWrite(local_70,(LPWAVEHDR)local_48,0x30);
  while ((local_3c[0xc] & 1) == 0) {
    Sleep(0x32);
  }
  waveOutUnprepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutClose(local_70);
  operator_delete__(pCVar1);
  isSound3Finished = 1;
  return 0;
}



// SoundPhase4(void*)

undefined8 SoundPhase4(void)

{
  LPSTR pCVar1;
  ulonglong uVar2;
  HWAVEOUT local_70;
  WAVEFORMATEX local_68;
  undefined1 local_48 [12];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  
  local_68.wFormatTag = 1;
  local_68.nChannels = 1;
  local_68.nSamplesPerSec = 8000;
  local_68.nAvgBytesPerSec = 8000;
  local_68.nBlockAlign = 1;
  local_68.wBitsPerSample = 8;
  local_68.cbSize = 0;
  waveOutOpen(&local_70,0xffffffff,&local_68,0,0,0);
  pCVar1 = operator_new__(320000);
  uVar2 = 0;
  do {
    pCVar1[uVar2] =
         (CHAR)(((ulonglong)((uint)(uVar2 >> 10) & 5) + 1) * ((uint)(uVar2 >> 0xd) & 3) * uVar2 >>
               ((byte)(uVar2 >> 9) & 3));
    uVar2 = uVar2 + 1;
  } while (uVar2 != 320000);
  local_1c = 0;
  local_48._8_4_ = 320000;
  local_3c = (undefined1  [16])0x0;
  local_2c = (undefined1  [16])0x0;
  local_48._0_8_ = pCVar1;
  waveOutPrepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutWrite(local_70,(LPWAVEHDR)local_48,0x30);
  while ((local_3c[0xc] & 1) == 0) {
    Sleep(0x32);
  }
  waveOutUnprepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutClose(local_70);
  operator_delete__(pCVar1);
  isSound4Finished = 1;
  return 0;
}



// SoundPhase5(void*)

undefined8 SoundPhase5(void)

{
  LPSTR pCVar1;
  ulonglong uVar2;
  HWAVEOUT local_70;
  WAVEFORMATEX local_68;
  undefined1 local_48 [12];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  
  local_68.wFormatTag = 1;
  local_68.nChannels = 1;
  local_68.nSamplesPerSec = 8000;
  local_68.nAvgBytesPerSec = 8000;
  local_68.nBlockAlign = 1;
  local_68.wBitsPerSample = 8;
  local_68.cbSize = 0;
  waveOutOpen(&local_70,0xffffffff,&local_68,0,0,0);
  pCVar1 = operator_new__(400000);
  uVar2 = 0;
  do {
    pCVar1[uVar2] = (char)((uVar2 >> 5 | uVar2) >> ((byte)(uVar2 >> 0xf) & 0x3f)) * (char)uVar2;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 400000);
  local_1c = 0;
  local_48._8_4_ = 400000;
  local_3c = (undefined1  [16])0x0;
  local_2c = (undefined1  [16])0x0;
  local_48._0_8_ = pCVar1;
  waveOutPrepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutWrite(local_70,(LPWAVEHDR)local_48,0x30);
  while ((local_3c[0xc] & 1) == 0) {
    Sleep(0x32);
  }
  waveOutUnprepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutClose(local_70);
  operator_delete__(pCVar1);
  isSound5Finished = 1;
  return 0;
}



// SoundPhase6(void*)

undefined8 SoundPhase6(void)

{
  LPSTR pCVar1;
  ulonglong uVar2;
  HWAVEOUT local_70;
  WAVEFORMATEX local_68;
  undefined1 local_48 [12];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  
  local_68.wFormatTag = 1;
  local_68.nChannels = 1;
  local_68.nSamplesPerSec = 8000;
  local_68.nAvgBytesPerSec = 8000;
  local_68.nBlockAlign = 1;
  local_68.wBitsPerSample = 8;
  local_68.cbSize = 0;
  waveOutOpen(&local_70,0xffffffff,&local_68,0,0,0);
  pCVar1 = operator_new__(0x36b00);
  *pCVar1 = '\0';
  uVar2 = 1;
  do {
    pCVar1[uVar2] =
         ("35787532"[(uint)(uVar2 >> 0xb) & 7] + -0x30) * (char)uVar2 & (byte)(uVar2 >> 4) |
         ((byte)(uVar2 >> 8) | (byte)(uVar2 >> 5)) * (char)uVar2 & 0x40;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x36b00);
  local_1c = 0;
  local_48._8_4_ = 0x36b00;
  local_3c = (undefined1  [16])0x0;
  local_2c = (undefined1  [16])0x0;
  local_48._0_8_ = pCVar1;
  waveOutPrepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutWrite(local_70,(LPWAVEHDR)local_48,0x30);
  while ((local_3c[0xc] & 1) == 0) {
    Sleep(0x32);
  }
  waveOutUnprepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutClose(local_70);
  operator_delete__(pCVar1);
  isSound6Finished = 1;
  return 0;
}



// SoundPhase7(void*)

undefined8 SoundPhase7(void)

{
  LPSTR pCVar1;
  ulonglong uVar2;
  HWAVEOUT local_70;
  WAVEFORMATEX local_68;
  undefined1 local_48 [12];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  
  local_68.wFormatTag = 1;
  local_68.nChannels = 1;
  local_68.nSamplesPerSec = 8000;
  local_68.nAvgBytesPerSec = 8000;
  local_68.nBlockAlign = 1;
  local_68.wBitsPerSample = 8;
  local_68.cbSize = 0;
  waveOutOpen(&local_70,0xffffffff,&local_68,0,0,0);
  pCVar1 = operator_new__(0x6d600);
  *pCVar1 = '\0';
  uVar2 = 1;
  do {
    pCVar1[uVar2] =
         ("345678"[(uint)(uVar2 >> 0xc) & 5] + -0x30) * (char)uVar2 & (byte)(uVar2 >> 4) |
         ((byte)(uVar2 >> 9) | (byte)(uVar2 >> 0xe)) * (char)uVar2 & 0x1e;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x6d600);
  local_1c = 0;
  local_48._8_4_ = 0x6d600;
  local_3c = (undefined1  [16])0x0;
  local_2c = (undefined1  [16])0x0;
  local_48._0_8_ = pCVar1;
  waveOutPrepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutWrite(local_70,(LPWAVEHDR)local_48,0x30);
  while ((local_3c[0xc] & 1) == 0) {
    Sleep(0x32);
  }
  waveOutUnprepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutClose(local_70);
  operator_delete__(pCVar1);
  isSound7Finished = 1;
  return 0;
}



// SoundPhase8(void*)

undefined8 SoundPhase8(void)

{
  byte bVar1;
  LPSTR pCVar2;
  byte bVar3;
  ulonglong uVar4;
  HWAVEOUT local_70;
  WAVEFORMATEX local_68;
  undefined1 local_48 [12];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  
  local_68.wFormatTag = 1;
  local_68.nChannels = 1;
  local_68.nSamplesPerSec = 8000;
  local_68.nAvgBytesPerSec = 8000;
  local_68.nBlockAlign = 1;
  local_68.wBitsPerSample = 8;
  local_68.cbSize = 0;
  waveOutOpen(&local_70,0xffffffff,&local_68,0,0,0);
  pCVar2 = operator_new__(240000);
  uVar4 = 0;
LAB_140002634:
  do {
    if ((uVar4 & 0x1000) == 0) {
      bVar1 = 0;
      bVar3 = 2;
      if ((uVar4 & 0x4000) != 0) {
        pCVar2[uVar4] = (CHAR)(uVar4 >> 3);
        uVar4 = uVar4 + 1;
        goto LAB_140002634;
      }
    }
    else if ((ushort)uVar4 < 0xe800) {
      bVar1 = ((byte)uVar4 & 7) * (byte)uVar4;
      bVar3 = (-((uVar4 & 0x4000) == 0) & 0xf8U) + 10;
    }
    else {
      bVar3 = 10;
      bVar1 = (byte)((int)uVar4 << 4);
    }
    pCVar2[uVar4] = bVar1 | (byte)(uVar4 >> (bVar3 & 0x3f));
    uVar4 = uVar4 + 1;
    if (uVar4 == 240000) {
      local_1c = 0;
      local_48._8_4_ = 240000;
      local_3c = (undefined1  [16])0x0;
      local_2c = (undefined1  [16])0x0;
      local_48._0_8_ = pCVar2;
      waveOutPrepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
      waveOutWrite(local_70,(LPWAVEHDR)local_48,0x30);
      while ((local_3c[0xc] & 1) == 0) {
        Sleep(0x32);
      }
      waveOutUnprepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
      waveOutClose(local_70);
      operator_delete__(pCVar2);
      isSound8Finished = 1;
      return 0;
    }
  } while( true );
}



// SoundPhase9(void*)

undefined8 SoundPhase9(void)

{
  byte bVar1;
  LPSTR pCVar2;
  byte bVar3;
  ulonglong uVar4;
  HWAVEOUT local_70;
  WAVEFORMATEX local_68;
  undefined1 local_48 [12];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  
  local_68.wFormatTag = 1;
  local_68.nChannels = 1;
  local_68.nSamplesPerSec = 8000;
  local_68.nAvgBytesPerSec = 8000;
  local_68.nBlockAlign = 1;
  local_68.wBitsPerSample = 8;
  local_68.cbSize = 0;
  waveOutOpen(&local_70,0xffffffff,&local_68,0,0,0);
  pCVar2 = operator_new__(240000);
  bVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = bVar3 & 0x3f;
    bVar3 = bVar3 + 0xe;
    pCVar2[uVar4] = (CHAR)((((uVar4 >> 1) + 0x14 ^ 3) * uVar4 * uVar4 >> bVar1) >> 0x12);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 240000);
  local_1c = 0;
  local_48._8_4_ = 240000;
  local_3c = (undefined1  [16])0x0;
  local_2c = (undefined1  [16])0x0;
  local_48._0_8_ = pCVar2;
  waveOutPrepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutWrite(local_70,(LPWAVEHDR)local_48,0x30);
  while ((local_3c[0xc] & 1) == 0) {
    Sleep(0x32);
  }
  waveOutUnprepareHeader(local_70,(LPWAVEHDR)local_48,0x30);
  waveOutClose(local_70);
  operator_delete__(pCVar2);
  isSound9Finished = 1;
  return 0;
}



// RunPhase1()

void RunPhase1(void)

{
  HDC hdcDest;
  double dVar1;
  double dVar2;
  float fVar3;
  double local_68;
  double local_60 [9];
  
  isSound1Finished = '\0';
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SoundPhase1,(LPVOID)0x0,0,(LPDWORD)0x0);
  hdcDest = GetDC((HWND)0x0);
  screenWidth = GetSystemMetrics(0);
  screenHeight = GetSystemMetrics(1);
  if (isSound1Finished == '\0') {
    fVar3 = 0.0;
    dVar2 = 1.0;
    dVar1 = 0.0;
    while( true ) {
      StretchBlt(hdcDest,(int)(dVar1 * 35.0) + 7,(int)(dVar2 * 25.0) + 7,screenWidth + -0xf,
                 screenHeight + -0xf,hdcDest,0,0,screenWidth,screenHeight,0xcc0020);
      Sleep(10);
      if (isSound1Finished != '\0') break;
      fVar3 = fVar3 + 0.07;
      sincos((double)fVar3,local_60,&local_68);
      dVar2 = local_68;
      dVar1 = local_60[0];
    }
  }
                    // WARNING: Could not recover jumptable at 0x000140002a3c. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseDC((HWND)0x0,hdcDest);
  return;
}



// RunPhase2()

void RunPhase2(void)

{
  int iVar1;
  int iVar2;
  HDC hdc;
  HFONT h;
  HGDIOBJ h_00;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_ec;
  
  isSound2Finished = '\0';
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SoundPhase2,(LPVOID)0x0,0,(LPDWORD)0x0);
  hdc = GetDC((HWND)0x0);
  iVar2 = screenWidth;
  iVar1 = screenHeight;
  SetBkMode(hdc,1);
  if (isSound2Finished == '\0') {
    dVar3 = 0.0;
    fVar7 = 0.0;
    fVar6 = 0.0;
    local_ec = 8.0;
    fVar8 = (float)(iVar2 / 2);
    fVar9 = (float)(iVar1 / 2);
    fVar10 = 6.0;
    while( true ) {
      fVar8 = fVar8 + local_ec;
      fVar9 = fVar9 + fVar10;
      if ((fVar8 <= 0.0) || ((float)screenWidth <= fVar8 + 180.0)) {
        local_ec = -local_ec;
        fVar8 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar8);
        if ((float)screenWidth < fVar8 + 180.0) {
          fVar8 = (float)(screenWidth + -0xb4);
        }
      }
      if ((fVar9 <= 0.0) || ((float)screenHeight <= fVar9 + 130.0)) {
        fVar10 = -fVar10;
        fVar9 = (float)(-(uint)(0.0 <= fVar9) & (uint)fVar9);
        if ((float)screenHeight < fVar9 + 130.0) {
          fVar9 = (float)(screenHeight + -0x82);
        }
      }
      h = CreateFontW((int)(dVar3 * 25.0) + 0x6e,0,0,0,700,0,0,0,0,0,0,0,0,L"Impact");
      h_00 = SelectObject(hdc,h);
      dVar3 = sin((double)fVar6);
      dVar4 = sin((double)(fVar6 + 2.0));
      dVar5 = sin((double)(fVar6 + 4.0));
      SetTextColor(hdc,((int)(dVar5 * 127.0 + 128.0) & 0xffU) << 0x10 |
                       ((int)(dVar4 * 127.0 + 128.0) & 0xffU) << 8 |
                       (int)(dVar3 * 127.0 + 128.0) & 0xffU);
      TextOutW(hdc,(int)fVar8,(int)fVar9,L"67",2);
      SelectObject(hdc,h_00);
      DeleteObject(h);
      Sleep(0xf);
      if (isSound2Finished != '\0') break;
      fVar7 = fVar7 + 0.08;
      fVar6 = fVar6 + 0.1;
      dVar3 = sin((double)fVar7);
    }
  }
                    // WARNING: Could not recover jumptable at 0x000140002e56. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseDC((HWND)0x0,hdc);
  return;
}



// RunPhase3()

void RunPhase3(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  HDC hdc;
  int iVar6;
  
  isSound3Finished = '\0';
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SoundPhase3,(LPVOID)0x0,0,(LPDWORD)0x0);
  hdc = GetDC((HWND)0x0);
  while (isSound3Finished == '\0') {
    iVar1 = rand();
    iVar1 = iVar1 % 0x96 + 100;
    iVar2 = rand();
    iVar2 = iVar2 % 0x96 + 100;
    iVar3 = rand();
    iVar3 = iVar3 % (screenWidth - iVar1);
    iVar4 = rand();
    iVar6 = 0x15e;
    iVar4 = iVar4 % (screenHeight - iVar2);
    BitBlt(hdc,iVar3,iVar4,iVar1,iVar2,hdc,iVar3,iVar4,0x550009);
    do {
      iVar1 = rand();
      iVar1 = iVar1 % screenWidth;
      iVar2 = rand();
      iVar2 = iVar2 % screenHeight;
      uVar5 = rand();
      iVar3 = rand();
      iVar4 = rand();
      SetPixel(hdc,iVar1,iVar2,
               (iVar4 % 0x100 & 0xffU) << 0x10 | uVar5 & 0xff | (iVar3 % 0x100 & 0xffU) << 8);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    Sleep(4);
  }
                    // WARNING: Could not recover jumptable at 0x000140003005. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseDC((HWND)0x0,hdc);
  return;
}



// RunPhase4()

void RunPhase4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  HDC hdc;
  HBRUSH h;
  HGDIOBJ h_00;
  int iVar8;
  int iVar9;
  
  isSound4Finished = '\0';
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SoundPhase4,(LPVOID)0x0,0,(LPDWORD)0x0);
  hdc = GetDC((HWND)0x0);
  while (isSound4Finished == '\0') {
    iVar1 = rand();
    iVar1 = iVar1 % 400 + 200;
    iVar2 = rand();
    iVar2 = iVar2 % 400 + 200;
    iVar3 = rand();
    iVar8 = screenWidth - iVar1;
    iVar4 = rand();
    iVar9 = screenHeight - iVar2;
    uVar5 = rand();
    iVar6 = rand();
    iVar7 = rand();
    h = CreateSolidBrush((iVar6 % 0x100 & 0xffU) << 8 | uVar5 & 0xff |
                         (iVar7 % 0x100 & 0xffU) << 0x10);
    h_00 = SelectObject(hdc,h);
    PatBlt(hdc,iVar3 % iVar8,iVar4 % iVar9,iVar1,iVar2,0x5a0049);
    SelectObject(hdc,h_00);
    DeleteObject(h);
    Sleep(10);
  }
                    // WARNING: Could not recover jumptable at 0x0001400031a3. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseDC((HWND)0x0,hdc);
  return;
}



// RunPhase5()

void RunPhase5(void)

{
  HDC hdcDest;
  
  isSound5Finished = '\0';
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SoundPhase5,(LPVOID)0x0,0,(LPDWORD)0x0);
  hdcDest = GetDC((HWND)0x0);
  while (isSound5Finished == '\0') {
    StretchBlt(hdcDest,10,10,screenWidth + -0x14,screenHeight + -0x14,hdcDest,0,0,screenWidth,
               screenHeight,0xcc0020);
    Sleep(100);
  }
                    // WARNING: Could not recover jumptable at 0x000140003278. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseDC((HWND)0x0,hdcDest);
  return;
}



// RunPhase6()

void RunPhase6(void)

{
  int iVar1;
  HDC hdc;
  int x;
  double dVar2;
  float fVar3;
  
  isSound6Finished = '\0';
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SoundPhase6,(LPVOID)0x0,0,(LPDWORD)0x0);
  hdc = GetDC((HWND)0x0);
  if (isSound6Finished == '\0') {
    dVar2 = 0.0;
    fVar3 = 0.0;
    while( true ) {
      x = (int)(dVar2 * 80.0);
      iVar1 = rand();
      if (iVar1 * -0x11111111 + 0x8888888U < 0x11111111) {
        iVar1 = rand();
        x = x + -0xf + iVar1 % 0x1e;
      }
      BitBlt(hdc,x,0,screenWidth,screenHeight,hdc,0,0,
             (-(uint)(((int)(fVar3 + fVar3) & 1U) == 0) & 0x65ffda) + 0x660046);
      Sleep(0x14);
      if (isSound6Finished != '\0') break;
      fVar3 = fVar3 + 0.08;
      dVar2 = sin((double)fVar3);
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001400033f8. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseDC((HWND)0x0,hdc);
  return;
}



// RunPhase7()

void RunPhase7(void)

{
  HDC hDC;
  HICON hIcon;
  int X;
  int Y;
  double dVar1;
  double dVar2;
  float fVar3;
  
  isSound7Finished = '\0';
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SoundPhase7,(LPVOID)0x0,0,(LPDWORD)0x0);
  hDC = GetDC((HWND)0x0);
  hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f03);
  if (isSound7Finished == '\0') {
    dVar2 = 1.0;
    dVar1 = 0.0;
    fVar3 = 0.0;
    while( true ) {
      X = (int)((double)((float)screenWidth / 2.5) * dVar1) + screenWidth / 2;
      Y = (int)((double)((float)screenHeight / 2.5) * dVar2) + screenHeight / 2;
      SetCursorPos(X,Y);
      DrawIcon(hDC,X,Y,hIcon);
      StretchBlt(hDC,-0xf,-0xf,screenWidth + 0x1e,screenHeight + 0x1e,hDC,0,0,screenWidth,
                 screenHeight,0xcc0020);
      Sleep(0xf);
      if (isSound7Finished != '\0') break;
      fVar3 = fVar3 + 0.06;
      dVar1 = sin((double)fVar3);
      dVar2 = cos((double)(fVar3 * 1.5));
    }
  }
                    // WARNING: Could not recover jumptable at 0x00014000360c. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseDC((HWND)0x0,hDC);
  return;
}



// RunPhase8()

void RunPhase8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  HDC hdc;
  
  isSound8Finished = '\0';
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SoundPhase8,(LPVOID)0x0,0,(LPDWORD)0x0);
  hdc = GetDC((HWND)0x0);
  while (isSound8Finished == '\0') {
    iVar1 = rand();
    iVar2 = rand();
    iVar3 = rand();
    iVar3 = iVar3 % screenHeight;
    iVar4 = rand();
    iVar5 = rand();
    BitBlt(hdc,iVar5 % 0x3c + -0x1e,iVar3,screenWidth,iVar4 % 100 + 0x32,hdc,0,iVar3,0xcc0020);
    BitBlt(hdc,iVar1 % 0x1e + -0xf,iVar2 % 0x1e + -0xf,screenWidth,screenHeight,hdc,0,0,0x660046);
    Sleep(10);
  }
                    // WARNING: Could not recover jumptable at 0x0001400037bf. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseDC((HWND)0x0,hdc);
  return;
}



// RunPhase9()

void RunPhase9(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  HDC hdc;
  
  isSound9Finished = '\0';
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SoundPhase9,(LPVOID)0x0,0,(LPDWORD)0x0);
  hdc = GetDC((HWND)0x0);
  while (isSound9Finished == '\0') {
    while( true ) {
      iVar1 = rand();
      iVar1 = iVar1 % 0x3c + 0x28;
      iVar2 = rand();
      iVar2 = iVar2 % screenWidth;
      iVar3 = rand();
      iVar3 = iVar3 % 0xf + 5;
      BitBlt(hdc,iVar2,iVar3,iVar1,screenHeight - iVar3,hdc,iVar2,0,0xcc0020);
      iVar3 = rand();
      uVar4 = iVar3 * -0x33333333 + 0x19999998;
      if ((uVar4 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f) < 0x19999999) break;
      Sleep(10);
      if (isSound9Finished != '\0') goto LAB_1400038f1;
    }
    BitBlt(hdc,iVar2,0,iVar1,screenHeight,hdc,iVar2,0,0x550009);
    Sleep(10);
  }
LAB_1400038f1:
                    // WARNING: Could not recover jumptable at 0x000140003900. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseDC((HWND)0x0,hdc);
  return;
}



int __stdcall WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)

{
  int iVar1;
  
  iVar1 = MessageBoxW((HWND)0x0,L"Run GDI Only?",L"67.exe",0x1024);
  if (iVar1 != 7) {
    iVar1 = MessageBoxW((HWND)0x0,L"Are you sure? For not epileptics!",L"Warning",0x1034);
    if (iVar1 == 6) {
      RunPhase1();
      RunPhase2();
      RunPhase3();
      RunPhase4();
      RunPhase5();
      RunPhase6();
      RunPhase7();
      RunPhase8();
      RunPhase9();
    }
  }
                    // WARNING: Subroutine does not return
  exit(0);
}



MMRESULT __stdcall waveOutWrite(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a00. Too many branches
                    // WARNING: Treating indirect jump as call
  MVar1 = waveOutWrite(hwo,pwh,cbwh);
  return MVar1;
}



MMRESULT __stdcall waveOutUnprepareHeader(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a08. Too many branches
                    // WARNING: Treating indirect jump as call
  MVar1 = waveOutUnprepareHeader(hwo,pwh,cbwh);
  return MVar1;
}



MMRESULT __stdcall waveOutPrepareHeader(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a10. Too many branches
                    // WARNING: Treating indirect jump as call
  MVar1 = waveOutPrepareHeader(hwo,pwh,cbwh);
  return MVar1;
}



MMRESULT __stdcall
waveOutOpen(LPHWAVEOUT phwo,UINT uDeviceID,LPCWAVEFORMATEX pwfx,DWORD_PTR dwCallback,
           DWORD_PTR dwInstance,DWORD fdwOpen)

{
  MMRESULT MVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a18. Too many branches
                    // WARNING: Treating indirect jump as call
  MVar1 = waveOutOpen(phwo,uDeviceID,pwfx,dwCallback,dwInstance,fdwOpen);
  return MVar1;
}



MMRESULT __stdcall waveOutClose(HWAVEOUT hwo)

{
  MMRESULT MVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a20. Too many branches
                    // WARNING: Treating indirect jump as call
  MVar1 = waveOutClose(hwo);
  return MVar1;
}



BOOL __stdcall TextOutW(HDC hdc,int x,int y,LPCWSTR lpString,int c)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a30. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = TextOutW(hdc,x,y,lpString,c);
  return BVar1;
}



BOOL __stdcall
StretchBlt(HDC hdcDest,int xDest,int yDest,int wDest,int hDest,HDC hdcSrc,int xSrc,int ySrc,int wSrc
          ,int hSrc,DWORD rop)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a38. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = StretchBlt(hdcDest,xDest,yDest,wDest,hDest,hdcSrc,xSrc,ySrc,wSrc,hSrc,rop);
  return BVar1;
}



COLORREF __stdcall SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a40. Too many branches
                    // WARNING: Treating indirect jump as call
  CVar1 = SetTextColor(hdc,color);
  return CVar1;
}



COLORREF __stdcall SetPixel(HDC hdc,int x,int y,COLORREF color)

{
  COLORREF CVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a48. Too many branches
                    // WARNING: Treating indirect jump as call
  CVar1 = SetPixel(hdc,x,y,color);
  return CVar1;
}



int __stdcall SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}



HGDIOBJ __stdcall SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = SelectObject(hdc,h);
  return pvVar1;
}



BOOL __stdcall PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a60. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = PatBlt(hdc,x,y,w,h,rop);
  return BVar1;
}



BOOL __stdcall DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a68. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = DeleteObject(ho);
  return BVar1;
}



HBRUSH __stdcall CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a70. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}



HFONT __stdcall
CreateFontW(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic,
           DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision
           ,DWORD iQuality,DWORD iPitchAndFamily,LPCWSTR pszFaceName)

{
  HFONT pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a78. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = CreateFontW(cHeight,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,bStrikeOut
                       ,iCharSet,iOutPrecision,iClipPrecision,iQuality,iPitchAndFamily,pszFaceName);
  return pHVar1;
}



BOOL __stdcall BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003a80. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = BitBlt(hdc,x,y,cx,cy,hdcSrc,x1,y1,rop);
  return BVar1;
}



uint * d_make_comp(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  
  lVar2 = param_3;
  if (param_2 < 0x48) {
    if (param_2 < 9) goto LAB_140003b80;
    uVar3 = 1L << ((char)param_2 - 9U & 0x3f);
    if ((uVar3 & 0x711071017c007ffb) == 0) {
      if ((uVar3 & 0xc201ff0000) != 0) goto LAB_140003b12;
      uVar3 = uVar3 & 0x20400000000;
joined_r0x000140003b79:
      lVar2 = param_4;
      if (uVar3 == 0) goto LAB_140003b80;
    }
  }
  else {
    if (param_2 != 0x5f) {
      uVar3 = 1L << ((char)param_2 + 0xb4U & 0x3f);
      if ((uVar3 & 0x76247) == 0) {
        if ((uVar3 & 0x8190) != 0) goto LAB_140003b12;
        uVar3 = uVar3 & 0xc00;
        goto joined_r0x000140003b79;
      }
      goto joined_r0x000140003b4b;
    }
LAB_140003b80:
    lVar2 = param_4;
    if (param_3 == 0) {
      return (uint *)0x0;
    }
  }
joined_r0x000140003b4b:
  if (lVar2 == 0) {
    return (uint *)0x0;
  }
LAB_140003b12:
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) <= iVar1) {
    return (uint *)0x0;
  }
  puVar4 = (uint *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x20));
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  *puVar4 = param_2;
  *(longlong *)(puVar4 + 4) = param_3;
  *(longlong *)(puVar4 + 6) = param_4;
  return puVar4;
}



undefined4 * d_make_name(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < *(int *)(param_1 + 0x2c)) {
    puVar2 = (undefined4 *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x20));
    *(undefined8 *)(puVar2 + 1) = 0;
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    if ((param_2 != 0) && (0 < param_3)) {
      *(undefined8 *)(puVar2 + 1) = 0;
      *puVar2 = 0;
      *(longlong *)(puVar2 + 4) = param_2;
      puVar2[6] = param_3;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



int d_number(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar2;
  if (cVar1 == 'n') {
    *(char **)(param_1 + 0x18) = pcVar2 + 1;
    cVar1 = pcVar2[1];
    if (9 < (byte)(cVar1 - 0x30U)) {
      return 0;
    }
    bVar4 = true;
  }
  else {
    if (9 < (byte)(cVar1 - 0x30U)) {
      return 0;
    }
    bVar4 = false;
  }
  iVar5 = 0;
  do {
    if ((int)((0x7fffffffU - (int)(char)(cVar1 + -0x30)) / 10) < iVar5) {
      return -1;
    }
    iVar5 = (int)(char)(cVar1 + -0x30) + iVar5 * 10;
    lVar3 = *(longlong *)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = lVar3 + 1;
    cVar1 = *(char *)(lVar3 + 1);
  } while ((byte)(cVar1 - 0x30U) < 10);
  if (bVar4) {
    iVar5 = -iVar5;
  }
  return iVar5;
}



undefined8 d_call_offset(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = *(char **)(param_1 + 0x18);
    if (*pcVar1 == '\0') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar1 + 1;
    if (*pcVar1 == 'h') goto LAB_140003d18;
    if (*pcVar1 != 'v') {
      return 0;
    }
  }
  else if (param_2 == 0x68) goto LAB_140003d18;
  d_number(param_1);
  if (**(char **)(param_1 + 0x18) != '_') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
LAB_140003d18:
  d_number(param_1);
  if (**(char **)(param_1 + 0x18) != '_') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  return 1;
}



uint * d_ref_qualifier(longlong param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  cVar1 = **(char **)(param_1 + 0x18);
  if ((cVar1 != 'R') && (cVar1 != 'O')) {
    return param_2;
  }
  iVar3 = *(int *)(param_1 + 0x48) + 3;
  if (cVar1 == 'R') {
    iVar3 = *(int *)(param_1 + 0x48) + 2;
  }
  uVar4 = 0x20;
  if (cVar1 == 'R') {
    uVar4 = 0x1f;
  }
  *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x48) = iVar3;
  puVar2 = d_make_comp(param_1,uVar4,(longlong)param_2,0);
  return puVar2;
}



undefined8 d_discriminator(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = *(char **)(param_1 + 0x18);
  if (*pcVar1 == '_') {
    iVar3 = 1;
    *(char **)(param_1 + 0x18) = pcVar1 + 1;
    if (pcVar1[1] == '_') {
      iVar3 = 2;
      *(char **)(param_1 + 0x18) = pcVar1 + 2;
      iVar2 = d_number(param_1);
    }
    else {
      iVar2 = d_number(param_1);
    }
    if (iVar2 < 0) {
      return 0;
    }
    if ((iVar3 == 2) && (9 < iVar2)) {
      if (**(char **)(param_1 + 0x18) != '_') {
        return 0;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    }
  }
  return 1;
}



void d_count_templates_scopes(longlong param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  do {
    while( true ) {
      if (param_2 == (uint *)0x0) {
        return;
      }
      if (1 < (int)param_2[2]) {
        return;
      }
      if (0x400 < *(int *)(param_1 + 0x134)) {
        return;
      }
      param_2[2] = param_2[2] + 1;
      uVar1 = *param_2;
      if (uVar1 < 0x46) break;
      if (0x19 < uVar1 - 0x46) {
        return;
      }
      uVar2 = 1L << ((byte)(uVar1 - 0x46) & 0x3f);
      if ((uVar2 & 0x2006fc0) != 0) goto LAB_140003e85;
      if (((uVar2 & 0x41003) == 0) && ((uVar2 & 0xc) == 0)) {
        return;
      }
      param_2 = *(uint **)(param_2 + 4);
    }
    if (uVar1 < 9) {
      if ((uVar1 != 7) && (uVar1 != 8)) {
        if (uVar1 < 4) {
          if (uVar1 == 0) {
            return;
          }
        }
        else {
          if (uVar1 != 4) {
            return;
          }
          *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
        }
        goto LAB_140003e85;
      }
    }
    else {
      uVar2 = 1L << ((char)uVar1 - 9U & 0x3f);
      if ((uVar2 & 0x13fff3ef67ff7fff) != 0) {
LAB_140003e85:
        if (0x800 < *(int *)(param_1 + 0x134)) {
          return;
        }
        *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
        d_count_templates_scopes(param_1,*(uint **)(param_2 + 4));
        d_count_templates_scopes(param_1,*(uint **)(param_2 + 6));
        *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
        return;
      }
      if ((uVar2 & 0x18000000) != 0) {
        if (**(int **)(param_2 + 4) == 5) {
          *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
        }
        goto LAB_140003e85;
      }
      if (uVar1 != 0x34) {
        return;
      }
    }
    param_2 = *(uint **)(param_2 + 6);
  } while( true );
}



undefined8 d_index_template_argument_part_0(int *param_1,int param_2)

{
  for (; (param_1 != (int *)0x0 && (*param_1 == 0x30)); param_1 = *(int **)(param_1 + 6)) {
    if (param_2 == 0) {
      return *(undefined8 *)(param_1 + 4);
    }
    param_2 = param_2 + -1;
  }
  return 0;
}



void d_growable_string_callback_adapter(void *param_1,size_t param_2,longlong *param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong _NewSize;
  
  uVar1 = param_2 + 1 + param_3[1];
  _NewSize = param_3[2];
  if (_NewSize < uVar1) {
    if ((int)param_3[3] != 0) {
      return;
    }
    if ((_NewSize != 0) || (_NewSize = 2, 2 < uVar1)) {
      do {
        _NewSize = _NewSize * 2;
      } while (_NewSize < uVar1);
    }
    pvVar2 = realloc((void *)*param_3,_NewSize);
    if (pvVar2 == (void *)0x0) {
      free((void *)*param_3);
      *(undefined4 *)(param_3 + 3) = 1;
      *param_3 = 0;
      *(undefined1 (*) [16])(param_3 + 1) = (undefined1  [16])0x0;
      return;
    }
    *param_3 = (longlong)pvVar2;
    param_3[2] = _NewSize;
  }
  if ((int)param_3[3] == 0) {
    memcpy((void *)(param_3[1] + *param_3),param_1,param_2);
    *(undefined1 *)(*param_3 + param_2 + param_3[1]) = 0;
    param_3[1] = param_3[1] + param_2;
  }
  return;
}



bool next_is_type_qual_isra_0(byte *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0x44) {
    if ((byte)(param_1[1] - 0x4f) < 0x2a) {
      return (0x30100000001U >> ((ulonglong)(param_1[1] - 0x4f) & 0x3f) & 1) != 0;
    }
  }
  else {
    uVar1 = *param_1 - 0x4b;
    if ((byte)uVar1 < 0x28) {
      return (0x8000000801U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0;
    }
  }
  return false;
}



void d_append_char(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 == 0xff) {
    *(undefined1 *)(param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    lVar1 = 0;
    lVar2 = 1;
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  }
  else {
    lVar2 = lVar1 + 1;
  }
  *(longlong *)(param_1 + 0x100) = lVar2;
  *(undefined1 *)(param_1 + lVar1) = param_2;
  *(undefined1 *)(param_1 + 0x108) = param_2;
  return;
}



int * d_lookup_template_argument(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x120) == 0) {
    *(undefined4 *)(param_1 + 0x130) = 1;
    return (int *)0x0;
  }
  iVar3 = *(int *)(param_2 + 0x10);
  piVar2 = *(int **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 8) + 0x18);
  piVar1 = piVar2;
  if (-1 < iVar3) {
    for (; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 6)) {
      if (*piVar1 != 0x30) {
        return (int *)0x0;
      }
      if (iVar3 == 0) {
        return *(int **)(piVar1 + 4);
      }
      iVar3 = iVar3 + -1;
      piVar2 = (int *)0x0;
    }
  }
  return piVar2;
}



void d_append_string(char *param_1,char *param_2)

{
  char *pcVar1;
  size_t sVar2;
  longlong lVar3;
  char cVar4;
  
  sVar2 = strlen(param_2);
  if (sVar2 != 0) {
    pcVar1 = param_2 + sVar2;
    lVar3 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *param_2;
      if (lVar3 == 0xff) {
        param_2 = param_2 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = '\x01';
        param_1[0x101] = '\0';
        param_1[0x102] = '\0';
        param_1[0x103] = '\0';
        param_1[0x104] = '\0';
        param_1[0x105] = '\0';
        param_1[0x106] = '\0';
        param_1[0x107] = '\0';
        *param_1 = cVar4;
        param_1[0x108] = cVar4;
        if (pcVar1 == param_2) {
          return;
        }
        cVar4 = *param_2;
        lVar3 = 1;
      }
      param_2 = param_2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar3 + 1;
      param_1[lVar3] = cVar4;
      param_1[0x108] = cVar4;
      lVar3 = lVar3 + 1;
    } while (param_2 != pcVar1);
  }
  return;
}



int * d_find_pack(longlong param_1,uint *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  
joined_r0x00014000429d:
  do {
    if (param_2 == (uint *)0x0) {
      return (int *)0x0;
    }
    uVar3 = *param_2;
    if (uVar3 < 0x34) {
      if (uVar3 < 6) {
        if (uVar3 == 0) {
          return (int *)0x0;
        }
        if (uVar3 == 5) {
          if (*(longlong *)(param_1 + 0x120) == 0) {
            *(undefined4 *)(param_1 + 0x130) = 1;
            return (int *)0x0;
          }
          uVar3 = param_2[4];
          piVar1 = *(int **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 8) + 0x18);
          if (-1 < (int)uVar3) {
            while( true ) {
              if (piVar1 == (int *)0x0) {
                return (int *)0x0;
              }
              if (*piVar1 != 0x30) {
                return (int *)0x0;
              }
              if (uVar3 == 0) break;
              piVar1 = *(int **)(piVar1 + 6);
              uVar3 = uVar3 - 1;
            }
            piVar1 = *(int **)(piVar1 + 4);
          }
          if (piVar1 == (int *)0x0) {
            return (int *)0x0;
          }
          if (*piVar1 != 0x30) {
            piVar1 = (int *)0x0;
          }
          return piVar1;
        }
      }
      else {
        if ((1L << ((byte)uVar3 & 0x3f) & 0x8010001000040U) != 0) {
          return (int *)0x0;
        }
        if ((uVar3 == 8) || (uVar3 == 7)) {
LAB_140004343:
          param_2 = *(uint **)(param_2 + 6);
          goto joined_r0x00014000429d;
        }
      }
    }
    else if (uVar3 - 0x34 < 0x2d) {
      uVar2 = 1L << ((byte)(uVar3 - 0x34) & 0x3f);
      if ((uVar2 & 0x10000cf18000) != 0) {
        return (int *)0x0;
      }
      if ((uVar2 & 1) != 0) goto LAB_140004343;
    }
    piVar1 = d_find_pack(param_1,*(uint **)(param_2 + 4));
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    param_2 = *(uint **)(param_2 + 6);
  } while( true );
}



undefined4 * d_template_param(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  if (*pcVar2 != 'T') {
    return (undefined4 *)0x0;
  }
  pcVar5 = pcVar2 + 1;
  *(char **)(param_1 + 0x18) = pcVar5;
  if (pcVar2[1] == '_') {
    iVar3 = 0;
  }
  else {
    if (pcVar2[1] == 'n') {
      return (undefined4 *)0x0;
    }
    iVar3 = d_number(param_1);
    iVar3 = iVar3 + 1;
    if (iVar3 < 0) {
      return (undefined4 *)0x0;
    }
    pcVar5 = *(char **)(param_1 + 0x18);
    if (*pcVar5 != '_') {
      return (undefined4 *)0x0;
    }
  }
  *(char **)(param_1 + 0x18) = pcVar5 + 1;
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) <= iVar1) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x20));
  *(undefined8 *)(puVar4 + 1) = 0;
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  *puVar4 = 5;
  puVar4[4] = iVar3;
  return puVar4;
}



void d_append_num(char *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  size_t sVar2;
  longlong lVar3;
  char *pcVar4;
  char cVar5;
  char local_48 [40];
  
  _text((longlong)local_48,"%d",(double)(ulonglong)param_2,param_4);
  sVar2 = strlen(local_48);
  if (sVar2 != 0) {
    pcVar4 = local_48;
    pcVar1 = pcVar4 + sVar2;
    lVar3 = *(longlong *)(param_1 + 0x100);
    do {
      cVar5 = *pcVar4;
      if (lVar3 == 0xff) {
        pcVar4 = pcVar4 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = '\x01';
        param_1[0x101] = '\0';
        param_1[0x102] = '\0';
        param_1[0x103] = '\0';
        param_1[0x104] = '\0';
        param_1[0x105] = '\0';
        param_1[0x106] = '\0';
        param_1[0x107] = '\0';
        *param_1 = cVar5;
        param_1[0x108] = cVar5;
        if (pcVar1 == pcVar4) {
          return;
        }
        cVar5 = *pcVar4;
        lVar3 = 1;
      }
      pcVar4 = pcVar4 + 1;
      *(longlong *)(param_1 + 0x100) = lVar3 + 1;
      param_1[lVar3] = cVar5;
      param_1[0x108] = cVar5;
      lVar3 = lVar3 + 1;
    } while (pcVar4 != pcVar1);
  }
  return;
}



void d_print_lambda_parm_name(char *param_1,int param_2,uint param_3,undefined8 param_4)

{
  size_t sVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  char local_48 [32];
  
  if (param_2 == 0x5c) {
    lVar3 = 2;
    pcVar5 = "$N";
  }
  else if (param_2 == 0x5d) {
    lVar3 = 3;
    pcVar5 = "$TT";
  }
  else {
    if (param_2 != 0x5b) {
      param_1[0x130] = '\x01';
      param_1[0x131] = '\0';
      param_1[0x132] = '\0';
      param_1[0x133] = '\0';
      goto LAB_140004585;
    }
    lVar3 = 2;
    pcVar5 = "$T";
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
  pcVar4 = pcVar5 + lVar3;
  do {
    cVar6 = *pcVar5;
    lVar3 = lVar2;
    if (lVar2 == 0xff) {
      pcVar5 = pcVar5 + 1;
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      param_1[0x100] = '\x01';
      param_1[0x101] = '\0';
      param_1[0x102] = '\0';
      param_1[0x103] = '\0';
      param_1[0x104] = '\0';
      param_1[0x105] = '\0';
      param_1[0x106] = '\0';
      param_1[0x107] = '\0';
      *param_1 = cVar6;
      param_1[0x108] = cVar6;
      if (pcVar5 == pcVar4) break;
      cVar6 = *pcVar5;
      lVar3 = 1;
    }
    lVar2 = lVar3 + 1;
    pcVar5 = pcVar5 + 1;
    *(longlong *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = cVar6;
    param_1[0x108] = cVar6;
  } while (pcVar5 != pcVar4);
LAB_140004585:
  _text((longlong)local_48,"%d",(double)(ulonglong)param_3,param_4);
  sVar1 = strlen(local_48);
  if (sVar1 != 0) {
    pcVar4 = local_48;
    pcVar5 = pcVar4 + sVar1;
    lVar3 = *(longlong *)(param_1 + 0x100);
    do {
      cVar6 = *pcVar4;
      if (lVar3 == 0xff) {
        pcVar4 = pcVar4 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = '\x01';
        param_1[0x101] = '\0';
        param_1[0x102] = '\0';
        param_1[0x103] = '\0';
        param_1[0x104] = '\0';
        param_1[0x105] = '\0';
        param_1[0x106] = '\0';
        param_1[0x107] = '\0';
        *param_1 = cVar6;
        param_1[0x108] = cVar6;
        if (pcVar5 == pcVar4) {
          return;
        }
        cVar6 = *pcVar4;
        lVar3 = 1;
      }
      pcVar4 = pcVar4 + 1;
      *(longlong *)(param_1 + 0x100) = lVar3 + 1;
      param_1[lVar3] = cVar6;
      param_1[0x108] = cVar6;
      lVar3 = lVar3 + 1;
    } while (pcVar5 != pcVar4);
  }
  return;
}



undefined4 * d_source_name(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  uVar3 = d_number(param_1);
  if ((int)uVar3 < 1) {
    return (undefined4 *)0x0;
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if ((longlong)(ulonglong)uVar3 <= *(longlong *)(param_1 + 8) - (longlong)plVar2) {
    pcVar5 = (char *)((ulonglong)uVar3 + (longlong)plVar2);
    *(char **)(param_1 + 0x18) = pcVar5;
    if (((*(byte *)(param_1 + 0x10) & 4) != 0) && (*pcVar5 == '$')) {
      *(char **)(param_1 + 0x18) = pcVar5 + 1;
    }
    if (((((int)uVar3 < 10) || (*plVar2 != 0x5f4c41424f4c475f)) ||
        (0x3b < (byte)(*(byte *)(plVar2 + 1) - 0x24))) ||
       (((0x800000000000401U >> ((ulonglong)(*(byte *)(plVar2 + 1) - 0x24) & 0x3f) & 1) == 0 ||
        (*(char *)((longlong)plVar2 + 9) != 'N')))) {
      puVar4 = d_make_name(param_1,(longlong)plVar2,uVar3);
      goto LAB_1400047a4;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x48) = (*(int *)(param_1 + 0x48) + 0x16) - uVar3;
    if (iVar1 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      puVar4 = (undefined4 *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x20));
      *(undefined8 *)(puVar4 + 1) = 0;
      *puVar4 = 0;
      *(char **)(puVar4 + 4) = "(anonymous namespace)";
      puVar4[6] = 0x15;
      goto LAB_1400047a4;
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_1400047a4:
  *(undefined4 **)(param_1 + 0x40) = puVar4;
  return puVar4;
}



undefined8 d_maybe_module_name(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar3;
  while( true ) {
    if (cVar1 != 'W') {
      return 1;
    }
    uVar6 = 0x56;
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    if (pcVar3[1] == 'P') {
      uVar6 = 0x57;
      *(char **)(param_1 + 0x18) = pcVar3 + 2;
    }
    puVar4 = d_source_name(param_1);
    puVar5 = d_make_comp(param_1,uVar6,*param_2,(longlong)puVar4);
    *param_2 = (longlong)puVar5;
    if ((puVar5 == (uint *)0x0) ||
       (iVar2 = *(int *)(param_1 + 0x38), *(int *)(param_1 + 0x3c) <= iVar2)) break;
    *(uint **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 8) = puVar5;
    *(int *)(param_1 + 0x38) = iVar2 + 1;
    pcVar3 = *(char **)(param_1 + 0x18);
    cVar1 = *pcVar3;
  }
  return 0;
}



uint * d_substitution(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  
  pcVar8 = *(char **)(param_1 + 0x18);
  if (*pcVar8 == 'S') {
    *(char **)(param_1 + 0x18) = pcVar8 + 1;
    cVar5 = '\0';
    if (pcVar8[1] != '\0') {
      *(char **)(param_1 + 0x18) = pcVar8 + 2;
      cVar5 = pcVar8[1];
      iVar6 = (int)cVar5;
      if (((byte)(iVar6 - 0x30U) < 0x30) &&
         ((0x87fffffe03ffU >> ((ulonglong)(iVar6 - 0x30U) & 0x3f) & 1) != 0)) {
        uVar9 = 0;
        if (cVar5 == '_') {
          uVar10 = 0;
        }
        else {
          do {
            if ((byte)((char)iVar6 - 0x30U) < 10) {
              uVar1 = iVar6 + -0x30 + uVar9 * 0x24;
            }
            else {
              if (0x19 < (byte)((char)iVar6 + 0xbfU)) {
                return (uint *)0x0;
              }
              uVar1 = iVar6 + -0x37 + uVar9 * 0x24;
            }
            if (uVar1 < uVar9) {
              return (uint *)0x0;
            }
            pcVar8 = *(char **)(param_1 + 0x18);
            if (*pcVar8 == '\0') {
              return (uint *)0x0;
            }
            *(char **)(param_1 + 0x18) = pcVar8 + 1;
            iVar6 = (int)*pcVar8;
            uVar9 = uVar1;
          } while (*pcVar8 != '_');
          uVar10 = (ulonglong)(uVar1 + 1);
        }
        if (*(uint *)(param_1 + 0x38) <= (uint)uVar10) {
          return (uint *)0x0;
        }
        return *(uint **)(*(longlong *)(param_1 + 0x30) + uVar10 * 8);
      }
    }
    uVar9 = *(uint *)(param_1 + 0x10) & 8;
    if ((uVar9 == 0) && ((param_2 & 1) != 0)) {
      bVar7 = (byte)(**(char **)(param_1 + 0x18) + 0xbdU) < 2;
    }
    else {
      bVar7 = SUB41(uVar9 >> 3,0);
    }
    pcVar8 = "t";
    do {
      if (*pcVar8 == cVar5) {
        lVar4 = *(longlong *)(pcVar8 + 0x28);
        iVar6 = *(int *)(param_1 + 0x28);
        iVar2 = *(int *)(param_1 + 0x2c);
        if (lVar4 != 0) {
          if (iVar6 < iVar2) {
            uVar3 = *(undefined4 *)(pcVar8 + 0x30);
            lVar12 = (longlong)iVar6;
            iVar6 = iVar6 + 1;
            puVar13 = (undefined4 *)(lVar12 * 0x20 + *(longlong *)(param_1 + 0x20));
            *(undefined8 *)(puVar13 + 1) = 0;
            *(int *)(param_1 + 0x28) = iVar6;
            *puVar13 = 0x18;
            *(longlong *)(puVar13 + 4) = lVar4;
            puVar13[6] = uVar3;
          }
          else {
            puVar13 = (undefined4 *)0x0;
          }
          *(undefined4 **)(param_1 + 0x40) = puVar13;
        }
        if (bVar7 == false) {
          uVar14 = *(undefined8 *)(pcVar8 + 8);
          uVar9 = *(uint *)(pcVar8 + 0x10);
        }
        else {
          uVar14 = *(undefined8 *)(pcVar8 + 0x18);
          uVar9 = *(uint *)(pcVar8 + 0x20);
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + uVar9;
        if (iVar6 < iVar2) {
          puVar11 = (uint *)((longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x20));
          puVar11[1] = 0;
          puVar11[2] = 0;
          *(int *)(param_1 + 0x28) = iVar6 + 1;
          *puVar11 = 0x18;
          *(undefined8 *)(puVar11 + 4) = uVar14;
          puVar11[6] = uVar9;
        }
        else {
          puVar11 = (uint *)0x0;
        }
        pcVar8 = *(char **)(param_1 + 0x18);
        if (*pcVar8 == 'B') {
          uVar14 = *(undefined8 *)(param_1 + 0x40);
          do {
            *(char **)(param_1 + 0x18) = pcVar8 + 1;
            puVar13 = d_source_name(param_1);
            puVar11 = d_make_comp(param_1,0x4f,(longlong)puVar11,(longlong)puVar13);
            pcVar8 = *(char **)(param_1 + 0x18);
          } while (*pcVar8 == 'B');
          *(undefined8 *)(param_1 + 0x40) = uVar14;
          if (puVar11 != (uint *)0x0) {
            iVar6 = *(int *)(param_1 + 0x38);
            if (*(int *)(param_1 + 0x3c) <= iVar6) {
              return (uint *)0x0;
            }
            *(uint **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 8) = puVar11;
            *(int *)(param_1 + 0x38) = iVar6 + 1;
            return puVar11;
          }
          return (uint *)0x0;
        }
        return puVar11;
      }
      pcVar8 = pcVar8 + 0x38;
    } while (pcVar8 != "aN");
  }
  return (uint *)0x0;
}



uint * d_type(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined7 extraout_var;
  undefined4 *puVar11;
  uint *puVar12;
  size_t sVar13;
  uint *puVar14;
  byte bVar15;
  ulonglong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint *local_38 [3];
  
  pbVar18 = *(byte **)(param_1 + 0x18);
  bVar8 = next_is_type_qual_isra_0(pbVar18);
  if ((int)CONCAT71(extraout_var,bVar8) != 0) {
    puVar12 = d_cv_qualifiers(param_1,(uint *)local_38,0);
    if (puVar12 == (uint *)0x0) {
      return (uint *)0x0;
    }
    if (**(char **)(param_1 + 0x18) == 'F') {
      puVar14 = d_function_type(param_1);
    }
    else {
      puVar14 = d_type(param_1);
    }
    *(uint **)puVar12 = puVar14;
    if (puVar14 != (uint *)0x0) {
      if (*puVar14 - 0x1f < 2) {
        uVar5 = *(undefined8 *)(puVar14 + 4);
        *(uint **)(puVar14 + 4) = local_38[0];
        local_38[0] = *(uint **)puVar12;
        *(undefined8 *)puVar12 = uVar5;
      }
      if (local_38[0] == (uint *)0x0) {
        return (uint *)0x0;
      }
      iVar9 = *(int *)(param_1 + 0x38);
      if (iVar9 < *(int *)(param_1 + 0x3c)) {
        *(uint **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 8) = local_38[0];
        *(int *)(param_1 + 0x38) = iVar9 + 1;
        return local_38[0];
      }
      return (uint *)0x0;
    }
    return (uint *)0x0;
  }
  bVar1 = *pbVar18;
  if ('T' < (char)bVar1) {
    bVar15 = bVar1 + 0xab;
    if (0x25 < bVar15) goto switchD_140004bbc_caseD_42;
    uVar16 = 1L << (bVar15 & 0x3f);
    if ((uVar16 & 0x3ec7bff000) != 0) {
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar9 < *(int *)(param_1 + 0x2c)) {
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *(undefined ***)(puVar12 + 4) =
             &cplus_demangle_builtin_types + (longlong)(char)(bVar1 + 0x9f) * 4;
        iVar9 = *(int *)(&DAT_140025908 + (longlong)(char)(bVar1 + 0x9f) * 0x20);
        *puVar12 = 0x28;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar9;
        *(byte **)(param_1 + 0x18) = pbVar18 + 1;
        return puVar12;
      }
      goto LAB_140022a15;
    }
    if ((uVar16 & 1) == 0) {
      if (bVar15 != 0x20) goto switchD_140004bbc_caseD_42;
      *(byte **)(param_1 + 0x18) = pbVar18 + 1;
      puVar11 = d_source_name(param_1);
      puVar12 = d_make_comp(param_1,0x29,(longlong)puVar11,0);
      local_38[0] = puVar12;
    }
    else if ((byte)(pbVar18[1] - 0x30) < 10) {
      *(byte **)(param_1 + 0x18) = pbVar18 + 1;
      puVar12 = d_source_name(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        puVar14 = d_template_args_1(param_1);
        puVar12 = d_make_comp(param_1,4,(longlong)puVar12,(longlong)puVar14);
      }
      puVar14 = d_type(param_1);
      puVar12 = d_make_comp(param_1,0x22,(longlong)puVar14,(longlong)puVar12);
      local_38[0] = puVar12;
    }
    else {
      puVar12 = d_unqualified_name(param_1,0,0);
      local_38[0] = puVar12;
    }
    goto LAB_140004d30;
  }
  if ((char)bVar1 < 'A') {
switchD_140004bbc_caseD_42:
    puVar12 = d_name(param_1,1);
    return puVar12;
  }
  switch(bVar1) {
  case 0x41:
    pbVar17 = pbVar18 + 1;
    *(byte **)(param_1 + 0x18) = pbVar17;
    if (pbVar18[1] == 0x5f) {
      puVar14 = (uint *)0x0;
LAB_140005533:
      *(byte **)(param_1 + 0x18) = pbVar17 + 1;
      puVar12 = d_type(param_1);
      puVar12 = d_make_comp(param_1,0x2b,(longlong)puVar14,(longlong)puVar12);
      local_38[0] = puVar12;
    }
    else {
      pbVar20 = pbVar17;
      if ((byte)(pbVar18[1] - 0x30) < 10) {
        do {
          pbVar19 = pbVar20;
          pbVar20 = pbVar19 + 1;
          *(byte **)(param_1 + 0x18) = pbVar20;
        } while ((byte)(*pbVar20 - 0x30) < 10);
        puVar14 = d_make_name(param_1,(longlong)pbVar17,(int)pbVar19 - (int)pbVar18);
        puVar12 = (uint *)0x0;
        pbVar17 = pbVar20;
        local_38[0] = puVar12;
        if (puVar14 != (uint *)0x0) {
LAB_140004fe9:
          if (*pbVar17 != 0x5f) goto LAB_140004ff8;
          goto LAB_140005533;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x4c) = 1;
        puVar14 = d_expression_1(param_1);
        *(undefined4 *)(param_1 + 0x4c) = uVar2;
        puVar12 = (uint *)0x0;
        local_38[0] = puVar12;
        if (puVar14 != (uint *)0x0) {
          pbVar17 = *(byte **)(param_1 + 0x18);
          goto LAB_140004fe9;
        }
      }
    }
    break;
  default:
    goto switchD_140004bbc_caseD_42;
  case 0x43:
    *(byte **)(param_1 + 0x18) = pbVar18 + 1;
    puVar12 = d_type(param_1);
    puVar12 = d_make_comp(param_1,0x26,(longlong)puVar12,0);
    local_38[0] = puVar12;
    break;
  case 0x44:
    *(byte **)(param_1 + 0x18) = pbVar18 + 1;
    if (pbVar18[1] == 0) {
      return (uint *)0x0;
    }
    *(byte **)(param_1 + 0x18) = pbVar18 + 2;
    switch(pbVar18[1]) {
    case 0x46:
      uVar10 = d_number(param_1);
      pbVar18 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar18;
      uVar16 = (ulonglong)bVar1;
      if (bVar1 == 0x62) {
        if (uVar10 != 0x10) {
          return (uint *)0x0;
        }
        iVar9 = *(int *)(param_1 + 0x28);
        *(byte **)(param_1 + 0x18) = pbVar18 + 1;
        if (*(int *)(param_1 + 0x2c) <= iVar9) break;
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *(undefined ***)(puVar12 + 4) = &PTR_s_std_bfloat16_t_140025d60;
        iVar9 = *(int *)(param_1 + 0x48);
        *puVar12 = 0x28;
        iVar9 = iVar9 + 0xf;
      }
      else {
        if (bVar1 != 0x78) {
          if (bVar1 != 0x5f) {
            return (uint *)0x0;
          }
          uVar16 = 0;
        }
        iVar9 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar9) {
          *(byte **)(param_1 + 0x18) = pbVar18 + 1;
          _text((longlong)local_38,"%d",(double)(ulonglong)uVar10,uVar16);
          break;
        }
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *puVar12 = 0x60;
        *(undefined ***)(puVar12 + 4) = &PTR_s__Float_140025d40;
        *(short *)(puVar12 + 6) = (short)uVar10;
        *(char *)((longlong)puVar12 + 0x1a) = (char)uVar16;
        *(byte **)(param_1 + 0x18) = pbVar18 + 1;
        _text((longlong)local_38,"%d",(double)(ulonglong)uVar10,uVar16);
        sVar13 = strlen((char *)local_38);
        iVar9 = ((*(int *)(param_1 + 0x48) + *(int *)(*(longlong *)(puVar12 + 4) + 8) + 1) -
                (uint)((char)uVar16 == '\0')) + (int)sVar13;
      }
      *(int *)(param_1 + 0x48) = iVar9;
      return puVar12;
    default:
      goto switchD_140004dfc_caseD_47;
    case 0x54:
    case 0x74:
      uVar2 = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x4c) = 1;
      puVar12 = d_expression_1(param_1);
      *(undefined4 *)(param_1 + 0x4c) = uVar2;
      puVar12 = d_make_comp(param_1,0x45,(longlong)puVar12,0);
      if (puVar12 == (uint *)0x0) {
        return (uint *)0x0;
      }
      pcVar6 = *(char **)(param_1 + 0x18);
      if (*pcVar6 == '\0') {
        return (uint *)0x0;
      }
      *(char **)(param_1 + 0x18) = pcVar6 + 1;
      local_38[0] = puVar12;
      if (*pcVar6 != 'E') {
        return (uint *)0x0;
      }
      goto LAB_140004d39;
    case 0x61:
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar9 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        *(undefined **)(puVar12 + 4) = &DAT_140024363;
        puVar12[6] = 4;
        return puVar12;
      }
      return (uint *)0x0;
    case 99:
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar9 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        *(char **)(puVar12 + 4) = "decltype(auto)";
        puVar12[6] = 0xe;
        return puVar12;
      }
      return (uint *)0x0;
    case 100:
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar9 < *(int *)(param_1 + 0x2c)) {
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *puVar12 = 0x28;
        *(undefined ***)(puVar12 + 4) = &PTR_s_decimal64_140025c60;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
        return puVar12;
      }
      break;
    case 0x65:
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar9 < *(int *)(param_1 + 0x2c)) {
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *puVar12 = 0x28;
        *(undefined ***)(puVar12 + 4) = &PTR_s_decimal128_140025c80;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 10;
        return puVar12;
      }
      break;
    case 0x66:
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar9 < *(int *)(param_1 + 0x2c)) {
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *puVar12 = 0x28;
        *(undefined ***)(puVar12 + 4) = &PTR_s_decimal32_140025c40;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
        return puVar12;
      }
      break;
    case 0x68:
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar9 < *(int *)(param_1 + 0x2c)) {
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *puVar12 = 0x28;
        *(undefined ***)(puVar12 + 4) = &PTR_DAT_140025ca0;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 4;
        return puVar12;
      }
      break;
    case 0x69:
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar9 < *(int *)(param_1 + 0x2c)) {
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *puVar12 = 0x28;
        *(undefined ***)(puVar12 + 4) = &PTR_s_char32_t_140025d00;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 8;
        return puVar12;
      }
      break;
    case 0x6e:
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar9 < *(int *)(param_1 + 0x2c)) {
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *puVar12 = 0x28;
        *(undefined ***)(puVar12 + 4) = &PTR_s_decltype_nullptr__140025d20;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x11;
        return puVar12;
      }
      break;
    case 0x70:
      puVar12 = d_type(param_1);
      puVar12 = d_make_comp(param_1,0x4e,(longlong)puVar12,0);
      local_38[0] = puVar12;
      goto LAB_140004d30;
    case 0x73:
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar9 < *(int *)(param_1 + 0x2c)) {
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *puVar12 = 0x28;
        *(undefined ***)(puVar12 + 4) = &PTR_s_char16_t_140025ce0;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 8;
        return puVar12;
      }
      break;
    case 0x75:
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar9 < *(int *)(param_1 + 0x2c)) {
        puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *puVar12 = 0x28;
        *(undefined ***)(puVar12 + 4) = &PTR_s_char8_t_140025cc0;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 7;
        return puVar12;
      }
      break;
    case 0x76:
      if (pbVar18[2] == 0x5f) {
        uVar2 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x4c) = 1;
        *(byte **)(param_1 + 0x18) = pbVar18 + 3;
        puVar12 = d_expression_1(param_1);
        *(undefined4 *)(param_1 + 0x4c) = uVar2;
        if (puVar12 == (uint *)0x0) {
          puVar12 = (uint *)0x0;
          local_38[0] = puVar12;
        }
        else {
LAB_1400052e6:
          if (**(char **)(param_1 + 0x18) != '_') goto LAB_140004ff8;
          *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
          puVar14 = d_type(param_1);
          puVar12 = d_make_comp(param_1,0x2e,(longlong)puVar12,(longlong)puVar14);
          local_38[0] = puVar12;
        }
      }
      else {
        iVar9 = *(int *)(param_1 + 0x28);
        if (iVar9 < *(int *)(param_1 + 0x2c)) {
          puVar12 = (uint *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
          puVar12[1] = 0;
          puVar12[2] = 0;
          *(int *)(param_1 + 0x28) = iVar9 + 1;
          *puVar12 = 0x44;
          uVar10 = d_number(param_1);
          puVar12[4] = uVar10;
          goto LAB_1400052e6;
        }
LAB_140004ff8:
        puVar12 = (uint *)0x0;
        local_38[0] = puVar12;
      }
      goto LAB_140004d30;
    }
LAB_140022a15:
                    // WARNING: Does not return
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  case 0x46:
    puVar12 = d_function_type(param_1);
    local_38[0] = puVar12;
    break;
  case 0x47:
    *(byte **)(param_1 + 0x18) = pbVar18 + 1;
    puVar12 = d_type(param_1);
    puVar12 = d_make_comp(param_1,0x27,(longlong)puVar12,0);
    local_38[0] = puVar12;
    break;
  case 0x4d:
    *(byte **)(param_1 + 0x18) = pbVar18 + 1;
    puVar12 = d_type(param_1);
    if (puVar12 == (uint *)0x0) {
      return (uint *)0x0;
    }
    puVar14 = d_type(param_1);
    if (puVar14 == (uint *)0x0) {
      return (uint *)0x0;
    }
    puVar12 = d_make_comp(param_1,0x2c,(longlong)puVar12,(longlong)puVar14);
    local_38[0] = puVar12;
    break;
  case 0x4f:
    *(byte **)(param_1 + 0x18) = pbVar18 + 1;
    puVar12 = d_type(param_1);
    puVar12 = d_make_comp(param_1,0x25,(longlong)puVar12,0);
    local_38[0] = puVar12;
    break;
  case 0x50:
    *(byte **)(param_1 + 0x18) = pbVar18 + 1;
    puVar12 = d_type(param_1);
    puVar12 = d_make_comp(param_1,0x23,(longlong)puVar12,0);
    local_38[0] = puVar12;
    break;
  case 0x52:
    *(byte **)(param_1 + 0x18) = pbVar18 + 1;
    puVar12 = d_type(param_1);
    puVar12 = d_make_comp(param_1,0x24,(longlong)puVar12,0);
    local_38[0] = puVar12;
    break;
  case 0x54:
    puVar12 = d_template_param(param_1);
    pcVar6 = *(char **)(param_1 + 0x18);
    local_38[0] = puVar12;
    if (*pcVar6 == 'I') {
      if (*(int *)(param_1 + 0x50) == 0) {
        if (puVar12 == (uint *)0x0) {
          return (uint *)0x0;
        }
        iVar9 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar9) {
          return (uint *)0x0;
        }
        puVar14 = (uint *)0x0;
        *(uint **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 8) = puVar12;
        *(int *)(param_1 + 0x38) = iVar9 + 1;
        if ((byte)(*pcVar6 + 0xb7U) < 2) {
          *(char **)(param_1 + 0x18) = pcVar6 + 1;
          puVar14 = d_template_args_1(param_1);
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x28);
        uVar3 = *(undefined4 *)(param_1 + 0x38);
        uVar4 = *(undefined4 *)(param_1 + 0x48);
        *(char **)(param_1 + 0x18) = pcVar6 + 1;
        puVar14 = d_template_args_1(param_1);
        if (**(char **)(param_1 + 0x18) != 'I') {
          *(char **)(param_1 + 0x18) = pcVar6;
          *(undefined4 *)(param_1 + 0x28) = uVar2;
          *(undefined4 *)(param_1 + 0x38) = uVar3;
          *(undefined4 *)(param_1 + 0x48) = uVar4;
          break;
        }
        if (puVar12 == (uint *)0x0) {
          return (uint *)0x0;
        }
        iVar9 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar9) {
          return (uint *)0x0;
        }
        *(uint **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 8) = puVar12;
        *(int *)(param_1 + 0x38) = iVar9 + 1;
      }
      puVar12 = d_make_comp(param_1,4,(longlong)puVar12,(longlong)puVar14);
      local_38[0] = puVar12;
    }
  }
LAB_140004d30:
  if (puVar12 == (uint *)0x0) {
    return (uint *)0x0;
  }
LAB_140004d39:
  iVar9 = *(int *)(param_1 + 0x38);
  if (iVar9 < *(int *)(param_1 + 0x3c)) {
    *(uint **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 8) = puVar12;
    *(int *)(param_1 + 0x38) = iVar9 + 1;
    return local_38[0];
  }
switchD_140004dfc_caseD_47:
  return (uint *)0x0;
}



longlong d_parmlist(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong local_30;
  
  puVar1 = (uint *)&local_30;
  local_30 = 0;
  pcVar3 = *(char **)(param_1 + 0x18);
  cVar2 = *pcVar3;
  while( true ) {
    if ((cVar2 == '\0') ||
       (((byte)(cVar2 - 0x2eU) < 0x25 &&
        ((uVar6 = 1L << (cVar2 - 0x2eU & 0x3f), (uVar6 & 0x800800001) != 0 ||
         (((uVar6 & 0x1200000000) != 0 && (pcVar3[1] == 'E')))))))) {
      if ((((local_30 != 0) && (*(longlong *)(local_30 + 0x18) == 0)) &&
          (**(int **)(local_30 + 0x10) == 0x28)) &&
         (lVar4 = *(longlong *)(*(int **)(local_30 + 0x10) + 4), *(int *)(lVar4 + 0x1c) == 9)) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - *(int *)(lVar4 + 8);
        *(undefined8 *)(local_30 + 0x10) = 0;
      }
      return local_30;
    }
    puVar5 = d_type(param_1);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    puVar5 = d_make_comp(param_1,0x2f,(longlong)puVar5,0);
    *(uint **)puVar1 = puVar5;
    if (puVar5 == (uint *)0x0) break;
    puVar1 = puVar5 + 6;
    pcVar3 = *(char **)(param_1 + 0x18);
    cVar2 = *pcVar3;
  }
  return 0;
}



uint * d_bare_function_type(longlong param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  
  if (**(char **)(param_1 + 0x18) == 'J') {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  else if (param_2 == 0) {
    puVar1 = (uint *)0x0;
    lVar2 = d_parmlist(param_1);
    if (lVar2 == 0) {
      return (uint *)0x0;
    }
    goto LAB_1400057f6;
  }
  puVar1 = d_type(param_1);
  if ((puVar1 == (uint *)0x0) || (lVar2 = d_parmlist(param_1), lVar2 == 0)) {
    return (uint *)0x0;
  }
LAB_1400057f6:
  puVar1 = d_make_comp(param_1,0x2a,(longlong)puVar1,lVar2);
  return puVar1;
}



uint * d_function_type(longlong param_1)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x12) & 4) == 0) {
    uVar3 = *(uint *)(param_1 + 0x58);
    if (0x800 < uVar3) {
      return (uint *)0x0;
    }
    pcVar2 = *(char **)(param_1 + 0x18);
    *(uint *)(param_1 + 0x58) = uVar3 + 1;
    puVar1 = (uint *)0x0;
    if (*pcVar2 != 'F') goto LAB_140005869;
  }
  else {
    pcVar2 = *(char **)(param_1 + 0x18);
    if (*pcVar2 != 'F') {
      return (uint *)0x0;
    }
  }
  *(char **)(param_1 + 0x18) = pcVar2 + 1;
  if (pcVar2[1] == 'Y') {
    *(char **)(param_1 + 0x18) = pcVar2 + 2;
  }
  puVar1 = d_bare_function_type(param_1,1);
  puVar1 = d_ref_qualifier(param_1,puVar1);
  if (**(char **)(param_1 + 0x18) == 'E') {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  else {
    puVar1 = (uint *)0x0;
  }
  if ((*(byte *)(param_1 + 0x12) & 4) != 0) {
    return puVar1;
  }
  uVar3 = *(int *)(param_1 + 0x58) - 1;
LAB_140005869:
  *(uint *)(param_1 + 0x58) = uVar3;
  return puVar1;
}



uint * d_operator_name(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  if (*pcVar3 == '\0') {
    cVar9 = '\0';
    cVar11 = '\0';
  }
  else {
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    cVar11 = *pcVar3;
    cVar9 = '\0';
    if (pcVar3[1] != '\0') {
      *(char **)(param_1 + 0x18) = pcVar3 + 2;
      cVar9 = pcVar3[1];
      if (cVar11 == 'v') {
        if ((byte)(cVar9 - 0x30U) < 10) {
          puVar7 = d_source_name(param_1);
          iVar8 = *(int *)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x2c) <= iVar8) {
            return (uint *)0x0;
          }
          puVar6 = (uint *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x20));
          puVar6[1] = 0;
          puVar6[2] = 0;
          *(int *)(param_1 + 0x28) = iVar8 + 1;
          if (puVar7 == (undefined4 *)0x0) {
            return (uint *)0x0;
          }
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0x34;
          puVar6[4] = (int)(char)(cVar9 - 0x30U);
          *(undefined4 **)(puVar6 + 6) = puVar7;
          return puVar6;
        }
      }
      else if ((cVar11 == 'c') && (cVar9 == 'v')) {
        uVar2 = *(undefined4 *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = (uint)(*(int *)(param_1 + 0x4c) == 0);
        puVar6 = d_type(param_1);
        if (*(int *)(param_1 + 0x50) == 0) {
          puVar6 = d_make_comp(param_1,0x35,(longlong)puVar6,0);
        }
        else {
          puVar6 = d_make_comp(param_1,0x36,(longlong)puVar6,0);
        }
        *(undefined4 *)(param_1 + 0x50) = uVar2;
        return puVar6;
      }
    }
  }
  iVar10 = 0x49;
  iVar8 = 0;
  do {
    iVar5 = (iVar10 - iVar8) / 2 + iVar8;
    pcVar3 = (&cplus_demangle_operators)[(longlong)iVar5 * 3];
    cVar1 = *pcVar3;
    bVar12 = SBORROW1(cVar1,cVar11);
    cVar4 = cVar1 - cVar11;
    if (cVar1 == cVar11) {
      cVar4 = pcVar3[1];
      bVar12 = SBORROW1(cVar4,cVar9);
      cVar4 = cVar4 - cVar9;
      if (cVar4 == '\0') {
        iVar8 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar8) {
          return (uint *)0x0;
        }
        puVar6 = (uint *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar6[1] = 0;
        puVar6[2] = 0;
        *(int *)(param_1 + 0x28) = iVar8 + 1;
        *puVar6 = 0x33;
        *(undefined ***)(puVar6 + 4) = &cplus_demangle_operators + (longlong)iVar5 * 3;
        return puVar6;
      }
    }
    if (bVar12 != cVar4 < '\0') {
      iVar8 = iVar5 + 1;
      iVar5 = iVar10;
    }
    iVar10 = iVar5;
  } while (iVar8 != iVar10);
  return (uint *)0x0;
}



uint * d_template_parm(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  if (*pcVar2 == 'T') {
    cVar1 = pcVar2[1];
    if (cVar1 == 't') {
      *(char **)(param_1 + 0x18) = pcVar2 + 2;
      puVar3 = d_template_head(param_1,param_2);
      if ((puVar3 != (uint *)0x0) && (**(char **)(param_1 + 0x18) == 'E')) {
        uVar4 = 0x5d;
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        goto LAB_140005b65;
      }
    }
    else {
      if ('t' < cVar1) {
        if (cVar1 != 'y') {
          return (uint *)0x0;
        }
        uVar4 = 0x5b;
        puVar3 = (uint *)0x0;
        *(char **)(param_1 + 0x18) = pcVar2 + 2;
LAB_140005b65:
        puVar3 = d_make_comp(param_1,uVar4,(longlong)puVar3,0);
        return puVar3;
      }
      if (cVar1 == 'n') {
        *(char **)(param_1 + 0x18) = pcVar2 + 2;
        puVar3 = d_type(param_1);
        if (puVar3 != (uint *)0x0) {
          puVar3 = d_make_comp(param_1,0x5c,(longlong)puVar3,0);
          return puVar3;
        }
      }
      else {
        if (cVar1 != 'p') {
          return (uint *)0x0;
        }
        *(char **)(param_1 + 0x18) = pcVar2 + 2;
        puVar3 = d_template_parm(param_1,param_2);
        uVar4 = 0x5e;
        if (puVar3 != (uint *)0x0) goto LAB_140005b65;
      }
    }
    *param_2 = 1;
  }
  return (uint *)0x0;
}



uint * d_template_head(longlong param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong local_20;
  
  local_20 = 0;
  puVar2 = (uint *)&local_20;
  while( true ) {
    puVar1 = d_template_parm(param_1,param_2);
    if (puVar1 == (uint *)0x0) break;
    *(uint **)puVar2 = puVar1;
    puVar2 = puVar1 + 6;
  }
  if (local_20 != 0) {
    puVar2 = d_make_comp(param_1,0x5a,local_20,0);
    return puVar2;
  }
  return (uint *)0x0;
}



uint * d_unqualified_name(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint *puVar11;
  char *pcVar12;
  int *piVar13;
  uint *unaff_R14;
  longlong local_res18 [2];
  int local_2c;
  
  local_res18[0] = param_3;
  uVar6 = d_maybe_module_name(param_1,local_res18);
  iVar3 = (int)uVar6;
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  pcVar9 = *(char **)(param_1 + 0x18);
  cVar2 = *pcVar9;
  if (cVar2 == 'F') {
    *(char **)(param_1 + 0x18) = pcVar9 + 1;
    cVar2 = pcVar9[1];
    iVar4 = iVar3;
    if (9 < (byte)(cVar2 - 0x30U)) goto LAB_140005ccc;
LAB_140005e70:
    puVar7 = d_source_name(param_1);
LAB_140005d20:
    if (local_res18[0] != 0) goto LAB_140005d2d;
  }
  else {
    iVar3 = 0;
    iVar4 = 0;
    if ((byte)(cVar2 - 0x30U) < 10) goto LAB_140005e70;
LAB_140005ccc:
    iVar3 = iVar4;
    if ((byte)(cVar2 + 0x9fU) < 0x1a) {
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      if ((cVar2 == 'o') && (*(char *)(*(longlong *)(param_1 + 0x18) + 1) == 'n')) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 2;
      }
      puVar7 = d_operator_name(param_1);
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      if ((puVar7 != (uint *)0x0) && (*puVar7 == 0x33)) {
        pcVar9 = (char *)**(undefined8 **)(puVar7 + 4);
        *(int *)(param_1 + 0x48) =
             *(int *)(param_1 + 0x48) + 7 + *(int *)(*(undefined8 **)(puVar7 + 4) + 2);
        if ((*pcVar9 == 'l') && ((pcVar9[1] == 'i' && (pcVar9[2] == '\0')))) {
          puVar10 = d_source_name(param_1);
          puVar7 = d_make_comp(param_1,0x38,(longlong)puVar7,(longlong)puVar10);
        }
      }
      goto LAB_140005d20;
    }
    if (cVar2 == 'D') {
      pcVar9 = *(char **)(param_1 + 0x18);
      if (pcVar9[1] != 'C') goto LAB_140005f16;
      puVar7 = (uint *)0x0;
      *(char **)(param_1 + 0x18) = pcVar9 + 2;
      do {
        puVar10 = d_source_name(param_1);
        puVar8 = puVar7;
        puVar7 = d_make_comp(param_1,0x55,(longlong)puVar10,0);
        puVar11 = puVar7;
        if (puVar8 != (uint *)0x0) {
          *(uint **)(puVar8 + 6) = puVar7;
          puVar11 = unaff_R14;
        }
        if (puVar7 == (uint *)0x0) goto LAB_140005d20;
        unaff_R14 = puVar11;
      } while (**(char **)(param_1 + 0x18) != 'E');
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      puVar7 = puVar11;
      goto LAB_140005d20;
    }
    if ((byte)(cVar2 + 0xbdU) < 2) {
      pcVar9 = *(char **)(param_1 + 0x18);
LAB_140005f16:
      piVar13 = *(int **)(param_1 + 0x40);
      if ((piVar13 != (int *)0x0) && ((*piVar13 == 0 || (*piVar13 == 0x18)))) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + piVar13[6];
      }
      if (*pcVar9 == 'C') {
        cVar2 = pcVar9[1];
        if (cVar2 == 'I') {
          *(char **)(param_1 + 0x18) = pcVar9 + 1;
          cVar2 = pcVar9[2];
          if ((byte)(cVar2 - 0x31U) < 5) {
            *(char **)(param_1 + 0x18) = pcVar9 + 3;
            d_type(param_1);
            piVar13 = *(int **)(param_1 + 0x40);
            goto LAB_140006027;
          }
        }
        else if ((byte)(cVar2 - 0x31U) < 5) {
          *(char **)(param_1 + 0x18) = pcVar9 + 2;
LAB_140006027:
          iVar4 = *(int *)(param_1 + 0x28);
          if (iVar4 < *(int *)(param_1 + 0x2c)) {
            puVar7 = (uint *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x20));
            puVar7[1] = 0;
            puVar7[2] = 0;
            *(int *)(param_1 + 0x28) = iVar4 + 1;
            if (piVar13 != (int *)0x0) {
              puVar7[1] = 0;
              puVar7[2] = 0;
              *puVar7 = 7;
              puVar7[4] = (int)cVar2 - 0x30;
              *(int **)(puVar7 + 6) = piVar13;
              goto LAB_140005d20;
            }
          }
        }
      }
      else if (*pcVar9 == 'D') {
        switch(pcVar9[1]) {
        case '0':
          uVar5 = 1;
          break;
        case '1':
          uVar5 = 2;
          break;
        case '2':
          uVar5 = 3;
          break;
        default:
          goto switchD_140005f66_caseD_33;
        case '4':
          uVar5 = 4;
          break;
        case '5':
          uVar5 = 5;
        }
        *(char **)(param_1 + 0x18) = pcVar9 + 2;
        iVar4 = *(int *)(param_1 + 0x28);
        if (iVar4 < *(int *)(param_1 + 0x2c)) {
          puVar7 = (uint *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x20));
          puVar7[1] = 0;
          puVar7[2] = 0;
          *(int *)(param_1 + 0x28) = iVar4 + 1;
          if (piVar13 != (int *)0x0) {
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 8;
            puVar7[4] = uVar5;
            *(int **)(puVar7 + 6) = piVar13;
            goto LAB_140005d20;
          }
        }
      }
switchD_140005f66_caseD_33:
      puVar7 = (uint *)0x0;
      goto LAB_140005d20;
    }
    if (cVar2 == 'L') {
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
      puVar7 = d_source_name(param_1);
      if (puVar7 == (uint *)0x0) {
        return (uint *)0x0;
      }
      uVar6 = d_discriminator(param_1);
      if ((int)uVar6 == 0) {
        return (uint *)0x0;
      }
      goto LAB_140005d20;
    }
    if (cVar2 != 'U') {
      return (uint *)0x0;
    }
    pcVar9 = *(char **)(param_1 + 0x18);
    cVar2 = pcVar9[1];
    if (cVar2 == 'l') {
      if ((*pcVar9 == 'U') && (*(char **)(param_1 + 0x18) = pcVar9 + 1, pcVar9[1] == 'l')) {
        local_2c = 0;
        *(char **)(param_1 + 0x18) = pcVar9 + 2;
        puVar8 = d_template_head(param_1,&local_2c);
        if (local_2c == 0) {
          puVar11 = (uint *)d_parmlist(param_1);
          puVar7 = (uint *)0x0;
          if (puVar11 == (uint *)0x0) goto LAB_140005d20;
          if (puVar8 != (uint *)0x0) {
            *(uint **)(puVar8 + 6) = puVar11;
            puVar11 = puVar8;
          }
          pcVar9 = *(char **)(param_1 + 0x18);
          if (*pcVar9 == 'E') {
            pcVar12 = pcVar9 + 1;
            *(char **)(param_1 + 0x18) = pcVar12;
            uVar5 = 0;
            if (pcVar9[1] == '_') {
LAB_1400062ad:
              *(char **)(param_1 + 0x18) = pcVar12 + 1;
              iVar4 = *(int *)(param_1 + 0x28);
              if (iVar4 < *(int *)(param_1 + 0x2c)) {
                puVar7 = (uint *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x20));
                puVar7[1] = 0;
                puVar7[2] = 0;
                *(int *)(param_1 + 0x28) = iVar4 + 1;
                *puVar7 = 0x48;
                *(uint **)(puVar7 + 4) = puVar11;
                puVar7[6] = uVar5;
                goto LAB_140005d20;
              }
            }
            else if (pcVar9[1] != 'n') {
              iVar4 = d_number(param_1);
              uVar5 = iVar4 + 1;
              if ((-1 < (int)uVar5) && (pcVar12 = *(char **)(param_1 + 0x18), *pcVar12 == '_'))
              goto LAB_1400062ad;
            }
          }
        }
      }
      goto switchD_140005f66_caseD_33;
    }
    if (cVar2 != 't') {
      if (cVar2 != 'e') {
        return (uint *)0x0;
      }
      if ((*pcVar9 == 'U') && (*(char **)(param_1 + 0x18) = pcVar9 + 1, pcVar9[1] == 'e')) {
        *(char **)(param_1 + 0x18) = pcVar9 + 2;
        puVar8 = d_type(param_1);
        puVar10 = d_source_name(param_1);
        iVar4 = *(int *)(param_1 + 0x28);
        if (iVar4 < *(int *)(param_1 + 0x2c)) {
          puVar7 = (uint *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x20));
          puVar7[1] = 0;
          puVar7[2] = 0;
          *(int *)(param_1 + 0x28) = iVar4 + 1;
          iVar4 = *(int *)(param_1 + 0x38);
          *puVar7 = 0x4b;
          *(uint **)(puVar7 + 4) = puVar8;
          *(undefined4 **)(puVar7 + 6) = puVar10;
          if (iVar4 < *(int *)(param_1 + 0x3c)) {
LAB_140005e3f:
            *(uint **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8) = puVar7;
            *(int *)(param_1 + 0x38) = iVar4 + 1;
            goto LAB_140005d20;
          }
        }
      }
      goto switchD_140005f66_caseD_33;
    }
    if ((*pcVar9 != 'U') || (*(char **)(param_1 + 0x18) = pcVar9 + 1, pcVar9[1] != 't'))
    goto switchD_140005f66_caseD_33;
    pcVar12 = pcVar9 + 2;
    *(char **)(param_1 + 0x18) = pcVar12;
    if (pcVar9[2] == '_') {
      uVar5 = 0;
LAB_140006139:
      *(char **)(param_1 + 0x18) = pcVar12 + 1;
      iVar4 = *(int *)(param_1 + 0x28);
      if (iVar4 < *(int *)(param_1 + 0x2c)) {
        puVar7 = (uint *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        puVar7[4] = uVar5;
        iVar4 = *(int *)(param_1 + 0x38);
        *puVar7 = 0x4a;
        if (iVar4 < *(int *)(param_1 + 0x3c)) goto LAB_140005e3f;
      }
      goto switchD_140005f66_caseD_33;
    }
    if (pcVar9[2] != 'n') {
      iVar4 = d_number(param_1);
      uVar5 = iVar4 + 1;
      if (((int)uVar5 < 0) || (pcVar12 = *(char **)(param_1 + 0x18), *pcVar12 != '_'))
      goto switchD_140005f66_caseD_33;
      goto LAB_140006139;
    }
    puVar7 = (uint *)0x0;
    if (local_res18[0] == 0) goto LAB_140005d4d;
    puVar7 = (uint *)0x0;
LAB_140005d2d:
    puVar7 = d_make_comp(param_1,0x58,(longlong)puVar7,local_res18[0]);
  }
  pcVar9 = *(char **)(param_1 + 0x18);
  if (*pcVar9 == 'B') {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    do {
      *(char **)(param_1 + 0x18) = pcVar9 + 1;
      puVar10 = d_source_name(param_1);
      puVar7 = d_make_comp(param_1,0x4f,(longlong)puVar7,(longlong)puVar10);
      pcVar9 = *(char **)(param_1 + 0x18);
    } while (*pcVar9 == 'B');
    *(undefined8 *)(param_1 + 0x40) = uVar6;
  }
LAB_140005d4d:
  if (iVar3 != 0) {
    puVar7 = d_make_comp(param_1,0x52,(longlong)puVar7,0);
  }
  if (param_2 != 0) {
    puVar7 = d_make_comp(param_1,1,param_2,(longlong)puVar7);
  }
  return puVar7;
}



uint * d_special_name(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  char *pcVar10;
  uint *local_20 [2];
  
  iVar3 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar3 + 0x14;
  pcVar2 = *(char **)(param_1 + 0x18);
  if (*pcVar2 == 'T') {
    *(char **)(param_1 + 0x18) = pcVar2 + 1;
    if (pcVar2[1] == '\0') {
switchD_1400063d3_caseD_42:
      return (uint *)0x0;
    }
    *(char **)(param_1 + 0x18) = pcVar2 + 2;
    switch(pcVar2[1]) {
    case 'A':
      puVar6 = d_template_arg(param_1);
      puVar8 = (uint *)0x0;
      uVar5 = 0x31;
      break;
    default:
      goto switchD_1400063d3_caseD_42;
    case 'C':
      puVar8 = d_type(param_1);
      iVar3 = d_number(param_1);
      if (iVar3 < 0) {
        return (uint *)0x0;
      }
      if (**(char **)(param_1 + 0x18) != '_') {
        return (uint *)0x0;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      puVar6 = d_type(param_1);
      uVar5 = 0xb;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 5;
      break;
    case 'F':
      puVar6 = d_type(param_1);
      puVar8 = (uint *)0x0;
      uVar5 = 0xe;
      break;
    case 'H':
      puVar6 = d_name(param_1,0);
      puVar8 = (uint *)0x0;
      uVar5 = 0x14;
      break;
    case 'I':
      puVar6 = d_type(param_1);
      puVar8 = (uint *)0x0;
      uVar5 = 0xc;
      break;
    case 'J':
      puVar6 = d_type(param_1);
      puVar8 = (uint *)0x0;
      uVar5 = 0x12;
      break;
    case 'S':
      puVar6 = d_type(param_1);
      puVar8 = (uint *)0x0;
      uVar5 = 0xd;
      break;
    case 'T':
      *(int *)(param_1 + 0x48) = iVar3 + 10;
      puVar6 = d_type(param_1);
      puVar8 = (uint *)0x0;
      uVar5 = 10;
      break;
    case 'V':
      *(int *)(param_1 + 0x48) = iVar3 + 0xf;
      puVar6 = d_type(param_1);
      puVar8 = (uint *)0x0;
      uVar5 = 9;
      break;
    case 'W':
      puVar6 = d_name(param_1,0);
      puVar8 = (uint *)0x0;
      uVar5 = 0x15;
      break;
    case 'c':
      uVar4 = d_call_offset(param_1,0);
      if ((int)uVar4 == 0) {
        return (uint *)0x0;
      }
      uVar4 = d_call_offset(param_1,0);
      if ((int)uVar4 == 0) {
        return (uint *)0x0;
      }
      if ((**(char **)(param_1 + 0x18) == 'G') || (**(char **)(param_1 + 0x18) == 'T')) {
        puVar6 = d_special_name(param_1);
      }
      else {
        puVar6 = d_encoding_part_0(param_1,0);
      }
      puVar8 = (uint *)0x0;
      uVar5 = 0x11;
      break;
    case 'h':
      uVar4 = d_call_offset(param_1,0x68);
      if ((int)uVar4 == 0) {
        return (uint *)0x0;
      }
      if ((**(char **)(param_1 + 0x18) == 'G') || (**(char **)(param_1 + 0x18) == 'T')) {
        puVar6 = d_special_name(param_1);
      }
      else {
        puVar6 = d_encoding_part_0(param_1,0);
      }
      puVar8 = (uint *)0x0;
      uVar5 = 0xf;
      break;
    case 'v':
      uVar4 = d_call_offset(param_1,0x76);
      if ((int)uVar4 == 0) {
        return (uint *)0x0;
      }
      if ((**(char **)(param_1 + 0x18) == 'G') || (**(char **)(param_1 + 0x18) == 'T')) {
        puVar6 = d_special_name(param_1);
      }
      else {
        puVar6 = d_encoding_part_0(param_1,0);
      }
      puVar8 = (uint *)0x0;
      uVar5 = 0x10;
    }
    goto LAB_14000643c;
  }
  if (*pcVar2 != 'G') {
    return (uint *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar2 + 1;
  if (pcVar2[1] == '\0') {
    return (uint *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar2 + 2;
  cVar1 = pcVar2[1];
  if ('V' < cVar1) {
    if (cVar1 != 'r') {
      return (uint *)0x0;
    }
    iVar3 = d_number(param_1);
    if (iVar3 < 2) {
      return (uint *)0x0;
    }
    pcVar2 = *(char **)(param_1 + 0x18);
    if (*pcVar2 == '\0') {
      return (uint *)0x0;
    }
    pcVar10 = pcVar2 + 1;
    *(char **)(param_1 + 0x18) = pcVar10;
    if (*pcVar2 != '_') {
      return (uint *)0x0;
    }
    uVar5 = iVar3 - 1;
    puVar8 = (uint *)0x0;
    do {
      if (*pcVar10 == '\0') {
        return (uint *)0x0;
      }
      uVar9 = 0;
      if (*pcVar10 == '$') {
        cVar1 = pcVar10[1];
        if (cVar1 == 'S') {
          uVar7 = 0x2f;
        }
        else if (cVar1 == '_') {
          uVar7 = 0x2e;
        }
        else {
          if (cVar1 != '$') {
            return (uint *)0x0;
          }
          uVar7 = 0x24;
        }
        iVar3 = *(int *)(param_1 + 0x28);
        pcVar10 = (char *)(*(longlong *)(param_1 + 0x18) + 2);
        if (*(int *)(param_1 + 0x2c) <= iVar3) {
          *(char **)(param_1 + 0x18) = pcVar10;
          return (uint *)0x0;
        }
        uVar5 = uVar5 - 2;
        puVar6 = (uint *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar6[1] = 0;
        puVar6[2] = 0;
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        *puVar6 = 0x43;
        puVar6[4] = uVar7;
        *(char **)(param_1 + 0x18) = pcVar10;
      }
      else {
        do {
          uVar7 = (uint)uVar9;
          if ((pcVar10[uVar9] == '\0') || (pcVar10[uVar9] == '$')) goto LAB_1400066b3;
          uVar9 = uVar9 + 1;
        } while (uVar5 != uVar9);
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
LAB_1400066b3:
        puVar6 = d_make_name(param_1,(longlong)pcVar10,uVar7);
        pcVar10 = (char *)(*(longlong *)(param_1 + 0x18) + uVar9);
        *(char **)(param_1 + 0x18) = pcVar10;
        if (puVar6 == (uint *)0x0) {
          return (uint *)0x0;
        }
        uVar5 = uVar5 - uVar7;
      }
      if ((puVar8 != (uint *)0x0) &&
         (puVar6 = d_make_comp(param_1,0x42,(longlong)puVar8,(longlong)puVar6),
         puVar6 == (uint *)0x0)) {
        return (uint *)0x0;
      }
      puVar8 = puVar6;
    } while (0 < (int)uVar5);
    puVar8 = (uint *)0x0;
    uVar5 = 0x41;
    goto LAB_14000643c;
  }
  if (cVar1 < 'A') {
    return (uint *)0x0;
  }
  switch(cVar1) {
  case 'A':
    if ((pcVar2[2] == 'G') || (pcVar2[2] == 'T')) {
      puVar6 = d_special_name(param_1);
    }
    else {
      puVar6 = d_encoding_part_0(param_1,0);
    }
    puVar8 = (uint *)0x0;
    uVar5 = 0x17;
    break;
  default:
    goto switchD_1400063d3_caseD_42;
  case 'I':
    local_20[0] = (uint *)0x0;
    uVar4 = d_maybe_module_name(param_1,(longlong *)local_20);
    if ((int)uVar4 == 0) {
      return (uint *)0x0;
    }
    if (local_20[0] == (uint *)0x0) {
      return (uint *)0x0;
    }
    puVar8 = (uint *)0x0;
    uVar5 = 0x59;
    puVar6 = local_20[0];
    break;
  case 'R':
    puVar6 = d_name(param_1,0);
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 < *(int *)(param_1 + 0x2c)) {
      puVar8 = (uint *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x20));
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(int *)(param_1 + 0x28) = iVar3 + 1;
      *puVar8 = 0x44;
      uVar5 = d_number(param_1);
      puVar8[4] = uVar5;
    }
    else {
      puVar8 = (uint *)0x0;
    }
    uVar5 = 0x16;
    break;
  case 'T':
    if (pcVar2[2] == '\0') {
LAB_140006700:
      puVar6 = d_encoding_part_0(param_1,0);
    }
    else {
      *(char **)(param_1 + 0x18) = pcVar2 + 3;
      cVar1 = pcVar2[3];
      if (pcVar2[2] == 'n') {
        if ((cVar1 == 'T') || (cVar1 == 'G')) {
          puVar6 = d_special_name(param_1);
        }
        else {
          puVar6 = d_encoding_part_0(param_1,0);
        }
        puVar8 = (uint *)0x0;
        uVar5 = 0x4d;
        break;
      }
      if ((cVar1 != 'G') && (cVar1 != 'T')) goto LAB_140006700;
      puVar6 = d_special_name(param_1);
    }
    puVar8 = (uint *)0x0;
    uVar5 = 0x4c;
    break;
  case 'V':
    puVar6 = d_name(param_1,0);
    puVar8 = (uint *)0x0;
    uVar5 = 0x13;
  }
LAB_14000643c:
  puVar6 = d_make_comp(param_1,uVar5,(longlong)puVar6,(longlong)puVar8);
  return puVar6;
}



uint * d_expr_primary(longlong param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  
  pcVar8 = *(char **)(param_1 + 0x18);
  if (*pcVar8 != 'L') {
    return (uint *)0x0;
  }
  pcVar6 = pcVar8 + 1;
  *(char **)(param_1 + 0x18) = pcVar6;
  if (pcVar8[1] == '_') {
    pcVar6 = pcVar8 + 2;
    puVar2 = (uint *)0x0;
    *(char **)(param_1 + 0x18) = pcVar6;
    cVar4 = pcVar8[2];
    if (cVar4 != 'Z') goto LAB_140006b49;
  }
  else if (pcVar8[1] != 'Z') {
    puVar2 = d_type(param_1);
    if (puVar2 == (uint *)0x0) {
      return (uint *)0x0;
    }
    pcVar6 = *(char **)(param_1 + 0x18);
    pcVar8 = pcVar6;
    if (*puVar2 == 0x28) {
      puVar1 = *(undefined8 **)(puVar2 + 4);
      if (*(int *)((longlong)puVar1 + 0x1c) != 0) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - *(int *)(puVar1 + 1);
      }
      iVar7 = strcmp((char *)*puVar1,"decltype(nullptr)");
      cVar4 = *pcVar6;
      if (iVar7 != 0) goto LAB_140006abc;
      if (cVar4 == 'E') {
        *(char **)(param_1 + 0x18) = pcVar6 + 1;
        return puVar2;
      }
      uVar9 = 0x3e;
      if (cVar4 == 'n') goto LAB_140006bc0;
LAB_140006af7:
      do {
        pcVar6 = pcVar6 + 1;
        if (cVar4 == '\0') {
          return (uint *)0x0;
        }
        *(char **)(param_1 + 0x18) = pcVar6;
        cVar4 = *pcVar6;
      } while (cVar4 != 'E');
      iVar7 = (int)pcVar6 - (int)pcVar8;
    }
    else {
      cVar4 = *pcVar6;
LAB_140006abc:
      uVar9 = 0x3e;
      if (cVar4 == 'n') {
LAB_140006bc0:
        pcVar8 = pcVar6 + 1;
        uVar9 = 0x3f;
        *(char **)(param_1 + 0x18) = pcVar8;
        cVar4 = pcVar6[1];
      }
      pcVar6 = pcVar8;
      if (cVar4 != 'E') goto LAB_140006af7;
      iVar7 = 0;
    }
    lVar5 = param_1;
    puVar3 = d_make_name(param_1,(longlong)pcVar8,iVar7);
    puVar2 = d_make_comp(lVar5,uVar9,(longlong)puVar2,(longlong)puVar3);
    pcVar6 = *(char **)(param_1 + 0x18);
    cVar4 = *pcVar6;
    goto LAB_140006b49;
  }
  *(char **)(param_1 + 0x18) = pcVar6 + 1;
  if ((pcVar6[1] == 'G') || (pcVar6[1] == 'T')) {
    puVar2 = d_special_name(param_1);
    pcVar6 = *(char **)(param_1 + 0x18);
    cVar4 = *pcVar6;
  }
  else {
    puVar2 = d_encoding_part_0(param_1,0);
    pcVar6 = *(char **)(param_1 + 0x18);
    cVar4 = *pcVar6;
  }
LAB_140006b49:
  if (cVar4 != 'E') {
    return (uint *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar6 + 1;
  return puVar2;
}



uint * d_expression_1(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  
  pcVar12 = *(char **)(param_1 + 0x18);
  cVar5 = *pcVar12;
  if (cVar5 == 'L') {
    puVar8 = d_expr_primary(param_1);
    return puVar8;
  }
  if (cVar5 == 'T') {
    puVar8 = d_template_param(param_1);
    return puVar8;
  }
  if (cVar5 == 's') {
    if (pcVar12[1] == 'r') {
      *(char **)(param_1 + 0x18) = pcVar12 + 2;
      if (*(int *)(param_1 + 0x54) == 0) {
LAB_140007250:
        puVar8 = d_type(param_1);
      }
      else {
        bVar1 = pcVar12[2];
        if ((char)bVar1 < 'V') {
          if (((char)bVar1 < '0') ||
             ((0x20100803ffU >> ((ulonglong)(bVar1 - 0x30) & 0x3f) & 1) == 0)) goto LAB_140007250;
        }
        else if (0x19 < (byte)(bVar1 + 0x9f)) goto LAB_140007250;
        *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
        puVar8 = d_prefix(param_1,0);
        if (**(char **)(param_1 + 0x18) == 'E') {
          *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        }
      }
      puVar8 = d_unqualified_name(param_1,(longlong)puVar8,0);
      pcVar12 = *(char **)(param_1 + 0x18);
      cVar5 = *pcVar12;
joined_r0x000140006f35:
      if (cVar5 != 'I') {
        return puVar8;
      }
      *(char **)(param_1 + 0x18) = pcVar12 + 1;
      puVar9 = d_template_args_1(param_1);
      uVar7 = 4;
      goto LAB_140006f62;
    }
    if (pcVar12[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar12 + 2;
      puVar8 = d_expression_1(param_1);
      puVar9 = (uint *)0x0;
      uVar7 = 0x4e;
      goto LAB_140006f62;
    }
  }
  else if (cVar5 == 'f') {
    if (pcVar12[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar12 + 2;
      cVar5 = pcVar12[2];
      if (cVar5 == 'T') {
        uVar7 = 0;
        *(char **)(param_1 + 0x18) = pcVar12 + 3;
      }
      else if (cVar5 == '_') {
        uVar7 = 1;
        *(char **)(param_1 + 0x18) = pcVar12 + 3;
      }
      else {
        if (cVar5 == 'n') {
          return (uint *)0x0;
        }
        iVar6 = d_number(param_1);
        if (iVar6 + 1 < 0) {
          return (uint *)0x0;
        }
        if (**(char **)(param_1 + 0x18) != '_') {
          return (uint *)0x0;
        }
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        if (iVar6 + 1 == 0x7fffffff) {
          return (uint *)0x0;
        }
        uVar7 = iVar6 + 2;
      }
      iVar6 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar6) {
        return (uint *)0x0;
      }
      puVar8 = (uint *)((longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x20));
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *puVar8 = 6;
      puVar8[4] = uVar7;
      return puVar8;
    }
  }
  else {
    if ((byte)(cVar5 - 0x30U) < 10) {
LAB_140006caa:
      puVar8 = d_unqualified_name(param_1,0,0);
      if (puVar8 == (uint *)0x0) {
        return (uint *)0x0;
      }
      pcVar12 = *(char **)(param_1 + 0x18);
      cVar5 = *pcVar12;
      goto joined_r0x000140006f35;
    }
    if (cVar5 == 'o') {
      if (pcVar12[1] == 'n') {
        *(char **)(param_1 + 0x18) = pcVar12 + 2;
        goto LAB_140006caa;
      }
    }
    else if ((cVar5 == 'i') || (cVar5 == 't')) {
      if (pcVar12[1] == 'l') {
        pcVar12 = pcVar12 + 2;
        puVar8 = (uint *)0x0;
        *(char **)(param_1 + 0x18) = pcVar12;
        if (cVar5 == 't') {
          puVar8 = d_type(param_1);
          pcVar12 = *(char **)(param_1 + 0x18);
        }
        if (*pcVar12 == '\0') {
          return (uint *)0x0;
        }
        if (pcVar12[1] == '\0') {
          return (uint *)0x0;
        }
        puVar9 = d_exprlist(param_1,'E');
        uVar7 = 0x32;
        goto LAB_140006f62;
      }
    }
    else if (cVar5 == 'u') {
      *(char **)(param_1 + 0x18) = pcVar12 + 1;
      puVar8 = d_source_name(param_1);
      puVar9 = d_template_args_1(param_1);
      uVar7 = 0x40;
      goto LAB_140006f62;
    }
  }
  puVar8 = d_operator_name(param_1);
  if (puVar8 == (uint *)0x0) {
    return (uint *)0x0;
  }
  uVar7 = *puVar8;
  if (uVar7 == 0x33) {
    puVar3 = *(undefined8 **)(puVar8 + 4);
    pcVar12 = (char *)*puVar3;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(puVar3 + 2) + -2;
    cVar5 = *pcVar12;
    if (((cVar5 == 's') && (pcVar12[1] == 't')) && (pcVar12[2] == '\0')) {
      puVar9 = d_type(param_1);
      uVar7 = 0x38;
      goto LAB_140006f62;
    }
    iVar6 = *(int *)((longlong)puVar3 + 0x14);
    if (iVar6 == 2) {
      cVar2 = *pcVar12;
      if ((pcVar12[1] == 'c') && (((byte)(cVar2 + 0x8eU) < 2 || ((byte)(cVar2 + 0x9dU) < 2)))) {
        puVar9 = d_type(param_1);
      }
      else if (cVar2 == 'f') {
        puVar9 = d_operator_name(param_1);
      }
      else if (((cVar5 == 'd') && (pcVar12[1] == 'i')) && (pcVar12[2] == '\0')) {
        puVar9 = d_unqualified_name(param_1,0,0);
      }
      else {
        puVar9 = d_expression_1(param_1);
      }
      cVar5 = *pcVar12;
      if (((cVar5 == 'c') && (pcVar12[1] == 'l')) && (pcVar12[2] == '\0')) {
        puVar10 = d_exprlist(param_1,'E');
      }
      else {
        if ((((cVar5 == 'd') && (pcVar12[1] == 't')) && (pcVar12[2] == '\0')) ||
           (((cVar5 == 'p' && (pcVar12[1] == 't')) && (pcVar12[2] == '\0')))) {
          pcVar12 = *(char **)(param_1 + 0x18);
          if (*pcVar12 == 'g') {
            if (pcVar12[1] != 's') goto LAB_140007406;
          }
          else if ((*pcVar12 != 's') || (pcVar12[1] != 'r')) {
LAB_140007406:
            puVar10 = d_unqualified_name(param_1,0,0);
            if (**(char **)(param_1 + 0x18) == 'I') {
              *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              puVar11 = d_template_args_1(param_1);
              puVar10 = d_make_comp(param_1,4,(longlong)puVar10,(longlong)puVar11);
            }
            goto LAB_140007160;
          }
        }
        puVar10 = d_expression_1(param_1);
      }
LAB_140007160:
      puVar9 = d_make_comp(param_1,0x3a,(longlong)puVar9,(longlong)puVar10);
      uVar7 = 0x39;
      goto LAB_140006f62;
    }
    if (iVar6 < 3) {
      if (iVar6 == 0) goto LAB_14000709e;
      if (iVar6 != 1) {
        return (uint *)0x0;
      }
      cVar2 = *pcVar12;
      if (((cVar2 == 'm') || (cVar2 == 'p')) && (pcVar12[1] == cVar2)) {
        bVar4 = true;
        if (**(char **)(param_1 + 0x18) == '_') {
          *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
          cVar5 = *pcVar12;
          goto LAB_140006fa9;
        }
      }
      else {
LAB_140006fa9:
        bVar4 = false;
      }
      if (((cVar5 == 's') && (pcVar12[1] == 'P')) && (pcVar12[2] == '\0')) {
        puVar9 = d_template_args_1(param_1);
      }
      else {
        puVar9 = d_expression_1(param_1);
      }
      if (bVar4) {
        puVar9 = d_make_comp(param_1,0x3a,(longlong)puVar9,(longlong)puVar9);
      }
      goto LAB_140006d50;
    }
    if (iVar6 != 3) {
      return (uint *)0x0;
    }
    if ((((cVar5 == 'q') && (pcVar12[1] == 'u')) && (pcVar12[2] == '\0')) ||
       (((cVar5 == 'd' && (pcVar12[1] == 'X')) && (pcVar12[2] == '\0')))) {
      puVar9 = d_expression_1(param_1);
LAB_1400072a5:
      puVar10 = d_expression_1(param_1);
      puVar11 = d_expression_1(param_1);
      if (puVar11 == (uint *)0x0) {
        return (uint *)0x0;
      }
    }
    else {
      if (*pcVar12 == 'f') {
        puVar9 = d_operator_name(param_1);
        goto LAB_1400072a5;
      }
      if (*pcVar12 != 'n') {
        return (uint *)0x0;
      }
      if ((pcVar12[1] != 'w') && (pcVar12[1] != 'a')) {
        return (uint *)0x0;
      }
      puVar9 = d_exprlist(param_1,'_');
      puVar10 = d_type(param_1);
      pcVar12 = *(char **)(param_1 + 0x18);
      cVar5 = *pcVar12;
      if (cVar5 == 'E') {
        puVar11 = (uint *)0x0;
        *(char **)(param_1 + 0x18) = pcVar12 + 1;
      }
      else if (cVar5 == 'p') {
        if (pcVar12[1] != 'i') {
          return (uint *)0x0;
        }
        *(char **)(param_1 + 0x18) = pcVar12 + 2;
        puVar11 = d_exprlist(param_1,'E');
      }
      else {
        if (cVar5 != 'i') {
          return (uint *)0x0;
        }
        if (pcVar12[1] != 'l') {
          return (uint *)0x0;
        }
        puVar11 = d_expression_1(param_1);
      }
    }
    puVar10 = d_make_comp(param_1,0x3d,(longlong)puVar10,(longlong)puVar11);
    puVar9 = d_make_comp(param_1,0x3c,(longlong)puVar9,(longlong)puVar10);
    uVar7 = 0x3b;
    goto LAB_140006f62;
  }
  if (uVar7 == 0x34) {
    uVar7 = puVar8[4];
    if (uVar7 != 1) {
      if (uVar7 == 3) {
        return (uint *)0x0;
      }
      if (uVar7 != 0) {
        return (uint *)0x0;
      }
LAB_14000709e:
      puVar9 = (uint *)0x0;
      uVar7 = 0x37;
      goto LAB_140006f62;
    }
LAB_140006d2e:
    puVar9 = d_expression_1(param_1);
  }
  else {
    if (uVar7 != 0x35) {
      return (uint *)0x0;
    }
    if (**(char **)(param_1 + 0x18) != '_') goto LAB_140006d2e;
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    puVar9 = d_exprlist(param_1,'E');
  }
LAB_140006d50:
  uVar7 = 0x38;
LAB_140006f62:
  puVar8 = d_make_comp(param_1,uVar7,(longlong)puVar8,(longlong)puVar9);
  return puVar8;
}



uint * d_exprlist(longlong param_1,char param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint **ppuVar3;
  uint *local_30 [2];
  
  local_30[0] = (uint *)0x0;
  ppuVar3 = local_30;
  if (**(char **)(param_1 + 0x18) == param_2) {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    puVar2 = d_make_comp(param_1,0x2f,0,0);
    return puVar2;
  }
  while( true ) {
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = 1;
    puVar2 = d_expression_1(param_1);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    if (puVar2 == (uint *)0x0) {
      return (uint *)0x0;
    }
    puVar2 = d_make_comp(param_1,0x2f,(longlong)puVar2,0);
    *ppuVar3 = puVar2;
    if (puVar2 == (uint *)0x0) break;
    ppuVar3 = (uint **)(puVar2 + 6);
    if (**(char **)(param_1 + 0x18) == param_2) {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      return local_30[0];
    }
  }
  return (uint *)0x0;
}



uint * d_cv_qualifiers(longlong param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  char cVar10;
  ulonglong uVar11;
  
  pbVar8 = *(byte **)(param_1 + 0x18);
  uVar11 = (ulonglong)*pbVar8;
  bVar5 = next_is_type_qual_isra_0(pbVar8);
  cVar10 = (char)uVar11;
  iVar6 = (int)CONCAT71(extraout_var,bVar5);
  puVar4 = param_2;
  do {
    if (iVar6 == 0) {
      puVar7 = puVar4;
      if (((param_3 & 1) == 0) && (cVar10 == 'F')) {
        while (puVar4 != param_2) {
          piVar3 = *(int **)param_2;
          iVar6 = *piVar3;
          if (iVar6 == 0x1a) {
            *piVar3 = 0x1d;
          }
          else if (iVar6 == 0x1b) {
            *piVar3 = 0x1e;
          }
          else if (iVar6 == 0x19) {
            *piVar3 = 0x1c;
          }
          param_2 = (uint *)(piVar3 + 4);
          puVar7 = param_2;
        }
      }
      return puVar7;
    }
    *(byte **)(param_1 + 0x18) = pbVar8 + 1;
    cVar10 = (char)uVar11;
    if (cVar10 == 'r') {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
      puVar7 = (uint *)0x0;
      uVar9 = (-(uint)((param_3 & 1) == 0) & 0xfffffffd) + 0x1c;
    }
    else if (cVar10 == 'V') {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
      puVar7 = (uint *)0x0;
      uVar9 = (-(uint)((param_3 & 1) == 0) & 0xfffffffd) + 0x1d;
    }
    else if (cVar10 == 'K') {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 6;
      puVar7 = (uint *)0x0;
      uVar9 = (-(uint)((param_3 & 1) == 0) & 0xfffffffd) + 0x1e;
    }
    else {
      if (pbVar8[1] == 0) {
        return (uint *)0x0;
      }
      *(byte **)(param_1 + 0x18) = pbVar8 + 2;
      bVar1 = pbVar8[1];
      if (bVar1 == 0x78) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x11;
        puVar7 = (uint *)0x0;
        uVar9 = 0x50;
      }
      else if ((bVar1 & 0xdf) == 0x4f) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
        puVar7 = (uint *)0x0;
        uVar9 = 0x53;
        if (bVar1 == 0x4f) {
          uVar2 = *(undefined4 *)(param_1 + 0x4c);
          *(undefined4 *)(param_1 + 0x4c) = 1;
          puVar7 = d_expression_1(param_1);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
          if (puVar7 == (uint *)0x0) {
            return (uint *)0x0;
          }
          if (**(char **)(param_1 + 0x18) != 'E') {
            return (uint *)0x0;
          }
          *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
          uVar9 = 0x53;
        }
      }
      else {
        if (bVar1 != 0x77) {
          return (uint *)0x0;
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 6;
        puVar7 = (uint *)d_parmlist(param_1);
        if (puVar7 == (uint *)0x0) {
          return (uint *)0x0;
        }
        if (**(char **)(param_1 + 0x18) != 'E') {
          return (uint *)0x0;
        }
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        uVar9 = 0x54;
      }
    }
    puVar7 = d_make_comp(param_1,uVar9,0,(longlong)puVar7);
    *(uint **)puVar4 = puVar7;
    if (puVar7 == (uint *)0x0) {
      return (uint *)0x0;
    }
    pbVar8 = *(byte **)(param_1 + 0x18);
    puVar4 = puVar7 + 4;
    uVar11 = (ulonglong)*pbVar8;
    bVar5 = next_is_type_qual_isra_0(pbVar8);
    cVar10 = (char)uVar11;
    iVar6 = (int)CONCAT71(extraout_var_00,bVar5);
  } while( true );
}



uint * d_template_args_1(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  char *pcVar7;
  uint **ppuVar8;
  uint *local_20;
  
  if (**(char **)(param_1 + 0x18) == 'E') {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    puVar5 = d_make_comp(param_1,0x30,0,0);
    return puVar5;
  }
  local_20 = (uint *)0x0;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  ppuVar8 = &local_20;
  while( true ) {
    puVar5 = d_template_arg(param_1);
    if (puVar5 == (uint *)0x0) {
      return (uint *)0x0;
    }
    puVar4 = d_make_comp(param_1,0x30,(longlong)puVar5,0);
    *ppuVar8 = puVar4;
    puVar5 = local_20;
    if (puVar4 == (uint *)0x0) break;
    pcVar7 = *(char **)(param_1 + 0x18);
    ppuVar8 = (uint **)(puVar4 + 6);
    cVar1 = *pcVar7;
    if ((cVar1 == 'E') || (cVar1 == 'Q')) {
      puVar4 = local_20;
      if (cVar1 == 'Q') {
        uVar2 = *(undefined4 *)(param_1 + 0x4c);
        *(char **)(param_1 + 0x18) = pcVar7 + 1;
        *(undefined4 *)(param_1 + 0x4c) = 1;
        puVar6 = d_expression_1(param_1);
        *(undefined4 *)(param_1 + 0x4c) = uVar2;
        puVar4 = (uint *)0x0;
        if (puVar6 != (uint *)0x0) {
          puVar4 = d_make_comp(param_1,0x5f,(longlong)puVar5,(longlong)puVar6);
        }
        pcVar7 = *(char **)(param_1 + 0x18);
        if (*pcVar7 != 'E') {
          return (uint *)0x0;
        }
      }
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      *(char **)(param_1 + 0x18) = pcVar7 + 1;
      return puVar4;
    }
  }
  return (uint *)0x0;
}



uint * d_prefix(longlong param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  char *pcVar4;
  char cVar5;
  
  puVar2 = (uint *)0x0;
  do {
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar5 = *pcVar4;
    if (cVar5 == 'D') goto LAB_140007ab0;
    puVar3 = puVar2;
    if (cVar5 == 'I') {
      if (puVar2 != (uint *)0x0) goto LAB_140007a2c;
      return (uint *)0x0;
    }
LAB_1400079c7:
    if (cVar5 == 'T') {
      if (puVar3 != (uint *)0x0) {
        return (uint *)0x0;
      }
      puVar2 = d_template_param(param_1);
      goto LAB_1400079e4;
    }
    if (cVar5 != 'M') {
      if (cVar5 != 'S') goto LAB_140007ae0;
      puVar2 = d_substitution(param_1,1);
      if (puVar2 != (uint *)0x0) {
        if (*puVar2 - 0x56 < 2) goto LAB_140007ae3;
        if (puVar3 == (uint *)0x0) {
          pcVar4 = *(char **)(param_1 + 0x18);
          cVar5 = *pcVar4;
          if (cVar5 != 'D') goto LAB_140007a27;
LAB_140007ab0:
          do {
            puVar3 = puVar2;
            if ((pcVar4[1] & 0xdfU) == 0x54) {
              if (puVar2 != (uint *)0x0) {
                return (uint *)0x0;
              }
              puVar2 = d_type(param_1);
            }
            else {
LAB_140007ae0:
              puVar2 = (uint *)0x0;
LAB_140007ae3:
              puVar2 = d_unqualified_name(param_1,(longlong)puVar3,(longlong)puVar2);
            }
LAB_1400079e4:
            while( true ) {
              if (puVar2 == (uint *)0x0) {
                return (uint *)0x0;
              }
              pcVar4 = *(char **)(param_1 + 0x18);
              if (*pcVar4 == 'E') {
                return puVar2;
              }
              if (param_2 != 0) {
                iVar1 = *(int *)(param_1 + 0x38);
                if (*(int *)(param_1 + 0x3c) <= iVar1) {
                  return (uint *)0x0;
                }
                *(uint **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = puVar2;
                *(int *)(param_1 + 0x38) = iVar1 + 1;
              }
              cVar5 = *pcVar4;
              if (cVar5 == 'D') break;
LAB_140007a27:
              puVar3 = puVar2;
              if (cVar5 != 'I') goto LAB_1400079c7;
LAB_140007a2c:
              *(char **)(param_1 + 0x18) = pcVar4 + 1;
              puVar3 = d_template_args_1(param_1);
              if (puVar3 == (uint *)0x0) {
                return (uint *)0x0;
              }
              puVar2 = d_make_comp(param_1,4,(longlong)puVar2,(longlong)puVar3);
            }
          } while( true );
        }
      }
      return (uint *)0x0;
    }
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    puVar2 = puVar3;
  } while( true );
}



uint * d_template_arg(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint *puVar4;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar3;
  if (cVar1 == 'L') {
    puVar4 = d_expr_primary(param_1);
    return puVar4;
  }
  if (cVar1 < 'M') {
    if ((byte)(cVar1 + 0xb7U) < 2) {
      *(char **)(param_1 + 0x18) = pcVar3 + 1;
      puVar4 = d_template_args_1(param_1);
      return puVar4;
    }
  }
  else if (cVar1 == 'X') {
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    puVar4 = d_expression_1(param_1);
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    if (**(char **)(param_1 + 0x18) == 'E') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    return puVar4;
  }
  puVar4 = d_type(param_1);
  return puVar4;
}



uint * d_name(longlong param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint **ppuVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *puVar12;
  uint *local_20;
  
  pcVar10 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar10;
  if (cVar1 == 'U') {
    local_20 = d_unqualified_name(param_1,0,0);
    goto LAB_140007d1d;
  }
  if (cVar1 < 'V') {
    if (cVar1 == 'N') {
      *(char **)(param_1 + 0x18) = pcVar10 + 1;
      if (pcVar10[1] == 'H') {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 5;
        *(char **)(param_1 + 0x18) = pcVar10 + 2;
        ppuVar6 = &local_20;
        puVar5 = d_make_comp(param_1,0x21,0,0);
      }
      else {
        ppuVar6 = (uint **)d_cv_qualifiers(param_1,(uint *)&local_20,1);
        if (ppuVar6 == (uint **)0x0) {
          return (uint *)0x0;
        }
        puVar5 = d_ref_qualifier(param_1,(uint *)0x0);
      }
      puVar7 = d_prefix(param_1,1);
      *ppuVar6 = puVar7;
      if (puVar7 == (uint *)0x0) {
        return (uint *)0x0;
      }
      if (puVar5 != (uint *)0x0) {
        *(uint **)(puVar5 + 4) = local_20;
        local_20 = puVar5;
      }
      if (**(char **)(param_1 + 0x18) != 'E') {
        return (uint *)0x0;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      goto LAB_140007d1d;
    }
    if (cVar1 != 'S') goto LAB_140007d00;
    puVar12 = (undefined4 *)0x0;
    if (pcVar10[1] == 't') {
      *(char **)(param_1 + 0x18) = pcVar10 + 2;
      iVar3 = *(int *)(param_1 + 0x28);
      if (iVar3 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        puVar12 = (undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x20));
        *(undefined8 *)(puVar12 + 1) = 0;
        *puVar12 = 0;
        *(undefined **)(puVar12 + 4) = &DAT_1400245f5;
        puVar12[6] = 3;
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 3;
      if (pcVar10[2] != 'S') {
        puVar5 = (uint *)0x0;
        goto LAB_140007d06;
      }
    }
    puVar5 = d_substitution(param_1,0);
    if (puVar5 == (uint *)0x0) {
      return (uint *)0x0;
    }
    if (*puVar5 - 0x56 < 2) goto LAB_140007d06;
    if (puVar12 != (undefined4 *)0x0) {
      return (uint *)0x0;
    }
    pcVar10 = *(char **)(param_1 + 0x18);
    if (*pcVar10 != 'I') {
      return puVar5;
    }
LAB_140007e2e:
    *(char **)(param_1 + 0x18) = pcVar10 + 1;
    puVar7 = d_template_args_1(param_1);
    local_20 = puVar5;
  }
  else {
    if (cVar1 == 'Z') {
      *(char **)(param_1 + 0x18) = pcVar10 + 1;
      if ((pcVar10[1] == 'G') || (pcVar10[1] == 'T')) {
        puVar5 = d_special_name(param_1);
      }
      else {
        puVar5 = d_encoding_part_0(param_1,0);
      }
      if (puVar5 == (uint *)0x0) {
        return (uint *)0x0;
      }
      pcVar10 = *(char **)(param_1 + 0x18);
      if (*pcVar10 != 'E') {
        return (uint *)0x0;
      }
      *(char **)(param_1 + 0x18) = pcVar10 + 1;
      if (pcVar10[1] == 's') {
        *(char **)(param_1 + 0x18) = pcVar10 + 2;
        uVar9 = d_discriminator(param_1);
        if ((int)uVar9 == 0) {
          return (uint *)0x0;
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (iVar3 < *(int *)(param_1 + 0x2c)) {
          *(int *)(param_1 + 0x28) = iVar3 + 1;
          puVar7 = (uint *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x20));
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          *(char **)(puVar7 + 4) = "string literal";
          puVar7[6] = 0xe;
        }
        else {
LAB_14000806a:
          puVar7 = (uint *)0x0;
        }
      }
      else if (pcVar10[1] == 'd') {
        pcVar11 = pcVar10 + 2;
        *(char **)(param_1 + 0x18) = pcVar11;
        if (pcVar10[2] == '_') {
          uVar4 = 0;
        }
        else {
          if (pcVar10[2] == 'n') {
            return (uint *)0x0;
          }
          iVar3 = d_number(param_1);
          uVar4 = iVar3 + 1;
          if ((int)uVar4 < 0) {
            return (uint *)0x0;
          }
          pcVar11 = *(char **)(param_1 + 0x18);
          if (*pcVar11 != '_') {
            return (uint *)0x0;
          }
        }
        *(char **)(param_1 + 0x18) = pcVar11 + 1;
        puVar8 = d_name(param_1,0);
        if (((puVar8 != (uint *)0x0) && ((*puVar8 & 0xfffffffd) != 0x48)) &&
           (uVar9 = d_discriminator(param_1), (int)uVar9 == 0)) {
          return (uint *)0x0;
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar3) goto LAB_14000806a;
        puVar7 = (uint *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x20));
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        *puVar7 = 0x49;
        puVar7[6] = uVar4;
        *(uint **)(puVar7 + 4) = puVar8;
      }
      else {
        puVar7 = d_name(param_1,0);
        if (((puVar7 != (uint *)0x0) && ((*puVar7 & 0xfffffffd) != 0x48)) &&
           (uVar9 = d_discriminator(param_1), (int)uVar9 == 0)) {
          return (uint *)0x0;
        }
      }
      if ((*puVar5 == 3) && (piVar2 = *(int **)(puVar5 + 6), *piVar2 == 0x2a)) {
        piVar2[4] = 0;
        piVar2[5] = 0;
      }
      local_20 = d_make_comp(param_1,2,(longlong)puVar5,(longlong)puVar7);
      goto LAB_140007d1d;
    }
LAB_140007d00:
    puVar5 = (uint *)0x0;
    puVar12 = (undefined4 *)0x0;
LAB_140007d06:
    local_20 = d_unqualified_name(param_1,(longlong)puVar12,(longlong)puVar5);
    pcVar10 = *(char **)(param_1 + 0x18);
    if (*pcVar10 != 'I') goto LAB_140007d1d;
    if (local_20 == (uint *)0x0) {
      return (uint *)0x0;
    }
    iVar3 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x3c) <= iVar3) {
      return (uint *)0x0;
    }
    *(uint **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 8) = local_20;
    puVar7 = (uint *)0x0;
    *(int *)(param_1 + 0x38) = iVar3 + 1;
    puVar5 = local_20;
    if ((byte)(*pcVar10 + 0xb7U) < 2) goto LAB_140007e2e;
  }
  local_20 = d_make_comp(param_1,4,(longlong)local_20,(longlong)puVar7);
LAB_140007d1d:
  if ((param_2 != 0) && (local_20 != (uint *)0x0)) {
    iVar3 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x3c) <= iVar3) {
      return (uint *)0x0;
    }
    *(uint **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 8) = local_20;
    *(int *)(param_1 + 0x38) = iVar3 + 1;
  }
  return local_20;
}



uint * d_encoding_part_0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar3 = d_name(param_1,0);
  if (puVar3 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    uVar6 = *puVar3;
    while (uVar6 - 0x1c < 0x39) {
      if ((0x19000000000003fU >> ((ulonglong)(uVar6 - 0x1c) & 0x3f) & 1) == 0) {
        return puVar3;
      }
      puVar3 = *(uint **)(puVar3 + 4);
      uVar6 = *puVar3;
    }
    if (uVar6 == 2) {
      piVar2 = *(int **)(puVar3 + 6);
      while( true ) {
        if (piVar2 == (int *)0x0) {
          return (uint *)0x0;
        }
        if (0x38 < *piVar2 - 0x1cU) break;
        if ((0x19000000000003fU >> ((ulonglong)(*piVar2 - 0x1cU) & 0x3f) & 1) == 0) {
          return puVar3;
        }
        piVar2 = *(int **)(piVar2 + 4);
        *(int **)(puVar3 + 6) = piVar2;
      }
      return puVar3;
    }
    return puVar3;
  }
  if (**(char **)(param_1 + 0x18) == '\0') {
    return puVar3;
  }
  puVar4 = puVar3;
  if (**(char **)(param_1 + 0x18) == 'E') {
    return puVar3;
  }
  do {
    uVar6 = *puVar4;
    if (uVar6 == 4) {
      puVar4 = *(uint **)(puVar4 + 4);
      goto joined_r0x0001400081e7;
    }
    if (uVar6 < 5) {
      if (uVar6 != 2) break;
      puVar4 = *(uint **)(puVar4 + 6);
    }
    else {
      if ((0x38 < uVar6 - 0x1c) ||
         ((0x19000000000003fU >> ((ulonglong)(uVar6 - 0x1c) & 0x3f) & 1) == 0)) break;
      puVar4 = *(uint **)(puVar4 + 4);
    }
  } while (puVar4 != (uint *)0x0);
LAB_140008180:
  uVar6 = 0;
LAB_140008182:
  puVar4 = d_bare_function_type(param_1,uVar6);
  if (puVar4 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (((param_2 == 0) && (*puVar3 == 2)) && (*puVar4 == 0x2a)) {
    puVar4[4] = 0;
    puVar4[5] = 0;
  }
  if (**(char **)(param_1 + 0x18) == 'Q') {
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    puVar5 = d_expression_1(param_1);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    if (puVar5 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = d_make_comp(param_1,0x5f,(longlong)puVar4,(longlong)puVar5);
    }
  }
  puVar3 = d_make_comp(param_1,3,(longlong)puVar3,(longlong)puVar4);
  return puVar3;
joined_r0x0001400081e7:
  if (puVar4 == (uint *)0x0) goto LAB_140008210;
  uVar6 = *puVar4;
  if (8 < uVar6) {
    uVar6 = (uint)(uVar6 != 0x36);
    goto LAB_140008182;
  }
  if (6 < uVar6) goto LAB_140008180;
  if (1 < uVar6 - 1) goto LAB_140008210;
  puVar4 = *(uint **)(puVar4 + 6);
  goto joined_r0x0001400081e7;
LAB_140008210:
  uVar6 = 1;
  goto LAB_140008182;
}



void d_print_comp_inner(byte *param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong *plVar10;
  longlong **pplVar11;
  size_t sVar12;
  longlong **pplVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  byte bVar26;
  int iVar27;
  longlong lVar28;
  byte *pbVar29;
  longlong **pplVar30;
  uint uVar31;
  undefined8 *puVar32;
  undefined4 uVar33;
  undefined8 unaff_R14;
  longlong *local_c8;
  uint *local_c0;
  longlong *local_b8 [2];
  longlong local_a8;
  longlong *local_a0 [2];
  longlong alStack_90 [2];
  longlong *aplStack_80 [10];
  
  if (param_3 == (uint *)0x0) goto switchD_1400082f6_caseD_2d;
  uVar23 = (ulonglong)*(uint *)(param_1 + 0x130);
  if (*(uint *)(param_1 + 0x130) != 0) {
    return;
  }
  uVar17 = *param_3;
  iVar24 = 0;
  switch(uVar17) {
  case 0:
    if ((longlong)(int)param_3[6] != 0) {
      pbVar6 = *(byte **)(param_3 + 4);
      lVar28 = *(longlong *)(param_1 + 0x100);
      pbVar29 = pbVar6 + (int)param_3[6];
      do {
        bVar26 = *pbVar6;
        lVar22 = lVar28;
        if (lVar28 == 0xff) {
          pbVar6 = pbVar6 + 1;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          param_1[0x100] = 1;
          param_1[0x101] = 0;
          param_1[0x102] = 0;
          param_1[0x103] = 0;
          param_1[0x104] = 0;
          param_1[0x105] = 0;
          param_1[0x106] = 0;
          param_1[0x107] = 0;
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          *param_1 = bVar26;
          param_1[0x108] = bVar26;
          if (pbVar29 == pbVar6) {
            return;
          }
          bVar26 = *pbVar6;
          lVar22 = 1;
        }
        lVar28 = lVar22 + 1;
        pbVar6 = pbVar6 + 1;
        *(longlong *)(param_1 + 0x100) = lVar28;
        param_1[lVar22] = bVar26;
        param_1[0x108] = bVar26;
      } while (pbVar29 != pbVar6);
    }
    break;
  case 1:
  case 2:
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    d_append_string((char *)param_1,"::");
    puVar15 = *(uint **)(param_3 + 6);
    if (*puVar15 == 0x49) {
      d_append_string((char *)param_1,"{default arg#");
      _text((longlong)local_b8,"%d",(double)(ulonglong)(puVar15[6] + 1),uVar23);
      sVar12 = strlen((char *)local_b8);
      if (sVar12 != 0) {
        pplVar13 = local_b8;
        lVar28 = *(longlong *)(param_1 + 0x100);
        pplVar30 = (longlong **)((longlong)pplVar13 + sVar12);
        do {
          bVar26 = *(byte *)pplVar13;
          lVar22 = lVar28;
          if (lVar28 == 0xff) {
            pplVar13 = (longlong **)((longlong)pplVar13 + 1);
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            param_1[0x100] = 1;
            param_1[0x101] = 0;
            param_1[0x102] = 0;
            param_1[0x103] = 0;
            param_1[0x104] = 0;
            param_1[0x105] = 0;
            param_1[0x106] = 0;
            param_1[0x107] = 0;
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
            *param_1 = bVar26;
            param_1[0x108] = bVar26;
            if (pplVar30 == pplVar13) break;
            bVar26 = *(byte *)pplVar13;
            lVar22 = 1;
          }
          lVar28 = lVar22 + 1;
          pplVar13 = (longlong **)((longlong)pplVar13 + 1);
          *(longlong *)(param_1 + 0x100) = lVar28;
          param_1[lVar22] = bVar26;
          param_1[0x108] = bVar26;
        } while (pplVar30 != pplVar13);
      }
      d_append_string((char *)param_1,"}::");
      puVar15 = *(uint **)(puVar15 + 4);
    }
    goto LAB_140008374;
  case 3:
    uVar8 = *(undefined8 *)(param_1 + 0x128);
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x12a] = 0;
    param_1[299] = 0;
    param_1[300] = 0;
    param_1[0x12d] = 0;
    param_1[0x12e] = 0;
    param_1[0x12f] = 0;
    puVar15 = *(uint **)(param_3 + 4);
    if (puVar15 != (uint *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x120);
      pplVar13 = local_b8;
      pplVar30 = (longlong **)0x0;
      uVar17 = 0;
      while( true ) {
        pplVar11 = pplVar13;
        *pplVar11 = (longlong *)pplVar30;
        uVar31 = uVar17 + 1;
        *(undefined4 *)(pplVar11 + 2) = 0;
        uVar20 = *puVar15;
        *(longlong ***)(param_1 + 0x128) = pplVar11;
        pplVar11[1] = (longlong *)puVar15;
        pplVar11[3] = plVar5;
        if ((0x38 < uVar20 - 0x1c) ||
           ((0x19000000000003fU >> ((ulonglong)(uVar20 - 0x1c) & 0x3f) & 1) == 0)) break;
        puVar15 = *(uint **)(puVar15 + 4);
        if ((puVar15 == (uint *)0x0) ||
           (pplVar13 = pplVar11 + 4, pplVar30 = pplVar11, uVar17 = uVar31, uVar31 == 4))
        goto switchD_1400082f6_caseD_2d;
      }
      uVar18 = uVar31;
      if (uVar20 != 2) goto LAB_14000bdae;
      puVar15 = *(uint **)(puVar15 + 6);
      if ((*puVar15 != 0x49) || (puVar15 = *(uint **)(puVar15 + 4), puVar15 != (uint *)0x0)) {
        uVar23 = (ulonglong)uVar17;
        pplVar13 = local_b8 + uVar23 * 4;
        goto LAB_14000c98f;
      }
    }
    goto switchD_1400082f6_caseD_2d;
  case 4:
    uVar8 = *(undefined8 *)(param_1 + 0x170);
    uVar3 = *(undefined8 *)(param_1 + 0x128);
    *(uint **)(param_1 + 0x170) = param_3;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x12a] = 0;
    param_1[299] = 0;
    param_1[300] = 0;
    param_1[0x12d] = 0;
    param_1[0x12e] = 0;
    param_1[0x12f] = 0;
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    if (param_1[0x108] == 0x3c) {
      d_append_char((longlong)param_1,0x20);
    }
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x3c;
    param_1[0x108] = 0x3c;
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 6));
    if (param_1[0x108] == 0x3e) {
      d_append_char((longlong)param_1,0x20);
    }
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x3e;
    param_1[0x108] = 0x3e;
    *(undefined8 *)(param_1 + 0x128) = uVar3;
    *(undefined8 *)(param_1 + 0x170) = uVar8;
    break;
  case 5:
    uVar17 = param_3[4];
    if ((int)(uVar17 + 1) < *(int *)(param_1 + 0x138)) {
      piVar9 = *(int **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 8) + 0x10);
      if (uVar17 != 0) {
        uVar20 = uVar17;
        if (piVar9 == (int *)0x0) goto switchD_1400082f6_caseD_2d;
        do {
          piVar9 = *(int **)(piVar9 + 6);
          if (piVar9 == (int *)0x0) goto switchD_1400082f6_caseD_2d;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      if (piVar9 != (int *)0x0) {
        iVar24 = *piVar9;
        if (iVar24 != 0x5e) {
LAB_14000c37f:
          d_print_lambda_parm_name((char *)param_1,iVar24,uVar17,0);
          return;
        }
        if (*(int **)(piVar9 + 4) != (int *)0x0) {
          iVar24 = **(int **)(piVar9 + 4);
          goto LAB_14000c37f;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x138) != 0) {
        pbVar6 = &DAT_140024617;
        lVar28 = *(longlong *)(param_1 + 0x100);
        do {
          bVar26 = *pbVar6;
          if (lVar28 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
            pbVar6 = pbVar6 + 1;
            *param_1 = bVar26;
            param_1[0x100] = 1;
            param_1[0x101] = 0;
            param_1[0x102] = 0;
            param_1[0x103] = 0;
            param_1[0x104] = 0;
            param_1[0x105] = 0;
            param_1[0x106] = 0;
            param_1[0x107] = 0;
            param_1[0x108] = bVar26;
            if (pbVar6 == &DAT_14002461c) break;
            bVar26 = *pbVar6;
            lVar28 = 1;
          }
          pbVar6 = pbVar6 + 1;
          *(longlong *)(param_1 + 0x100) = lVar28 + 1;
          param_1[lVar28] = bVar26;
          param_1[0x108] = bVar26;
          lVar28 = lVar28 + 1;
        } while (pbVar6 != &DAT_14002461c);
        _text((longlong)local_b8,"%d",(double)(ulonglong)(param_3[4] + 1),(ulonglong)bVar26);
        sVar12 = strlen((char *)local_b8);
        if (sVar12 == 0) {
          return;
        }
        pplVar13 = local_b8;
        lVar28 = *(longlong *)(param_1 + 0x100);
        pplVar30 = (longlong **)((longlong)pplVar13 + sVar12);
        do {
          bVar26 = *(byte *)pplVar13;
          lVar22 = lVar28;
          if (lVar28 == 0xff) {
            pplVar13 = (longlong **)((longlong)pplVar13 + 1);
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            param_1[0x100] = 1;
            param_1[0x101] = 0;
            param_1[0x102] = 0;
            param_1[0x103] = 0;
            param_1[0x104] = 0;
            param_1[0x105] = 0;
            param_1[0x106] = 0;
            param_1[0x107] = 0;
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
            *param_1 = bVar26;
            param_1[0x108] = bVar26;
            if (pplVar30 == pplVar13) {
              return;
            }
            bVar26 = *(byte *)pplVar13;
            lVar22 = 1;
          }
          lVar28 = lVar22 + 1;
          pplVar13 = (longlong **)((longlong)pplVar13 + 1);
          *(longlong *)(param_1 + 0x100) = lVar28;
          param_1[lVar22] = bVar26;
          param_1[0x108] = bVar26;
        } while (pplVar30 != pplVar13);
        return;
      }
      puVar15 = (uint *)d_lookup_template_argument((longlong)param_1,(longlong)param_3);
      if (puVar15 != (uint *)0x0) {
        if ((*puVar15 != 0x30) || (iVar24 = *(int *)(param_1 + 0x13c), iVar24 < 0)) {
LAB_14000c942:
          puVar16 = *(undefined8 **)(param_1 + 0x120);
          *(undefined8 *)(param_1 + 0x120) = *puVar16;
          d_print_comp(param_1,0x11,puVar15);
          *(undefined8 **)(param_1 + 0x120) = puVar16;
          return;
        }
        do {
          if (*puVar15 != 0x30) break;
          if (iVar24 == 0) {
            puVar15 = *(uint **)(puVar15 + 4);
            if (puVar15 != (uint *)0x0) goto LAB_14000c942;
            break;
          }
          puVar15 = *(uint **)(puVar15 + 6);
          iVar24 = iVar24 + -1;
        } while (puVar15 != (uint *)0x0);
      }
    }
    goto switchD_1400082f6_caseD_2d;
  case 6:
    uVar17 = param_3[4];
    if (uVar17 != 0) {
      d_append_string((char *)param_1,"{parm#");
      _text((longlong)local_b8,"%d",(double)(ulonglong)uVar17,uVar23);
      sVar12 = strlen((char *)local_b8);
      if (sVar12 != 0) {
        pplVar13 = local_b8;
        lVar28 = *(longlong *)(param_1 + 0x100);
        pplVar30 = (longlong **)((longlong)pplVar13 + sVar12);
        do {
          bVar26 = *(byte *)pplVar13;
          lVar22 = lVar28;
          if (lVar28 == 0xff) {
            pplVar13 = (longlong **)((longlong)pplVar13 + 1);
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            param_1[0x100] = 1;
            param_1[0x101] = 0;
            param_1[0x102] = 0;
            param_1[0x103] = 0;
            param_1[0x104] = 0;
            param_1[0x105] = 0;
            param_1[0x106] = 0;
            param_1[0x107] = 0;
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
            *param_1 = bVar26;
            param_1[0x108] = bVar26;
            if (pplVar30 == pplVar13) break;
            bVar26 = *(byte *)pplVar13;
            lVar22 = 1;
          }
          lVar28 = lVar22 + 1;
          pplVar13 = (longlong **)((longlong)pplVar13 + 1);
          *(longlong *)(param_1 + 0x100) = lVar28;
          param_1[lVar22] = bVar26;
          param_1[0x108] = bVar26;
        } while (pplVar13 != pplVar30);
      }
      uVar19 = 0x7d;
      goto LAB_1400085eb;
    }
    pcVar7 = "this";
    goto LAB_140008c75;
  case 7:
    goto switchD_1400082f6_caseD_7;
  case 8:
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x7e;
    param_1[0x108] = 0x7e;
    goto switchD_1400082f6_caseD_7;
  case 9:
    pcVar7 = "vtable for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024662) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024662);
    goto switchD_1400082f6_caseD_29;
  case 10:
    pcVar7 = "VTT for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x14002466b) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x14002466b);
    goto switchD_1400082f6_caseD_29;
  case 0xb:
    pcVar7 = "construction vtable for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024684) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024684);
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    d_append_string((char *)param_1,"-in-");
    goto switchD_1400082f6_caseD_7;
  case 0xc:
    d_append_string((char *)param_1,"typeinfo for ");
    puVar15 = *(uint **)(param_3 + 4);
    goto LAB_140008374;
  case 0xd:
    pcVar7 = "typeinfo name for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400246aa) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x1400246aa);
    goto switchD_1400082f6_caseD_29;
  case 0xe:
    pcVar7 = "typeinfo fn for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400246bb) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x1400246bb);
    goto switchD_1400082f6_caseD_29;
  case 0xf:
    pcVar7 = "non-virtual thunk to ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400246d1) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x1400246d1);
    goto switchD_1400082f6_caseD_29;
  case 0x10:
    pcVar7 = "virtual thunk to ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400246e3) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x1400246e3);
    goto switchD_1400082f6_caseD_29;
  case 0x11:
    pcVar7 = "covariant return thunk to ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400246fe) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x1400246fe);
    goto switchD_1400082f6_caseD_29;
  case 0x12:
    pcVar7 = "java Class for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x14002470e) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x14002470e);
    goto switchD_1400082f6_caseD_29;
  case 0x13:
    pcVar7 = "guard variable for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024722) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024722);
    goto switchD_1400082f6_caseD_29;
  case 0x14:
    pcVar7 = "TLS init function for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024739) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024739);
    goto switchD_1400082f6_caseD_29;
  case 0x15:
    pcVar7 = "TLS wrapper function for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024753) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024753);
    goto switchD_1400082f6_caseD_29;
  case 0x16:
    pcVar7 = "reference temporary #";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024769) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024769);
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 6));
    pbVar6 = &DAT_14002476a;
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pbVar6;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pbVar6 = pbVar6 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if (pbVar6 == &DAT_14002476f) break;
        bVar26 = *pbVar6;
        lVar28 = 1;
      }
      pbVar6 = pbVar6 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while (pbVar6 != &DAT_14002476f);
    goto switchD_1400082f6_caseD_29;
  case 0x17:
    pcVar7 = "hidden alias for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024781) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024781);
    goto switchD_1400082f6_caseD_29;
  case 0x18:
    if ((longlong)(int)param_3[6] != 0) {
      pbVar6 = *(byte **)(param_3 + 4);
      lVar28 = *(longlong *)(param_1 + 0x100);
      pbVar29 = pbVar6 + (int)param_3[6];
      do {
        bVar26 = *pbVar6;
        lVar22 = lVar28;
        if (lVar28 == 0xff) {
          pbVar6 = pbVar6 + 1;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          param_1[0x100] = 1;
          param_1[0x101] = 0;
          param_1[0x102] = 0;
          param_1[0x103] = 0;
          param_1[0x104] = 0;
          param_1[0x105] = 0;
          param_1[0x106] = 0;
          param_1[0x107] = 0;
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          *param_1 = bVar26;
          param_1[0x108] = bVar26;
          if (pbVar29 == pbVar6) {
            return;
          }
          bVar26 = *pbVar6;
          lVar22 = 1;
        }
        lVar28 = lVar22 + 1;
        pbVar6 = pbVar6 + 1;
        *(longlong *)(param_1 + 0x100) = lVar28;
        param_1[lVar22] = bVar26;
        param_1[0x108] = bVar26;
      } while (pbVar6 != pbVar29);
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    local_b8[0] = *(longlong **)(param_1 + 0x128);
    plVar5 = local_b8[0];
    if (local_b8[0] == (longlong *)0x0) {
      local_b8[0] = (longlong *)0x0;
    }
    else {
      do {
        if ((int)plVar5[2] == 0) {
          if (2 < *(uint *)plVar5[1] - 0x19) break;
          if (uVar17 == *(uint *)plVar5[1]) goto switchD_1400082f6_caseD_29;
        }
        plVar5 = (longlong *)*plVar5;
      } while (plVar5 != (longlong *)0x0);
    }
    goto LAB_1400083ec;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x26:
  case 0x27:
  case 0x50:
  case 0x53:
  case 0x54:
    local_b8[0] = *(longlong **)(param_1 + 0x128);
LAB_1400083ec:
    *(longlong ***)(param_1 + 0x128) = local_b8;
    local_a0[0] = *(longlong **)(param_1 + 0x120);
    local_b8[1] = (longlong *)param_3;
LAB_140008411:
    puVar15 = *(uint **)((longlong)local_b8[1] + 0x10);
LAB_140008415:
    plVar5 = local_b8[1];
    local_a8._0_4_ = 0;
    d_print_comp(param_1,0x11,puVar15);
    if ((int)local_a8 == 0) {
      d_print_mod(param_1,0x11,(uint *)plVar5);
    }
    *(longlong **)(param_1 + 0x128) = local_b8[0];
    if (iVar24 != 0) {
      *(undefined8 *)(param_1 + 0x120) = unaff_R14;
    }
    break;
  case 0x24:
  case 0x25:
    puVar15 = *(uint **)(param_3 + 4);
    iVar27 = *(int *)(param_1 + 0x138);
    uVar17 = *puVar15;
    if ((iVar27 != 0) || (iVar24 = 0, uVar17 != 5)) goto LAB_14000876e;
    uVar17 = *(uint *)(param_1 + 0x158);
    if (0 < (int)uVar17) {
      puVar16 = *(undefined8 **)(param_1 + 0x150);
      puVar32 = puVar16 + (ulonglong)uVar17 * 2;
      do {
        if (puVar15 == (uint *)*puVar16) {
          puVar32 = *(undefined8 **)(param_1 + 0x148);
          goto joined_r0x00014000cb1f;
        }
        puVar16 = puVar16 + 2;
      } while (puVar32 != puVar16);
    }
    if ((int)uVar17 < *(int *)(param_1 + 0x15c)) {
      plVar5 = *(longlong **)(param_1 + 0x120);
      puVar16 = (undefined8 *)((longlong)(int)uVar17 * 0x10 + *(longlong *)(param_1 + 0x150));
      *(uint *)(param_1 + 0x158) = uVar17 + 1;
      puVar32 = puVar16 + 1;
      *puVar16 = puVar15;
      if (plVar5 != (longlong *)0x0) {
        uVar23 = (ulonglong)*(int *)(param_1 + 0x168);
        iVar24 = *(int *)(param_1 + 0x16c);
        lVar28 = uVar23 << 4;
        puVar16 = puVar32;
        do {
          if (iVar24 <= (int)uVar23) goto switchD_1400082f6_caseD_2d;
          lVar22 = plVar5[1];
          uVar17 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar17;
          *(uint *)(param_1 + 0x168) = uVar17;
          puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x160) + lVar28);
          lVar28 = lVar28 + 0x10;
          puVar32[1] = lVar22;
          *puVar16 = puVar32;
          plVar5 = (longlong *)*plVar5;
          puVar16 = puVar32;
        } while (plVar5 != (longlong *)0x0);
      }
      *puVar32 = 0;
LAB_14000cb4f:
      iVar24 = iVar27;
      puVar15 = (uint *)d_lookup_template_argument((longlong)param_1,(longlong)puVar15);
      if (puVar15 != (uint *)0x0) goto LAB_14000cb66;
    }
    goto switchD_1400082f6_caseD_2d;
  case 0x28:
    lVar28 = (longlong)*(int *)(*(undefined8 **)(param_3 + 4) + 1);
    if (lVar28 != 0) {
      pbVar6 = (byte *)**(undefined8 **)(param_3 + 4);
      lVar22 = *(longlong *)(param_1 + 0x100);
      pbVar29 = pbVar6 + lVar28;
      do {
        bVar26 = *pbVar6;
        lVar28 = lVar22;
        if (lVar22 == 0xff) {
          pbVar6 = pbVar6 + 1;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          param_1[0x100] = 1;
          param_1[0x101] = 0;
          param_1[0x102] = 0;
          param_1[0x103] = 0;
          param_1[0x104] = 0;
          param_1[0x105] = 0;
          param_1[0x106] = 0;
          param_1[0x107] = 0;
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          *param_1 = bVar26;
          param_1[0x108] = bVar26;
          if (pbVar29 == pbVar6) {
            return;
          }
          bVar26 = *pbVar6;
          lVar28 = 1;
        }
        lVar22 = lVar28 + 1;
        pbVar6 = pbVar6 + 1;
        *(longlong *)(param_1 + 0x100) = lVar22;
        param_1[lVar28] = bVar26;
        param_1[0x108] = bVar26;
      } while (pbVar29 != pbVar6);
    }
    break;
  case 0x29:
  case 0x5c:
    goto switchD_1400082f6_caseD_29;
  case 0x2a:
    if (*(longlong *)(param_3 + 4) != 0) {
      local_b8[0] = *(longlong **)(param_1 + 0x128);
      local_a8._0_4_ = 0;
      *(longlong ***)(param_1 + 0x128) = local_b8;
      local_a0[0] = *(longlong **)(param_1 + 0x120);
      local_b8[1] = (longlong *)param_3;
      d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
      *(longlong **)(param_1 + 0x128) = local_b8[0];
      if ((int)local_a8 != 0) {
        return;
      }
      d_append_char((longlong)param_1,0x20);
    }
    d_print_function_type((char *)param_1,0x11,(longlong)param_3,*(longlong **)(param_1 + 0x128));
    return;
  case 0x2b:
    plVar5 = *(longlong **)(param_1 + 0x128);
    uVar17 = 1;
    local_a0[0] = *(longlong **)(param_1 + 0x120);
    *(longlong ***)(param_1 + 0x128) = local_b8;
    local_a8._0_4_ = 0;
    plVar10 = plVar5;
    pplVar13 = local_b8;
    local_b8[0] = plVar5;
    if (plVar5 == (longlong *)0x0) {
      local_b8[1] = (longlong *)param_3;
      d_print_comp(param_1,0x11,*(uint **)(param_3 + 6));
      param_1[0x128] = 0;
      param_1[0x129] = 0;
      param_1[0x12a] = 0;
      param_1[299] = 0;
      param_1[300] = 0;
      param_1[0x12d] = 0;
      param_1[0x12e] = 0;
      param_1[0x12f] = 0;
      if ((int)local_a8 != 0) {
        return;
      }
    }
    else {
      do {
        if (2 < *(int *)plVar10[1] - 0x19U) break;
        if ((int)plVar10[2] == 0) {
          if (3 < uVar17) goto switchD_1400082f6_caseD_2d;
          lVar28 = plVar10[1];
          uVar23 = (ulonglong)uVar17;
          uVar17 = uVar17 + 1;
          local_b8[uVar23 * 4] = (longlong *)*plVar10;
          (&local_a8)[uVar23 * 4 + -1] = lVar28;
          lVar28 = plVar10[2];
          plVar4 = (longlong *)plVar10[3];
          local_b8[uVar23 * 4] = (longlong *)pplVar13;
          pplVar13 = local_b8 + uVar23 * 4;
          *(longlong ***)(param_1 + 0x128) = pplVar13;
          (&local_a8)[uVar23 * 4] = lVar28;
          local_a0[uVar23 * 4] = plVar4;
          *(undefined4 *)(plVar10 + 2) = 1;
        }
        plVar10 = (longlong *)*plVar10;
      } while (plVar10 != (longlong *)0x0);
      local_b8[1] = (longlong *)param_3;
      d_print_comp(param_1,0x11,*(uint **)(param_3 + 6));
      *(longlong **)(param_1 + 0x128) = plVar5;
      if ((int)local_a8 != 0) {
        return;
      }
      if (1 < uVar17) {
        uVar23 = (ulonglong)(uVar17 - 1);
        pplVar13 = local_b8 + uVar23 * 4;
        while( true ) {
          d_print_mod(param_1,0x11,(uint *)pplVar13[1]);
          pplVar13 = pplVar13 + -4;
          if ((int)uVar23 == 1) break;
          uVar23 = (ulonglong)((int)uVar23 - 1);
        }
      }
    }
    d_print_array_type((undefined2 *)param_1,0x11,(longlong)param_3,*(longlong **)(param_1 + 0x128))
    ;
    break;
  case 0x2c:
  case 0x2e:
    local_b8[0] = *(longlong **)(param_1 + 0x128);
    local_a8._0_4_ = 0;
    *(longlong ***)(param_1 + 0x128) = local_b8;
    local_a0[0] = *(longlong **)(param_1 + 0x120);
    local_b8[1] = (longlong *)param_3;
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 6));
    if ((int)local_a8 == 0) {
      d_print_mod(param_1,0x11,param_3);
    }
    *(longlong **)(param_1 + 0x128) = local_b8[0];
    break;
  default:
    goto switchD_1400082f6_caseD_2d;
  case 0x2f:
  case 0x30:
    if (*(uint **)(param_3 + 4) != (uint *)0x0) {
      d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    }
    if (*(longlong *)(param_3 + 6) != 0) {
      uVar23 = *(ulonglong *)(param_1 + 0x100);
      if (0xfd < uVar23) {
        param_1[uVar23] = 0;
        (**(code **)(param_1 + 0x110))(param_1,uVar23,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = 0;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
      }
      d_append_string((char *)param_1,", ");
      iVar24 = *(int *)(param_1 + 0x140);
      lVar28 = *(longlong *)(param_1 + 0x100);
      d_print_comp(param_1,0x11,*(uint **)(param_3 + 6));
      if ((*(int *)(param_1 + 0x140) == iVar24) && (*(longlong *)(param_1 + 0x100) == lVar28)) {
        *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + -2;
      }
    }
    break;
  case 0x31:
    pcVar7 = "template parameter object for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x14002463e) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x14002463e);
    goto switchD_1400082f6_caseD_29;
  case 0x32:
    puVar15 = *(uint **)(param_3 + 6);
    if (*(uint **)(param_3 + 4) != (uint *)0x0) {
      d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    }
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x7b;
    param_1[0x108] = 0x7b;
    d_print_comp(param_1,0x11,puVar15);
    lVar28 = *(longlong *)(param_1 + 0x100);
    goto joined_r0x00014000b88e;
  case 0x33:
    lVar22 = *(longlong *)(param_3 + 4);
    pcVar7 = "operator";
    iVar24 = *(int *)(lVar22 + 0x10);
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      lVar21 = lVar28;
      if (lVar28 == 0xff) {
        pcVar7 = pcVar7 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        *param_1 = bVar26;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400247bc) break;
        bVar26 = *pcVar7;
        lVar21 = 1;
      }
      lVar28 = lVar21 + 1;
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28;
      param_1[lVar21] = bVar26;
      param_1[0x108] = bVar26;
    } while ((byte *)pcVar7 != (byte *)0x1400247bc);
    pbVar6 = *(byte **)(lVar22 + 8);
    if ((byte)(*pbVar6 + 0x9f) < 0x1a) {
      d_append_char((longlong)param_1,0x20);
      pbVar6 = *(byte **)(lVar22 + 8);
    }
    lVar28 = (longlong)iVar24;
    if (pbVar6[lVar28 + -1] == 0x20) {
      lVar28 = lVar28 + -1;
    }
    if (lVar28 != 0) {
      lVar22 = *(longlong *)(param_1 + 0x100);
      pbVar29 = pbVar6 + lVar28;
      do {
        bVar26 = *pbVar6;
        lVar28 = lVar22;
        if (lVar22 == 0xff) {
          pbVar6 = pbVar6 + 1;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          param_1[0x100] = 1;
          param_1[0x101] = 0;
          param_1[0x102] = 0;
          param_1[0x103] = 0;
          param_1[0x104] = 0;
          param_1[0x105] = 0;
          param_1[0x106] = 0;
          param_1[0x107] = 0;
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          *param_1 = bVar26;
          param_1[0x108] = bVar26;
          if (pbVar29 == pbVar6) {
            return;
          }
          bVar26 = *pbVar6;
          lVar28 = 1;
        }
        lVar22 = lVar28 + 1;
        pbVar6 = pbVar6 + 1;
        *(longlong *)(param_1 + 0x100) = lVar22;
        param_1[lVar28] = bVar26;
        param_1[0x108] = bVar26;
      } while (pbVar29 != pbVar6);
    }
    break;
  case 0x34:
    pcVar7 = "operator ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400247c6) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x1400247c6);
    goto switchD_1400082f6_caseD_7;
  case 0x36:
    pcVar7 = "operator ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400247c6) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x1400247c6);
    if (*(uint **)(param_1 + 0x170) != (uint *)0x0) {
      local_b8[0] = *(longlong **)(param_1 + 0x120);
      *(longlong ***)(param_1 + 0x120) = local_b8;
      local_b8[1] = (longlong *)*(uint **)(param_1 + 0x170);
    }
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    if (*(longlong *)(param_1 + 0x170) != 0) {
      *(longlong **)(param_1 + 0x120) = local_b8[0];
    }
    break;
  case 0x37:
    piVar9 = *(int **)(param_3 + 4);
LAB_1400088a6:
    d_print_expr_op(param_1,0x11,piVar9);
    return;
  case 0x38:
    piVar9 = *(int **)(param_3 + 4);
    puVar15 = *(uint **)(param_3 + 6);
    if (*piVar9 == 0x33) {
      pbVar6 = (byte *)**(undefined8 **)(piVar9 + 4);
      uVar17 = *pbVar6 - 0x61;
      if ((uVar17 == 0) && (uVar17 = pbVar6[1] - 100, uVar17 == 0)) {
        uVar17 = (uint)pbVar6[2];
      }
      if ((uVar17 == 0) && (*puVar15 == 3)) {
        if ((**(uint **)(puVar15 + 4) == 1) && (**(int **)(puVar15 + 6) == 0x2a)) {
          puVar15 = *(uint **)(puVar15 + 4);
        }
      }
      else if (*puVar15 == 0x3a) {
        d_print_subexpr(param_1,0x11,*(uint **)(puVar15 + 4));
        goto LAB_1400088a6;
      }
      if (*pbVar6 == 0x73) {
        if ((pbVar6[1] == 0x5a) && (pbVar6[2] == 0)) {
          piVar9 = d_find_pack((longlong)param_1,puVar15);
          uVar23 = 0;
          for (; ((piVar9 != (int *)0x0 && (*piVar9 == 0x30)) && (*(longlong *)(piVar9 + 4) != 0));
              piVar9 = *(int **)(piVar9 + 6)) {
            uVar23 = (ulonglong)((int)uVar23 + 1);
          }
LAB_14000c1b1:
          d_append_num((char *)param_1,(uint)uVar23,uVar23,pbVar6);
          return;
        }
        if ((pbVar6[1] == 0x50) && (uVar23 = 0, pbVar6[2] == 0)) {
          do {
            if ((*puVar15 != 0x30) || (piVar9 = *(int **)(puVar15 + 4), piVar9 == (int *)0x0))
            break;
            if (*piVar9 == 0x4e) {
              piVar9 = d_find_pack((longlong)param_1,*(uint **)(piVar9 + 4));
              iVar24 = 0;
              for (; ((piVar9 != (int *)0x0 && (*piVar9 == 0x30)) &&
                     (*(longlong *)(piVar9 + 4) != 0)); piVar9 = *(int **)(piVar9 + 6)) {
                iVar24 = iVar24 + 1;
              }
              uVar17 = (int)uVar23 + iVar24;
            }
            else {
              uVar17 = (int)uVar23 + 1;
            }
            uVar23 = (ulonglong)uVar17;
            puVar15 = *(uint **)(puVar15 + 6);
          } while (puVar15 != (uint *)0x0);
          goto LAB_14000c1b1;
        }
      }
      d_print_expr_op(param_1,0x11,piVar9);
      bVar26 = *pbVar6;
      if (((bVar26 == 0x67) && (pbVar6[1] == 0x73)) && (pbVar6[2] == 0)) goto LAB_140008374;
      if ((((bVar26 == 0x73) && (pbVar6[1] == 0x74)) && (pbVar6[2] == 0)) ||
         (((bVar26 == 0x6e && (pbVar6[1] == 0x78)) && (pbVar6[2] == 0)))) {
        d_append_char((longlong)param_1,0x28);
        d_print_comp(param_1,0x11,puVar15);
        uVar19 = 0x29;
        goto LAB_1400085eb;
      }
    }
    else if (*piVar9 == 0x35) {
      d_append_char((longlong)param_1,0x28);
      d_print_comp(param_1,0x11,*(uint **)(piVar9 + 4));
      d_append_char((longlong)param_1,0x29);
    }
    else {
      d_print_expr_op(param_1,0x11,piVar9);
    }
LAB_1400097e5:
    d_print_subexpr(param_1,0x11,puVar15);
    return;
  case 0x39:
    if (**(int **)(param_3 + 6) == 0x3a) {
      pcVar7 = (char *)**(undefined8 **)(*(int **)(param_3 + 4) + 4);
      if ((pcVar7[1] == 'c') &&
         ((cVar1 = *pcVar7, (byte)(cVar1 + 0x8eU) < 2 || ((byte)(cVar1 + 0x9dU) < 2)))) {
        d_print_expr_op(param_1,0x11,*(int **)(param_3 + 4));
        d_append_char((longlong)param_1,0x3c);
        d_print_comp(param_1,0x11,*(uint **)(*(longlong *)(param_3 + 6) + 0x10));
        d_append_string((char *)param_1,">(");
        d_print_comp(param_1,0x11,*(uint **)(*(longlong *)(param_3 + 6) + 0x18));
        uVar19 = 0x29;
      }
      else {
        uVar8 = d_maybe_print_fold_expression(param_1,0x11,(longlong)param_3);
        if ((int)uVar8 != 0) {
          return;
        }
        uVar8 = d_maybe_print_designated_init(param_1,0x11,param_3);
        if ((int)uVar8 != 0) {
          return;
        }
        piVar9 = *(int **)(param_3 + 4);
        if (((*piVar9 == 0x33) && (*(int *)(*(longlong *)(piVar9 + 4) + 0x10) == 1)) &&
           (**(char **)(*(longlong *)(piVar9 + 4) + 8) == '>')) {
          d_append_char((longlong)param_1,0x28);
          piVar9 = *(int **)(param_3 + 4);
        }
        iVar24 = strcmp((char *)**(undefined8 **)(piVar9 + 4),"cl");
        puVar15 = *(uint **)(*(longlong *)(param_3 + 6) + 0x10);
        if ((iVar24 == 0) && (*puVar15 == 3)) {
          if (**(int **)(puVar15 + 6) != 0x2a) {
            param_1[0x130] = 1;
            param_1[0x131] = 0;
            param_1[0x132] = 0;
            param_1[0x133] = 0;
          }
          d_print_subexpr(param_1,0x11,*(uint **)(puVar15 + 4));
        }
        else {
          d_print_subexpr(param_1,0x11,puVar15);
        }
        piVar9 = *(int **)(param_3 + 4);
        pcVar7 = (char *)**(undefined8 **)(piVar9 + 4);
        iVar24 = strcmp(pcVar7,"ix");
        if (iVar24 == 0) {
          d_append_char((longlong)param_1,0x5b);
          d_print_comp(param_1,0x11,*(uint **)(*(longlong *)(param_3 + 6) + 0x18));
          d_append_char((longlong)param_1,0x5d);
        }
        else {
          iVar24 = strcmp(pcVar7,"cl");
          if (iVar24 != 0) {
            d_print_expr_op(param_1,0x11,piVar9);
          }
          d_print_subexpr(param_1,0x11,*(uint **)(*(longlong *)(param_3 + 6) + 0x18));
        }
        if (**(int **)(param_3 + 4) != 0x33) {
          return;
        }
        lVar28 = *(longlong *)(*(int **)(param_3 + 4) + 4);
        if (*(int *)(lVar28 + 0x10) != 1) {
          return;
        }
        uVar19 = 0x29;
        if (**(char **)(lVar28 + 8) != '>') {
          return;
        }
      }
      goto LAB_1400085eb;
    }
    goto switchD_1400082f6_caseD_2d;
  case 0x3b:
    if ((**(int **)(param_3 + 6) == 0x3c) && (**(int **)(*(int **)(param_3 + 6) + 6) == 0x3d)) {
      uVar8 = d_maybe_print_fold_expression(param_1,0x11,(longlong)param_3);
      if ((int)uVar8 != 0) {
        return;
      }
      uVar8 = d_maybe_print_designated_init(param_1,0x11,param_3);
      if ((int)uVar8 != 0) {
        return;
      }
      piVar9 = *(int **)(param_3 + 4);
      puVar14 = *(uint **)(*(longlong *)(param_3 + 6) + 0x10);
      lVar28 = *(longlong *)(*(longlong *)(param_3 + 6) + 0x18);
      puVar2 = *(uint **)(lVar28 + 0x10);
      puVar15 = *(uint **)(lVar28 + 0x18);
      iVar24 = strcmp((char *)**(undefined8 **)(piVar9 + 4),"qu");
      if (iVar24 == 0) {
        d_print_subexpr(param_1,0x11,puVar14);
        d_print_expr_op(param_1,0x11,piVar9);
        d_print_subexpr(param_1,0x11,puVar2);
        d_append_string((char *)param_1," : ");
      }
      else {
        d_append_string((char *)param_1,"new ");
        if (*(longlong *)(puVar14 + 4) != 0) {
          d_print_subexpr(param_1,0x11,puVar14);
          d_append_char((longlong)param_1,0x20);
        }
        d_print_comp(param_1,0x11,puVar2);
        if (puVar15 == (uint *)0x0) {
          return;
        }
      }
      goto LAB_1400097e5;
    }
switchD_1400082f6_caseD_2d:
    param_1[0x130] = 1;
    param_1[0x131] = 0;
    param_1[0x132] = 0;
    param_1[0x133] = 0;
    break;
  case 0x3e:
  case 0x3f:
    if (**(int **)(param_3 + 4) != 0x28) {
      uVar20 = 0;
LAB_140008553:
      lVar28 = *(longlong *)(param_1 + 0x100);
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        lVar22 = 1;
        lVar28 = 0;
      }
      else {
        lVar22 = lVar28 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar22;
      param_1[lVar28] = 0x28;
      param_1[0x108] = 0x28;
      d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
      lVar28 = *(longlong *)(param_1 + 0x100);
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        lVar22 = 1;
        lVar28 = 0;
      }
      else {
        lVar22 = lVar28 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar22;
      param_1[lVar28] = 0x29;
      param_1[0x108] = 0x29;
      if (*param_3 == 0x3f) {
        d_append_char((longlong)param_1,0x2d);
      }
      if (uVar20 == 8) {
        d_append_char((longlong)param_1,0x5b);
        d_print_comp(param_1,0x11,*(uint **)(param_3 + 6));
        uVar19 = 0x5d;
        goto LAB_1400085eb;
      }
      goto switchD_1400082f6_caseD_7;
    }
    uVar20 = *(uint *)(*(longlong *)(*(int **)(param_3 + 4) + 4) + 0x1c);
    if (6 < uVar20) {
      if ((((uVar20 == 7) && (piVar9 = *(int **)(param_3 + 6), *piVar9 == 0)) && (piVar9[6] == 1))
         && (uVar17 == 0x3e)) {
        if (**(char **)(piVar9 + 4) == '0') {
          pcVar7 = "false";
          goto LAB_140008c75;
        }
        if (**(char **)(piVar9 + 4) == '1') {
          pcVar7 = "true";
          goto LAB_140008c75;
        }
      }
      goto LAB_140008553;
    }
    if ((uVar20 == 0) || (puVar15 = *(uint **)(param_3 + 6), *puVar15 != 0)) goto LAB_140008553;
    if (uVar17 == 0x3f) {
      d_append_char((longlong)param_1,0x2d);
      puVar15 = *(uint **)(param_3 + 6);
    }
    d_print_comp(param_1,0x11,puVar15);
    switch(uVar20) {
    case 2:
      uVar19 = 0x75;
      goto LAB_1400085eb;
    case 3:
      uVar19 = 0x6c;
LAB_1400085eb:
      d_append_char((longlong)param_1,uVar19);
      return;
    case 4:
      pcVar7 = "ul";
      break;
    case 5:
      pcVar7 = "ll";
      break;
    case 6:
      pcVar7 = "ull";
      break;
    default:
      goto switchD_14000cedd_default;
    }
    goto LAB_140008c75;
  case 0x40:
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x28;
    param_1[0x108] = 0x28;
    puVar15 = *(uint **)(param_3 + 6);
    goto LAB_14000a820;
  case 0x41:
    pcVar7 = "java resource ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400247ff) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x1400247ff);
    goto switchD_1400082f6_caseD_29;
  case 0x42:
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    goto switchD_1400082f6_caseD_7;
  case 0x43:
    lVar28 = *(longlong *)(param_1 + 0x100);
    uVar17 = param_3[4];
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = (byte)uVar17;
    param_1[0x108] = (byte)uVar17;
    break;
  case 0x44:
    _text((longlong)local_b8,"%d",(double)(ulonglong)param_3[4],0);
    sVar12 = strlen((char *)local_b8);
    if (sVar12 != 0) {
      pplVar13 = local_b8;
      lVar28 = *(longlong *)(param_1 + 0x100);
      pplVar30 = (longlong **)((longlong)pplVar13 + sVar12);
      do {
        bVar26 = *(byte *)pplVar13;
        lVar22 = lVar28;
        if (lVar28 == 0xff) {
          pplVar13 = (longlong **)((longlong)pplVar13 + 1);
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          param_1[0x100] = 1;
          param_1[0x101] = 0;
          param_1[0x102] = 0;
          param_1[0x103] = 0;
          param_1[0x104] = 0;
          param_1[0x105] = 0;
          param_1[0x106] = 0;
          param_1[0x107] = 0;
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          *param_1 = bVar26;
          param_1[0x108] = bVar26;
          if (pplVar13 == pplVar30) {
            return;
          }
          bVar26 = *(byte *)pplVar13;
          lVar22 = 1;
        }
        lVar28 = lVar22 + 1;
        pplVar13 = (longlong **)((longlong)pplVar13 + 1);
        *(longlong *)(param_1 + 0x100) = lVar28;
        param_1[lVar22] = bVar26;
        param_1[0x108] = bVar26;
      } while (pplVar13 != pplVar30);
    }
    break;
  case 0x45:
    pcVar7 = "decltype (";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x14002480a) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x14002480a);
    puVar15 = *(uint **)(param_3 + 4);
LAB_14000a820:
    d_print_comp(param_1,0x11,puVar15);
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x29;
    param_1[0x108] = 0x29;
    break;
  case 0x46:
    pcVar7 = "global constructors keyed to ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024838) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024838);
    goto switchD_1400082f6_caseD_29;
  case 0x47:
    pcVar7 = "global destructors keyed to ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024855) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024855);
    goto switchD_1400082f6_caseD_29;
  case 0x48:
    pbVar6 = &DAT_140024856;
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pbVar6;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pbVar6 = pbVar6 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if (pbVar6 == &DAT_14002485d) {
          local_c8 = *(longlong **)(param_1 + 0x120);
          puVar15 = *(uint **)(param_3 + 4);
          local_c0 = (uint *)0x0;
          uVar33 = *(undefined4 *)(param_1 + 0x138);
          param_1[0x138] = 0;
          param_1[0x139] = 0;
          param_1[0x13a] = 0;
          param_1[0x13b] = 0;
          *(longlong ***)(param_1 + 0x120) = &local_c8;
          if ((puVar15 != (uint *)0x0) && (*puVar15 == 0x5a)) goto LAB_14000cc7e;
          param_1[0x138] = 1;
          param_1[0x139] = 0;
          param_1[0x13a] = 0;
          param_1[0x13b] = 0;
          lVar22 = 1;
          goto LAB_14000bb8f;
        }
        bVar26 = *pbVar6;
        lVar28 = 1;
      }
      lVar22 = lVar28 + 1;
      pbVar6 = pbVar6 + 1;
      *(longlong *)(param_1 + 0x100) = lVar22;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar22;
    } while (pbVar6 != &DAT_14002485d);
    local_c8 = *(longlong **)(param_1 + 0x120);
    puVar15 = *(uint **)(param_3 + 4);
    local_c0 = (uint *)0x0;
    uVar33 = *(undefined4 *)(param_1 + 0x138);
    param_1[0x138] = 0;
    param_1[0x139] = 0;
    param_1[0x13a] = 0;
    param_1[0x13b] = 0;
    *(longlong ***)(param_1 + 0x120) = &local_c8;
    if ((puVar15 == (uint *)0x0) || (*puVar15 != 0x5a)) {
      iVar24 = 1;
    }
    else {
LAB_14000cc7e:
      uVar23 = (ulonglong)bVar26;
      local_c0 = puVar15;
      d_append_char((longlong)param_1,0x3c);
      for (puVar14 = *(uint **)(puVar15 + 4); puVar14 != (uint *)0x0;
          puVar14 = *(uint **)(puVar14 + 6)) {
        iVar24 = *(int *)(param_1 + 0x138);
        *(int *)(param_1 + 0x138) = iVar24 + 1;
        if (iVar24 != 0) {
          d_append_string((char *)param_1,", ");
        }
        d_print_comp(param_1,0x11,puVar14);
        lVar28 = *(longlong *)(param_1 + 0x100);
        if (lVar28 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          lVar28 = 0;
          lVar22 = 1;
        }
        else {
          lVar22 = lVar28 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar22;
        param_1[lVar28] = 0x20;
        param_1[0x108] = 0x20;
        uVar17 = *puVar14;
        if (uVar17 == 0x5e) {
          puVar14 = *(uint **)(puVar14 + 4);
          uVar17 = *puVar14;
        }
        d_print_lambda_parm_name((char *)param_1,uVar17,*(int *)(param_1 + 0x138) - 1,uVar23);
      }
      d_append_char((longlong)param_1,0x3e);
      puVar15 = *(uint **)(puVar15 + 6);
      lVar22 = *(longlong *)(param_1 + 0x100);
      iVar24 = *(int *)(param_1 + 0x138) + 1;
    }
    *(int *)(param_1 + 0x138) = iVar24;
    if (lVar22 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar28 = 1;
      lVar22 = 0;
    }
    else {
LAB_14000bb8f:
      lVar28 = lVar22 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar28;
    param_1[lVar22] = 0x28;
    param_1[0x108] = 0x28;
    d_print_comp(param_1,0x11,puVar15);
    *(undefined4 *)(param_1 + 0x138) = uVar33;
    *(longlong **)(param_1 + 0x120) = local_c8;
    pbVar6 = &DAT_14002485e;
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pbVar6;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pbVar6 = pbVar6 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if (pbVar6 == &DAT_140024860) break;
        bVar26 = *pbVar6;
        lVar28 = 1;
      }
      pbVar6 = pbVar6 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while (pbVar6 != &DAT_140024860);
    _text((longlong)local_b8,"%d",(double)(ulonglong)(param_3[6] + 1),(ulonglong)bVar26);
    sVar12 = strlen((char *)local_b8);
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (sVar12 != 0) {
      pplVar13 = local_b8;
      pplVar30 = (longlong **)((longlong)pplVar13 + sVar12);
      do {
        bVar26 = *(byte *)pplVar13;
        lVar22 = lVar28;
        if (lVar28 == 0xff) {
          pplVar13 = (longlong **)((longlong)pplVar13 + 1);
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          *param_1 = bVar26;
          if (pplVar13 == pplVar30) goto LAB_14000c115;
          bVar26 = *(byte *)pplVar13;
          lVar22 = 1;
        }
        lVar28 = lVar22 + 1;
        pplVar13 = (longlong **)((longlong)pplVar13 + 1);
        *(longlong *)(param_1 + 0x100) = lVar28;
        param_1[lVar22] = bVar26;
        param_1[0x108] = bVar26;
      } while (pplVar30 != pplVar13);
    }
    goto joined_r0x00014000b88e;
  case 0x4a:
    pcVar7 = "{unnamed type#";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x14002486f) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x14002486f);
    _text((longlong)local_b8,"%d",(double)(ulonglong)(param_3[4] + 1),(ulonglong)bVar26);
    sVar12 = strlen((char *)local_b8);
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (sVar12 != 0) {
      pplVar13 = local_b8;
      pplVar30 = (longlong **)((longlong)pplVar13 + sVar12);
      do {
        bVar26 = *(byte *)pplVar13;
        lVar22 = lVar28;
        if (lVar28 == 0xff) {
          pplVar13 = (longlong **)((longlong)pplVar13 + 1);
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          *param_1 = bVar26;
          if (pplVar30 == pplVar13) goto LAB_14000c115;
          bVar26 = *(byte *)pplVar13;
          lVar22 = 1;
        }
        lVar28 = lVar22 + 1;
        pplVar13 = (longlong **)((longlong)pplVar13 + 1);
        *(longlong *)(param_1 + 0x100) = lVar28;
        param_1[lVar22] = bVar26;
        param_1[0x108] = bVar26;
      } while (pplVar13 != pplVar30);
    }
joined_r0x00014000b88e:
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
LAB_140008afd:
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x4b:
    pbVar6 = &DAT_140024870;
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pbVar6;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pbVar6 = pbVar6 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if (pbVar6 == &DAT_140024876) break;
        bVar26 = *pbVar6;
        lVar28 = 1;
      }
      pbVar6 = pbVar6 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while (pbVar6 != &DAT_140024876);
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x7b;
    param_1[0x108] = 0x7b;
    pbVar6 = &DAT_140024877;
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 6));
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pbVar6;
      lVar22 = lVar28;
      if (lVar28 == 0xff) {
        pbVar6 = pbVar6 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        *param_1 = bVar26;
        param_1[0x108] = bVar26;
        if (pbVar6 == &DAT_140024879) {
          return;
        }
        bVar26 = *pbVar6;
        lVar22 = 1;
      }
      lVar28 = lVar22 + 1;
      pbVar6 = pbVar6 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28;
      param_1[lVar22] = bVar26;
      param_1[0x108] = bVar26;
    } while (pbVar6 != &DAT_140024879);
    break;
  case 0x4c:
    pcVar7 = "transaction clone for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024798) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024798);
    goto switchD_1400082f6_caseD_29;
  case 0x4d:
    pcVar7 = "non-transaction clone for ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400247b3) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x1400247b3);
    goto switchD_1400082f6_caseD_29;
  case 0x4e:
    if (*(int *)(param_1 + 0x138) == 0) {
      iVar24 = 0;
      piVar9 = d_find_pack((longlong)param_1,*(uint **)(param_3 + 4));
      if (piVar9 != (int *)0x0) {
        while ((*piVar9 == 0x30 && (*(longlong *)(piVar9 + 4) != 0))) {
          piVar9 = *(int **)(piVar9 + 6);
          iVar24 = iVar24 + 1;
          if (piVar9 == (int *)0x0) {
LAB_140009ac0:
            puVar15 = *(uint **)(param_3 + 4);
            iVar27 = 0;
            do {
              *(int *)(param_1 + 0x13c) = iVar27;
              d_print_comp(param_1,0x11,puVar15);
              iVar27 = iVar27 + 1;
              if (iVar24 == iVar27) {
                return;
              }
              pbVar6 = &DAT_1400245ff;
              lVar28 = *(longlong *)(param_1 + 0x100);
              do {
                bVar26 = *pbVar6;
                lVar22 = lVar28;
                if (lVar28 == 0xff) {
                  pbVar6 = pbVar6 + 1;
                  param_1[0xff] = 0;
                  (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                  param_1[0x100] = 1;
                  param_1[0x101] = 0;
                  param_1[0x102] = 0;
                  param_1[0x103] = 0;
                  param_1[0x104] = 0;
                  param_1[0x105] = 0;
                  param_1[0x106] = 0;
                  param_1[0x107] = 0;
                  *param_1 = bVar26;
                  param_1[0x108] = bVar26;
                  if (pbVar6 == &DAT_140024601) break;
                  bVar26 = *pbVar6;
                  lVar22 = 1;
                }
                lVar28 = lVar22 + 1;
                pbVar6 = pbVar6 + 1;
                *(longlong *)(param_1 + 0x100) = lVar28;
                param_1[lVar22] = bVar26;
                param_1[0x108] = bVar26;
              } while (pbVar6 != &DAT_140024601);
            } while( true );
          }
        }
        if (iVar24 == 0) {
          return;
        }
        goto LAB_140009ac0;
      }
    }
    d_print_subexpr(param_1,0x11,*(uint **)(param_3 + 4));
    pcVar7 = "...";
LAB_140008c75:
    d_append_string((char *)param_1,pcVar7);
    return;
  case 0x4f:
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    pbVar6 = &DAT_1400245f9;
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pbVar6;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pbVar6 = pbVar6 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if (pbVar6 == &DAT_1400245fe) break;
        bVar26 = *pbVar6;
        lVar28 = 1;
      }
      pbVar6 = pbVar6 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while (pbVar6 != &DAT_1400245fe);
    goto LAB_14000b3a0;
  case 0x51:
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    pcVar7 = " [clone ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024882) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024882);
LAB_14000b3a0:
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 6));
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x5d;
    param_1[0x108] = 0x5d;
    break;
  case 0x52:
    pcVar7 = "[friend]";
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      lVar22 = lVar28;
      if (lVar28 == 0xff) {
        pcVar7 = pcVar7 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        *param_1 = bVar26;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x14002488b) {
          return;
        }
        bVar26 = *pcVar7;
        lVar22 = 1;
      }
      lVar28 = lVar22 + 1;
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28;
      param_1[lVar22] = bVar26;
      param_1[0x108] = bVar26;
    } while ((byte *)pcVar7 != (byte *)0x14002488b);
    break;
  case 0x55:
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x5b;
    param_1[0x108] = 0x5b;
LAB_140008b50:
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    param_3 = *(uint **)(param_3 + 6);
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (param_3 != (uint *)0x0) {
      pbVar6 = &DAT_1400245ff;
      do {
        bVar26 = *pbVar6;
        if (lVar28 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          pbVar6 = pbVar6 + 1;
          *param_1 = bVar26;
          param_1[0x100] = 1;
          param_1[0x101] = 0;
          param_1[0x102] = 0;
          param_1[0x103] = 0;
          param_1[0x104] = 0;
          param_1[0x105] = 0;
          param_1[0x106] = 0;
          param_1[0x107] = 0;
          param_1[0x108] = bVar26;
          if (pbVar6 == &DAT_140024601) break;
          bVar26 = *pbVar6;
          lVar28 = 1;
        }
        pbVar6 = pbVar6 + 1;
        *(longlong *)(param_1 + 0x100) = lVar28 + 1;
        param_1[lVar28] = bVar26;
        param_1[0x108] = bVar26;
        lVar28 = lVar28 + 1;
      } while (pbVar6 != &DAT_140024601);
      goto LAB_140008b50;
    }
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x5d;
    param_1[0x108] = 0x5d;
    break;
  case 0x56:
  case 0x57:
    if (*(uint **)(param_3 + 4) == (uint *)0x0) {
      if (uVar17 == 0x57) goto LAB_14000c0ac;
    }
    else {
      d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
      if (*param_3 == 0x57) {
LAB_14000c0ac:
        bVar26 = 0x3a;
      }
      else {
        if (*(longlong *)(param_3 + 4) == 0) goto switchD_1400082f6_caseD_7;
        bVar26 = 0x2e;
      }
      lVar28 = *(longlong *)(param_1 + 0x100);
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        lVar28 = 0;
        lVar22 = 1;
      }
      else {
        lVar22 = lVar28 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar22;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
    }
    goto switchD_1400082f6_caseD_7;
  case 0x58:
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x40;
    param_1[0x108] = 0x40;
    goto switchD_1400082f6_caseD_7;
  case 0x59:
    pcVar7 = "initializer for module ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024656) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x140024656);
switchD_1400082f6_caseD_29:
    puVar15 = *(uint **)(param_3 + 4);
LAB_140008374:
    d_print_comp(param_1,0x11,puVar15);
    return;
  case 0x5a:
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x3c;
    param_1[0x108] = 0x3c;
    puVar15 = *(uint **)(param_3 + 4);
    if (puVar15 != (uint *)0x0) {
      iVar24 = 0;
      do {
        if (iVar24 != 0) {
          pbVar6 = &DAT_1400245ff;
          lVar28 = *(longlong *)(param_1 + 0x100);
          do {
            bVar26 = *pbVar6;
            lVar22 = lVar28;
            if (lVar28 == 0xff) {
              pbVar6 = pbVar6 + 1;
              param_1[0xff] = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
              param_1[0x100] = 1;
              param_1[0x101] = 0;
              param_1[0x102] = 0;
              param_1[0x103] = 0;
              param_1[0x104] = 0;
              param_1[0x105] = 0;
              param_1[0x106] = 0;
              param_1[0x107] = 0;
              *param_1 = bVar26;
              param_1[0x108] = bVar26;
              if (pbVar6 == &DAT_140024601) break;
              bVar26 = *pbVar6;
              lVar22 = 1;
            }
            lVar28 = lVar22 + 1;
            pbVar6 = pbVar6 + 1;
            *(longlong *)(param_1 + 0x100) = lVar28;
            param_1[lVar22] = bVar26;
            param_1[0x108] = bVar26;
          } while (pbVar6 != &DAT_140024601);
        }
        d_print_comp(param_1,0x11,puVar15);
        iVar24 = iVar24 + 1;
        puVar15 = *(uint **)(puVar15 + 6);
      } while (puVar15 != (uint *)0x0);
    }
    lVar28 = *(longlong *)(param_1 + 0x100);
    if (lVar28 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar22 = 1;
      lVar28 = 0;
    }
    else {
      lVar22 = lVar28 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar22;
    param_1[lVar28] = 0x3e;
    param_1[0x108] = 0x3e;
    break;
  case 0x5b:
    pcVar7 = "typename";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      lVar22 = lVar28;
      if (lVar28 == 0xff) {
        pcVar7 = pcVar7 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        *param_1 = bVar26;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x140024894) {
          return;
        }
        bVar26 = *pcVar7;
        lVar22 = 1;
      }
      lVar28 = lVar22 + 1;
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28;
      param_1[lVar22] = bVar26;
      param_1[0x108] = bVar26;
    } while ((byte *)pcVar7 != (byte *)0x140024894);
    break;
  case 0x5d:
    pcVar7 = "template";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x14002489d) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x14002489d);
    pcVar7 = " class";
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      lVar22 = lVar28;
      if (lVar28 == 0xff) {
        pcVar7 = pcVar7 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        *param_1 = bVar26;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400248a4) {
          return;
        }
        bVar26 = *pcVar7;
        lVar22 = 1;
      }
      lVar28 = lVar22 + 1;
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28;
      param_1[lVar22] = bVar26;
      param_1[0x108] = bVar26;
    } while ((byte *)pcVar7 != (byte *)0x1400248a4);
    break;
  case 0x5e:
    pbVar6 = &DAT_14002480b;
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pbVar6;
      lVar22 = lVar28;
      if (lVar28 == 0xff) {
        pbVar6 = pbVar6 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        *param_1 = bVar26;
        param_1[0x108] = bVar26;
        if (pbVar6 == &DAT_14002480e) {
          return;
        }
        bVar26 = *pbVar6;
        lVar22 = 1;
      }
      lVar28 = lVar22 + 1;
      pbVar6 = pbVar6 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28;
      param_1[lVar22] = bVar26;
      param_1[0x108] = bVar26;
    } while (pbVar6 != &DAT_14002480e);
    break;
  case 0x5f:
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    pcVar7 = " requires ";
    lVar28 = *(longlong *)(param_1 + 0x100);
    do {
      bVar26 = *pcVar7;
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar7 = pcVar7 + 1;
        *param_1 = bVar26;
        param_1[0x100] = 1;
        param_1[0x101] = 0;
        param_1[0x102] = 0;
        param_1[0x103] = 0;
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        param_1[0x106] = 0;
        param_1[0x107] = 0;
        param_1[0x108] = bVar26;
        if ((byte *)pcVar7 == (byte *)0x1400248af) break;
        bVar26 = *pcVar7;
        lVar28 = 1;
      }
      pcVar7 = pcVar7 + 1;
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
      lVar28 = lVar28 + 1;
    } while ((byte *)pcVar7 != (byte *)0x1400248af);
switchD_1400082f6_caseD_7:
    puVar15 = *(uint **)(param_3 + 6);
    goto LAB_140008374;
  case 0x60:
    lVar28 = (longlong)*(int *)(*(undefined8 **)(param_3 + 4) + 1);
    uVar23 = 0;
    if (lVar28 != 0) {
      pbVar6 = (byte *)**(undefined8 **)(param_3 + 4);
      pbVar29 = pbVar6 + lVar28;
      lVar28 = *(longlong *)(param_1 + 0x100);
      do {
        bVar26 = *pbVar6;
        if (lVar28 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          uVar23 = (ulonglong)bVar26;
          param_1[0x100] = 1;
          param_1[0x101] = 0;
          param_1[0x102] = 0;
          param_1[0x103] = 0;
          param_1[0x104] = 0;
          param_1[0x105] = 0;
          param_1[0x106] = 0;
          param_1[0x107] = 0;
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          pbVar6 = pbVar6 + 1;
          *param_1 = bVar26;
          param_1[0x108] = bVar26;
          if (pbVar29 == pbVar6) break;
          bVar26 = *pbVar6;
          lVar28 = 1;
        }
        uVar23 = (ulonglong)bVar26;
        pbVar6 = pbVar6 + 1;
        *(longlong *)(param_1 + 0x100) = lVar28 + 1;
        param_1[lVar28] = bVar26;
        param_1[0x108] = bVar26;
        lVar28 = lVar28 + 1;
      } while (pbVar29 != pbVar6);
    }
    _text((longlong)local_b8,"%d",(double)(ulonglong)(uint)(int)(short)param_3[6],uVar23);
    sVar12 = strlen((char *)local_b8);
    if (sVar12 != 0) {
      pplVar13 = local_b8;
      pplVar30 = (longlong **)((longlong)pplVar13 + sVar12);
      lVar28 = *(longlong *)(param_1 + 0x100);
      do {
        bVar26 = *(byte *)pplVar13;
        if (lVar28 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          param_1[0x100] = 1;
          param_1[0x101] = 0;
          param_1[0x102] = 0;
          param_1[0x103] = 0;
          param_1[0x104] = 0;
          param_1[0x105] = 0;
          param_1[0x106] = 0;
          param_1[0x107] = 0;
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          pplVar13 = (longlong **)((longlong)pplVar13 + 1);
          *param_1 = bVar26;
          param_1[0x108] = bVar26;
          if (pplVar30 == pplVar13) break;
          bVar26 = *(byte *)pplVar13;
          lVar28 = 1;
        }
        pplVar13 = (longlong **)((longlong)pplVar13 + 1);
        *(longlong *)(param_1 + 0x100) = lVar28 + 1;
        param_1[lVar28] = bVar26;
        param_1[0x108] = bVar26;
        lVar28 = lVar28 + 1;
      } while (pplVar13 != pplVar30);
    }
    bVar26 = *(byte *)((longlong)param_3 + 0x1a);
    if (bVar26 != 0) {
      lVar28 = *(longlong *)(param_1 + 0x100);
      if (lVar28 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        lVar28 = 0;
      }
      *(longlong *)(param_1 + 0x100) = lVar28 + 1;
      param_1[lVar28] = bVar26;
      param_1[0x108] = bVar26;
    }
  }
switchD_14000cedd_default:
  return;
LAB_14000c115:
  lVar28 = 1;
  goto LAB_140008afd;
joined_r0x00014000cb1f:
  if (puVar32 == (undefined8 *)0x0) goto LAB_14000ce4f;
  if (((uint *)*puVar32 == puVar15) ||
     ((*(undefined8 **)(param_1 + 0x148) != puVar32 && ((uint *)*puVar32 == param_3))))
  goto LAB_14000cb4f;
  puVar32 = (undefined8 *)puVar32[1];
  goto joined_r0x00014000cb1f;
LAB_14000ce4f:
  unaff_R14 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = puVar16[1];
  puVar15 = (uint *)d_lookup_template_argument((longlong)param_1,(longlong)puVar15);
  if (puVar15 == (uint *)0x0) {
LAB_14000d10b:
    *(undefined8 *)(param_1 + 0x120) = unaff_R14;
    goto switchD_1400082f6_caseD_2d;
  }
  iVar24 = 1;
LAB_14000cb66:
  uVar17 = *puVar15;
  if (uVar17 == 0x30) {
    if (-1 < *(int *)(param_1 + 0x13c)) {
      iVar27 = iVar24;
      puVar15 = (uint *)d_index_template_argument_part_0((int *)puVar15,*(int *)(param_1 + 0x13c));
      if (puVar15 == (uint *)0x0) {
        if (iVar24 == 0) goto switchD_1400082f6_caseD_2d;
        goto LAB_14000d10b;
      }
      uVar17 = *puVar15;
      iVar24 = iVar27;
      goto LAB_14000876e;
    }
    local_b8[0] = *(longlong **)(param_1 + 0x128);
    local_a0[0] = *(longlong **)(param_1 + 0x120);
    if (*param_3 == 0x30) goto LAB_14000c50f;
LAB_140008796:
    *(longlong ***)(param_1 + 0x128) = local_b8;
    local_b8[1] = (longlong *)param_3;
    goto LAB_140008411;
  }
LAB_14000876e:
  if (uVar17 == 0x24) {
    local_b8[0] = *(longlong **)(param_1 + 0x128);
    local_a0[0] = *(longlong **)(param_1 + 0x120);
    *(longlong ***)(param_1 + 0x128) = local_b8;
    local_b8[1] = (longlong *)puVar15;
    goto LAB_140008411;
  }
  local_b8[0] = *(longlong **)(param_1 + 0x128);
  local_a0[0] = *(longlong **)(param_1 + 0x120);
  if (*param_3 == uVar17) {
LAB_14000c50f:
    *(longlong ***)(param_1 + 0x128) = local_b8;
    local_b8[1] = (longlong *)puVar15;
    goto LAB_140008411;
  }
  if (uVar17 != 0x25) goto LAB_140008796;
  puVar15 = *(uint **)(puVar15 + 4);
  *(longlong ***)(param_1 + 0x128) = local_b8;
  local_b8[1] = (longlong *)param_3;
  if (puVar15 == (uint *)0x0) goto LAB_140008411;
  goto LAB_140008415;
  while( true ) {
    uVar25 = (ulonglong)uVar31;
    plVar10 = pplVar13[1];
    uVar18 = uVar18 + 1;
    pplVar13[uVar23 * -4 + uVar25 * 4] = *pplVar13;
    (pplVar13 + uVar23 * -4 + uVar25 * 4)[1] = plVar10;
    plVar10 = pplVar13[2];
    plVar4 = pplVar13[3];
    pplVar13[uVar23 * -4 + uVar25 * 4] = (longlong *)pplVar13;
    pplVar13[uVar23 * -4 + uVar25 * 4 + 2] = plVar10;
    (pplVar13 + uVar23 * -4 + uVar25 * 4 + 2)[1] = plVar4;
    pplVar13[1] = (longlong *)puVar15;
    *(undefined4 *)(pplVar13 + 2) = 0;
    pplVar13[3] = plVar5;
    *(longlong ***)(param_1 + 0x128) = pplVar13 + (uVar25 - uVar23) * 4;
    puVar15 = *(uint **)(puVar15 + 4);
    pplVar13 = pplVar13 + 4;
    if (puVar15 == (uint *)0x0) break;
LAB_14000c98f:
    uVar20 = *puVar15;
    if ((0x38 < uVar20 - 0x1c) ||
       ((0x19000000000003fU >> ((ulonglong)(uVar20 - 0x1c) & 0x3f) & 1) == 0)) {
LAB_14000bdae:
      if (uVar20 == 4) {
        *(longlong ***)(param_1 + 0x120) = &local_c8;
        piVar9 = *(int **)(puVar15 + 6);
        local_c8 = plVar5;
        local_c0 = puVar15;
        if (*piVar9 == 0x5f) {
          *(longlong *)(puVar15 + 6) = *(longlong *)(piVar9 + 4);
          *(undefined8 *)(piVar9 + 4) = *(undefined8 *)(param_3 + 6);
          *(int **)(param_3 + 6) = piVar9;
        }
      }
      d_print_comp(param_1,0x11,*(uint **)(param_3 + 6));
      if (*puVar15 == 4) {
        *(longlong **)(param_1 + 0x120) = local_c8;
      }
      pplVar13 = local_b8 + (ulonglong)(uVar18 - 1) * 4;
      iVar24 = (int)(&local_a8)[(ulonglong)(uVar18 - 1) * 4];
      while( true ) {
        if (iVar24 == 0) {
          lVar28 = *(longlong *)(param_1 + 0x100);
          if (lVar28 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
            lVar22 = 1;
            lVar28 = 0;
          }
          else {
            lVar22 = lVar28 + 1;
          }
          *(longlong *)(param_1 + 0x100) = lVar22;
          puVar15 = (uint *)pplVar13[1];
          param_1[lVar28] = 0x20;
          param_1[0x108] = 0x20;
          d_print_mod(param_1,0x11,puVar15);
        }
        if (local_b8 == pplVar13) break;
        iVar24 = *(int *)(pplVar13 + -2);
        pplVar13 = pplVar13 + -4;
      }
      *(undefined8 *)(param_1 + 0x128) = uVar8;
      return;
    }
    if (uVar18 == 4) break;
  }
  goto switchD_1400082f6_caseD_2d;
}



void d_print_comp(byte *param_1,undefined8 param_2,uint *param_3)

{
  uint *local_18;
  undefined8 local_10;
  
  if (((param_3 != (uint *)0x0) && ((int)param_3[1] < 2)) && (*(int *)(param_1 + 0x134) < 0x401)) {
    param_3[1] = param_3[1] + 1;
    local_10 = *(undefined8 *)(param_1 + 0x148);
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
    *(uint ***)(param_1 + 0x148) = &local_18;
    local_18 = param_3;
    d_print_comp_inner(param_1,0x11,param_3);
    *(undefined8 *)(param_1 + 0x148) = local_10;
    param_3[1] = param_3[1] - 1;
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
    return;
  }
  param_1[0x130] = 1;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  return;
}



void d_print_mod(undefined1 *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  undefined1 uVar8;
  char cVar9;
  
  uVar1 = *param_3;
  if (0x54 < uVar1) {
switchD_14000d206_caseD_28:
LAB_14000d36b:
    d_print_comp(param_1,0x11,param_3);
    return;
  }
  if (uVar1 < 0x1f) {
    if (uVar1 == 3) {
      param_3 = *(uint **)(param_3 + 4);
      goto LAB_14000d36b;
    }
    if (uVar1 - 0x19 < 6) {
      uVar6 = 1L << ((byte)uVar1 & 0x3f);
      if ((uVar6 & 0x48000000) != 0) {
        pcVar2 = " const";
        lVar4 = *(longlong *)(param_1 + 0x100);
        do {
          cVar9 = *pcVar2;
          if (lVar4 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
            pcVar2 = pcVar2 + 1;
            *param_1 = cVar9;
            *(undefined8 *)(param_1 + 0x100) = 1;
            param_1[0x108] = cVar9;
            if (pcVar2 == "") {
              return;
            }
            cVar9 = *pcVar2;
            lVar4 = 1;
          }
          pcVar2 = pcVar2 + 1;
          *(longlong *)(param_1 + 0x100) = lVar4 + 1;
          param_1[lVar4] = cVar9;
          param_1[0x108] = cVar9;
          lVar4 = lVar4 + 1;
        } while (pcVar2 != "");
        return;
      }
      if ((uVar6 & 0x24000000) != 0) {
        pcVar2 = " volatile";
        lVar4 = *(longlong *)(param_1 + 0x100);
        do {
          cVar9 = *pcVar2;
          if (lVar4 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
            pcVar2 = pcVar2 + 1;
            *param_1 = cVar9;
            *(undefined8 *)(param_1 + 0x100) = 1;
            param_1[0x108] = cVar9;
            if (pcVar2 == "") {
              return;
            }
            cVar9 = *pcVar2;
            lVar4 = 1;
          }
          pcVar2 = pcVar2 + 1;
          *(longlong *)(param_1 + 0x100) = lVar4 + 1;
          param_1[lVar4] = cVar9;
          param_1[0x108] = cVar9;
          lVar4 = lVar4 + 1;
        } while (pcVar2 != "");
        return;
      }
      if ((uVar6 & 0x12000000) != 0) {
        pcVar2 = " restrict";
        lVar4 = *(longlong *)(param_1 + 0x100);
        do {
          cVar9 = *pcVar2;
          if (lVar4 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
            pcVar2 = pcVar2 + 1;
            *param_1 = cVar9;
            *(undefined8 *)(param_1 + 0x100) = 1;
            param_1[0x108] = cVar9;
            if (pcVar2 == "") {
              return;
            }
            cVar9 = *pcVar2;
            lVar4 = 1;
          }
          pcVar2 = pcVar2 + 1;
          *(longlong *)(param_1 + 0x100) = lVar4 + 1;
          param_1[lVar4] = cVar9;
          param_1[0x108] = cVar9;
          lVar4 = lVar4 + 1;
        } while (pcVar2 != "");
        return;
      }
    }
    goto switchD_14000d206_caseD_28;
  }
  switch(uVar1) {
  case 0x1f:
    lVar5 = *(longlong *)(param_1 + 0x100);
    if (lVar5 != 0xff) {
      lVar4 = lVar5 + 1;
      *(longlong *)(param_1 + 0x100) = lVar4;
      param_1[lVar5] = 0x20;
      param_1[0x108] = 0x20;
      goto LAB_14000d5af;
    }
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x20;
    lVar4 = 1;
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
    goto LAB_14000d5bb;
  case 0x20:
    lVar5 = *(longlong *)(param_1 + 0x100);
    if (lVar5 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar4 = 1;
      lVar5 = 0;
    }
    else {
      lVar4 = lVar5 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar4;
    param_1[lVar5] = 0x20;
    param_1[0x108] = 0x20;
    goto LAB_14000d4d7;
  case 0x21:
    break;
  case 0x22:
    lVar4 = *(longlong *)(param_1 + 0x100);
    if (lVar4 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar4 = 0;
      lVar5 = 1;
    }
    else {
      lVar5 = lVar4 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar5;
    param_1[lVar4] = 0x20;
    param_1[0x108] = 0x20;
    param_3 = *(uint **)(param_3 + 6);
    goto LAB_14000d36b;
  case 0x23:
    lVar4 = *(longlong *)(param_1 + 0x100);
    if (lVar4 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar5 = 1;
      lVar4 = 0;
    }
    else {
      lVar5 = lVar4 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar5;
    param_1[lVar4] = 0x2a;
    param_1[0x108] = 0x2a;
    break;
  case 0x24:
    lVar4 = *(longlong *)(param_1 + 0x100);
LAB_14000d5af:
    if (lVar4 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar5 = 1;
      lVar4 = 0;
      goto LAB_14000d5bf;
    }
LAB_14000d5bb:
    lVar5 = lVar4 + 1;
LAB_14000d5bf:
    *(longlong *)(param_1 + 0x100) = lVar5;
    param_1[lVar4] = 0x26;
    param_1[0x108] = 0x26;
    return;
  case 0x25:
    lVar4 = *(longlong *)(param_1 + 0x100);
LAB_14000d4d7:
    puVar3 = &DAT_140024a86;
    do {
      uVar8 = *puVar3;
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        puVar3 = puVar3 + 1;
        *param_1 = uVar8;
        *(undefined8 *)(param_1 + 0x100) = 1;
        param_1[0x108] = uVar8;
        if (puVar3 == &DAT_140024a88) {
          return;
        }
        uVar8 = *puVar3;
        lVar4 = 1;
      }
      puVar3 = puVar3 + 1;
      *(longlong *)(param_1 + 0x100) = lVar4 + 1;
      param_1[lVar4] = uVar8;
      param_1[0x108] = uVar8;
      lVar4 = lVar4 + 1;
    } while (puVar3 != &DAT_140024a88);
    break;
  case 0x26:
    pcVar2 = " _Complex";
    lVar4 = *(longlong *)(param_1 + 0x100);
    do {
      cVar9 = *pcVar2;
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar2 = pcVar2 + 1;
        *param_1 = cVar9;
        *(undefined8 *)(param_1 + 0x100) = 1;
        param_1[0x108] = cVar9;
        if (pcVar2 == "") {
          return;
        }
        cVar9 = *pcVar2;
        lVar4 = 1;
      }
      pcVar2 = pcVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar4 + 1;
      param_1[lVar4] = cVar9;
      param_1[0x108] = cVar9;
      lVar4 = lVar4 + 1;
    } while (pcVar2 != "");
    break;
  case 0x27:
    pcVar2 = " _Imaginary";
    lVar4 = *(longlong *)(param_1 + 0x100);
    do {
      cVar9 = *pcVar2;
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar2 = pcVar2 + 1;
        *param_1 = cVar9;
        *(undefined8 *)(param_1 + 0x100) = 1;
        param_1[0x108] = cVar9;
        if (pcVar2 == "") {
          return;
        }
        cVar9 = *pcVar2;
        lVar4 = 1;
      }
      pcVar2 = pcVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar4 + 1;
      param_1[lVar4] = cVar9;
      param_1[0x108] = cVar9;
      lVar4 = lVar4 + 1;
    } while (pcVar2 != "");
    break;
  default:
    goto switchD_14000d206_caseD_28;
  case 0x2c:
    if (param_1[0x108] != '(') {
      lVar4 = *(longlong *)(param_1 + 0x100);
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        lVar4 = 0;
        lVar5 = 1;
      }
      else {
        lVar5 = lVar4 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = 0x20;
      param_1[0x108] = 0x20;
    }
    d_print_comp(param_1,0x11,*(uint **)(param_3 + 4));
    puVar3 = &DAT_140024a9f;
    lVar4 = *(longlong *)(param_1 + 0x100);
    do {
      uVar8 = *puVar3;
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        puVar3 = puVar3 + 1;
        *param_1 = uVar8;
        *(undefined8 *)(param_1 + 0x100) = 1;
        param_1[0x108] = uVar8;
        if (puVar3 == &DAT_140024aa2) {
          return;
        }
        uVar8 = *puVar3;
        lVar4 = 1;
      }
      puVar3 = puVar3 + 1;
      *(longlong *)(param_1 + 0x100) = lVar4 + 1;
      param_1[lVar4] = uVar8;
      param_1[0x108] = uVar8;
      lVar4 = lVar4 + 1;
    } while (puVar3 != &DAT_140024aa2);
    break;
  case 0x2e:
    pcVar2 = " __vector(";
    lVar4 = *(longlong *)(param_1 + 0x100);
    do {
      cVar9 = *pcVar2;
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar2 = pcVar2 + 1;
        *param_1 = cVar9;
        param_1[0x108] = cVar9;
        *(undefined8 *)(param_1 + 0x100) = 1;
        if (pcVar2 == "") break;
        cVar9 = *pcVar2;
        lVar4 = 1;
      }
      pcVar2 = pcVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar4 + 1;
      param_1[lVar4] = cVar9;
      param_1[0x108] = cVar9;
      lVar4 = lVar4 + 1;
    } while (pcVar2 != "");
    puVar7 = *(uint **)(param_3 + 4);
    goto LAB_14000d214;
  case 0x50:
    pcVar2 = " transaction_safe";
    lVar4 = *(longlong *)(param_1 + 0x100);
    do {
      cVar9 = *pcVar2;
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar2 = pcVar2 + 1;
        *param_1 = cVar9;
        *(undefined8 *)(param_1 + 0x100) = 1;
        param_1[0x108] = cVar9;
        if (pcVar2 == "") {
          return;
        }
        cVar9 = *pcVar2;
        lVar4 = 1;
      }
      pcVar2 = pcVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar4 + 1;
      param_1[lVar4] = cVar9;
      param_1[0x108] = cVar9;
      lVar4 = lVar4 + 1;
    } while (pcVar2 != "");
    break;
  case 0x53:
    pcVar2 = " noexcept";
    lVar4 = *(longlong *)(param_1 + 0x100);
    do {
      lVar5 = lVar4;
      cVar9 = *pcVar2;
      if (lVar5 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar2 = pcVar2 + 1;
        *param_1 = cVar9;
        param_1[0x108] = cVar9;
        *(undefined8 *)(param_1 + 0x100) = 1;
        if (pcVar2 == "") goto LAB_14000de90;
        cVar9 = *pcVar2;
        lVar5 = 1;
      }
      lVar4 = lVar5 + 1;
      pcVar2 = pcVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar4;
      param_1[lVar5] = cVar9;
      param_1[0x108] = cVar9;
    } while (pcVar2 != "");
    goto LAB_14000db68;
  case 0x54:
    pcVar2 = " throw";
    lVar4 = *(longlong *)(param_1 + 0x100);
    do {
      lVar5 = lVar4;
      cVar9 = *pcVar2;
      if (lVar5 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar2 = pcVar2 + 1;
        *param_1 = cVar9;
        param_1[0x108] = cVar9;
        *(undefined8 *)(param_1 + 0x100) = 1;
        if (pcVar2 == "") goto LAB_14000de90;
        cVar9 = *pcVar2;
        lVar5 = 1;
      }
      lVar4 = lVar5 + 1;
      pcVar2 = pcVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar4;
      param_1[lVar5] = cVar9;
      param_1[0x108] = cVar9;
    } while (pcVar2 != "");
LAB_14000db68:
    if (*(longlong *)(param_3 + 6) != 0) {
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        lVar4 = 0;
        lVar5 = 1;
      }
      else {
LAB_14000db80:
        lVar5 = lVar5 + 2;
      }
      *(longlong *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = 0x28;
      param_1[0x108] = 0x28;
      puVar7 = *(uint **)(param_3 + 6);
LAB_14000d214:
      d_print_comp(param_1,0x11,puVar7);
      lVar4 = *(longlong *)(param_1 + 0x100);
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        lVar5 = 1;
        lVar4 = 0;
      }
      else {
        lVar5 = lVar4 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = 0x29;
      param_1[0x108] = 0x29;
    }
  }
  return;
LAB_14000de90:
  if (*(longlong *)(param_3 + 6) == 0) {
    return;
  }
  lVar5 = 0;
  lVar4 = 1;
  goto LAB_14000db80;
}



void d_print_function_type(char *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  bool bVar1;
  longlong *plVar2;
  char *pcVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint *puVar10;
  char cVar11;
  
  if (param_4 == (longlong *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    plVar2 = param_4;
    do {
      if ((int)plVar2[2] != 0) break;
      uVar4 = *(int *)plVar2[1] - 0x19;
      if (uVar4 < 0x14) {
        uVar7 = 1L << ((byte)uVar4 & 0x3f);
        if ((uVar7 & 0x86207) == 0) {
          if ((uVar7 & 0x1c00) == 0) {
            bVar1 = (bool)(bVar1 | uVar4 == 8);
            goto LAB_14000df8f;
          }
          bVar6 = param_1[0x108];
          if ((bVar6 & 0xfd) != 0x28) goto LAB_14000e05f;
          lVar5 = *(longlong *)(param_1 + 0x100);
          if (lVar5 != 0xff) goto LAB_14000e07b;
LAB_14000e207:
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar5 = 0;
        }
        else {
          bVar6 = param_1[0x108];
LAB_14000e05f:
          lVar8 = *(longlong *)(param_1 + 0x100);
          lVar5 = lVar8;
          if (bVar6 == 0x20) {
LAB_14000e06f:
            if (lVar5 == 0xff) goto LAB_14000e207;
          }
          else {
            if (lVar8 != 0xff) {
              lVar5 = lVar8 + 1;
              *(longlong *)(param_1 + 0x100) = lVar5;
              param_1[lVar8] = ' ';
              param_1[0x108] = ' ';
              goto LAB_14000e06f;
            }
            param_1[0xff] = '\0';
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *param_1 = ' ';
            lVar5 = 1;
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          }
LAB_14000e07b:
          lVar8 = lVar5 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar8;
        param_1[lVar5] = '(';
        uVar9 = *(undefined8 *)(param_1 + 0x128);
        param_1[0x108] = '(';
        param_1[0x128] = '\0';
        param_1[0x129] = '\0';
        param_1[0x12a] = '\0';
        param_1[299] = '\0';
        param_1[300] = '\0';
        param_1[0x12d] = '\0';
        param_1[0x12e] = '\0';
        param_1[0x12f] = '\0';
        d_print_mod_list(param_1,0x11,param_4,0);
        lVar5 = *(longlong *)(param_1 + 0x100);
        if (lVar5 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = ')';
          lVar8 = 1;
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          goto LAB_14000dfcf;
        }
        lVar8 = lVar5 + 1;
        *(longlong *)(param_1 + 0x100) = lVar8;
        param_1[lVar5] = ')';
        param_1[0x108] = ')';
        goto joined_r0x00014000e0e6;
      }
LAB_14000df8f:
      plVar2 = (longlong *)*plVar2;
    } while (plVar2 != (longlong *)0x0);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x128);
  param_1[0x128] = '\0';
  param_1[0x129] = '\0';
  param_1[0x12a] = '\0';
  param_1[299] = '\0';
  param_1[300] = '\0';
  param_1[0x12d] = '\0';
  param_1[0x12e] = '\0';
  param_1[0x12f] = '\0';
  d_print_mod_list(param_1,0x11,param_4,0);
  lVar8 = *(longlong *)(param_1 + 0x100);
joined_r0x00014000e0e6:
  if (lVar8 == 0xff) {
    param_1[0xff] = '\0';
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
    lVar5 = 1;
    lVar8 = 0;
  }
  else {
LAB_14000dfcf:
    lVar5 = lVar8 + 1;
  }
  *(longlong *)(param_1 + 0x100) = lVar5;
  param_1[lVar8] = '(';
  param_1[0x108] = '(';
  if (bVar1) {
    pcVar3 = "this ";
    do {
      cVar11 = *pcVar3;
      if (lVar5 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        param_1[0x100] = '\x01';
        param_1[0x101] = '\0';
        param_1[0x102] = '\0';
        param_1[0x103] = '\0';
        param_1[0x104] = '\0';
        param_1[0x105] = '\0';
        param_1[0x106] = '\0';
        param_1[0x107] = '\0';
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        pcVar3 = pcVar3 + 1;
        *param_1 = cVar11;
        param_1[0x108] = cVar11;
        if (pcVar3 == "") {
          puVar10 = *(uint **)(param_3 + 0x18);
          if (puVar10 != (uint *)0x0) goto LAB_14000dff7;
          lVar5 = 1;
          goto LAB_14000e017;
        }
        cVar11 = *pcVar3;
        lVar5 = 1;
      }
      pcVar3 = pcVar3 + 1;
      *(longlong *)(param_1 + 0x100) = lVar5 + 1;
      param_1[lVar5] = cVar11;
      param_1[0x108] = cVar11;
      lVar5 = lVar5 + 1;
    } while (pcVar3 != "");
  }
  puVar10 = *(uint **)(param_3 + 0x18);
  if (puVar10 != (uint *)0x0) {
LAB_14000dff7:
    d_print_comp((byte *)param_1,0x11,puVar10);
  }
  lVar5 = *(longlong *)(param_1 + 0x100);
  if (lVar5 == 0xff) {
    param_1[0xff] = '\0';
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
    lVar8 = 1;
    lVar5 = 0;
  }
  else {
LAB_14000e017:
    lVar8 = lVar5 + 1;
  }
  *(longlong *)(param_1 + 0x100) = lVar8;
  param_1[lVar5] = ')';
  param_1[0x108] = ')';
  d_print_mod_list(param_1,0x11,param_4,1);
  *(undefined8 *)(param_1 + 0x128) = uVar9;
  return;
}



void d_print_mod_list(char *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  char local_48 [32];
  
  do {
    while( true ) {
      if ((param_3 == (undefined8 *)0x0) || (*(int *)(param_1 + 0x130) != 0)) {
        return;
      }
      if (*(int *)(param_3 + 2) == 0) break;
LAB_14000e380:
      param_3 = (undefined8 *)*param_3;
    }
    puVar2 = (uint *)param_3[1];
    uVar1 = *puVar2;
    if (param_4 == 0) {
      if (uVar1 - 0x1c < 0x39) {
        if ((0x19000000000003fU >> ((ulonglong)(uVar1 - 0x1c) & 0x3f) & 1) != 0) goto LAB_14000e380;
        goto LAB_14000e3a4;
      }
      *(undefined4 *)(param_3 + 2) = 1;
      uVar3 = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = param_3[3];
    }
    else {
LAB_14000e3a4:
      *(undefined4 *)(param_3 + 2) = 1;
      uVar3 = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = param_3[3];
      if (uVar1 == 0x2a) {
        d_print_function_type(param_1,0x11,(longlong)puVar2,(longlong *)*param_3);
        *(undefined8 *)(param_1 + 0x120) = uVar3;
        return;
      }
      if (uVar1 == 0x2b) {
        d_print_array_type((undefined2 *)param_1,0x11,(longlong)puVar2,(longlong *)*param_3);
        *(undefined8 *)(param_1 + 0x120) = uVar3;
        return;
      }
    }
    if (uVar1 == 2) {
      uVar4 = *(undefined8 *)(param_1 + 0x128);
      param_1[0x128] = '\0';
      param_1[0x129] = '\0';
      param_1[0x12a] = '\0';
      param_1[299] = '\0';
      param_1[300] = '\0';
      param_1[0x12d] = '\0';
      param_1[0x12e] = '\0';
      param_1[0x12f] = '\0';
      d_print_comp((byte *)param_1,0x11,*(uint **)(puVar2 + 4));
      *(undefined8 *)(param_1 + 0x128) = uVar4;
      pcVar8 = "::";
      lVar6 = *(longlong *)(param_1 + 0x100);
      break;
    }
    d_print_mod(param_1,0x11,puVar2);
    param_3 = (undefined8 *)*param_3;
    *(undefined8 *)(param_1 + 0x120) = uVar3;
  } while( true );
  do {
    cVar10 = *pcVar8;
    lVar7 = lVar6;
    if (lVar6 == 0xff) {
      param_1[0xff] = '\0';
      pcVar8 = pcVar8 + 1;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = cVar10;
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      param_1[0x100] = '\x01';
      param_1[0x101] = '\0';
      param_1[0x102] = '\0';
      param_1[0x103] = '\0';
      param_1[0x104] = '\0';
      param_1[0x105] = '\0';
      param_1[0x106] = '\0';
      param_1[0x107] = '\0';
      param_1[0x108] = cVar10;
      if (pcVar8 == "") {
        lVar6 = 1;
        break;
      }
      cVar10 = *pcVar8;
      lVar7 = 1;
    }
    lVar6 = lVar7 + 1;
    pcVar8 = pcVar8 + 1;
    *(longlong *)(param_1 + 0x100) = lVar6;
    param_1[lVar7] = cVar10;
    param_1[0x108] = cVar10;
  } while (pcVar8 != "");
  puVar2 = *(uint **)(param_3[1] + 0x18);
  uVar1 = *puVar2;
  if (uVar1 == 0x49) {
    pcVar8 = "{default arg#";
    do {
      cVar10 = *pcVar8;
      lVar7 = lVar6;
      if (lVar6 == 0xff) {
        param_1[0xff] = '\0';
        pcVar8 = pcVar8 + 1;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = cVar10;
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = '\x01';
        param_1[0x101] = '\0';
        param_1[0x102] = '\0';
        param_1[0x103] = '\0';
        param_1[0x104] = '\0';
        param_1[0x105] = '\0';
        param_1[0x106] = '\0';
        param_1[0x107] = '\0';
        param_1[0x108] = cVar10;
        if (pcVar8 == "") break;
        cVar10 = *pcVar8;
        lVar7 = 1;
      }
      lVar6 = lVar7 + 1;
      pcVar8 = pcVar8 + 1;
      *(longlong *)(param_1 + 0x100) = lVar6;
      param_1[lVar7] = cVar10;
      param_1[0x108] = cVar10;
    } while (pcVar8 != "");
    _text((longlong)local_48,"%d",(double)(ulonglong)(puVar2[6] + 1),"");
    sVar5 = strlen(local_48);
    lVar6 = *(longlong *)(param_1 + 0x100);
    if (sVar5 != 0) {
      pcVar8 = local_48;
      pcVar9 = pcVar8 + sVar5;
      do {
        cVar10 = *pcVar8;
        lVar7 = lVar6;
        if (lVar6 == 0xff) {
          pcVar8 = pcVar8 + 1;
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = cVar10;
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          param_1[0x100] = '\x01';
          param_1[0x101] = '\0';
          param_1[0x102] = '\0';
          param_1[0x103] = '\0';
          param_1[0x104] = '\0';
          param_1[0x105] = '\0';
          param_1[0x106] = '\0';
          param_1[0x107] = '\0';
          param_1[0x108] = cVar10;
          if (pcVar8 == pcVar9) {
            lVar6 = 1;
            break;
          }
          cVar10 = *pcVar8;
          lVar7 = 1;
        }
        lVar6 = lVar7 + 1;
        pcVar8 = pcVar8 + 1;
        *(longlong *)(param_1 + 0x100) = lVar6;
        param_1[lVar7] = cVar10;
        param_1[0x108] = cVar10;
      } while (pcVar8 != pcVar9);
    }
    pcVar8 = "}::";
    do {
      cVar10 = *pcVar8;
      lVar7 = lVar6;
      if (lVar6 == 0xff) {
        param_1[0xff] = '\0';
        pcVar8 = pcVar8 + 1;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = cVar10;
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        param_1[0x100] = '\x01';
        param_1[0x101] = '\0';
        param_1[0x102] = '\0';
        param_1[0x103] = '\0';
        param_1[0x104] = '\0';
        param_1[0x105] = '\0';
        param_1[0x106] = '\0';
        param_1[0x107] = '\0';
        param_1[0x108] = cVar10;
        if (pcVar8 == "") break;
        cVar10 = *pcVar8;
        lVar7 = 1;
      }
      lVar6 = lVar7 + 1;
      pcVar8 = pcVar8 + 1;
      *(longlong *)(param_1 + 0x100) = lVar6;
      param_1[lVar7] = cVar10;
      param_1[0x108] = cVar10;
    } while (pcVar8 != "");
    puVar2 = *(uint **)(puVar2 + 4);
    uVar1 = *puVar2;
  }
  while ((uVar1 - 0x1c < 0x39 &&
         ((0x19000000000003fU >> ((ulonglong)(uVar1 - 0x1c) & 0x3f) & 1) != 0))) {
    puVar2 = *(uint **)(puVar2 + 4);
    uVar1 = *puVar2;
  }
  d_print_comp((byte *)param_1,0x11,puVar2);
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  return;
}



void d_print_array_type(undefined2 *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 uVar6;
  
  plVar1 = param_4;
  if (param_4 != (longlong *)0x0) {
    do {
      if ((int)plVar1[2] == 0) {
        if (*(int *)plVar1[1] == 0x2b) {
          d_print_mod_list((char *)param_1,0x11,param_4,0);
          lVar4 = *(longlong *)(param_1 + 0x80);
          goto joined_r0x00014000e8ae;
        }
        puVar3 = &DAT_140024b8e;
        lVar4 = *(longlong *)(param_1 + 0x80);
        goto LAB_14000e9e6;
      }
      plVar1 = (longlong *)*plVar1;
    } while (plVar1 != (longlong *)0x0);
    d_print_mod_list((char *)param_1,0x11,param_4,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
LAB_14000e7ed:
  if (lVar2 == 0xff) {
    *(undefined1 *)((longlong)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    *param_1 = 0x5b20;
    lVar2 = 2;
    *(undefined1 *)(param_1 + 0x84) = 0x5b;
    puVar5 = *(uint **)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 0x80) = 2;
    if (puVar5 != (uint *)0x0) goto LAB_14000e83b;
  }
  else {
    lVar4 = lVar2 + 1;
    *(longlong *)(param_1 + 0x80) = lVar4;
    *(undefined1 *)((longlong)param_1 + lVar2) = 0x20;
    *(undefined1 *)(param_1 + 0x84) = 0x20;
joined_r0x00014000e8ae:
    if (lVar4 != 0xff) goto LAB_14000e81c;
    *(undefined1 *)((longlong)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    *(undefined1 *)param_1 = 0x5b;
    *(undefined1 *)(param_1 + 0x84) = 0x5b;
    puVar5 = *(uint **)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 0x80) = 1;
    if (puVar5 != (uint *)0x0) goto LAB_14000e83b;
    lVar2 = 1;
  }
  goto LAB_14000e85b;
LAB_14000e9e6:
  do {
    uVar6 = *puVar3;
    if (lVar4 == 0xff) {
      *(undefined1 *)((longlong)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      puVar3 = puVar3 + 1;
      *(undefined1 *)param_1 = uVar6;
      *(undefined1 *)(param_1 + 0x84) = uVar6;
      *(undefined8 *)(param_1 + 0x80) = 1;
      if (puVar3 == &DAT_140024b90) break;
      uVar6 = *puVar3;
      lVar4 = 1;
    }
    puVar3 = puVar3 + 1;
    *(longlong *)(param_1 + 0x80) = lVar4 + 1;
    *(undefined1 *)((longlong)param_1 + lVar4) = uVar6;
    *(undefined1 *)(param_1 + 0x84) = uVar6;
    lVar4 = lVar4 + 1;
  } while (puVar3 != &DAT_140024b90);
  d_print_mod_list((char *)param_1,0x11,param_4,0);
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (lVar4 != 0xff) {
    lVar2 = lVar4 + 1;
    *(longlong *)(param_1 + 0x80) = lVar2;
    *(undefined1 *)((longlong)param_1 + lVar4) = 0x29;
    *(undefined1 *)(param_1 + 0x84) = 0x29;
    goto LAB_14000e7ed;
  }
  *(undefined1 *)((longlong)param_1 + 0xff) = 0;
  (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  *param_1 = 0x2029;
  lVar4 = 2;
LAB_14000e81c:
  lVar2 = lVar4 + 1;
  *(longlong *)(param_1 + 0x80) = lVar2;
  *(undefined1 *)((longlong)param_1 + lVar4) = 0x5b;
  *(undefined1 *)(param_1 + 0x84) = 0x5b;
  puVar5 = *(uint **)(param_3 + 0x10);
  if (puVar5 != (uint *)0x0) {
LAB_14000e83b:
    d_print_comp((byte *)param_1,0x11,puVar5);
    lVar2 = *(longlong *)(param_1 + 0x80);
  }
  if (lVar2 == 0xff) {
    *(undefined1 *)((longlong)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    lVar4 = 1;
    lVar2 = 0;
    goto LAB_14000e85f;
  }
LAB_14000e85b:
  lVar4 = lVar2 + 1;
LAB_14000e85f:
  *(longlong *)(param_1 + 0x80) = lVar4;
  *(undefined1 *)((longlong)param_1 + lVar2) = 0x5d;
  *(undefined1 *)(param_1 + 0x84) = 0x5d;
  return;
}



void d_print_expr_op(undefined1 *param_1,undefined8 param_2,int *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  if (*param_3 != 0x33) {
    d_print_comp(param_1,0x11,(uint *)param_3);
    return;
  }
  lVar4 = (longlong)*(int *)(*(longlong *)(param_3 + 4) + 0x10);
  if (lVar4 != 0) {
    puVar1 = *(undefined1 **)(*(longlong *)(param_3 + 4) + 8);
    lVar2 = *(longlong *)(param_1 + 0x100);
    puVar5 = puVar1 + lVar4;
    do {
      uVar3 = *puVar1;
      lVar4 = lVar2;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        puVar1 = puVar1 + 1;
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        *(undefined8 *)(param_1 + 0x100) = 1;
        *param_1 = uVar3;
        param_1[0x108] = uVar3;
        if (puVar5 == puVar1) {
          return;
        }
        uVar3 = *puVar1;
        lVar4 = 1;
      }
      lVar2 = lVar4 + 1;
      puVar1 = puVar1 + 1;
      *(longlong *)(param_1 + 0x100) = lVar2;
      param_1[lVar4] = uVar3;
      param_1[0x108] = uVar3;
    } while (puVar1 != puVar5);
  }
  return;
}



// WARNING: Function: ___chkstk_ms replaced with injection: alloca_probe

bool d_demangle_callback_constprop_0(char *param_1,undefined *param_2,undefined8 param_3)

{
  char *_Str;
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  size_t sVar9;
  uint *puVar10;
  undefined4 *puVar11;
  char **ppcVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined8 auStack_10260 [8197];
  undefined8 local_238;
  uint local_230;
  uint local_22c;
  char *local_228;
  char *local_220;
  uint local_218;
  char *local_210;
  uint *local_208;
  undefined4 local_200;
  uint local_1fc;
  longlong local_1f8;
  undefined4 local_1f0;
  int local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  byte local_1c8 [256];
  longlong local_c8;
  undefined1 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((*param_1 == '_') && (param_1[1] == 'Z')) {
    bVar17 = false;
    iVar8 = 1;
    goto LAB_14000ec58;
  }
  auStack_10260[0x2000] = 0x14000ec4a;
  iVar8 = strncmp(param_1,"_GLOBAL_",8);
  if ((iVar8 == 0) && ((byte)((byte)param_1[8] - 0x24) < 0x3c)) {
    bVar17 = (0x800000000000401U >> ((ulonglong)((byte)param_1[8] - 0x24) & 0x3f) & 1) != 0;
    iVar8 = 0;
    if (!bVar17) goto LAB_14000ec58;
    cVar7 = param_1[9];
    bVar17 = cVar7 == 'D' || cVar7 == 'I';
    iVar8 = 0;
    if (cVar7 != 'D' && cVar7 != 'I') goto LAB_14000ec58;
    if (param_1[10] == '_') {
      iVar8 = 2;
      if (cVar7 != 'I') {
        bVar17 = false;
        iVar8 = 3;
      }
      goto LAB_14000ec58;
    }
  }
  bVar17 = false;
  iVar8 = 0;
LAB_14000ec58:
  local_1d4 = 1;
  _Str = param_1 + 0xb;
  local_230 = ((int)((uint)bVar17 << 0x1f) >> 0x1f) + 0x47;
  local_22c = iVar8 - 2;
  do {
    auStack_10260[0x2000] = 0x14000ed42;
    sVar9 = strlen(param_1);
    local_220 = param_1 + sVar9;
    local_218 = 0x11;
    local_1ec = (int)sVar9;
    local_1fc = local_1ec * 2;
    local_200 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    if (0x800 < local_1fc) {
      return false;
    }
    auStack_10260[0x2000] = 0x14000edab;
    lVar2 = (ulonglong)local_1fc * -0x20;
    uVar16 = (longlong)&local_238 + lVar2 + 7;
    local_208 = (uint *)(uVar16 & 0xfffffffffffffff8);
    uVar16 = uVar16 >> 3;
    auStack_10260[(ulonglong)local_1fc * -4 + 0x2000] = 0x14000edd2;
    lVar3 = -((longlong)local_1ec * 8 + 0xfU & 0xfffffffffffffff0);
    local_1f8 = (longlong)&local_238 + lVar3 + lVar2;
    local_228 = param_1;
    local_210 = param_1;
    if (iVar8 == 1) {
      if ((*param_1 == '_') && (param_1[1] == 'Z')) {
        local_210 = param_1 + 2;
        if ((param_1[2] == 'G') || (param_1[2] == 'T')) {
          *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000f04c;
          puVar10 = d_special_name((longlong)&local_228);
        }
        else {
          *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000ee2f;
          puVar10 = d_encoding_part_0((longlong)&local_228,1);
        }
        cVar7 = *local_210;
        pcVar14 = local_210;
        if ((local_218 & 1) != 0) {
          while (cVar7 == '.') {
            cVar7 = pcVar14[1];
            if (((0x19 < (byte)(cVar7 + 0x9fU)) && (cVar7 != '_')) && (9 < (byte)(cVar7 - 0x30U))) {
              cVar7 = *local_210;
              break;
            }
            cVar7 = pcVar14[2];
            pcVar15 = pcVar14 + 2;
            if (9 < (byte)(cVar7 - 0x30U) && 0x19 < (byte)(cVar7 + 0x9fU)) goto LAB_14000eee2;
            do {
              do {
                cVar7 = pcVar15[1];
                pcVar15 = pcVar15 + 1;
              } while ((byte)(cVar7 + 0x9fU) < 0x1a || (byte)(cVar7 - 0x30U) < 10);
LAB_14000eee2:
            } while (cVar7 == '_');
            while (cVar7 == '.') {
              while( true ) {
                if (9 < (byte)(pcVar15[1] - 0x30U)) goto LAB_14000ef24;
                cVar7 = pcVar15[2];
                pcVar15 = pcVar15 + 2;
                if (9 < (byte)(cVar7 - 0x30U)) break;
                do {
                  pcVar1 = pcVar15 + 1;
                  pcVar15 = pcVar15 + 1;
                } while ((byte)(*pcVar1 - 0x30U) < 10);
                if (*pcVar1 != '.') goto LAB_14000ef24;
              }
            }
LAB_14000ef24:
            local_210 = pcVar15;
            *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000ef39;
            ppcVar12 = &local_228;
            puVar11 = d_make_name((longlong)&local_228,(longlong)pcVar14,(int)pcVar15 - (int)pcVar14
                                 );
            *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000ef49;
            puVar10 = d_make_comp((longlong)ppcVar12,0x51,(longlong)puVar10,(longlong)puVar11);
            pcVar14 = pcVar15;
            cVar7 = *pcVar15;
          }
        }
        goto LAB_14000ed19;
      }
    }
    else {
      if (local_22c < 2) {
        if ((param_1[0xb] == '_') && (param_1[0xc] == 'Z')) {
          local_210 = param_1 + 0xd;
          if ((param_1[0xd] == 'G') || (param_1[0xd] == 'T')) {
            *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000f038;
            puVar10 = d_special_name((longlong)&local_228);
            pcVar14 = local_210;
          }
          else {
            *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000efae;
            puVar10 = d_encoding_part_0((longlong)&local_228,0);
            pcVar14 = local_210;
          }
        }
        else {
          local_210 = _Str;
          pcVar14 = _Str;
          if (local_1fc != 0) {
            local_238 = local_208;
            *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000ecb7;
            sVar9 = strlen(_Str);
            local_200 = 1;
            *(undefined8 *)(uVar16 * 8 + 4) = 0;
            if (0 < (int)sVar9) {
              *(undefined4 *)(uVar16 * 8) = 0;
              *(char **)(uVar16 * 8 + 0x10) = _Str;
              *(int *)(uVar16 * 8 + 0x18) = (int)sVar9;
              puVar10 = local_238;
              goto LAB_14000ecf6;
            }
          }
          puVar10 = (uint *)0x0;
        }
LAB_14000ecf6:
        uVar13 = local_230;
        *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000ed04;
        puVar10 = d_make_comp((longlong)&local_228,uVar13,(longlong)puVar10,0);
        *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000ed0f;
        sVar9 = strlen(pcVar14);
        local_210 = pcVar14 + sVar9;
        cVar7 = *local_210;
      }
      else {
        *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000ef68;
        puVar10 = d_type((longlong)&local_228);
        cVar7 = *local_210;
      }
LAB_14000ed19:
      if ((puVar10 != (uint *)0x0) && (cVar7 == '\0')) {
        local_c8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_88 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_98 = (undefined1  [16])0x0;
        local_80 = (undefined1  [16])0x0;
        local_b8 = (code *)param_2;
        local_b0 = param_3;
        *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000f116;
        d_count_templates_scopes((longlong)local_1c8,puVar10);
        if ((int)local_98._4_4_ < 0x800) {
          local_98._4_4_ = 0;
        }
        local_58 = 0;
        uVar13 = local_60._4_4_ * local_70._4_4_;
        uVar16 = (ulonglong)local_70._4_4_;
        if ((int)local_70._4_4_ < 1) {
          uVar16 = 1;
        }
        local_60 = CONCAT44(uVar13,(undefined4)local_60);
        *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000f162;
        lVar4 = uVar16 * -0x10;
        uVar16 = 1;
        if (0 < (int)uVar13) {
          uVar16 = (ulonglong)uVar13;
        }
        *(undefined8 *)((longlong)auStack_10260 + lVar4 + lVar3 + lVar2 + 0x10000) = 0x14000f17d;
        local_80._8_8_ = (longlong)&local_238 + lVar4 + lVar3 + lVar2;
        local_68 = (longlong)&local_238 + uVar16 * -0x10 + lVar4 + lVar3 + lVar2;
        *(undefined8 *)((longlong)auStack_10260 + uVar16 * -0x10 + lVar4 + lVar3 + lVar2 + 0x10000)
             = 0x14000f1a4;
        d_print_comp(local_1c8,0x11,puVar10);
        uVar6 = local_b0;
        lVar4 = local_c8;
        local_1c8[local_c8] = 0;
        pcVar5 = local_b8;
        *(undefined8 *)((longlong)auStack_10260 + lVar3 + lVar2 + 0x10000) = 0x14000f1c4;
        (*pcVar5)(local_1c8,lVar4,uVar6);
        return local_98._0_4_ == 0;
      }
    }
    if (local_1d4 != -1) {
      return false;
    }
    local_1d4 = 0;
  } while( true );
}



void d_print_subexpr(undefined1 *param_1,undefined8 param_2,uint *param_3)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint *local_18;
  undefined8 local_10;
  
  if ((*param_3 < 0x33) && ((0x4000000000043U >> ((ulonglong)*param_3 & 0x3f) & 1) != 0)) {
    uVar3 = param_3[1];
    if ((1 < (int)uVar3) || (bVar1 = true, 0x400 < *(int *)(param_1 + 0x134))) {
      *(undefined4 *)(param_1 + 0x130) = 1;
      return;
    }
LAB_14000f290:
    param_3[1] = uVar3 + 1;
    local_10 = *(undefined8 *)(param_1 + 0x148);
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
    *(uint ***)(param_1 + 0x148) = &local_18;
    local_18 = param_3;
    d_print_comp_inner(param_1,0x11,param_3);
    *(undefined8 *)(param_1 + 0x148) = local_10;
    param_3[1] = param_3[1] - 1;
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
    if (bVar1) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x100);
LAB_14000f322:
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar4 = 1;
      lVar2 = 0;
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      goto LAB_14000f333;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x100);
    if (lVar4 != 0xff) {
      lVar2 = lVar4 + 1;
      *(longlong *)(param_1 + 0x100) = lVar2;
      param_1[lVar4] = 0x28;
      param_1[0x108] = 0x28;
      uVar3 = param_3[1];
      if (((int)uVar3 < 2) && (*(int *)(param_1 + 0x134) < 0x401)) goto LAB_14000f287;
      *(undefined4 *)(param_1 + 0x130) = 1;
      goto LAB_14000f322;
    }
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x28;
    param_1[0x108] = 0x28;
    uVar3 = param_3[1];
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
    *(undefined8 *)(param_1 + 0x100) = 1;
    if (((int)uVar3 < 2) && (*(int *)(param_1 + 0x134) < 0x401)) {
LAB_14000f287:
      bVar1 = false;
      goto LAB_14000f290;
    }
    *(undefined4 *)(param_1 + 0x130) = 1;
    lVar2 = 1;
  }
  lVar4 = lVar2 + 1;
LAB_14000f333:
  *(longlong *)(param_1 + 0x100) = lVar4;
  param_1[lVar2] = 0x29;
  param_1[0x108] = 0x29;
  return;
}



undefined8 d_maybe_print_fold_expression(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 uVar9;
  uint *puVar10;
  
  pcVar3 = (char *)**(undefined8 **)(*(longlong *)(param_3 + 0x10) + 0x10);
  if (*pcVar3 != 'f') {
    return 0;
  }
  puVar10 = (uint *)0x0;
  puVar8 = *(uint **)(*(longlong *)(param_3 + 0x18) + 0x18);
  piVar4 = *(int **)(*(longlong *)(param_3 + 0x18) + 0x10);
  if (*puVar8 == 0x3d) {
    puVar10 = *(uint **)(puVar8 + 6);
    puVar8 = *(uint **)(puVar8 + 4);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  cVar1 = pcVar3[1];
  if (cVar1 == 'l') {
    puVar5 = &DAT_140024b9a;
    lVar6 = *(longlong *)(param_1 + 0x100);
    do {
      uVar9 = *puVar5;
      if (lVar6 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        puVar5 = puVar5 + 1;
        *param_1 = uVar9;
        param_1[0x108] = uVar9;
        *(undefined8 *)(param_1 + 0x100) = 1;
        if (puVar5 == &DAT_140024b9e) break;
        uVar9 = *puVar5;
        lVar6 = 1;
      }
      puVar5 = puVar5 + 1;
      *(longlong *)(param_1 + 0x100) = lVar6 + 1;
      param_1[lVar6] = uVar9;
      param_1[0x108] = uVar9;
      lVar6 = lVar6 + 1;
    } while (puVar5 != &DAT_140024b9e);
    d_print_expr_op(param_1,0x11,piVar4);
  }
  else {
    if ('l' < cVar1) {
      if (cVar1 == 'r') {
        lVar6 = *(longlong *)(param_1 + 0x100);
        if (lVar6 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          lVar6 = 0;
          lVar7 = 1;
        }
        else {
          lVar7 = lVar6 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar7;
        param_1[lVar6] = 0x28;
        param_1[0x108] = 0x28;
        d_print_subexpr(param_1,0x11,puVar8);
        d_print_expr_op(param_1,0x11,piVar4);
        puVar5 = &DAT_140024b9f;
        lVar6 = *(longlong *)(param_1 + 0x100);
        do {
          uVar9 = *puVar5;
          if (lVar6 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
            puVar5 = puVar5 + 1;
            *param_1 = uVar9;
            *(undefined8 *)(param_1 + 0x100) = 1;
            param_1[0x108] = uVar9;
            if (puVar5 == &DAT_140024ba3) break;
            uVar9 = *puVar5;
            lVar6 = 1;
          }
          puVar5 = puVar5 + 1;
          *(longlong *)(param_1 + 0x100) = lVar6 + 1;
          param_1[lVar6] = uVar9;
          param_1[0x108] = uVar9;
          lVar6 = lVar6 + 1;
        } while (puVar5 != &DAT_140024ba3);
      }
      goto LAB_14000f5f8;
    }
    if ((cVar1 != 'L') && (cVar1 != 'R')) goto LAB_14000f5f8;
    lVar6 = *(longlong *)(param_1 + 0x100);
    if (lVar6 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      lVar6 = 0;
      lVar7 = 1;
    }
    else {
      lVar7 = lVar6 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar7;
    param_1[lVar6] = 0x28;
    param_1[0x108] = 0x28;
    d_print_subexpr(param_1,0x11,puVar8);
    d_print_expr_op(param_1,0x11,piVar4);
    puVar5 = &DAT_14002480b;
    lVar6 = *(longlong *)(param_1 + 0x100);
    do {
      uVar9 = *puVar5;
      if (lVar6 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        puVar5 = puVar5 + 1;
        *param_1 = uVar9;
        *(undefined8 *)(param_1 + 0x100) = 1;
        param_1[0x108] = uVar9;
        if (puVar5 == &DAT_14002480e) break;
        uVar9 = *puVar5;
        lVar6 = 1;
      }
      puVar5 = puVar5 + 1;
      *(longlong *)(param_1 + 0x100) = lVar6 + 1;
      param_1[lVar6] = uVar9;
      param_1[0x108] = uVar9;
      lVar6 = lVar6 + 1;
    } while (puVar5 != &DAT_14002480e);
    d_print_expr_op(param_1,0x11,piVar4);
    puVar8 = puVar10;
  }
  d_print_subexpr(param_1,0x11,puVar8);
  lVar6 = *(longlong *)(param_1 + 0x100);
  if (lVar6 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
    lVar7 = 1;
    lVar6 = 0;
  }
  else {
    lVar7 = lVar6 + 1;
  }
  *(longlong *)(param_1 + 0x100) = lVar7;
  param_1[lVar6] = 0x29;
  param_1[0x108] = 0x29;
LAB_14000f5f8:
  *(undefined4 *)(param_1 + 0x13c) = uVar2;
  return 1;
}



undefined8 d_maybe_print_designated_init(undefined1 *param_1,undefined8 param_2,uint *param_3)

{
  char *pcVar1;
  uint *puVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  
  if (((*param_3 & 0xfffffffd) == 0x39) &&
     (pcVar1 = (char *)**(undefined8 **)(*(longlong *)(param_3 + 4) + 0x10), *pcVar1 == 'd')) {
    uVar5 = (byte)pcVar1[1] - 0x58;
    if (((byte)uVar5 < 0x21) && ((0x100020001U >> ((ulonglong)uVar5 & 0x3f) & 1) != 0)) {
      puVar2 = *(uint **)(*(longlong *)(param_3 + 6) + 0x10);
      puVar9 = *(uint **)(*(longlong *)(param_3 + 6) + 0x18);
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (pcVar1[1] == 0x69) {
        if (lVar7 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          lVar7 = 0;
          lVar8 = 1;
        }
        else {
          lVar8 = lVar7 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar8;
        param_1[lVar7] = 0x2e;
        uVar3 = 0x2e;
      }
      else {
        if (lVar7 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          lVar7 = 0;
          lVar8 = 1;
        }
        else {
          lVar8 = lVar7 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar8;
        param_1[lVar7] = 0x5b;
        uVar3 = 0x5b;
      }
      param_1[0x108] = uVar3;
      d_print_comp(param_1,0x11,puVar2);
      cVar4 = pcVar1[1];
      if (cVar4 == 'X') {
        puVar6 = &DAT_140024ba4;
        lVar7 = *(longlong *)(param_1 + 0x100);
        do {
          uVar3 = *puVar6;
          if (lVar7 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
            puVar6 = puVar6 + 1;
            *param_1 = uVar3;
            *(undefined8 *)(param_1 + 0x100) = 1;
            param_1[0x108] = uVar3;
            if (puVar6 == &DAT_140024ba9) break;
            uVar3 = *puVar6;
            lVar7 = 1;
          }
          puVar6 = puVar6 + 1;
          *(longlong *)(param_1 + 0x100) = lVar7 + 1;
          param_1[lVar7] = uVar3;
          param_1[0x108] = uVar3;
          lVar7 = lVar7 + 1;
        } while (puVar6 != &DAT_140024ba9);
        d_print_comp(param_1,0x11,*(uint **)(puVar9 + 4));
        puVar9 = *(uint **)(puVar9 + 6);
        cVar4 = pcVar1[1];
      }
      if (cVar4 != 'i') {
        lVar7 = *(longlong *)(param_1 + 0x100);
        if (lVar7 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar7 = 0;
        }
        else {
          lVar8 = lVar7 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar8;
        param_1[lVar7] = 0x5d;
        param_1[0x108] = 0x5d;
      }
      if (((((*puVar9 & 0xfffffffd) == 0x39) &&
           (*(char *)**(undefined8 **)(*(longlong *)(puVar9 + 4) + 0x10) == 'd')) &&
          (uVar5 = (byte)((char *)**(undefined8 **)(*(longlong *)(puVar9 + 4) + 0x10))[1] - 0x58,
          (byte)uVar5 < 0x21)) && ((0x100020001U >> ((ulonglong)uVar5 & 0x3f) & 1) != 0)) {
        d_print_comp(param_1,0x11,puVar9);
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x100);
        if (lVar7 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar7 = 0;
        }
        else {
          lVar8 = lVar7 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar8;
        param_1[lVar7] = 0x3d;
        param_1[0x108] = 0x3d;
        d_print_subexpr(param_1,0x11,puVar9);
      }
      return 1;
    }
  }
  return 0;
}



char * __cxa_demangle(char *param_1,char *param_2,ulonglong *param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined7 extraout_var;
  size_t sVar2;
  char *_Src;
  ulonglong uVar3;
  char *local_48;
  undefined1 local_40 [16];
  int local_30;
  
  if ((param_1 == (char *)0x0) || ((param_2 != (char *)0x0 && (param_3 == (ulonglong *)0x0)))) {
    if (param_4 == (undefined4 *)0x0) {
      return (char *)0x0;
    }
    *param_4 = 0xfffffffd;
    return (char *)0x0;
  }
  local_48 = (char *)0x0;
  local_30 = 0;
  local_40 = (undefined1  [16])0x0;
  bVar1 = d_demangle_callback_constprop_0(param_1,d_growable_string_callback_adapter,&local_48);
  _Src = local_48;
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    free(local_48);
    if (param_4 == (undefined4 *)0x0) {
      return (char *)0x0;
    }
LAB_14000fd9d:
    *param_4 = 0xfffffffe;
    return (char *)0x0;
  }
  if (local_30 == 0) {
    uVar3 = local_40._8_8_;
    if (local_48 == (char *)0x0) {
      if (param_4 == (undefined4 *)0x0) {
        return (char *)0x0;
      }
      if (local_40._8_8_ != 1) goto LAB_14000fd9d;
      goto LAB_14000fd48;
    }
  }
  else {
    uVar3 = 1;
    if (local_48 == (char *)0x0) {
      if (param_4 == (undefined4 *)0x0) {
        return (char *)0x0;
      }
LAB_14000fd48:
      *param_4 = 0xffffffff;
      return (char *)0x0;
    }
  }
  if (param_2 == (char *)0x0) {
    if (param_3 == (ulonglong *)0x0) goto LAB_14000fd0d;
  }
  else {
    sVar2 = strlen(local_48);
    if (sVar2 < *param_3) {
      memcpy(param_2,_Src,sVar2 + 1);
      free(_Src);
      _Src = param_2;
      goto LAB_14000fd0d;
    }
    free(param_2);
  }
  *param_3 = uVar3;
LAB_14000fd0d:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return _Src;
}



uint __gcclibcxx_demangle_callback(char *param_1,undefined *param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined7 extraout_var;
  
  if ((param_1 == (char *)0x0) || (param_2 == (undefined *)0x0)) {
    uVar2 = 0xfffffffd;
  }
  else {
    bVar1 = d_demangle_callback_constprop_0(param_1,param_2,param_3);
    uVar2 = -(uint)((int)CONCAT71(extraout_var,bVar1) == 0) & 0xfffffffe;
  }
  return uVar2;
}



int __cdecl _text(int _Argc,char **_Argv,char **_Env)

{
  BOOL BVar1;
  int iVar2;
  undefined8 *puVar3;
  _STARTUPINFOA local_88;
  IMAGE_DOS_HEADER *local_20;
  uint local_18;
  uint local_14;
  BYTE *local_10;
  
  __main();
  local_20 = &IMAGE_DOS_HEADER_140000000;
  puVar3 = (undefined8 *)__p__acmdln();
  local_10 = (BYTE *)*puVar3;
  if (local_10 == (BYTE *)0x0) {
    local_10 = "";
  }
  else {
    local_18 = 0;
    while ((' ' < (char)*local_10 || ((*local_10 != '\0' && (local_18 != 0))))) {
      if (*local_10 == '\"') {
        local_18 = (uint)(local_18 == 0);
      }
      BVar1 = IsDBCSLeadByte(*local_10);
      if ((BVar1 != 0) && (local_10[1] != '\0')) {
        local_10 = local_10 + 1;
      }
      local_10 = local_10 + 1;
    }
    for (; (*local_10 != '\0' && ((char)*local_10 < '!')); local_10 = local_10 + 1) {
    }
  }
  GetStartupInfoA(&local_88);
  if ((local_88.dwFlags & 1) == 0) {
    local_14 = 10;
  }
  else {
    local_14 = (uint)local_88.wShowWindow;
  }
  iVar2 = WinMain((HINSTANCE)local_20,(HINSTANCE)0x0,(LPSTR)local_10,local_14);
  return iVar2;
}



void __do_global_dtors(void)

{
  for (; *(longlong *)p_0 != 0; p_0 = p_0 + 8) {
    (**(code **)p_0)();
  }
  return;
}



void __do_global_ctors(void)

{
  uint local_10;
  uint local_c;
  
  local_c = 0;
  while ((&__RUNTIME_PSEUDO_RELOC_LIST_END__)[local_c + 1] != 0) {
    local_c = local_c + 1;
  }
  for (local_10 = local_c; local_10 != 0; local_10 = local_10 - 1) {
    (*(code *)(&__RUNTIME_PSEUDO_RELOC_LIST_END__)[local_10])();
  }
  atexit(__do_global_dtors);
  return;
}



void __main(void)

{
  if (initialized == 0) {
    initialized = 1;
    __do_global_ctors();
  }
  return;
}



int __cdecl _text(void)

{
  return 0;
}



void tls_callback_0(undefined8 param_1,int param_2)

{
  longlong *local_10;
  
  if (_CRT_MT != 2) {
    _CRT_MT = 2;
  }
  if (param_2 == 2) {
    for (local_10 = &_CRT_XDZ; local_10 != &_CRT_XDZ; local_10 = local_10 + 1) {
      if (*local_10 != 0) {
        (*(code *)*local_10)();
      }
    }
  }
  else if (param_2 == 1) {
    __mingw_TLScallback(param_1,1);
  }
  return;
}



undefined8 __tlregdtor(void)

{
  return 0;
}



void tls_callback_1(undefined8 param_1,uint param_2)

{
  if ((param_2 == 3) || (param_2 == 0)) {
    __mingw_TLScallback(param_1,param_2);
  }
  return;
}



int __cdecl _text(_exception *_Except)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  char *pcVar5;
  FILE *_File;
  char *local_50;
  
  iVar4 = _Except->type;
  if (iVar4 == 6) {
    local_50 = "Partial loss of significance (PLOSS)";
    goto LAB_1400101d3;
  }
  if (iVar4 < 7) {
    if (iVar4 == 5) {
      local_50 = "Total loss of significance (TLOSS)";
      goto LAB_1400101d3;
    }
    if (iVar4 < 6) {
      if (iVar4 == 4) {
        local_50 = "The result is too small to be represented (UNDERFLOW)";
        goto LAB_1400101d3;
      }
      if (iVar4 < 5) {
        if (iVar4 == 3) {
          local_50 = "Overflow range error (OVERFLOW)";
          goto LAB_1400101d3;
        }
        if (iVar4 < 4) {
          if (iVar4 == 1) {
            local_50 = "Argument domain error (DOMAIN)";
            goto LAB_1400101d3;
          }
          if (iVar4 == 2) {
            local_50 = "Argument singularity (SIGN)";
            goto LAB_1400101d3;
          }
        }
      }
    }
  }
  local_50 = "Unknown error";
LAB_1400101d3:
  dVar1 = _Except->retval;
  dVar2 = _Except->arg2;
  dVar3 = _Except->arg1;
  pcVar5 = _Except->name;
  _File = __acrt_iob_func(2);
  fprintf(_File,"_matherr(): %s in %s(%g, %g)  (retval=%g)\n",local_50,pcVar5,dVar3,dVar2,dVar1);
  return 0;
}



void _text(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FILE *pFVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pFVar1 = __acrt_iob_func(2);
  fprintf(pFVar1,"Mingw-w64 runtime failure:\n");
  pFVar1 = __acrt_iob_func(2);
  vfprintf(pFVar1,param_1,(va_list)&local_res10);
                    // WARNING: Subroutine does not return
  abort();
}



void mark_section_writable(ulonglong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  IMAGE_DOS_HEADER *pIVar3;
  SIZE_T SVar4;
  PDWORD lpflOldProtect;
  ulonglong uVar5;
  _MEMORY_BASIC_INFORMATION local_48;
  PIMAGE_SECTION_HEADER local_18;
  uint local_10;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (maxSections <= local_c) {
      local_18 = __mingw_GetSectionForAddress(param_1);
      if (local_18 == (PIMAGE_SECTION_HEADER)0x0) {
        _text("Address %p has no image-section",param_1,param_3,param_4);
      }
      *(PIMAGE_SECTION_HEADER *)(the_secs + (longlong)local_c * 0x28 + 0x20) = local_18;
      *(undefined4 *)((longlong)local_c * 0x28 + the_secs) = 0;
      pIVar3 = _GetPEImageBase();
      uVar5 = (ulonglong)local_18->VirtualAddress;
      *(char **)((longlong)local_c * 0x28 + the_secs + 0x18) = pIVar3->e_magic + uVar5;
      SVar4 = VirtualQuery(*(LPCVOID *)((longlong)local_c * 0x28 + the_secs + 0x18),&local_48,0x30);
      if (SVar4 == 0) {
        _text("  VirtualQuery failed for %d bytes at address %p",
              (ulonglong)(local_18->Misc).PhysicalAddress,
              *(undefined8 *)((longlong)local_c * 0x28 + the_secs + 0x18),uVar5);
      }
      if ((((local_48.Protect != 0x40) && (local_48.Protect != 4)) && (local_48.Protect != 0x80)) &&
         (local_48.Protect != 8)) {
        if (local_48.Protect == 2) {
          local_10 = 4;
        }
        else {
          local_10 = 0x40;
        }
        *(PVOID *)(the_secs + (longlong)local_c * 0x28 + 8) = local_48.BaseAddress;
        *(SIZE_T *)(the_secs + (longlong)local_c * 0x28 + 0x10) = local_48.RegionSize;
        lpflOldProtect = (PDWORD)((longlong)local_c * 0x28 + the_secs);
        uVar5 = (ulonglong)local_10;
        BVar1 = VirtualProtect(local_48.BaseAddress,local_48.RegionSize,local_10,lpflOldProtect);
        if (BVar1 == 0) {
          DVar2 = GetLastError();
          _text("  VirtualProtect failed with code 0x%x",(ulonglong)DVar2,uVar5,lpflOldProtect);
        }
      }
      maxSections = maxSections + 1;
      return;
    }
    if ((*(ulonglong *)((longlong)local_c * 0x28 + the_secs + 0x18) <= param_1) &&
       (param_3 = the_secs,
       param_1 < (ulonglong)*(uint *)(*(longlong *)((longlong)local_c * 0x28 + the_secs + 0x20) + 8)
                 + *(longlong *)((longlong)local_c * 0x28 + the_secs + 0x18))) break;
    local_c = local_c + 1;
  }
  return;
}



void restore_modified_sections(void)

{
  DWORD local_10;
  int local_c;
  
  for (local_c = 0; local_c < maxSections; local_c = local_c + 1) {
    if (*(int *)((longlong)local_c * 0x28 + the_secs) != 0) {
      VirtualProtect(*(LPVOID *)((longlong)local_c * 0x28 + the_secs + 8),
                     *(SIZE_T *)((longlong)local_c * 0x28 + the_secs + 0x10),
                     *(DWORD *)((longlong)local_c * 0x28 + the_secs),&local_10);
    }
  }
  return;
}



void __write_memory(void *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    mark_section_writable((ulonglong)param_1,param_2,param_3,param_4);
    memcpy(param_1,param_2,param_3);
  }
  return;
}



void do_pseudo_reloc(uint *param_1,uint *param_2,ulonglong *param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulonglong *puVar4;
  int local_54;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  uint local_34;
  longlong local_30;
  ulonglong *local_28;
  uint *local_20;
  uint *local_18;
  uint *local_10;
  
  local_28 = (ulonglong *)((longlong)param_2 - (longlong)param_1);
  if (7 < (longlong)local_28) {
    local_10 = param_1;
    if ((((0xb < (longlong)local_28) && (*param_1 == 0)) && (param_1[1] == 0)) && (param_1[2] == 0))
    {
      local_10 = param_1 + 3;
    }
    if ((*local_10 == 0) && (local_10[1] == 0)) {
      puVar4 = param_3;
      puVar1 = local_10;
      if (local_10[2] != 1) {
        _text("  Unknown pseudo relocation protocol version %d.\n",(ulonglong)local_10[2],param_3,
              param_4);
        puVar1 = local_10;
      }
      while (local_18 = puVar1 + 3, local_18 < param_2) {
        local_28 = (ulonglong *)((longlong)param_3 + (ulonglong)puVar1[4]);
        local_30 = *(longlong *)((longlong)param_3 + (ulonglong)*local_18);
        uVar2 = puVar1[5] & 0xff;
        if (uVar2 == 0x40) {
          local_50 = *local_28;
        }
        else if (uVar2 < 0x41) {
          if (uVar2 == 0x20) {
            local_50 = (ulonglong)(uint)*local_28;
            if (((uint)*local_28 & 0x80000000) != 0) {
              local_50 = local_50 | 0xffffffff00000000;
            }
          }
          else {
            if (0x20 < uVar2) goto LAB_1400108bc;
            if (uVar2 == 8) {
              local_50 = (ulonglong)(byte)*local_28;
              if (((byte)*local_28 & 0x80) != 0) {
                local_50 = local_50 | 0xffffffffffffff00;
              }
            }
            else {
              if (uVar2 != 0x10) goto LAB_1400108bc;
              local_50 = (ulonglong)(ushort)*local_28;
              if (((ushort)*local_28 & 0x8000) != 0) {
                local_50 = local_50 | 0xffffffffffff0000;
              }
            }
          }
        }
        else {
LAB_1400108bc:
          local_50 = 0;
          _text("  Unknown pseudo relocation bit size %d.\n",(ulonglong)(puVar1[5] & 0xff),puVar4,
                param_4);
        }
        local_50 = local_30 + (local_50 - ((ulonglong)*local_18 + (longlong)param_3));
        local_34 = local_18[2] & 0xff;
        if (local_34 < 0x40) {
          bVar3 = (byte)local_18[2];
          local_40 = (1L << (bVar3 & 0x3f)) + -1;
          local_48 = -1L << (bVar3 - 1 & 0x3f);
          if ((local_40 < (longlong)local_50) || ((longlong)local_50 < local_48)) {
            puVar4 = local_28;
            param_4 = local_30;
            _text("%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n"
                  ,(ulonglong)local_34,local_28,local_30);
          }
        }
        uVar2 = local_18[2] & 0xff;
        if (uVar2 == 0x40) {
          puVar4 = (ulonglong *)0x8;
          __write_memory(local_28,&local_50,8,param_4);
          puVar1 = local_18;
        }
        else {
          puVar1 = local_18;
          if (uVar2 < 0x41) {
            if (uVar2 == 0x20) {
              puVar4 = (ulonglong *)0x4;
              __write_memory(local_28,&local_50,4,param_4);
              puVar1 = local_18;
            }
            else if (uVar2 < 0x21) {
              if (uVar2 == 8) {
                puVar4 = (ulonglong *)0x1;
                __write_memory(local_28,&local_50,1,param_4);
                puVar1 = local_18;
              }
              else if (uVar2 == 0x10) {
                puVar4 = (ulonglong *)0x2;
                __write_memory(local_28,&local_50,2,param_4);
                puVar1 = local_18;
              }
            }
          }
        }
      }
    }
    else {
      for (local_20 = local_10; local_20 < param_2; local_20 = local_20 + 2) {
        local_28 = (ulonglong *)((longlong)param_3 + (ulonglong)local_20[1]);
        local_54 = *local_20 + *(int *)local_28;
        __write_memory(local_28,&local_54,4,param_4);
      }
    }
  }
  return;
}



// WARNING: Function: ___chkstk_ms replaced with injection: alloca_probe

void _pei386_runtime_relocator(void)

{
  longlong lVar1;
  word wVar2;
  undefined6 extraout_var;
  longlong in_R9;
  undefined8 auStack_40 [6];
  undefined1 auStack_10 [4];
  int local_c;
  
  if (was_init_0 == 0) {
    was_init_0 = 1;
    auStack_40[0] = 0x140010a5a;
    wVar2 = __mingw_GetSectionCount();
    local_c = (int)CONCAT62(extraout_var,wVar2);
    auStack_40[0] = 0x140010a82;
    lVar1 = -((longlong)local_c * 0x28 + 0xfU & 0xfffffffffffffff0);
    the_secs = auStack_10 + lVar1;
    maxSections = 0;
    *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x140010ac7;
    do_pseudo_reloc((uint *)&__RUNTIME_PSEUDO_RELOC_LIST_END__,
                    (uint *)&__RUNTIME_PSEUDO_RELOC_LIST_END__,
                    (ulonglong *)&IMAGE_DOS_HEADER_140000000,in_R9);
    *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x140010acc;
    restore_modified_sections();
  }
  return;
}



void __mingw_raise_matherr
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (stUserMathErr != (code *)0x0) {
    local_18 = param_5;
    local_38[0] = param_1;
    local_30 = param_2;
    local_28 = param_3;
    local_20 = param_4;
    (*stUserMathErr)(local_38);
  }
  return;
}



void __mingw_setusermatherr(undefined8 param_1)

{
  stUserMathErr = param_1;
  __setusermatherr(param_1);
  return;
}



undefined4 _text(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  code *extraout_RAX;
  code *extraout_RAX_00;
  code *extraout_RAX_01;
  undefined4 local_c;
  
  local_c = 1;
  bVar2 = false;
  if ((param_1[1] & 2) != 0) {
    return 1;
  }
  if (((*param_1 & 0x20ffffff) == 0x20474343) && ((param_1[1] & 1) == 0)) {
    return 0;
  }
  uVar1 = *param_1;
  if (uVar1 == 0xc0000096) {
LAB_140010d0b:
    signal(4);
    if (extraout_RAX_00 == (code *)0x1) {
      signal(4);
      return 0;
    }
    if (extraout_RAX_00 != (code *)0x0) {
      (*extraout_RAX_00)(4);
      return 0;
    }
    return 1;
  }
  if (0xc0000096 < uVar1) {
    return 1;
  }
  if (0xc0000095 < uVar1) {
    return 1;
  }
  if (uVar1 < 0xc0000094) {
    if (uVar1 != 0xc0000093) {
      if (0xc0000093 < uVar1) {
        return 1;
      }
      if (uVar1 == 0xc0000092) {
        return 0;
      }
      if (0xc0000092 < uVar1) {
        return 1;
      }
      if (0xc0000091 < uVar1) {
        return 1;
      }
      if (uVar1 < 0xc000008d) {
        if (uVar1 == 0xc000008c) {
          return 0;
        }
        if (0xc000008c < uVar1) {
          return 1;
        }
        if (uVar1 != 0xc000001d) {
          if (0xc000001d < uVar1) {
            return 1;
          }
          if (uVar1 == 0xc0000008) {
            return 0;
          }
          if (0xc0000008 < uVar1) {
            return 1;
          }
          if (uVar1 == 0x80000002) {
            return 0;
          }
          if (uVar1 != 0xc0000005) {
            return 1;
          }
          signal(0xb);
          if (extraout_RAX != (code *)0x1) {
            if (extraout_RAX != (code *)0x0) {
              (*extraout_RAX)(0xb);
              return 0;
            }
            return 1;
          }
          signal(0xb);
          return 0;
        }
        goto LAB_140010d0b;
      }
    }
    bVar2 = true;
  }
  signal(8);
  if (extraout_RAX_01 == (code *)0x1) {
    signal(8);
    if (bVar2) {
      _text();
    }
    local_c = 0;
  }
  else if (extraout_RAX_01 != (code *)0x0) {
    (*extraout_RAX_01)(8);
    local_c = 0;
  }
  return local_c;
}



int _gnu_exception_handler(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  code *extraout_RAX;
  code *extraout_RAX_00;
  code *extraout_RAX_01;
  int local_c;
  
  local_c = 0;
  bVar2 = false;
  if (((*(uint *)*param_1 & 0x20ffffff) == 0x20474343) && ((*(uint *)(*param_1 + 4) & 1) == 0)) {
    return -1;
  }
  uVar1 = *(uint *)*param_1;
  if (uVar1 == 0xc0000096) {
LAB_140010f4a:
    signal(4);
    if (extraout_RAX_00 == (code *)0x1) {
      signal(4);
      local_c = -1;
    }
    else if (extraout_RAX_00 != (code *)0x0) {
      (*extraout_RAX_00)(4);
      local_c = -1;
    }
    goto LAB_140011010;
  }
  if ((0xc0000096 < uVar1) || (0xc0000095 < uVar1)) goto LAB_140011010;
  if (uVar1 < 0xc0000094) {
    if (uVar1 != 0xc0000093) {
      if (0xc0000093 < uVar1) goto LAB_140011010;
      if (uVar1 != 0xc0000092) {
        if ((0xc0000092 < uVar1) || (0xc0000091 < uVar1)) goto LAB_140011010;
        if (0xc000008c < uVar1) goto LAB_140010f9e;
        if (uVar1 != 0xc000008c) {
          if (0xc000008c < uVar1) goto LAB_140011010;
          if (uVar1 == 0xc000001d) goto LAB_140010f4a;
          if (0xc000001d < uVar1) goto LAB_140011010;
          if (uVar1 != 0xc0000008) {
            if (0xc0000008 < uVar1) goto LAB_140011010;
            if (uVar1 != 0x80000002) {
              if (uVar1 == 0xc0000005) {
                signal(0xb);
                if (extraout_RAX == (code *)0x1) {
                  signal(0xb);
                  local_c = -1;
                }
                else if (extraout_RAX != (code *)0x0) {
                  (*extraout_RAX)(0xb);
                  local_c = -1;
                }
              }
              goto LAB_140011010;
            }
          }
        }
      }
      local_c = -1;
      goto LAB_140011010;
    }
LAB_140010f9e:
    bVar2 = true;
  }
  signal(8);
  if (extraout_RAX_01 == (code *)0x1) {
    signal(8);
    if (bVar2) {
      _text();
    }
    local_c = -1;
  }
  else if (extraout_RAX_01 != (code *)0x0) {
    (*extraout_RAX_01)(8);
    local_c = -1;
  }
LAB_140011010:
  if ((local_c == 0) && (__mingw_oldexcpt_handler != (code *)0x0)) {
    local_c = (*__mingw_oldexcpt_handler)(param_1);
  }
  return local_c;
}



undefined8 ___w64_mingwthr_add_key_dtor(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (__mingwthr_cs_init == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = calloc(1,0x18);
    if (puVar2 == (undefined4 *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      *puVar2 = param_1;
      *(undefined8 *)(puVar2 + 2) = param_2;
      EnterCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
      *(undefined4 **)(puVar2 + 4) = key_dtor_list;
      key_dtor_list = puVar2;
      LeaveCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
      uVar1 = 0;
    }
  }
  return uVar1;
}



undefined8 ___w64_mingwthr_remove_key_dtor(int param_1)

{
  int *local_18;
  int *local_10;
  
  if (__mingwthr_cs_init != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
    local_10 = (int *)0x0;
    for (local_18 = key_dtor_list; local_18 != (int *)0x0; local_18 = *(int **)(local_18 + 4)) {
      if (param_1 == *local_18) {
        if (local_10 == (int *)0x0) {
          key_dtor_list = *(int **)(local_18 + 4);
        }
        else {
          *(undefined8 *)(local_10 + 4) = *(undefined8 *)(local_18 + 4);
        }
        free(local_18);
        break;
      }
      local_10 = local_18;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
  }
  return 0;
}



void __mingwthr_run_key_dtors(void)

{
  DWORD DVar1;
  LPVOID pvVar2;
  DWORD *local_10;
  
  if (__mingwthr_cs_init != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
    for (local_10 = key_dtor_list; local_10 != (DWORD *)0x0; local_10 = *(DWORD **)(local_10 + 4)) {
      pvVar2 = TlsGetValue(*local_10);
      DVar1 = GetLastError();
      if ((DVar1 == 0) && (pvVar2 != (LPVOID)0x0)) {
        (**(code **)(local_10 + 2))(pvVar2);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
  }
  return;
}



undefined8 __mingw_TLScallback(undefined8 param_1,uint param_2)

{
  void *pvVar1;
  void *local_10;
  
  if (param_2 == 3) {
    __mingwthr_run_key_dtors();
  }
  else if (param_2 < 4) {
    if (param_2 == 2) {
      _text();
    }
    else if (param_2 < 3) {
      if (param_2 == 0) {
        __mingwthr_run_key_dtors();
        if (__mingwthr_cs_init == 1) {
          local_10 = key_dtor_list;
          while (local_10 != (void *)0x0) {
            pvVar1 = *(void **)((longlong)local_10 + 0x10);
            free(local_10);
            local_10 = pvVar1;
          }
          key_dtor_list = (void *)0x0;
          __mingwthr_cs_init = 0;
          DeleteCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
        }
      }
      else if (param_2 == 1) {
        if (__mingwthr_cs_init == 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
        }
        __mingwthr_cs_init = 1;
      }
    }
  }
  return 1;
}



void __cdecl _text(void)

{
  return;
}



BOOL __cdecl _text(PBYTE pImageBase)

{
  BOOL BVar1;
  
  if (*(short *)pImageBase == 0x5a4d) {
    if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
      if ((short)*(int *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x20b) {
        BVar1 = 1;
      }
      else {
        BVar1 = 0;
      }
    }
    else {
      BVar1 = 0;
    }
  }
  else {
    BVar1 = 0;
  }
  return BVar1;
}



PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  uint local_14;
  PIMAGE_SECTION_HEADER local_10;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  local_14 = 0;
  local_10 = (PIMAGE_SECTION_HEADER)
             (pImageBase +
             (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + (longlong)iVar1 + 0x18);
  while( true ) {
    if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) <= local_14) {
      return (PIMAGE_SECTION_HEADER)0x0;
    }
    if ((local_10->VirtualAddress <= rva) &&
       (rva < (local_10->Misc).PhysicalAddress + local_10->VirtualAddress)) break;
    local_14 = local_14 + 1;
    local_10 = local_10 + 1;
  }
  return local_10;
}



// WARNING: Enum "SectionFlags": Some values do not have unique names

IMAGE_SECTION_HEADER * _FindPESectionByName(char *param_1)

{
  BOOL BVar1;
  int iVar2;
  size_t sVar3;
  uint local_14;
  IMAGE_SECTION_HEADER *local_10;
  
  sVar3 = strlen(param_1);
  if ((sVar3 < 9) && (BVar1 = _text((PBYTE)&IMAGE_DOS_HEADER_140000000), BVar1 != 0)) {
    local_10 = &IMAGE_SECTION_HEADER_140000188;
    for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
      iVar2 = strncmp(local_10->Name,param_1,8);
      if (iVar2 == 0) {
        return local_10;
      }
      local_10 = local_10 + 1;
    }
  }
  return (IMAGE_SECTION_HEADER *)0x0;
}



PIMAGE_SECTION_HEADER __mingw_GetSectionForAddress(longlong param_1)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  
  BVar1 = _text((PBYTE)&IMAGE_DOS_HEADER_140000000);
  if (BVar1 == 0) {
    p_Var2 = (PIMAGE_SECTION_HEADER)0x0;
  }
  else {
    p_Var2 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_140000000,param_1 - 0x140000000);
  }
  return p_Var2;
}



word __mingw_GetSectionCount(void)

{
  word wVar1;
  BOOL BVar2;
  
  BVar2 = _text((PBYTE)&IMAGE_DOS_HEADER_140000000);
  if (BVar2 == 0) {
    wVar1 = 0;
  }
  else {
    wVar1 = 0x14;
  }
  return wVar1;
}



// WARNING: Enum "SectionFlags": Some values do not have unique names

IMAGE_SECTION_HEADER * _FindPESectionExec(longlong param_1)

{
  BOOL BVar1;
  longlong local_res8;
  uint local_14;
  IMAGE_SECTION_HEADER *local_10;
  
  BVar1 = _text((PBYTE)&IMAGE_DOS_HEADER_140000000);
  if (BVar1 != 0) {
    local_10 = &IMAGE_SECTION_HEADER_140000188;
    local_res8 = param_1;
    for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
      if ((local_10->Characteristics & IMAGE_SCN_MEM_EXECUTE) != 0) {
        if (local_res8 == 0) {
          return local_10;
        }
        local_res8 = local_res8 + -1;
      }
      local_10 = local_10 + 1;
    }
  }
  return (IMAGE_SECTION_HEADER *)0x0;
}



IMAGE_DOS_HEADER * _GetPEImageBase(void)

{
  BOOL BVar1;
  IMAGE_DOS_HEADER *pIVar2;
  
  BVar1 = _text((PBYTE)&IMAGE_DOS_HEADER_140000000);
  if (BVar1 == 0) {
    pIVar2 = (IMAGE_DOS_HEADER *)0x0;
  }
  else {
    pIVar2 = &IMAGE_DOS_HEADER_140000000;
  }
  return pIVar2;
}



BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  uint uVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  
  BVar1 = _text((PBYTE)&IMAGE_DOS_HEADER_140000000);
  if (BVar1 == 0) {
    uVar2 = 0;
  }
  else {
    p_Var3 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_140000000,(DWORD_PTR)(pTarget + -0x140000000));
    if (p_Var3 == (PIMAGE_SECTION_HEADER)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = ~p_Var3->Characteristics >> 0x1f;
    }
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x0001400117b1)
// WARNING: Removing unreachable block (ram,0x000140011774)

char * __mingw_enum_import_library_names(int param_1)

{
  BOOL BVar1;
  char *pcVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  int local_res8;
  dword *local_10;
  
  BVar1 = _text((PBYTE)&IMAGE_DOS_HEADER_140000000);
  if (BVar1 == 0) {
    pcVar2 = (char *)0x0;
  }
  else {
    p_Var3 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_140000000,0x2e000);
    if (p_Var3 == (PIMAGE_SECTION_HEADER)0x0) {
      pcVar2 = (char *)0x0;
    }
    else {
      local_10 = &DWORD_14002e000;
      local_res8 = param_1;
      while( true ) {
        if ((local_10[1] == 0) && (local_10[3] == 0)) {
          return (char *)0x0;
        }
        if (local_res8 < 1) break;
        local_res8 = local_res8 + -1;
        local_10 = local_10 + 5;
      }
      pcVar2 = IMAGE_DOS_HEADER_140000000.e_magic + local_10[3];
    }
  }
  return pcVar2;
}



// WARNING: This is an inlined function

ulonglong ___chkstk_ms(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 local_res8 [4];
  
  puVar2 = local_res8;
  uVar1 = in_RAX;
  if (0xfff < in_RAX) {
    do {
      puVar2 = puVar2 + -0x200;
      *puVar2 = *puVar2;
      uVar1 = uVar1 - 0x1000;
    } while (0x1000 < uVar1);
  }
  *(undefined8 *)((longlong)puVar2 - uVar1) = *(undefined8 *)((longlong)puVar2 - uVar1);
  return in_RAX;
}



_Unwind_Reason_Code _Unwind_ForcedUnwind_Phase2(_Unwind_Exception *exc)

{
  _Unwind_Reason_Code _Var1;
  _Unwind_Exception *local_res8 [4];
  
                    // Unresolved local var: _Unwind_Stop_Fn stop@[???]
                    // Unresolved local var: void * stop_argument@[???]
  local_res8[0] = exc;
  RaiseException(0x22474343,0,1,(ULONG_PTR *)local_res8);
  _Var1 = (*(code *)local_res8[0]->private_[0])
                    (1,0x1a,local_res8[0]->exception_class,local_res8[0],0,
                     local_res8[0]->private_[4]);
  return _Var1;
}



// DWARF func body range[0]: {@address 0x140011890 140011890} (25 bytes)
// DWARF func body range[1]: {@address 0x140022a80 140022a80} (6 bytes)

_Unwind_Word _Unwind_GetGR(_Unwind_Context *c,int index)

{
  if ((uint)index < 2) {
    return c->reg[(uint)index];
  }
                    // WARNING: Subroutine does not return
  abort();
}



// DWARF func body range[0]: {@address 0x1400118b0 1400118b0} (25 bytes)
// DWARF func body range[1]: {@address 0x140022a86 140022a86} (6 bytes)

void _Unwind_SetGR(_Unwind_Context *c,int index,_Unwind_Word val)

{
  if ((uint)index < 2) {
    c->reg[(uint)index] = val;
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



_Unwind_Word _Unwind_GetCFA(_Unwind_Context *c)

{
  return c->cfa;
}



_Unwind_Ptr _Unwind_GetIP(_Unwind_Context *c)

{
  return c->ra;
}



_Unwind_Ptr _Unwind_GetIPInfo(_Unwind_Context *c,int *ip_before_insn)

{
  _Unwind_Ptr _Var1;
  
  _Var1 = c->ra;
  *ip_before_insn = 0;
  return _Var1;
}



void _Unwind_SetIP(_Unwind_Context *c,_Unwind_Ptr val)

{
  c->ra = val;
  return;
}



void * _Unwind_GetLanguageSpecificData(_Unwind_Context *c)

{
  return c->disp->HandlerData;
}



_Unwind_Ptr _Unwind_GetRegionStart(_Unwind_Context *c)

{
  return (ulonglong)c->disp->FunctionEntry->BeginAddress + c->disp->ImageBase;
}



void * _Unwind_FindEnclosingFunction(void *pc)

{
  PRUNTIME_FUNCTION p_Var1;
  void *pvVar2;
  ULONG64 ImageBase;
  
                    // Unresolved local var: PRUNTIME_FUNCTION entry@[???]
  p_Var1 = RtlLookupFunctionEntry((DWORD64)pc,&ImageBase,(PUNWIND_HISTORY_TABLE)0x0);
  pvVar2 = (void *)0x0;
  if (p_Var1 != (PRUNTIME_FUNCTION)0x0) {
    pvVar2 = (void *)(p_Var1->BeginAddress + ImageBase);
  }
  return pvVar2;
}



_Unwind_Ptr _Unwind_GetDataRelBase(_Unwind_Context *c)

{
  return 0;
}



_Unwind_Ptr _Unwind_GetTextRelBase(_Unwind_Context *c)

{
  return c->disp->ImageBase;
}



int _GCC_specific_handler
              (PEXCEPTION_RECORD ms_exc,void *this_frame,PCONTEXT ms_orig_context,
              PDISPATCHER_CONTEXT ms_disp,_Unwind_Personality_Fn gcc_per)

{
  DWORD DVar1;
  PUNWIND_HISTORY_TABLE HistoryTable;
  _Unwind_Reason_Code _Var2;
  _Unwind_Action _Var3;
  _Unwind_Exception *ReturnValue;
  _Unwind_Context *p_Var4;
  _Unwind_Context gcc_context;
  
                    // Unresolved local var: DWORD ms_flags@[???]
                    // Unresolved local var: DWORD ms_code@[???]
                    // Unresolved local var: _Unwind_Exception * gcc_exc@[???]
                    // Unresolved local var: _Unwind_Action gcc_action@[???]
                    // Unresolved local var: _Unwind_Reason_Code gcc_reason@[???]
  if ((ms_exc->ExceptionFlags & 0x20) != 0) {
    ms_disp->ContextRecord->Rdx = ms_exc->ExceptionInformation[3];
    return 1;
  }
  DVar1 = ms_exc->ExceptionCode;
  ReturnValue = (_Unwind_Exception *)ms_exc->ExceptionInformation[0];
  if (DVar1 == 0x21474343) {
    if (this_frame == (void *)ms_exc->ExceptionInformation[1]) {
      RtlUnwindEx(this_frame,(PVOID)ms_exc->ExceptionInformation[2],(PEXCEPTION_RECORD)ms_exc,
                  ReturnValue,(PCONTEXT)ms_orig_context,(PUNWIND_HISTORY_TABLE)ms_disp->HistoryTable
                 );
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  else {
    gcc_context.cfa = ms_disp->ContextRecord->Rsp;
    gcc_context.ra = ms_disp->ControlPc;
    gcc_context.reg[0] = 0xdeadbeef;
    gcc_context.reg[1] = 0xdeadbeef;
    gcc_context.disp = ms_disp;
    if (DVar1 == 0x22474343) {
                    // Unresolved local var: _Unwind_Stop_Fn stop@[???]
                    // Unresolved local var: void * stop_argument@[???]
      p_Var4 = &gcc_context;
      (*(code *)ReturnValue->private_[0])
                (1,10,ReturnValue->exception_class,ReturnValue,p_Var4,ReturnValue->private_[4],
                 ReturnValue,p_Var4);
      _Var3 = 10;
    }
    else {
      if (DVar1 != 0x20474343) {
        return 1;
      }
      if ((ms_exc->ExceptionFlags & 6) == 0) {
        _Var2 = (*gcc_per)(1,1,ReturnValue->exception_class,ReturnValue,&gcc_context);
        if (_Var2 == _URC_CONTINUE_UNWIND) {
          return 1;
        }
        if ((_Var2 == _URC_HANDLER_FOUND) &&
           (_Var2 = (*gcc_per)(1,6,ReturnValue->exception_class,ReturnValue,&gcc_context),
           _Var2 == _URC_INSTALL_CONTEXT)) {
          ReturnValue->private_[1] = (_Unwind_Word)this_frame;
          ReturnValue->private_[2] = gcc_context.ra;
          ReturnValue->private_[3] = gcc_context.reg[1];
          ms_exc->ExceptionInformation[3] = gcc_context.reg[1];
          HistoryTable = (PUNWIND_HISTORY_TABLE)ms_disp->HistoryTable;
          ms_exc->NumberParameters = 4;
          ms_exc->ExceptionInformation[1] = (ULONG_PTR)this_frame;
          ms_exc->ExceptionInformation[2] = gcc_context.ra;
          RtlUnwindEx(this_frame,(PVOID)gcc_context.ra,(PEXCEPTION_RECORD)ms_exc,
                      (PVOID)gcc_context.reg[0],(PCONTEXT)ms_orig_context,HistoryTable);
        }
        goto LAB_140011a68;
      }
      _Var3 = 2;
      p_Var4 = &gcc_context;
    }
    _Var2 = (*gcc_per)(1,_Var3,ReturnValue->exception_class,ReturnValue,p_Var4);
    if (_Var2 != _URC_CONTINUE_UNWIND) {
      if (_Var2 == _URC_INSTALL_CONTEXT) {
        ms_exc->ExceptionInformation[1] = (ULONG_PTR)this_frame;
        ms_exc->ExceptionInformation[2] = gcc_context.ra;
        ms_exc->ExceptionInformation[3] = gcc_context.reg[1];
        RaiseException(0x21474343,1,4,ms_exc->ExceptionInformation);
      }
LAB_140011a68:
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 1;
}



_Unwind_Reason_Code _Unwind_RaiseException(_Unwind_Exception *exc)

{
  _Unwind_Exception *local_res8 [4];
  
  exc->private_[0] = 0;
  exc->private_[1] = 0;
  exc->private_[2] = 0;
  exc->private_[3] = 0;
  exc->private_[4] = 0;
  exc->private_[5] = 0;
  local_res8[0] = exc;
  RaiseException(0x20474343,0,1,(ULONG_PTR *)local_res8);
  return _URC_END_OF_STACK;
}



void _Unwind_Resume(_Unwind_Exception *gcc_exc)

{
  uint uVar1;
  ulonglong uVar2;
  EXCEPTION_RECORD ms_exc;
  UNWIND_HISTORY_TABLE ms_history;
  CONTEXT ms_context;
  ulonglong uVar3;
  
  ms_exc.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
  ms_exc.ExceptionAddress = (PVOID)0x0;
  ms_exc.ExceptionInformation[5] = 0;
  ms_exc.ExceptionInformation[6] = 0;
  ms_exc.ExceptionInformation[7] = 0;
  ms_exc.ExceptionInformation[8] = 0;
  ms_exc.ExceptionInformation[9] = 0;
  ms_exc.ExceptionInformation[10] = 0;
  ms_exc.ExceptionInformation[0xb] = 0;
  ms_exc.ExceptionInformation[0xc] = 0;
  ms_exc.ExceptionInformation[0xd] = 0;
  ms_exc.ExceptionInformation[0xe] = 0;
  uVar2 = 0;
  do {
    uVar1 = (int)uVar2 + 0x40;
    uVar3 = (ulonglong)uVar1;
    *(undefined1 (*) [16])((longlong)ms_history.Entry + (uVar2 - 0x18)) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)ms_history.Entry + (uVar2 - 8)) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)&ms_history.Entry[0].FunctionEntry + uVar2) =
         (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)&ms_history.Entry[1].FunctionEntry + uVar2) =
         (undefined1  [16])0x0;
    uVar2 = uVar3;
  } while (uVar1 < 0xc0);
  *(undefined1 (*) [16])((longlong)ms_history.Entry + (uVar3 - 0x18)) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)ms_history.Entry + (uVar3 - 8)) = 0;
  ms_exc.ExceptionCode = 0x20474343;
  ms_exc.ExceptionFlags = 1;
  ms_exc._28_12_ = SUB1612((undefined1  [16])0x0,4);
  ms_exc.NumberParameters = 4;
  ms_context.ContextFlags = 0x10001f;
  ms_exc.ExceptionInformation[2] = gcc_exc->private_[2];
  ms_exc.ExceptionInformation[1] = gcc_exc->private_[1];
  ms_exc.ExceptionInformation[4] = 0;
  ms_exc.ExceptionInformation[3] = gcc_exc->private_[3];
  ms_exc.ExceptionInformation[0] = (ULONG_PTR)gcc_exc;
  RtlCaptureContext(&ms_context);
  RtlUnwindEx((PVOID)gcc_exc->private_[1],(PVOID)gcc_exc->private_[2],(PEXCEPTION_RECORD)&ms_exc,
              gcc_exc,(PCONTEXT)&ms_context,(PUNWIND_HISTORY_TABLE)&ms_history);
                    // WARNING: Subroutine does not return
  abort();
}



_Unwind_Reason_Code _Unwind_Resume_or_Rethrow(_Unwind_Exception *exc)

{
  _Unwind_Exception *local_10 [2];
  
  if (exc->private_[0] == 0) {
    exc->private_[0] = 0;
    exc->private_[1] = 0;
    exc->private_[2] = 0;
    exc->private_[3] = 0;
    exc->private_[4] = 0;
    exc->private_[5] = 0;
    local_10[0] = exc;
    RaiseException(0x20474343,0,1,(ULONG_PTR *)local_10);
    return _URC_END_OF_STACK;
  }
  _Unwind_ForcedUnwind_Phase2(exc);
                    // WARNING: Subroutine does not return
  abort();
}



_Unwind_Reason_Code
_Unwind_ForcedUnwind(_Unwind_Exception *exc,_Unwind_Stop_Fn stop,void *stop_argument)

{
  exc->private_[3] = 0;
  exc->private_[4] = 0;
  exc->private_[5] = 0;
  exc->private_[0] = (_Unwind_Word)stop;
  exc->private_[4] = (_Unwind_Word)stop_argument;
  exc->private_[1] = 0;
  exc->private_[2] = 0;
  _Unwind_ForcedUnwind_Phase2(exc);
  return 0x10;
}



void _Unwind_DeleteException(_Unwind_Exception *exc)

{
  if (exc->exception_cleanup != (_Unwind_Exception_Cleanup_Fn)0x0) {
                    // WARNING: Could not recover jumptable at 0x000140011e21. Too many branches
                    // WARNING: Treating indirect jump as call
    (*exc->exception_cleanup)(_URC_FOREIGN_EXCEPTION_CAUGHT,exc);
    return;
  }
  return;
}



_Unwind_Reason_Code _Unwind_Backtrace(_Unwind_Trace_Fn trace,void *trace_argument)

{
  PDISPATCHER_CONTEXT p_Var1;
  PDISPATCHER_CONTEXT p_Var2;
  DWORD64 ControlPc;
  uint uVar3;
  _Unwind_Reason_Code _Var4;
  ulonglong uVar5;
  PEXCEPTION_ROUTINE pEVar7;
  PRUNTIME_FUNCTION p_Var8;
  _Unwind_Context gcc_context;
  DISPATCHER_CONTEXT disp_context;
  UNWIND_HISTORY_TABLE ms_history;
  CONTEXT ms_context;
  ulonglong uVar6;
  
  uVar5 = 0;
  do {
    uVar3 = (int)uVar5 + 0x40;
    uVar6 = (ulonglong)uVar3;
    *(undefined1 (*) [16])((longlong)ms_history.Entry + (uVar5 - 0x18)) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)ms_history.Entry + (uVar5 - 8)) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)&ms_history.Entry[0].FunctionEntry + uVar5) =
         (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)&ms_history.Entry[1].FunctionEntry + uVar5) =
         (undefined1  [16])0x0;
    uVar5 = uVar6;
  } while (uVar3 < 0xc0);
  *(undefined1 (*) [16])((longlong)ms_history.Entry + (uVar6 - 0x18)) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)ms_history.Entry + (uVar6 - 8)) = 0;
  gcc_context.disp = (PDISPATCHER_CONTEXT)0x0;
  ms_context.ContextFlags = 0x10001f;
  gcc_context.cfa = 0;
  gcc_context.ra = 0;
  gcc_context.reg[0] = 0;
  gcc_context.reg[1] = 0;
  disp_context.ControlPc = 0;
  disp_context.ImageBase = 0;
  disp_context.FunctionEntry = (PRUNTIME_FUNCTION)0x0;
  disp_context.EstablisherFrame = 0;
  disp_context.TargetIp = 0;
  disp_context.ContextRecord = (PCONTEXT)0x0;
  disp_context.LanguageHandler = (PEXCEPTION_ROUTINE)0x0;
  disp_context.HandlerData = (PVOID)0x0;
  disp_context.HistoryTable = (_UNWIND_HISTORY_TABLE *)0x0;
  disp_context.ScopeIndex = 0;
  disp_context.Fill0 = 0;
  RtlCaptureContext(&ms_context);
  gcc_context.disp = &disp_context;
  disp_context.ContextRecord = &ms_context;
  disp_context.HistoryTable = (_UNWIND_HISTORY_TABLE *)&ms_history;
  while( true ) {
    ControlPc = ms_context.Rip;
    p_Var1 = gcc_context.disp;
    (gcc_context.disp)->ControlPc = ms_context.Rip;
    p_Var8 = RtlLookupFunctionEntry
                       (ControlPc,&(gcc_context.disp)->ImageBase,(PUNWIND_HISTORY_TABLE)&ms_history)
    ;
    p_Var2 = gcc_context.disp;
    p_Var1->FunctionEntry = (PRUNTIME_FUNCTION)p_Var8;
    if ((PRUNTIME_FUNCTION)(gcc_context.disp)->FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return _URC_END_OF_STACK;
    }
    pEVar7 = (PEXCEPTION_ROUTINE)
             RtlVirtualUnwind(0,(gcc_context.disp)->ImageBase,ms_context.Rip,
                              (PRUNTIME_FUNCTION)(gcc_context.disp)->FunctionEntry,
                              (PCONTEXT)&ms_context,&(gcc_context.disp)->HandlerData,
                              &(gcc_context.disp)->EstablisherFrame,
                              (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    gcc_context.cfa = ms_context.Rsp;
    p_Var2->LanguageHandler = pEVar7;
    gcc_context.ra = ms_context.Rip;
    _Var4 = (*trace)(&gcc_context,trace_argument);
    if (_Var4 != _URC_NO_REASON) break;
    if (ms_context.Rip == 0) {
      return _URC_END_OF_STACK;
    }
  }
  return _URC_FATAL_PHASE1_ERROR;
}



void emutls_destroy(void *ptr)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
                    // Unresolved local var: __emutls_array * arr@[???]
                    // Unresolved local var: pointer size@[???]
                    // Unresolved local var: pointer i@[???]
  lVar1 = *(longlong *)ptr;
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)((longlong)ptr + lVar3 * 8 + 8);
      if (lVar2 != 0) {
        free(*(void **)(lVar2 + -8));
      }
      lVar3 = lVar3 + 1;
    } while (lVar1 != lVar3);
  }
  free(ptr);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// DWARF func body range[0]: {@address 0x140012050 140012050} (50 bytes)
// DWARF func body range[1]: {@address 0x140022a90 140022a90} (6 bytes)

void emutls_init(void)

{
  undefined8 uVar1;
  
  pthread_mutex_init(&emutls_mutex,(uint *)0x0);
  uVar1 = pthread_key_create(&emutls_key,0x140012000);
  if ((int)uVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



// DWARF func body range[0]: {@address 0x140012090 140012090} (596 bytes)
// DWARF func body range[1]: {@address 0x140022a96 140022a96} (6 bytes)

void * __emutls_get_address(__emutls_object *obj)

{
  ulonglong uVar1;
  size_t _Size;
  __gthread_key_t _Var2;
  ulonglong *_Memory;
  void *pvVar3;
  void *pvVar4;
  pointer pVar5;
  ulonglong uVar6;
  
                    // Unresolved local var: pointer offset@[???]
                    // Unresolved local var: __emutls_array * arr@[???]
                    // Unresolved local var: void * ret@[???]
  pVar5 = (obj->loc).offset;
  if (pVar5 == 0) {
    pthread_once((uint *)&__emutls_get_address::lexical_block_0::once,emutls_init);
    pthread_mutex_lock(&emutls_mutex);
    pVar5 = (obj->loc).offset;
    if (pVar5 == 0) {
      pVar5 = emutls_size + 1;
      emutls_size = pVar5;
      (obj->loc).offset = pVar5;
    }
    pthread_mutex_unlock(&emutls_mutex);
  }
  _Memory = (ulonglong *)pthread_getspecific(emutls_key);
  if (_Memory == (ulonglong *)0x0) {
                    // Unresolved local var: pointer size@[???]
    _Memory = calloc(pVar5 + 0x21,8);
    _Var2 = emutls_key;
    if (_Memory == (ulonglong *)0x0) goto __emutls_get_address_cold;
    *_Memory = pVar5 + 0x20;
    pthread_setspecific(_Var2,_Memory);
    pvVar4 = (void *)_Memory[pVar5];
  }
  else {
    uVar1 = *_Memory;
    if (uVar1 < pVar5) {
                    // Unresolved local var: pointer orig_size@[???]
                    // Unresolved local var: pointer size@[???]
      uVar6 = uVar1 * 2;
      if (uVar1 * 2 < pVar5) {
        uVar6 = pVar5 + 0x20;
      }
      _Memory = realloc(_Memory,uVar6 * 8 + 8);
      if (_Memory == (ulonglong *)0x0) goto __emutls_get_address_cold;
      *_Memory = uVar6;
      memset(_Memory + uVar1 + 1,0,(uVar6 - uVar1) * 8);
      pthread_setspecific(emutls_key,_Memory);
    }
    pvVar4 = (void *)_Memory[pVar5];
  }
  if (pvVar4 != (void *)0x0) {
    return pvVar4;
  }
                    // Unresolved local var: void * ptr@[???]
                    // Unresolved local var: void * ret@[???]
  uVar1 = obj->align;
  _Size = obj->size;
  if (uVar1 < 9) {
    pvVar3 = malloc(_Size + 8);
    if (pvVar3 == (void *)0x0) {
__emutls_get_address_cold:
                    // WARNING: Subroutine does not return
      abort();
    }
    *(void **)pvVar3 = pvVar3;
    pvVar3 = (void *)((longlong)pvVar3 + 8);
  }
  else {
    pvVar4 = malloc(_Size + 7 + uVar1);
    if (pvVar4 == (void *)0x0) goto __emutls_get_address_cold;
    pvVar3 = (void *)((longlong)pvVar4 + uVar1 + 7 & -uVar1);
    *(void **)((longlong)pvVar3 + -8) = pvVar4;
  }
  if (obj->templ == (void *)0x0) {
    pvVar4 = memset(pvVar3,0,_Size);
  }
  else {
    pvVar4 = memcpy(pvVar3,obj->templ,_Size);
  }
  _Memory[pVar5] = (ulonglong)pvVar4;
  return pvVar4;
}



void __emutls_register_common(__emutls_object *obj,word size,word align,void *templ)

{
  if (obj->size < size) {
    obj->size = size;
    obj->templ = (void *)0x0;
  }
  if (obj->align < align) {
    obj->align = align;
  }
  if ((templ != (void *)0x0) && (obj->size == size)) {
    obj->templ = templ;
    return;
  }
  return;
}



int _text(longlong param_1,char *param_2,double param_3,undefined8 param_4)

{
  int iVar1;
  double local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  iVar1 = __mingw_pformat(0x4000,param_1,0,param_2,&local_res18);
  *(undefined1 *)(param_1 + iVar1) = 0;
  return iVar1;
}



void __pformat_putc(int param_1,longlong *param_2)

{
  if (((*(uint *)(param_2 + 1) & 0x4000) != 0) ||
     (*(int *)((longlong)param_2 + 0x24) < (int)param_2[5])) {
    if ((*(uint *)(param_2 + 1) & 0x2000) == 0) {
      *(char *)((longlong)*(int *)((longlong)param_2 + 0x24) + *param_2) = (char)param_1;
    }
    else {
      fputc(param_1,(FILE *)*param_2);
    }
  }
  *(int *)((longlong)param_2 + 0x24) = *(int *)((longlong)param_2 + 0x24) + 1;
  return;
}



void __pformat_putchars(char *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  char *local_res8;
  int local_res10;
  
  local_res10 = param_2;
  if ((-1 < (int)param_3[2]) && ((int)param_3[2] < param_2)) {
    local_res10 = (int)param_3[2];
  }
  if (local_res10 < *(int *)((longlong)param_3 + 0xc)) {
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - local_res10;
  }
  else {
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xffffffff;
  }
  local_res8 = param_1;
  if ((0 < *(int *)((longlong)param_3 + 0xc)) &&
     (local_res8 = param_1, (*(uint *)(param_3 + 1) & 0x400) == 0)) {
    while (iVar1 = *(int *)((longlong)param_3 + 0xc), *(int *)((longlong)param_3 + 0xc) = iVar1 + -1
          , local_res8 = param_1, iVar1 != 0) {
      __pformat_putc(0x20,param_3);
    }
  }
  while (local_res10 != 0) {
    __pformat_putc((int)*local_res8,param_3);
    local_res8 = local_res8 + 1;
    local_res10 = local_res10 + -1;
  }
  while (iVar1 = *(int *)((longlong)param_3 + 0xc), *(int *)((longlong)param_3 + 0xc) = iVar1 + -1,
        0 < iVar1) {
    __pformat_putc(0x20,param_3);
  }
  return;
}



void __pformat_puts(char *param_1,longlong *param_2)

{
  size_t sVar1;
  char *local_res8;
  
  local_res8 = param_1;
  if (param_1 == (char *)0x0) {
    local_res8 = "(null)";
  }
  if ((int)param_2[2] < 0) {
    sVar1 = strlen(local_res8);
    __pformat_putchars(local_res8,(int)sVar1,param_2);
  }
  else {
    sVar1 = strnlen(local_res8,(longlong)(int)param_2[2]);
    __pformat_putchars(local_res8,(int)sVar1,param_2);
  }
  return;
}



void __pformat_wputchars(wchar_t *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  size_t sVar6;
  wchar_t *local_res8;
  int local_res10;
  mbstate_t local_30 [2];
  char local_28 [16];
  char *local_18;
  int local_c;
  
  local_30[0] = 0;
  local_30[1] = 0;
  local_res10 = param_2;
  if ((-1 < (int)param_3[2]) && ((int)param_3[2] < param_2)) {
    local_res10 = (int)param_3[2];
  }
  if (local_res10 < *(int *)((longlong)param_3 + 0xc)) {
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - local_res10;
  }
  else {
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xffffffff;
  }
  local_res8 = param_1;
  if ((0 < *(int *)((longlong)param_3 + 0xc)) &&
     (local_res8 = param_1, (*(uint *)(param_3 + 1) & 0x400) == 0)) {
    while (iVar4 = *(int *)((longlong)param_3 + 0xc), *(int *)((longlong)param_3 + 0xc) = iVar4 + -1
          , local_res8 = param_1, iVar4 != 0) {
      __pformat_putc(0x20,param_3);
    }
  }
  while (iVar4 = local_res10 + -1, 0 < local_res10) {
    pwVar2 = local_res8 + 1;
    sVar6 = wcrtomb(local_28,*local_res8,local_30);
    local_c = (int)sVar6;
    if (local_c < 1) break;
    local_18 = local_28;
    while (iVar1 = local_c + -1, bVar5 = 0 < local_c, local_res8 = pwVar2, local_res10 = iVar4,
          local_c = iVar1, bVar5) {
      cVar3 = *local_18;
      local_18 = local_18 + 1;
      __pformat_putc((int)cVar3,param_3);
    }
  }
  while (iVar4 = *(int *)((longlong)param_3 + 0xc), *(int *)((longlong)param_3 + 0xc) = iVar4 + -1,
        0 < iVar4) {
    __pformat_putc(0x20,param_3);
  }
  return;
}



void __pformat_wcputs(wchar_t *param_1,longlong *param_2)

{
  size_t sVar1;
  wchar_t *local_res8;
  
  local_res8 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    local_res8 = L"(null)";
  }
  if ((int)param_2[2] < 0) {
    sVar1 = wcslen(local_res8);
    __pformat_wputchars(local_res8,(int)sVar1,param_2);
  }
  else {
    sVar1 = wcsnlen(local_res8,(longlong)(int)param_2[2]);
    __pformat_wputchars(local_res8,(int)sVar1,param_2);
  }
  return;
}



int __pformat_int_bufsiz(int param_1,int param_2,longlong param_3)

{
  undefined4 local_res10;
  
  local_res10 = *(int *)(param_3 + 0x10);
  if (local_res10 < 0) {
    local_res10 = 0;
  }
  local_res10 = param_1 + (int)(((longlong)(param_2 + -1) + 0x40U) / (ulonglong)(longlong)param_2) +
                local_res10;
  if (((*(uint *)(param_3 + 8) & 0x1000) != 0) && (*(short *)(param_3 + 0x20) != 0)) {
    local_res10 = local_res10 + local_res10 / 3;
  }
  if (local_res10 <= *(int *)(param_3 + 0xc)) {
    local_res10 = *(int *)(param_3 + 0xc);
  }
  return local_res10;
}



// WARNING: Function: ___chkstk_ms replaced with injection: alloca_probe

void __pformat_int(ulonglong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 auStack_70 [5];
  ulonglong local_48;
  ulonglong local_40 [2];
  char *local_30;
  int local_28;
  int local_24;
  char *local_20;
  
  local_48 = *param_1;
  local_40[0] = param_1[1];
  auStack_70[0] = 0x140012832;
  local_28 = __pformat_int_bufsiz(1,3,(longlong)param_2);
  auStack_70[0] = 0x140012853;
  lVar4 = -((longlong)local_28 + 0xfU & 0xfffffffffffffff0);
  local_30 = (char *)((longlong)local_40 + lVar4);
  local_20 = local_30;
  if ((*(uint *)(param_2 + 1) & 0x80) != 0) {
    if ((longlong)local_48 < 0) {
      local_48 = -local_48;
      local_20 = local_30;
    }
    else {
      *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xffffff7f;
      local_20 = local_30;
    }
  }
  for (; local_48 != 0; local_48 = local_48 / 10) {
    if ((((local_20 != local_30) && ((*(uint *)(param_2 + 1) & 0x1000) != 0)) &&
        ((short)param_2[4] != 0)) && (((longlong)local_20 - (longlong)local_30) % 4 == 3)) {
      *local_20 = ',';
      local_20 = local_20 + 1;
    }
    *local_20 = (char)local_48 + ((char)(local_48 / 10 << 2) + (char)(local_48 / 10)) * -2 + '0';
    local_20 = local_20 + 1;
  }
  if ((0 < (int)param_2[2]) &&
     (local_24 = (int)param_2[2] - ((int)local_20 - (int)local_30), 0 < local_24)) {
    while (iVar2 = local_24 + -1, bVar3 = 0 < local_24, local_24 = iVar2, bVar3) {
      *local_20 = '0';
      local_20 = local_20 + 1;
    }
  }
  if ((local_20 == local_30) && ((int)param_2[2] != 0)) {
    *local_20 = '0';
    local_20 = local_20 + 1;
  }
  if ((0 < *(int *)((longlong)param_2 + 0xc)) &&
     (*(int *)((longlong)param_2 + 0xc) =
           *(int *)((longlong)param_2 + 0xc) - ((int)local_20 - (int)local_30),
     0 < *(int *)((longlong)param_2 + 0xc))) {
    if ((*(uint *)(param_2 + 1) & 0x1c0) != 0) {
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + -1;
    }
    if (((int)param_2[2] < 0) && ((*(uint *)(param_2 + 1) & 0x600) == 0x200)) {
      while (iVar2 = *(int *)((longlong)param_2 + 0xc),
            *(int *)((longlong)param_2 + 0xc) = iVar2 + -1, 0 < iVar2) {
        *local_20 = '0';
        local_20 = local_20 + 1;
      }
    }
    else if ((*(uint *)(param_2 + 1) & 0x400) == 0) {
      while (iVar2 = *(int *)((longlong)param_2 + 0xc),
            *(int *)((longlong)param_2 + 0xc) = iVar2 + -1, 0 < iVar2) {
        *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x140012ab3;
        __pformat_putc(0x20,param_2);
      }
    }
  }
  if ((*(uint *)(param_2 + 1) & 0x80) == 0) {
    if ((*(uint *)(param_2 + 1) & 0x100) == 0) {
      if ((*(uint *)(param_2 + 1) & 0x40) != 0) {
        *local_20 = ' ';
        local_20 = local_20 + 1;
      }
    }
    else {
      *local_20 = '+';
      local_20 = local_20 + 1;
    }
  }
  else {
    *local_20 = '-';
    local_20 = local_20 + 1;
  }
  while (local_30 < local_20) {
    local_20 = local_20 + -1;
    cVar1 = *local_20;
    *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x140012b43;
    __pformat_putc((int)cVar1,param_2);
  }
  while (iVar2 = *(int *)((longlong)param_2 + 0xc), *(int *)((longlong)param_2 + 0xc) = iVar2 + -1,
        0 < iVar2) {
    *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x140012b60;
    __pformat_putc(0x20,param_2);
  }
  return;
}



// WARNING: Function: ___chkstk_ms replaced with injection: alloca_probe

void __pformat_xint(int param_1,ulonglong *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  undefined8 auStack_80 [5];
  ulonglong local_58;
  ulonglong local_50 [2];
  byte *local_40;
  byte *local_38;
  int local_30;
  undefined4 local_2c;
  byte *local_28;
  int local_20;
  int local_1c;
  
  local_58 = *param_2;
  local_50[0] = param_2[1];
  if (param_1 == 0x6f) {
    local_20 = 3;
  }
  else if ((param_1 == 0x62) || (param_1 == 0x42)) {
    local_20 = 1;
  }
  else {
    local_20 = 4;
  }
  auStack_80[0] = 0x140012be3;
  local_30 = __pformat_int_bufsiz(2,local_20,(longlong)param_3);
  auStack_80[0] = 0x140012c04;
  lVar4 = -((longlong)local_30 + 0xfU & 0xfffffffffffffff0);
  local_38 = (byte *)((longlong)local_50 + lVar4);
  local_28 = local_38;
  if (param_1 == 0x6f) {
    local_2c = 7;
  }
  else if ((param_1 == 0x62) || (param_1 == 0x42)) {
    local_2c = 1;
  }
  else {
    local_2c = 0xf;
  }
  for (; local_58 != 0; local_58 = local_58 >> ((byte)local_20 & 0x3f)) {
    local_40 = local_28;
    *local_28 = ((byte)local_2c & (byte)local_58) + 0x30;
    if ('9' < (char)*local_28) {
      *local_28 = *local_28 + 7 | (byte)param_1 & 0x20;
    }
    local_28 = local_28 + 1;
  }
  if (local_28 == local_38) {
    *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) & 0xfffff7ff;
  }
  if (((int)param_3[2] < 1) ||
     (local_1c = (int)param_3[2] - ((int)local_28 - (int)local_38), local_1c < 1)) {
    if ((param_1 == 0x6f) && ((*(uint *)(param_3 + 1) & 0x800) != 0)) {
      *local_28 = 0x30;
      local_28 = local_28 + 1;
    }
  }
  else {
    while (0 < local_1c) {
      *local_28 = 0x30;
      local_28 = local_28 + 1;
      local_1c = local_1c + -1;
    }
  }
  if ((local_28 == local_38) && ((int)param_3[2] != 0)) {
    *local_28 = 0x30;
    local_28 = local_28 + 1;
  }
  iVar5 = (int)local_28 - (int)local_38;
  if (iVar5 < *(int *)((longlong)param_3 + 0xc)) {
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - iVar5;
  }
  else {
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xffffffff;
  }
  local_1c = *(int *)((longlong)param_3 + 0xc);
  if (((0 < local_1c) && (param_1 != 0x6f)) && ((*(uint *)(param_3 + 1) & 0x800) != 0)) {
    local_1c = local_1c + -2;
  }
  if (((0 < local_1c) && ((int)param_3[2] < 0)) && ((*(uint *)(param_3 + 1) & 0x600) == 0x200)) {
    while (iVar5 = local_1c + -1, bVar3 = 0 < local_1c, local_1c = iVar5, bVar3) {
      *local_28 = 0x30;
      local_28 = local_28 + 1;
    }
  }
  if ((param_1 != 0x6f) && ((*(uint *)(param_3 + 1) & 0x800) != 0)) {
    pbVar1 = local_28 + 1;
    *local_28 = (byte)param_1;
    local_28 = local_28 + 2;
    *pbVar1 = 0x30;
  }
  if ((0 < local_1c) && ((*(uint *)(param_3 + 1) & 0x400) == 0)) {
    while (iVar5 = local_1c + -1, bVar3 = 0 < local_1c, local_1c = iVar5, bVar3) {
      *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x140012e6a;
      __pformat_putc(0x20,param_3);
    }
  }
  while (local_38 < local_28) {
    local_28 = local_28 + -1;
    bVar2 = *local_28;
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x140012e93;
    __pformat_putc((int)(char)bVar2,param_3);
  }
  while (0 < local_1c) {
    local_1c = local_1c + -1;
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x140012eb0;
    __pformat_putc(0x20,param_3);
  }
  return;
}



undefined8 * init_fpreg_ldouble(undefined8 *param_1,undefined1 (*param_2) [10])

{
  undefined8 local_28;
  undefined2 uStack_20;
  undefined6 uStack_1e;
  
  local_28 = SUB108(*param_2,0);
  uStack_20 = SUB102(*param_2,8);
  *param_1 = local_28;
  param_1[1] = CONCAT62(uStack_1e,uStack_20);
  return param_1;
}



void __pformat_cvt(int param_1,undefined1 (*param_2) [10],uint param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 local_58 [10];
  undefined1 local_48 [10];
  uint local_38 [2];
  short local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  local_58 = *param_2;
  local_1c = 0;
  local_48 = local_58;
  init_fpreg_ldouble((undefined8 *)local_38,&local_58);
  local_58 = local_48;
  uVar2 = __fpclassifyl(&local_58);
  if ((uVar2 & 0x100) == 0) {
    if ((uVar2 & 0x400) == 0) {
      local_20 = 0;
    }
    else if ((uVar2 & 0x4000) == 0) {
      local_20 = 1;
      local_1c = ((int)local_30 & 0x7fffU) - 0x403e;
    }
    else {
      local_20 = 2;
      local_1c = -0x403d;
    }
  }
  else if ((uVar2 & 0x400) == 0) {
    local_20 = 4;
  }
  else {
    local_20 = 3;
  }
  if (local_20 == 4) {
    uVar1 = 0;
  }
  else {
    uVar1 = (int)local_30 & 0x8000;
  }
  *param_5 = uVar1;
  __gdtoa((int *)&fpi_0,local_1c,local_38,&local_20,param_1,param_3,param_4,&local_28);
  return;
}



void __pformat_ecvt(undefined1 (*param_1) [10],uint param_2,int *param_3,uint *param_4)

{
  undefined1 local_38 [10];
  undefined1 local_28 [10];
  
  local_38 = *param_1;
  local_28 = local_38;
  __pformat_cvt(2,&local_38,param_2,param_3,param_4);
  return;
}



void __pformat_fcvt(undefined1 (*param_1) [10],uint param_2,int *param_3,uint *param_4)

{
  undefined1 local_38 [10];
  undefined1 local_28 [10];
  
  local_38 = *param_1;
  local_28 = local_38;
  __pformat_cvt(3,&local_38,param_2,param_3,param_4);
  return;
}



// WARNING: Function: ___chkstk_ms replaced with injection: alloca_probe

void __pformat_emit_radix_point(longlong *param_1)

{
  char cVar1;
  wchar_t _Source;
  longlong lVar2;
  lconv *plVar3;
  size_t sVar4;
  undefined8 auStack_80 [5];
  char acStack_58 [4];
  mbstate_t local_54 [4];
  wchar_t local_42;
  char *local_40;
  longlong local_38;
  int local_2c;
  char *local_28;
  int local_1c;
  
  if (*(int *)((longlong)param_1 + 0x14) == -3) {
    local_54[2] = 0;
    local_54[3] = 0;
    auStack_80[0] = 0x1400130fa;
    plVar3 = localeconv();
    auStack_80[0] = 0x140013116;
    sVar4 = mbrtowc(&local_42,plVar3->decimal_point,0x10,local_54 + 2);
    local_2c = (int)sVar4;
    if (0 < local_2c) {
      *(wchar_t *)(param_1 + 3) = local_42;
    }
    *(int *)((longlong)param_1 + 0x14) = local_2c;
  }
  if ((short)param_1[3] == 0) {
    auStack_80[0] = 0x14001320f;
    __pformat_putc(0x2e,param_1);
  }
  else {
    local_1c = *(int *)((longlong)param_1 + 0x14);
    local_38 = (longlong)local_1c + -1;
    auStack_80[0] = 0x140013177;
    lVar2 = -((longlong)local_1c + 0xfU & 0xfffffffffffffff0);
    local_54[0] = 0;
    local_54[1] = 0;
    _Source = *(wchar_t *)(param_1 + 3);
    local_40 = acStack_58 + lVar2;
    *(undefined8 *)((longlong)auStack_80 + lVar2) = 0x1400131a9;
    sVar4 = wcrtomb(acStack_58 + lVar2,_Source,local_54);
    local_1c = (int)sVar4;
    if (local_1c < 1) {
      *(undefined8 *)((longlong)auStack_80 + lVar2) = 0x1400131f9;
      __pformat_putc(0x2e,param_1);
    }
    else {
      local_28 = local_40;
      while (0 < local_1c) {
        cVar1 = *local_28;
        local_28 = local_28 + 1;
        local_1c = local_1c + -1;
        *(undefined8 *)((longlong)auStack_80 + lVar2) = 0x1400131d9;
        __pformat_putc((int)cVar1,param_1);
      }
    }
  }
  return;
}



void __pformat_emit_numeric_value(int param_1,longlong *param_2)

{
  wchar_t local_a;
  
  if (param_1 == 0x2e) {
    __pformat_emit_radix_point(param_2);
  }
  else if (param_1 == 0x2c) {
    local_a = *(wchar_t *)(param_2 + 4);
    if (local_a != L'\0') {
      __pformat_wputchars(&local_a,1,param_2);
    }
  }
  else {
    __pformat_putc(param_1,param_2);
  }
  return;
}



void __pformat_emit_inf_or_nan(int param_1,byte *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte *local_res10;
  byte local_1c;
  byte local_1b [3];
  byte *local_18;
  int local_c;
  
  local_18 = &local_1c;
  *(undefined4 *)(param_3 + 2) = 0xffffffff;
  if (param_1 == 0) {
    if ((*(uint *)(param_3 + 1) & 0x100) == 0) {
      if ((*(uint *)(param_3 + 1) & 0x40) != 0) {
        local_18 = local_1b;
        local_1c = 0x20;
      }
    }
    else {
      local_18 = local_1b;
      local_1c = 0x2b;
    }
  }
  else {
    local_18 = local_1b;
    local_1c = 0x2d;
  }
  local_res10 = param_2;
  for (local_c = 3; 0 < local_c; local_c = local_c + -1) {
    pbVar1 = local_18 + 1;
    *local_18 = *local_res10 & 0xdf | (byte)(int)param_3[1] & 0x20;
    local_18 = pbVar1;
    local_res10 = local_res10 + 1;
  }
  __pformat_putchars((char *)&local_1c,(int)local_18 - (int)&local_1c,param_3);
  return;
}



void __pformat_emit_float(int param_1,char *param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  char *local_res10;
  int local_res18;
  int local_c;
  
  if (param_3 < 1) {
    if (0 < *(int *)((longlong)param_4 + 0xc)) {
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) + -1;
    }
  }
  else if (*(int *)((longlong)param_4 + 0xc) < param_3) {
    *(undefined4 *)((longlong)param_4 + 0xc) = 0xffffffff;
  }
  else {
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - param_3;
  }
  if ((*(int *)((longlong)param_4 + 0xc) < 0) ||
     (*(int *)((longlong)param_4 + 0xc) <= (int)param_4[2])) {
    *(undefined4 *)((longlong)param_4 + 0xc) = 0xffffffff;
  }
  else {
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (int)param_4[2];
  }
  if ((0 < *(int *)((longlong)param_4 + 0xc)) &&
     ((0 < (int)param_4[2] || ((*(uint *)(param_4 + 1) & 0x800) != 0)))) {
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) + -1;
  }
  if (((0 < param_3) && ((*(uint *)(param_4 + 1) & 0x1000) != 0)) && ((short)param_4[4] != 0)) {
    local_c = (param_3 + 2) / 3;
    while ((local_c = local_c + -1, 0 < local_c && (0 < *(int *)((longlong)param_4 + 0xc)))) {
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) + -1;
    }
  }
  if ((0 < *(int *)((longlong)param_4 + 0xc)) &&
     ((param_1 != 0 || ((*(uint *)(param_4 + 1) & 0x1c0) != 0)))) {
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) + -1;
  }
  if ((0 < *(int *)((longlong)param_4 + 0xc)) && ((*(uint *)(param_4 + 1) & 0x600) == 0)) {
    while (iVar2 = *(int *)((longlong)param_4 + 0xc), *(int *)((longlong)param_4 + 0xc) = iVar2 + -1
          , 0 < iVar2) {
      __pformat_putc(0x20,param_4);
    }
  }
  if (param_1 == 0) {
    if ((*(uint *)(param_4 + 1) & 0x100) == 0) {
      if ((*(uint *)(param_4 + 1) & 0x40) != 0) {
        __pformat_putc(0x20,param_4);
      }
    }
    else {
      __pformat_putc(0x2b,param_4);
    }
  }
  else {
    __pformat_putc(0x2d,param_4);
  }
  if ((0 < *(int *)((longlong)param_4 + 0xc)) && ((*(uint *)(param_4 + 1) & 0x600) == 0x200)) {
    while (iVar2 = *(int *)((longlong)param_4 + 0xc), *(int *)((longlong)param_4 + 0xc) = iVar2 + -1
          , 0 < iVar2) {
      __pformat_putc(0x30,param_4);
    }
  }
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 < 1) {
    __pformat_putc(0x30,param_4);
  }
  else {
    do {
      if (*local_res10 == '\0') {
        iVar2 = 0x30;
      }
      else {
        iVar2 = (int)*local_res10;
        local_res10 = local_res10 + 1;
      }
      __pformat_putc(iVar2,param_4);
      local_res18 = local_res18 + -1;
      if ((((local_res18 != 0) && ((*(uint *)(param_4 + 1) & 0x1000) != 0)) &&
          ((short)param_4[4] != 0)) && (local_res18 % 3 == 0)) {
        __pformat_wputchars((wchar_t *)(param_4 + 4),1,param_4);
      }
    } while (0 < local_res18);
  }
  if ((0 < (int)param_4[2]) || ((*(uint *)(param_4 + 1) & 0x800) != 0)) {
    __pformat_emit_radix_point(param_4);
  }
  if (local_res18 < 0) {
    *(int *)(param_4 + 2) = (int)param_4[2] + local_res18;
    do {
      __pformat_putc(0x30,param_4);
      local_res18 = local_res18 + 1;
    } while (local_res18 < 0);
  }
  while (lVar1 = param_4[2], *(int *)(param_4 + 2) = (int)lVar1 + -1, 0 < (int)lVar1) {
    if (*local_res10 == '\0') {
      iVar2 = 0x30;
    }
    else {
      iVar2 = (int)*local_res10;
      local_res10 = local_res10 + 1;
    }
    __pformat_putc(iVar2,param_4);
  }
  return;
}



void __pformat_emit_efloat(int param_1,char *param_2,int param_3,longlong *param_4)

{
  int local_res18;
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  int local_c;
  
  local_c = 1;
  local_res18 = param_3 + -1;
  if (local_res18 < 0) {
    local_20 = 0xffffffffffffffff;
  }
  else {
    local_20 = 0;
  }
  local_28 = (ulonglong)local_res18;
  while( true ) {
    local_res18 = local_res18 / 10;
    if (local_res18 == 0) break;
    local_c = local_c + 1;
  }
  if (*(int *)((longlong)param_4 + 0x2c) == -1) {
    *(undefined4 *)((longlong)param_4 + 0x2c) = 2;
  }
  if (local_c < *(int *)((longlong)param_4 + 0x2c)) {
    local_c = *(int *)((longlong)param_4 + 0x2c);
  }
  local_c = local_c + 2;
  if (local_c < *(int *)((longlong)param_4 + 0xc)) {
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - local_c;
  }
  else {
    *(undefined4 *)((longlong)param_4 + 0xc) = 0xffffffff;
  }
  __pformat_emit_float(param_1,param_2,1,param_4);
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)((longlong)param_4 + 0x2c);
  *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) | 0x1c0;
  __pformat_putc(*(uint *)(param_4 + 1) & 0x20 | 0x45,param_4);
  *(int *)((longlong)param_4 + 0xc) = local_c + -1 + *(int *)((longlong)param_4 + 0xc);
  local_38 = local_28;
  local_30 = local_20;
  __pformat_int(&local_38,param_4);
  return;
}



void __pformat_float(undefined1 (*param_1) [10],longlong *param_2)

{
  int iVar1;
  undefined1 local_48 [10];
  undefined1 local_38 [10];
  int local_28;
  uint local_24;
  byte *local_20;
  
  local_48 = *param_1;
  if ((int)param_2[2] < 0) {
    *(undefined4 *)(param_2 + 2) = 6;
  }
  local_38 = local_48;
  local_20 = (byte *)__pformat_fcvt(&local_48,*(uint *)(param_2 + 2),&local_28,&local_24);
  if (local_28 == -0x8000) {
    __pformat_emit_inf_or_nan(local_24,local_20,param_2);
  }
  else {
    __pformat_emit_float(local_24,(char *)local_20,local_28,param_2);
    while (iVar1 = *(int *)((longlong)param_2 + 0xc), *(int *)((longlong)param_2 + 0xc) = iVar1 + -1
          , 0 < iVar1) {
      __pformat_putc(0x20,param_2);
    }
  }
  __freedtoa((longlong)local_20);
  return;
}



void __pformat_efloat(undefined1 (*param_1) [10],longlong *param_2)

{
  undefined1 local_48 [10];
  undefined1 local_38 [10];
  int local_28;
  uint local_24;
  byte *local_20;
  
  local_48 = *param_1;
  if ((int)param_2[2] < 0) {
    *(undefined4 *)(param_2 + 2) = 6;
  }
  local_38 = local_48;
  local_20 = (byte *)__pformat_ecvt(&local_48,(int)param_2[2] + 1,&local_28,&local_24);
  if (local_28 == -0x8000) {
    __pformat_emit_inf_or_nan(local_24,local_20,param_2);
  }
  else {
    __pformat_emit_efloat(local_24,(char *)local_20,local_28,param_2);
  }
  __freedtoa((longlong)local_20);
  return;
}



void __pformat_gfloat(undefined1 (*param_1) [10],longlong *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined1 local_48 [10];
  undefined1 local_38 [10];
  int local_28;
  uint local_24;
  byte *local_20;
  
  local_48 = *param_1;
  if ((int)param_2[2] < 0) {
    *(undefined4 *)(param_2 + 2) = 6;
  }
  else if ((int)param_2[2] == 0) {
    *(undefined4 *)(param_2 + 2) = 1;
  }
  local_38 = local_48;
  local_20 = (byte *)__pformat_ecvt(&local_48,*(uint *)(param_2 + 2),&local_28,&local_24);
  if (local_28 == -0x8000) {
    __pformat_emit_inf_or_nan(local_24,local_20,param_2);
  }
  else if ((local_28 < -3) || ((int)param_2[2] < local_28)) {
    if ((*(uint *)(param_2 + 1) & 0x800) == 0) {
      sVar2 = strlen((char *)local_20);
      *(int *)(param_2 + 2) = (int)sVar2 + -1;
    }
    else {
      *(int *)(param_2 + 2) = (int)param_2[2] + -1;
    }
    __pformat_emit_efloat(local_24,(char *)local_20,local_28,param_2);
  }
  else {
    if ((*(uint *)(param_2 + 1) & 0x800) == 0) {
      sVar2 = strlen((char *)local_20);
      *(int *)(param_2 + 2) = (int)sVar2 - local_28;
    }
    else {
      *(int *)(param_2 + 2) = (int)param_2[2] - local_28;
    }
    if ((int)param_2[2] < 0) {
      *(undefined4 *)(param_2 + 2) = 0;
    }
    __pformat_emit_float(local_24,(char *)local_20,local_28,param_2);
    while (iVar1 = *(int *)((longlong)param_2 + 0xc), *(int *)((longlong)param_2 + 0xc) = iVar1 + -1
          , 0 < iVar1) {
      __pformat_putc(0x20,param_2);
    }
  }
  __freedtoa((longlong)local_20);
  return;
}



void __pformat_emit_xfloat(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  ulonglong local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  byte local_58 [36];
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  short local_22;
  byte *local_20;
  
  local_20 = local_58;
  local_22 = 2;
  if ((*param_1 != 0) || ((short)param_1[1] != 0)) {
    *(short *)(param_1 + 1) = (short)param_1[1] + -3;
  }
  if ((-1 < (int)param_2[2]) && ((int)param_2[2] < 0xf)) {
    *param_1 = *param_1 >> 1;
    *param_1 = (4L << (('\x0e' - (char)(int)param_2[2]) * '\x04' & 0x3fU)) + *param_1;
    if ((longlong)*param_1 < 0) {
      *(short *)(param_1 + 1) = (short)param_1[1] + 4;
      *param_1 = *param_1 >> 3;
    }
    else {
      *param_1 = *param_1 * 2;
    }
    *param_1 = *param_1 >> (('\x0f' - (char)(int)param_2[2]) * '\x04' & 0x3fU);
  }
  if ((*param_1 != 0) || (0 < (int)param_2[2])) {
    if (((int)param_2[2] < 0xf) && (-1 < (int)param_2[2])) {
      local_28 = (int)param_2[2] + 1;
    }
    else {
      local_28 = 0x10;
    }
    for (; 0 < local_28; local_28 = local_28 + -1) {
      local_34 = (uint)*param_1 & 0xf;
      if (local_28 == 1) {
        if (((local_58 < local_20) || ((*(uint *)(param_2 + 1) & 0x800) != 0)) ||
           (0 < (int)param_2[2])) {
          pbVar2 = local_20 + 1;
          *local_20 = 0x2e;
          local_20 = pbVar2;
        }
      }
      else if (0 < (int)param_2[2]) {
        *(int *)(param_2 + 2) = (int)param_2[2] + -1;
      }
      if (((local_34 != 0) || (local_58 < local_20)) || (-1 < (int)param_2[2])) {
        if (local_34 < 10) {
          bVar3 = (char)local_34 + 0x30;
        }
        else {
          bVar3 = (byte)(int)param_2[1] & 0x20 | (char)local_34 + 0x37U;
        }
        pbVar2 = local_20 + 1;
        *local_20 = bVar3;
        local_20 = pbVar2;
      }
      *param_1 = *param_1 >> 4;
    }
  }
  if (local_20 == local_58) {
    if ((0 < (int)param_2[2]) || ((*(uint *)(param_2 + 1) & 0x800) != 0)) {
      pbVar2 = local_20 + 1;
      *local_20 = 0x2e;
      local_20 = pbVar2;
    }
    *local_20 = 0x30;
    local_20 = local_20 + 1;
  }
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    local_2c = (int)local_20 - (int)local_58;
    local_30 = (int)(short)param_1[1];
    if (0 < (int)param_2[2]) {
      local_2c = local_2c + (int)param_2[2];
    }
    if ((*(uint *)(param_2 + 1) & 0x1c0) == 0) {
      iVar4 = 5;
    }
    else {
      iVar4 = 6;
    }
    local_2c = local_2c + iVar4;
    while (local_30 = local_30 / 10, local_30 != 0) {
      local_2c = local_2c + 1;
      local_22 = local_22 + 1;
    }
    local_30 = 0;
    if (local_2c < *(int *)((longlong)param_2 + 0xc)) {
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) - local_2c;
      if ((*(uint *)(param_2 + 1) & 0x600) == 0) {
        while (iVar4 = *(int *)((longlong)param_2 + 0xc),
              *(int *)((longlong)param_2 + 0xc) = iVar4 + -1, 0 < iVar4) {
          __pformat_putc(0x20,param_2);
        }
      }
    }
    else {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0xffffffff;
    }
  }
  if ((*(uint *)(param_2 + 1) & 0x80) == 0) {
    if ((*(uint *)(param_2 + 1) & 0x100) == 0) {
      if ((*(uint *)(param_2 + 1) & 0x40) != 0) {
        __pformat_putc(0x20,param_2);
      }
    }
    else {
      __pformat_putc(0x2b,param_2);
    }
  }
  else {
    __pformat_putc(0x2d,param_2);
  }
  __pformat_putc(0x30,param_2);
  __pformat_putc(*(uint *)(param_2 + 1) & 0x20 | 0x58,param_2);
  if ((0 < *(int *)((longlong)param_2 + 0xc)) && ((*(uint *)(param_2 + 1) & 0x200) != 0)) {
    while (iVar4 = *(int *)((longlong)param_2 + 0xc), *(int *)((longlong)param_2 + 0xc) = iVar4 + -1
          , 0 < iVar4) {
      __pformat_putc(0x30,param_2);
    }
  }
  while (local_58 < local_20) {
    local_20 = local_20 + -1;
    __pformat_emit_numeric_value((int)(char)*local_20,param_2);
  }
  while (lVar1 = param_2[2], *(int *)(param_2 + 2) = (int)lVar1 + -1, 0 < (int)lVar1) {
    __pformat_putc(0x30,param_2);
  }
  __pformat_putc(*(uint *)(param_2 + 1) & 0x20 | 0x50,param_2);
  *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + (int)local_22;
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x1c0;
  if ((short)param_1[1] < 0) {
    local_70 = 0xffffffffffffffff;
  }
  else {
    local_70 = 0;
  }
  local_78 = (ulonglong)(short)param_1[1];
  local_68 = local_78;
  local_60 = local_70;
  __pformat_int(&local_78,param_2);
  return;
}



void __pformat_xldouble(undefined1 (*param_1) [10],longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong local_68;
  undefined8 local_60;
  undefined1 local_58 [10];
  undefined1 local_48 [10];
  ulonglong local_38;
  ushort local_30;
  undefined6 uStack_2e;
  uint local_1c;
  
  local_58 = *param_1;
  local_1c = 0;
  local_48 = local_58;
  init_fpreg_ldouble(&local_38,&local_58);
  local_58 = local_48;
  iVar1 = __isnanl(&local_58);
  if (iVar1 == 0) {
    local_1c = (int)(short)local_30 & 0x8000;
    if (local_1c != 0) {
      *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x80;
    }
    local_58 = local_48;
    uVar2 = __fpclassifyl(&local_58);
    if ((int)uVar2 == 0x500) {
      __pformat_emit_inf_or_nan(local_1c,&DAT_14002608a,param_2);
    }
    else {
      if ((local_30 & 0x7fff) == 0) {
        local_30 = 0;
        if (local_38 != 0) {
          local_30 = -0x3ffe;
        }
      }
      else {
        local_30 = (local_30 & 0x7fff) + 0xc001;
      }
      local_60 = CONCAT62(uStack_2e,local_30);
      local_68 = local_38;
      __pformat_emit_xfloat(&local_68,param_2);
    }
  }
  else {
    __pformat_emit_inf_or_nan(local_1c,&DAT_140026086,param_2);
  }
  return;
}



void __pformat_xdouble(double param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong local_48;
  undefined8 local_40;
  undefined1 local_38 [10];
  ulonglong local_28;
  ushort local_20;
  undefined6 uStack_1e;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_38 = (undefined1  [10])(float10)param_1;
  init_fpreg_ldouble(&local_28,&local_38);
  iVar1 = __isnan(param_1);
  if (iVar1 == 0) {
    local_c = (int)(short)local_20 & 0x8000;
    if (local_c != 0) {
      *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x80;
    }
    uVar2 = __fpclassify((ulonglong)param_1);
    if ((int)uVar2 == 0x500) {
      __pformat_emit_inf_or_nan(local_c,&DAT_14002608a,param_2);
    }
    else {
      local_20 = local_20 & 0x7fff;
      if ((local_20 != 0) && (local_20 < 0x3c01)) {
        local_10 = 0x3c01 - (short)local_20;
        local_28 = local_28 >> ((byte)local_10 & 0x3f);
        local_20 = (short)local_10 + local_20;
      }
      if (local_20 == 0) {
        if (local_28 != 0) {
          local_20 = 0xfc05;
        }
      }
      else {
        local_20 = local_20 + 0xc004;
      }
      local_48 = local_28 >> 3;
      local_40 = CONCAT62(uStack_1e,local_20);
      local_28 = local_48;
      __pformat_emit_xfloat(&local_48,param_2);
    }
  }
  else {
    __pformat_emit_inf_or_nan(local_c,&DAT_140026086,param_2);
  }
  return;
}



int __mingw_pformat(uint param_1,longlong param_2,undefined4 param_3,char *param_4,double *param_5)

{
  double *pdVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  lconv *plVar8;
  size_t sVar9;
  char *local_res20;
  undefined1 local_a8 [10];
  double local_98;
  undefined8 local_90;
  mbstate_t local_84 [2];
  wchar_t local_7c;
  wchar_t local_7a;
  double local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int local_5c [3];
  undefined2 local_50;
  int local_4c;
  wchar_t local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_2c;
  char *local_28;
  int local_20;
  int local_1c;
  int *local_18;
  int local_10;
  uint local_c;
  
  piVar6 = _errno();
  local_1c = *piVar6;
  uVar3 = param_1 & 0x6000;
  local_5c[0] = -1;
  local_5c[1] = 0xffffffff;
  local_5c[2] = 0xfffffffd;
  local_50 = 0;
  local_4c = 0;
  local_48 = L'\0';
  local_44 = 0;
  local_3c = 0xffffffff;
  local_res20 = param_4;
  local_68 = param_2;
  local_60 = uVar3;
  local_40 = param_3;
LAB_140014fc4:
  while( true ) {
    pcVar2 = local_res20 + 1;
    local_20 = (int)*local_res20;
    if (local_20 == 0) {
      return local_44;
    }
    local_res20 = pcVar2;
    if (local_20 == 0x25) break;
    __pformat_putc(local_20,&local_68);
  }
  local_c = 0;
  local_10 = 0;
  local_18 = local_5c;
  local_5c[1] = 0xffffffff;
  local_5c[0] = -1;
  local_60 = uVar3;
  local_28 = pcVar2;
LAB_140014fa5:
  if (*local_res20 == '\0') goto LAB_140014fc4;
  pcVar2 = local_res20 + 1;
  local_20 = (int)*local_res20;
  if (local_20 == 0x7a) {
    local_10 = 3;
    local_c = 4;
    local_res20 = pcVar2;
    goto LAB_140014fa5;
  }
  if (0x7a < local_20) goto LAB_140014f0c;
  if (local_20 == 0x78) {
LAB_1400147ff:
    local_60 = local_60 & 0xfffffeff;
    if (local_10 == 3) {
      local_78 = *param_5;
    }
    else if (local_10 == 2) {
      local_78 = (double)(ulonglong)*(uint *)param_5;
    }
    else {
      uVar4 = *(uint *)param_5;
      local_78 = (double)(ulonglong)uVar4;
      if (local_10 == 1) {
        local_78._0_2_ = (ushort)uVar4;
        local_78 = (double)(ulonglong)local_78._0_2_;
      }
      else if (local_10 == 5) {
        local_78._0_1_ = (byte)uVar4;
        local_78 = (double)(ulonglong)local_78._0_1_;
      }
    }
    param_5 = param_5 + 1;
    if (local_20 == 0x75) {
      local_98 = local_78;
      local_90 = local_70;
      __pformat_int((ulonglong *)&local_98,&local_68);
      local_res20 = pcVar2;
    }
    else {
      local_98 = local_78;
      local_90 = local_70;
      __pformat_xint(local_20,(ulonglong *)&local_98,&local_68);
      local_res20 = pcVar2;
    }
    goto LAB_140014fc4;
  }
  if (local_20 < 0x79) {
    if (local_20 == 0x77) {
      local_10 = 2;
      local_c = 4;
      local_res20 = pcVar2;
      goto LAB_140014fa5;
    }
    if (0x77 < local_20) goto LAB_140014f0c;
    if (local_20 == 0x75) goto LAB_1400147ff;
    if (local_20 < 0x76) {
      if (local_20 == 0x74) {
        local_10 = 3;
        local_c = 4;
        local_res20 = pcVar2;
        goto LAB_140014fa5;
      }
      if (local_20 < 0x75) {
        if (local_20 == 0x73) {
LAB_140014795:
          if ((local_10 == 2) || (local_10 == 3)) {
            __pformat_wcputs((wchar_t *)*param_5,&local_68);
            local_res20 = pcVar2;
            param_5 = param_5 + 1;
          }
          else {
            __pformat_puts((char *)*param_5,&local_68);
            local_res20 = pcVar2;
            param_5 = param_5 + 1;
          }
          goto LAB_140014fc4;
        }
        if (local_20 < 0x74) {
          if (local_20 == 0x70) {
            if ((local_c == 0) && (uVar3 == local_60)) {
              local_60 = local_60 | 0x200;
              local_5c[1] = 0x10;
            }
            local_98 = *param_5;
            local_70 = 0;
            local_90 = 0;
            local_78 = local_98;
            __pformat_xint(0x78,(ulonglong *)&local_98,&local_68);
            local_res20 = pcVar2;
            param_5 = param_5 + 1;
            goto LAB_140014fc4;
          }
          if (local_20 < 0x71) {
            if (local_20 == 0x6f) goto LAB_1400147ff;
            if (local_20 < 0x70) {
              if (local_20 == 0x6e) {
                if (local_10 == 5) {
                  *(char *)*param_5 = (char)local_44;
                  local_res20 = pcVar2;
                  param_5 = param_5 + 1;
                }
                else if (local_10 == 1) {
                  *(short *)*param_5 = (short)local_44;
                  local_res20 = pcVar2;
                  param_5 = param_5 + 1;
                }
                else if (local_10 == 2) {
                  *(int *)*param_5 = local_44;
                  local_res20 = pcVar2;
                  param_5 = param_5 + 1;
                }
                else if (local_10 == 3) {
                  *(longlong *)*param_5 = (longlong)local_44;
                  local_res20 = pcVar2;
                  param_5 = param_5 + 1;
                }
                else {
                  *(int *)*param_5 = local_44;
                  local_res20 = pcVar2;
                  param_5 = param_5 + 1;
                }
                goto LAB_140014fc4;
              }
              if (local_20 < 0x6f) {
                if (local_20 == 0x6d) {
                  pcVar7 = strerror(local_1c);
                  __pformat_puts(pcVar7,&local_68);
                  local_res20 = pcVar2;
                  goto LAB_140014fc4;
                }
                if (local_20 < 0x6e) {
                  if (local_20 == 0x6c) {
                    if (*pcVar2 == 'l') {
                      local_10 = 3;
                      local_res20 = local_res20 + 2;
                    }
                    else {
                      local_10 = 2;
                      local_res20 = pcVar2;
                    }
                    local_c = 4;
                    goto LAB_140014fa5;
                  }
                  if (local_20 < 0x6d) {
                    if (local_20 == 0x6a) {
                      local_10 = 3;
                      local_c = 4;
                      local_res20 = pcVar2;
                      goto LAB_140014fa5;
                    }
                    if (local_20 < 0x6b) {
                      if (local_20 == 0x69) {
LAB_1400148de:
                        local_60 = local_60 | 0x80;
                        if (local_10 == 3) {
                          local_78 = *param_5;
                        }
                        else if (local_10 == 2) {
                          local_78 = (double)(longlong)*(int *)param_5;
                        }
                        else {
                          iVar5 = *(int *)param_5;
                          local_78 = (double)(longlong)iVar5;
                          if (local_10 == 1) {
                            local_78._0_2_ = (ushort)iVar5;
                            local_78 = (double)(longlong)(short)local_78._0_2_;
                          }
                          else if (local_10 == 5) {
                            local_78._0_1_ = (byte)iVar5;
                            local_78 = (double)(longlong)(char)local_78._0_1_;
                          }
                        }
                        param_5 = param_5 + 1;
                        if ((longlong)local_78 < 0) {
                          local_90 = 0xffffffffffffffff;
                        }
                        else {
                          local_90 = 0;
                        }
                        local_98 = local_78;
                        local_70 = local_90;
                        __pformat_int((ulonglong *)&local_98,&local_68);
                        local_res20 = pcVar2;
                        goto LAB_140014fc4;
                      }
                      if (local_20 < 0x6a) {
                        if (local_20 == 0x68) {
                          if (*pcVar2 == 'h') {
                            local_10 = 5;
                            local_res20 = local_res20 + 2;
                          }
                          else {
                            local_10 = 1;
                            local_res20 = pcVar2;
                          }
                          local_c = 4;
                          goto LAB_140014fa5;
                        }
                        if (local_20 < 0x69) {
                          if (local_20 == 0x67) {
                            local_60 = local_60 | 0x20;
LAB_140014b14:
                            if ((local_60 & 4) == 0) {
                              local_a8 = (undefined1  [10])(float10)*param_5;
                              __pformat_gfloat(&local_a8,&local_68);
                              local_res20 = pcVar2;
                              param_5 = param_5 + 1;
                            }
                            else {
                              local_a8 = *(undefined1 (*) [10])*param_5;
                              __pformat_gfloat(&local_a8,&local_68);
                              local_res20 = pcVar2;
                              param_5 = param_5 + 1;
                            }
                            goto LAB_140014fc4;
                          }
                          if (local_20 < 0x68) {
                            if (local_20 == 0x66) {
                              local_60 = local_60 | 0x20;
LAB_140014a96:
                              if ((local_60 & 4) == 0) {
                                local_a8 = (undefined1  [10])(float10)*param_5;
                                __pformat_float(&local_a8,&local_68);
                                local_res20 = pcVar2;
                                param_5 = param_5 + 1;
                              }
                              else {
                                local_a8 = *(undefined1 (*) [10])*param_5;
                                __pformat_float(&local_a8,&local_68);
                                local_res20 = pcVar2;
                                param_5 = param_5 + 1;
                              }
                              goto LAB_140014fc4;
                            }
                            if (local_20 < 0x67) {
                              if (local_20 == 0x65) {
                                local_60 = local_60 | 0x20;
LAB_140014a18:
                                if ((local_60 & 4) == 0) {
                                  local_a8 = (undefined1  [10])(float10)*param_5;
                                  __pformat_efloat(&local_a8,&local_68);
                                  local_res20 = pcVar2;
                                  param_5 = param_5 + 1;
                                }
                                else {
                                  local_a8 = *(undefined1 (*) [10])*param_5;
                                  __pformat_efloat(&local_a8,&local_68);
                                  local_res20 = pcVar2;
                                  param_5 = param_5 + 1;
                                }
                                goto LAB_140014fc4;
                              }
                              if (local_20 < 0x66) {
                                if (local_20 == 100) goto LAB_1400148de;
                                if (local_20 < 0x65) {
                                  if (local_20 == 99) {
LAB_14001471d:
                                    local_5c[1] = 0xffffffff;
                                    if ((local_10 == 2) || (local_10 == 3)) {
                                      local_7a = (wchar_t)*(undefined4 *)param_5;
                                      __pformat_wputchars(&local_7a,1,&local_68);
                                      local_res20 = pcVar2;
                                      param_5 = param_5 + 1;
                                    }
                                    else {
                                      local_78 = (double)CONCAT71(local_78._1_7_,
                                                                  (char)*(undefined4 *)param_5);
                                      __pformat_putchars((char *)&local_78,1,&local_68);
                                      local_res20 = pcVar2;
                                      param_5 = param_5 + 1;
                                    }
                                    goto LAB_140014fc4;
                                  }
                                  if (local_20 < 100) {
                                    if (local_20 == 0x62) goto LAB_1400147ff;
                                    if (local_20 < 99) {
                                      if (local_20 == 0x61) {
                                        local_60 = local_60 | 0x20;
LAB_140014b92:
                                        if ((local_60 & 4) == 0) {
                                          __pformat_xdouble(*param_5,&local_68);
                                          local_res20 = pcVar2;
                                          param_5 = param_5 + 1;
                                        }
                                        else {
                                          local_a8 = *(undefined1 (*) [10])*param_5;
                                          __pformat_xldouble(&local_a8,&local_68);
                                          local_res20 = pcVar2;
                                          param_5 = param_5 + 1;
                                        }
                                        goto LAB_140014fc4;
                                      }
                                      if (local_20 < 0x62) {
                                        if (local_20 == 0x58) goto LAB_1400147ff;
                                        if (local_20 < 0x59) {
                                          if (local_20 == 0x53) {
                                            local_10 = 2;
                                            goto LAB_140014795;
                                          }
                                          if (local_20 < 0x54) {
                                            if (local_20 == 0x4c) {
                                              local_60 = local_60 | 4;
                                              local_c = 4;
                                              local_res20 = pcVar2;
                                              goto LAB_140014fa5;
                                            }
                                            if (local_20 < 0x4d) {
                                              if (local_20 == 0x49) {
                                                if ((*pcVar2 == '6') && (local_res20[2] == '4')) {
                                                  local_10 = 3;
                                                  local_res20 = local_res20 + 3;
                                                }
                                                else if ((*pcVar2 == '3') && (local_res20[2] == '2')
                                                        ) {
                                                  local_10 = 2;
                                                  local_res20 = local_res20 + 3;
                                                }
                                                else {
                                                  local_10 = 3;
                                                  local_res20 = pcVar2;
                                                }
                                                local_c = 4;
                                                goto LAB_140014fa5;
                                              }
                                              if (local_20 < 0x4a) {
                                                if (local_20 == 0x47) goto LAB_140014b14;
                                                if (local_20 < 0x48) {
                                                  if (local_20 == 0x46) goto LAB_140014a96;
                                                  if (local_20 < 0x47) {
                                                    if (local_20 == 0x45) goto LAB_140014a18;
                                                    if (local_20 < 0x46) {
                                                      if (local_20 == 0x43) {
                                                        local_10 = 2;
                                                        goto LAB_14001471d;
                                                      }
                                                      if (local_20 < 0x44) {
                                                        if (local_20 == 0x42) goto LAB_1400147ff;
                                                        if (local_20 < 0x43) {
                                                          if (local_20 == 0x41) goto LAB_140014b92;
                                                          if (local_20 < 0x42) {
                                                            if (local_20 == 0x30) {
                                                              if (local_c == 0) {
                                                                local_60 = local_60 | 0x200;
                                                                local_res20 = pcVar2;
                                                                goto LAB_140014fa5;
                                                              }
                                                            }
                                                            else if (local_20 < 0x31) {
                                                              if (local_20 == 0x2e) {
                                                                if (local_c < 2) {
                                                                  local_5c[1] = 0;
                                                                  local_18 = local_5c + 1;
                                                                  local_c = 2;
                                                                  local_res20 = pcVar2;
                                                                }
                                                                else {
                                                                  local_c = 4;
                                                                  local_res20 = pcVar2;
                                                                }
                                                                goto LAB_140014fa5;
                                                              }
                                                              if (local_20 < 0x2f) {
                                                                if (local_20 == 0x2d) {
                                                                  local_res20 = pcVar2;
                                                                  if (local_c == 0) {
                                                                    local_60 = local_60 | 0x400;
                                                                  }
                                                                  goto LAB_140014fa5;
                                                                }
                                                                if (local_20 < 0x2e) {
                                                                  if (local_20 == 0x2b) {
                                                                    local_res20 = pcVar2;
                                                                    if (local_c == 0) {
                                                                      local_60 = local_60 | 0x100;
                                                                    }
                                                                    goto LAB_140014fa5;
                                                                  }
                                                                  if (local_20 < 0x2c) {
                                                                    if (local_20 == 0x2a) {
                                                                      if ((local_18 == (int *)0x0)
                                                                         || ((local_c != 0 &&
                                                                             (local_c != 2)))) {
                                                                        local_c = 4;
                                                                      }
                                                                      else {
                                                                        pdVar1 = param_5 + 1;
                                                                        *local_18 = *(int *)param_5;
                                                                        param_5 = pdVar1;
                                                                        if (*local_18 < 0) {
                                                                          if (local_c == 0) {
                                                                            local_60 = local_60 |
                                                                                       0x400;
                                                                            local_5c[0] = -local_5c[
                                                  0];
                                                  }
                                                  else {
                                                    local_5c[1] = 0xffffffff;
                                                  }
                                                  }
                                                  }
                                                  local_18 = (int *)0x0;
                                                  local_res20 = pcVar2;
                                                  goto LAB_140014fa5;
                                                  }
                                                  if (local_20 < 0x2b) {
                                                    if (local_20 == 0x27) {
                                                      local_res20 = pcVar2;
                                                      if (local_c == 0) {
                                                        local_60 = local_60 | 0x1000;
                                                        local_84[0] = 0;
                                                        local_84[1] = 0;
                                                        plVar8 = localeconv();
                                                        sVar9 = mbrtowc(&local_7c,
                                                                        plVar8->thousands_sep,0x10,
                                                                        local_84);
                                                        local_4c = (int)sVar9;
                                                        local_2c = local_4c;
                                                        if (0 < local_4c) {
                                                          local_48 = local_7c;
                                                        }
                                                      }
                                                      goto LAB_140014fa5;
                                                    }
                                                    if (local_20 < 0x28) {
                                                      if (local_20 == 0x25) {
                                                        __pformat_putc(0x25,&local_68);
                                                        local_res20 = pcVar2;
                                                        goto LAB_140014fc4;
                                                      }
                                                      if (local_20 < 0x26) {
                                                        if (local_20 == 0x20) {
                                                          local_res20 = pcVar2;
                                                          if (local_c == 0) {
                                                            local_60 = local_60 | 0x40;
                                                          }
                                                          goto LAB_140014fa5;
                                                        }
                                                        if (local_20 == 0x23) {
                                                          local_res20 = pcVar2;
                                                          if (local_c == 0) {
                                                            local_60 = local_60 | 0x800;
                                                          }
                                                          goto LAB_140014fa5;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_140014f0c:
  if (((3 < local_c) || (0x39 < local_20)) || (local_20 < 0x30)) {
    local_res20 = local_28;
    __pformat_putc(0x25,&local_68);
    goto LAB_140014fc4;
  }
  if (local_c == 0) {
    local_c = 1;
  }
  else if (local_c == 2) {
    local_c = 3;
  }
  local_res20 = pcVar2;
  if (local_18 != (int *)0x0) {
    if (*local_18 < 0) {
      *local_18 = local_20 + -0x30;
    }
    else {
      *local_18 = local_20 + *local_18 * 10 + -0x30;
    }
  }
  goto LAB_140014fa5;
}



int * __rv_alloc_D2A(int param_1)

{
  int *piVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  for (local_c = 4; local_c + 0x17 < param_1; local_c = local_c << 1) {
    local_10 = local_10 + 1;
  }
  piVar1 = (int *)__Balloc_D2A(local_10);
  *piVar1 = local_10;
  return piVar1 + 1;
}



int * __nrv_alloc_D2A(char *param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  char *local_res8;
  int *local_10;
  
  piVar1 = __rv_alloc_D2A(param_3);
  local_res8 = param_1;
  local_10 = piVar1;
  while( true ) {
    *(char *)local_10 = *local_res8;
    if ((char)*local_10 == '\0') break;
    local_10 = (int *)((longlong)local_10 + 1);
    local_res8 = local_res8 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = local_10;
  }
  return piVar1;
}



void __freedtoa(longlong param_1)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + -4);
  *(int *)(param_1 + 8) = 1 << ((byte)*(undefined4 *)(param_1 + 4) & 0x1f);
  __Bfree_D2A((undefined8 *)(param_1 + -4));
  return;
}



uint __quorem_D2A(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong local_40;
  ulonglong local_38;
  uint *local_30;
  uint *local_20;
  uint *local_18;
  int local_c;
  
  if (*(int *)(param_1 + 0x14) < *(int *)(param_2 + 0x14)) {
    uVar2 = 0;
  }
  else {
    local_c = *(int *)(param_2 + 0x14) + -1;
    puVar4 = (uint *)(param_2 + 0x18U) + local_c;
    local_20 = (uint *)(param_1 + 0x18) + local_c;
    uVar2 = *local_20 / (*puVar4 + 1);
    if (uVar2 != 0) {
      local_38 = 0;
      local_40 = 0;
      local_30 = (uint *)(param_2 + 0x18U);
      local_18 = (uint *)(param_1 + 0x18);
      do {
        puVar1 = local_30 + 1;
        uVar5 = local_40 + (ulonglong)*local_30 * (ulonglong)uVar2;
        local_40 = uVar5 >> 0x20;
        lVar6 = ((ulonglong)*local_18 - (uVar5 & 0xffffffff)) - local_38;
        local_38 = (ulonglong)((uint)((ulonglong)lVar6 >> 0x20) & 1);
        *local_18 = (uint)lVar6;
        local_30 = puVar1;
        local_18 = local_18 + 1;
      } while (puVar1 <= puVar4);
      if (*local_20 == 0) {
        while ((local_20 = local_20 + -1, (uint *)(param_1 + 0x18) < local_20 && (*local_20 == 0)))
        {
          local_c = local_c + -1;
        }
        *(int *)(param_1 + 0x14) = local_c;
      }
    }
    iVar3 = __cmp_D2A(param_1,param_2);
    if (-1 < iVar3) {
      uVar2 = uVar2 + 1;
      local_38 = 0;
      local_30 = (uint *)(param_2 + 0x18);
      local_18 = (uint *)(param_1 + 0x18);
      do {
        puVar1 = local_30 + 1;
        lVar6 = ((ulonglong)*local_18 - (ulonglong)*local_30) - local_38;
        local_38 = (ulonglong)((uint)((ulonglong)lVar6 >> 0x20) & 1);
        *local_18 = (uint)lVar6;
        local_30 = puVar1;
        local_18 = local_18 + 1;
      } while (puVar1 <= puVar4);
      local_20 = (uint *)((int *)(param_1 + 0x18) + local_c);
      if (*local_20 == 0) {
        while ((local_20 = local_20 + -1, (int *)(param_1 + 0x18) < local_20 && (*local_20 == 0))) {
          local_c = local_c + -1;
        }
        *(int *)(param_1 + 0x14) = local_c;
      }
    }
  }
  return uVar2;
}



uint __hi0bits_D2A(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  return uVar1 ^ 0x1f;
}



undefined8 * bitstob(undefined4 *param_1,int param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *local_res8;
  undefined8 *local_28;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  for (local_1c = 0x20; local_1c < param_2; local_1c = local_1c << 1) {
    local_20 = local_20 + 1;
  }
  puVar4 = __Balloc_D2A(local_20);
  puVar5 = puVar4 + 3;
  local_res8 = param_1;
  local_28 = puVar5;
  do {
    puVar1 = (undefined8 *)((longlong)local_28 + 4);
    *(undefined4 *)local_28 = *local_res8;
    local_res8 = local_res8 + 1;
    local_28 = puVar1;
  } while (local_res8 <= param_1 + (param_2 + -1 >> 5));
  local_1c = (int)((longlong)puVar1 - (longlong)puVar5 >> 2);
  do {
    iVar2 = local_1c + -1;
    if (*(int *)((longlong)puVar5 + (longlong)iVar2 * 4) != 0) {
      *(int *)((longlong)puVar4 + 0x14) = local_1c;
      uVar3 = __hi0bits_D2A(*(uint *)((longlong)puVar4 + ((longlong)iVar2 + 4) * 4 + 8));
      *param_3 = local_1c * 0x20 - uVar3;
      return puVar4;
    }
    local_1c = iVar2;
  } while (iVar2 != 0);
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  *param_3 = 0;
  return puVar4;
}



// WARNING: Removing unreachable block (ram,0x000140015a7f)
// WARNING: Removing unreachable block (ram,0x000140015b3d)
// WARNING: Removing unreachable block (ram,0x000140015b03)
// WARNING: Removing unreachable block (ram,0x000140015b6d)
// WARNING: Removing unreachable block (ram,0x000140015b33)
// WARNING: Removing unreachable block (ram,0x000140015b61)
// WARNING: Removing unreachable block (ram,0x000140015a50)
// WARNING: Removing unreachable block (ram,0x000140015aad)
// WARNING: Removing unreachable block (ram,0x000140015ad1)
// WARNING: Removing unreachable block (ram,0x000140015add)
// WARNING: Removing unreachable block (ram,0x000140015aa3)
// WARNING: Removing unreachable block (ram,0x000140015ae3)

int * __gdtoa(int *param_1,int param_2,uint *param_3,uint *param_4,int param_5,uint param_6,
             int *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  ulonglong uVar8;
  double dVar9;
  int local_res10;
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d8;
  int local_d4;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  double local_a8;
  int *local_a0;
  int local_94;
  int local_90;
  uint local_8c;
  int *local_88;
  double local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_24 = 0;
  *param_4 = *param_4 & 0xffffffcf;
  local_8c = *param_4;
  uVar4 = local_8c & 7;
  if (uVar4 == 4) {
    *param_7 = -0x8000;
    piVar6 = __nrv_alloc_D2A("NaN",param_8,3);
    return piVar6;
  }
  if (4 < uVar4) {
    return (int *)0x0;
  }
  if (uVar4 == 3) {
    *param_7 = -0x8000;
    piVar6 = __nrv_alloc_D2A("Infinity",param_8,8);
    return piVar6;
  }
  if (3 < uVar4) {
    return (int *)0x0;
  }
  if (uVar4 == 0) {
LAB_140015643:
    *param_7 = 1;
    piVar6 = __nrv_alloc_D2A("0",param_8,1);
    return piVar6;
  }
  if (1 < uVar4 - 1) {
    return (int *)0x0;
  }
  local_90 = *param_1;
  local_60 = bitstob(param_3,local_90,&local_d4);
  local_94 = param_2;
  local_d8 = __trailz_D2A((longlong)local_60);
  local_res10 = param_2;
  if (local_d8 != 0) {
    __rshift_D2A((longlong)local_60,local_d8);
    local_res10 = param_2 + local_d8;
    local_d4 = local_d4 - local_d8;
  }
  if (*(int *)((longlong)local_60 + 0x14) == 0) {
    __Bfree_D2A(local_60);
    goto LAB_140015643;
  }
  uVar8 = __b2d_D2A((longlong)local_60,(int *)&local_d8);
  local_d8 = (local_res10 + local_d4) - 1;
  local_e0 = (double)(uVar8 & 0xfffffffffffff);
  uVar1 = (undefined4)local_e0;
  local_e0 = (double)((ulonglong)local_e0 | 0x3ff0000000000000);
  local_80 = (double)(int)local_d8 * 0.301029995663981 +
             (local_e0 - 1.5) * 0.289529654602168 + 0.1760912590558;
  local_28 = local_d8;
  if ((int)local_d8 < 0) {
    local_28 = -local_d8;
  }
  if (0 < (int)(local_28 - 0x435)) {
    local_80 = (double)(int)(local_28 - 0x435) * 7e-17 + local_80;
  }
  local_30 = (uint)local_80;
  if ((local_80 < 0.0) && ((double)(int)local_30 != local_80)) {
    local_30 = local_30 - 1;
  }
  local_34 = 1;
  local_e0 = (double)CONCAT44(local_e0._4_4_ + (local_res10 + local_d4 + -1) * 0x100000,uVar1);
  dVar2 = local_e0;
  if ((-1 < (int)local_30) && ((int)local_30 < 0x17)) {
    if (local_e0 < *(double *)(&__tens_D2A + (longlong)(int)local_30 * 8)) {
      local_30 = local_30 - 1;
    }
    local_34 = 0;
  }
  local_28 = (local_d4 - local_d8) - 1;
  if ((int)local_28 < 0) {
    local_c = -local_28;
    local_48 = 0;
  }
  else {
    local_c = 0;
    local_48 = local_28;
  }
  if ((int)local_30 < 0) {
    local_c = local_c - local_30;
    local_10 = -local_30;
    local_4c = 0;
  }
  else {
    local_10 = 0;
    local_4c = local_30;
    local_48 = local_48 + local_30;
  }
  if ((param_5 < 0) || (9 < param_5)) {
    param_5 = 0;
  }
  local_54 = 1;
  if (param_5 < 6) {
    if ((0x3f9 < (int)local_d8) || ((int)local_d8 < -0x3fe)) {
      local_54 = 0;
    }
  }
  else {
    param_5 = param_5 + -4;
    local_54 = 0;
  }
  local_38 = 1;
  local_20 = 0xffffffff;
  local_1c = 0xffffffff;
  if (param_5 == 5) {
LAB_140015962:
    local_20 = local_30 + param_6;
    local_1c = local_20 + 1;
    local_d8 = local_1c;
    if ((int)local_1c < 1) {
      local_d8 = 1;
    }
  }
  else if (param_5 < 6) {
    if (param_5 == 4) {
LAB_140015931:
      if ((int)param_6 < 1) {
        param_6 = 1;
      }
      local_d8 = param_6;
      local_20 = param_6;
      local_1c = param_6;
    }
    else if (param_5 < 5) {
      if (param_5 == 3) {
        local_38 = 0;
        goto LAB_140015962;
      }
      if (param_5 < 4) {
        if (param_5 < 2) {
          if (-1 < param_5) {
            param_6 = 0;
            local_d8 = (int)((double)local_90 * 0.30103) + 3;
          }
        }
        else if (param_5 == 2) {
          local_38 = 0;
          goto LAB_140015931;
        }
      }
    }
  }
  local_a0 = __rv_alloc_D2A(local_d8);
  uVar3 = local_1c;
  uVar4 = local_30;
  if (param_5 < 2) {
    local_44 = 0;
  }
  else {
    local_44 = param_1[3] + -1;
    if (local_44 != 0) {
      if (local_44 < 0) {
        local_44 = 2;
      }
      if ((local_8c & 8) != 0) {
        local_44 = 3 - local_44;
      }
    }
  }
  local_88 = local_a0;
  if (((((int)local_1c < 0) || (0xe < (int)local_1c)) || (local_54 == 0)) ||
     ((local_44 != 0 || (local_30 != 0)))) {
LAB_140015eb3:
    local_30 = uVar4;
    local_1c = uVar3;
    if ((local_res10 < 0) || (param_1[5] < (int)uVar4)) {
      local_3c = local_c;
      local_40 = local_10;
      local_68 = (undefined8 *)0x0;
      local_70 = (undefined8 *)0x0;
      local_88 = local_a0;
      if (local_38 != 0) {
        local_d8 = (local_90 - local_d4) + 1;
        if (((local_res10 - (local_90 - local_d4) < param_1[1]) && (param_5 != 3)) && (param_5 != 5)
           ) {
          local_d8 = (local_res10 - param_1[1]) + 1;
          if (((1 < param_5) && (0 < (int)uVar3)) && ((int)uVar3 < (int)local_d8)) {
LAB_14001611c:
            local_28 = uVar3 - 1;
            if ((int)local_10 < (int)local_28) {
              local_28 = local_28 - local_10;
              local_4c = local_4c + local_28;
              local_10 = local_10 + local_28;
              local_40 = 0;
            }
            else {
              local_40 = local_10 - local_28;
            }
            local_d8 = uVar3;
            if ((int)uVar3 < 0) {
              local_3c = local_c - uVar3;
              local_d8 = 0;
            }
          }
        }
        else if (1 < param_5) goto LAB_14001611c;
        local_c = local_c + local_d8;
        local_48 = local_48 + local_d8;
        local_70 = __i2b_D2A(1);
      }
      if ((0 < (int)local_3c) && (0 < (int)local_48)) {
        local_d8 = local_3c;
        if ((int)local_48 <= (int)local_3c) {
          local_d8 = local_48;
        }
        local_c = local_c - local_d8;
        local_3c = local_3c - local_d8;
        local_48 = local_48 - local_d8;
      }
      if (0 < (int)local_10) {
        if (local_38 == 0) {
          local_60 = __pow5mult_D2A(local_60,local_10);
        }
        else {
          if (0 < (int)local_40) {
            local_70 = __pow5mult_D2A(local_70,local_40);
            local_c0 = __mult_D2A((longlong)local_70,(longlong)local_60);
            __Bfree_D2A(local_60);
            local_60 = local_c0;
          }
          local_28 = local_10 - local_40;
          if (local_28 != 0) {
            local_60 = __pow5mult_D2A(local_60,local_28);
          }
        }
      }
      local_78 = __i2b_D2A(1);
      if (0 < (int)local_4c) {
        local_78 = __pow5mult_D2A(local_78,local_4c);
      }
      local_50 = 0;
      if (((param_5 < 2) && (local_d4 == 1)) && (param_1[1] + 1 < local_94)) {
        local_c = local_c + 1;
        local_48 = local_48 + 1;
        local_50 = 1;
      }
      if (local_4c == 0) {
        uVar4 = 0x1f;
      }
      else {
        uVar4 = __hi0bits_D2A(*(uint *)((longlong)local_78 +
                                       ((longlong)(*(int *)((longlong)local_78 + 0x14) + -1) + 4) *
                                       4 + 8));
      }
      local_d8 = (uVar4 - local_48) - 4 & 0x1f;
      local_3c = local_3c + local_d8;
      local_c = local_c + local_d8;
      if (0 < (int)local_c) {
        local_60 = __lshift_D2A(local_60,local_c);
      }
      local_48 = local_48 + local_d8;
      if (0 < (int)local_48) {
        local_78 = __lshift_D2A(local_78,local_48);
      }
      if ((local_34 != 0) && (iVar5 = __cmp_D2A((longlong)local_60,(longlong)local_78), iVar5 < 0))
      {
        local_30 = local_30 - 1;
        local_60 = __multadd_D2A(local_60,10,0);
        if (local_38 != 0) {
          local_70 = __multadd_D2A(local_70,10,0);
        }
        local_1c = local_20;
      }
      if ((0 < (int)local_1c) || (param_5 < 3)) {
        if (local_38 == 0) {
          local_d8 = 1;
          while( true ) {
            local_14 = __quorem_D2A((longlong)local_60,(longlong)local_78);
            local_14 = local_14 + 0x30;
            piVar6 = (int *)((longlong)local_88 + 1);
            *(char *)local_88 = (char)local_14;
            local_88 = piVar6;
            if ((int)local_1c <= (int)local_d8) break;
            local_60 = __multadd_D2A(local_60,10,0);
            local_d8 = local_d8 + 1;
          }
        }
        else {
          if (0 < (int)local_3c) {
            local_70 = __lshift_D2A(local_70,local_3c);
          }
          local_68 = local_70;
          if (local_50 != 0) {
            local_70 = __Balloc_D2A(*(int *)(local_70 + 1));
            memcpy(local_70 + 2,local_68 + 2,((longlong)*(int *)((longlong)local_68 + 0x14) + 2) * 4
                  );
            local_70 = __lshift_D2A(local_70,1);
          }
          local_d8 = 1;
          while( true ) {
            local_14 = __quorem_D2A((longlong)local_60,(longlong)local_78);
            local_14 = local_14 + 0x30;
            local_28 = __cmp_D2A((longlong)local_60,(longlong)local_68);
            local_c8 = __diff_D2A((longlong)local_78,(longlong)local_70);
            if (*(int *)(local_c8 + 2) == 0) {
              local_2c = __cmp_D2A((longlong)local_60,(longlong)local_c8);
            }
            else {
              local_2c = 1;
            }
            __Bfree_D2A(local_c8);
            if ((((local_2c == 0) && (param_5 == 0)) && ((*param_3 & 1) == 0)) && (local_44 == 0)) {
              if (local_14 == 0x39) goto LAB_140016733;
              if ((int)local_28 < 1) {
                if ((1 < *(int *)((longlong)local_60 + 0x14)) || (*(int *)(local_60 + 3) != 0)) {
                  local_24 = 0x10;
                }
              }
              else {
                local_14 = local_14 + 1;
                local_24 = 0x20;
              }
              *(char *)local_88 = (char)local_14;
              local_88 = (int *)((longlong)local_88 + 1);
              goto LAB_140016961;
            }
            if (((int)local_28 < 0) ||
               (((local_28 == 0 && (param_5 == 0)) && ((*param_3 & 1) == 0)))) {
              if ((local_44 != 0) &&
                 ((1 < *(int *)((longlong)local_60 + 0x14) || (*(int *)(local_60 + 3) != 0)))) {
                if (local_44 != 2) goto LAB_140016655;
                local_24 = 0x10;
                goto LAB_140016702;
              }
              if (0 < local_2c) {
                local_60 = __lshift_D2A(local_60,1);
                local_2c = __cmp_D2A((longlong)local_60,(longlong)local_78);
                if (((0 < local_2c) || ((local_2c == 0 && ((local_14 & 1) != 0)))) &&
                   (uVar4 = local_14 + 1, bVar7 = local_14 == 0x39, local_14 = uVar4, bVar7))
                goto LAB_140016733;
                local_24 = 0x20;
              }
              if ((1 < *(int *)((longlong)local_60 + 0x14)) || (*(int *)(local_60 + 3) != 0)) {
                local_24 = 0x10;
              }
              goto LAB_140016702;
            }
            if ((0 < local_2c) && (local_44 != 2)) {
              if (local_14 == 0x39) goto LAB_140016733;
              local_24 = 0x20;
              *(char *)local_88 = (char)local_14 + '\x01';
              local_88 = (int *)((longlong)local_88 + 1);
              goto LAB_140016961;
            }
            piVar6 = (int *)((longlong)local_88 + 1);
            *(char *)local_88 = (char)local_14;
            local_88 = piVar6;
            if (local_1c == local_d8) break;
            local_60 = __multadd_D2A(local_60,10,0);
            if (local_68 == local_70) {
              local_70 = __multadd_D2A(local_70,10,0);
              local_68 = local_70;
            }
            else {
              local_68 = __multadd_D2A(local_68,10,0);
              local_70 = __multadd_D2A(local_70,10,0);
            }
            local_d8 = local_d8 + 1;
          }
        }
        if (local_44 == 0) {
          local_60 = __lshift_D2A(local_60,1);
          local_28 = __cmp_D2A((longlong)local_60,(longlong)local_78);
          if (0 < (int)local_28) goto LAB_1400168eb;
          if (local_28 == 0) {
            uVar4 = local_14 & 1;
            goto joined_r0x0001400168e3;
          }
        }
        else if (local_44 != 2) {
          if (*(int *)((longlong)local_60 + 0x14) < 2) {
            uVar4 = *(uint *)(local_60 + 3);
joined_r0x0001400168e3:
            if (uVar4 == 0) goto LAB_140016940;
          }
LAB_1400168eb:
          local_24 = 0x20;
          piVar6 = local_88;
          do {
            local_88 = piVar6;
            piVar6 = (int *)((longlong)local_88 + -1);
            if (*(char *)piVar6 != '9') {
              *(char *)piVar6 = *(char *)piVar6 + '\x01';
              goto LAB_140016961;
            }
          } while (piVar6 != local_a0);
          local_30 = local_30 + 1;
          *(char *)piVar6 = '1';
          goto LAB_140016961;
        }
LAB_140016940:
        if ((1 < *(int *)((longlong)local_60 + 0x14)) || (*(int *)(local_60 + 3) != 0)) {
          local_24 = 0x10;
        }
        goto LAB_140016961;
      }
      if (-1 < (int)local_1c) {
        local_78 = __multadd_D2A(local_78,5,0);
        iVar5 = __cmp_D2A((longlong)local_60,(longlong)local_78);
        if (0 < iVar5) goto LAB_1400163de;
      }
    }
    else {
      local_80 = *(double *)(&__tens_D2A + (longlong)(int)uVar4 * 8);
      if ((-1 < (int)param_6) || (0 < (int)uVar3)) {
        local_d8 = 1;
        local_e0 = dVar2;
        local_88 = local_a0;
        while( true ) {
          local_b4 = (uint)(local_e0 / local_80);
          local_e0 = local_e0 - (double)(int)local_b4 * local_80;
          piVar6 = (int *)((longlong)local_88 + 1);
          *(char *)local_88 = (char)local_b4 + '0';
          local_88 = piVar6;
          if (local_e0 == 0.0) break;
          if (uVar3 == local_d8) {
            if (local_44 == 0) {
              if ((local_80 < local_e0 + local_e0) ||
                 ((local_e0 + local_e0 == local_80 && ((local_b4 & 1) != 0)))) goto LAB_140016006;
              local_24 = 0x10;
            }
            else {
              if (local_44 == 1) goto LAB_140016006;
              local_24 = 0x10;
            }
            break;
          }
          local_d8 = local_d8 + 1;
          local_e0 = local_e0 * 10.0;
        }
        goto LAB_1400169ad;
      }
      local_70 = (undefined8 *)0x0;
      local_78 = (undefined8 *)0x0;
      local_88 = local_a0;
      if ((-1 < (int)uVar3) && (local_80 * 5.0 < dVar2)) goto LAB_1400163de;
    }
LAB_1400163c3:
    local_30 = ~param_6;
    local_24 = 0x10;
  }
  else {
    local_a8 = local_e0;
    local_ac = local_30;
    local_b0 = local_1c;
    local_18 = 2;
    local_2c = 0;
    local_80 = 1.0;
    local_d8 = 0;
    if ((local_34 != 0) && ((local_e0 < 1.0 && (0 < (int)local_1c)))) {
      if ((int)local_20 < 1) goto LAB_140015eb3;
      local_1c = local_20;
      local_30 = 0xffffffff;
      local_e0 = local_e0 * 10.0;
      local_18 = 3;
    }
    dVar9 = (double)local_18 * local_e0 + 7.0;
    local_e8._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_e8 = (double)CONCAT44(local_e8._4_4_ + -0x3400000,SUB84(dVar9,0));
    if (local_1c != 0) {
      if (local_38 != 0) {
        local_e8 = 0.5 / *(double *)(&__tens_D2A + (longlong)(int)(local_1c - 1) * 8) - local_e8;
        local_d8 = 0;
        local_88 = local_a0;
        while( true ) {
          local_b4 = (uint)(local_e0 / 1.0);
          local_e0 = local_e0 - (double)(int)local_b4 * 1.0;
          piVar6 = (int *)((longlong)local_88 + 1);
          *(char *)local_88 = (char)local_b4 + '0';
          local_88 = piVar6;
          if (local_e0 < local_e8) break;
          if (1.0 - local_e0 < local_e8) goto LAB_140016006;
          local_d8 = local_d8 + 1;
          if ((int)local_1c <= (int)local_d8) goto LAB_140015eb3;
          local_e8 = local_e8 * 10.0;
          local_e0 = local_e0 * 10.0;
        }
        if (local_e0 != 0.0) {
          local_24 = 0x10;
        }
        goto LAB_1400169ad;
      }
      dVar9 = *(double *)(&__tens_D2A + (longlong)(int)(local_1c - 1) * 8);
      local_d8 = 1;
      local_88 = local_a0;
      while( true ) {
        local_b4 = (uint)(local_e0 / 1.0);
        if (local_b4 != 0) {
          local_e0 = local_e0 - (double)(int)local_b4 * 1.0;
        }
        piVar6 = (int *)((longlong)local_88 + 1);
        *(char *)local_88 = (char)local_b4 + '0';
        local_88 = piVar6;
        if (local_1c == local_d8) break;
        local_d8 = local_d8 + 1;
        local_e0 = local_e0 * 10.0;
      }
      local_80 = 0.5;
      if (dVar9 * local_e8 + 0.5 < local_e0) {
LAB_140016006:
        local_24 = 0x20;
        piVar6 = local_88;
        do {
          local_88 = piVar6;
          piVar6 = (int *)((longlong)local_88 + -1);
          if (*(char *)piVar6 != '9') goto LAB_140016036;
        } while (piVar6 != local_a0);
        local_30 = local_30 + 1;
        *(char *)piVar6 = '0';
LAB_140016036:
        *(char *)piVar6 = *(char *)piVar6 + '\x01';
        goto LAB_1400169ad;
      }
      if (local_e0 < 0.5 - dVar9 * local_e8) {
        if (local_e0 != 0.0) {
          local_24 = 0x10;
        }
        goto LAB_1400169ad;
      }
      goto LAB_140015eb3;
    }
    local_70 = (undefined8 *)0x0;
    local_78 = (undefined8 *)0x0;
    if (local_e0 - 5.0 <= local_e8) {
      if (-local_e8 <= local_e0 - 5.0) goto LAB_140015eb3;
      goto LAB_1400163c3;
    }
LAB_1400163de:
    local_24 = 0x20;
    *(char *)local_88 = '1';
    local_30 = local_30 + 1;
    local_88 = (int *)((longlong)local_88 + 1);
  }
LAB_140016961:
  __Bfree_D2A(local_78);
  if (local_70 != (undefined8 *)0x0) {
    if ((local_68 != (undefined8 *)0x0) && (local_68 != local_70)) {
      __Bfree_D2A(local_68);
    }
    __Bfree_D2A(local_70);
  }
LAB_1400169ad:
  for (; (local_a0 < local_88 && (*(char *)((longlong)local_88 + -1) == '0'));
      local_88 = (int *)((longlong)local_88 + -1)) {
  }
  __Bfree_D2A(local_60);
  *(char *)local_88 = '\0';
  *param_7 = local_30 + 1;
  if (param_8 != (undefined8 *)0x0) {
    *param_8 = local_88;
  }
  *param_4 = *param_4 | local_24;
  return local_a0;
LAB_140016655:
  while (iVar5 = __cmp_D2A((longlong)local_78,(longlong)local_70), 0 < iVar5) {
    *(char *)local_88 = (char)local_14;
    local_88 = (int *)((longlong)local_88 + 1);
    local_d0 = __multadd_D2A(local_70,10,0);
    if (local_68 == local_70) {
      local_68 = local_d0;
    }
    local_70 = local_d0;
    local_60 = __multadd_D2A(local_60,10,0);
    local_14 = __quorem_D2A((longlong)local_60,(longlong)local_78);
    local_14 = local_14 + 0x30;
  }
  uVar4 = local_14 + 1;
  bVar7 = local_14 == 0x39;
  local_14 = uVar4;
  if (bVar7) {
LAB_140016733:
    *(char *)local_88 = '9';
    local_88 = (int *)((longlong)local_88 + 1);
    goto LAB_1400168eb;
  }
  local_24 = 0x20;
LAB_140016702:
  *(char *)local_88 = (char)local_14;
  local_88 = (int *)((longlong)local_88 + 1);
  goto LAB_140016961;
}



int __lo0bits_D2A(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = *param_1; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
    iVar2 = iVar2 + 1;
  }
  *param_1 = *param_1 >> ((byte)iVar2 & 0x1f);
  return iVar2;
}



void __rshift_D2A(longlong param_1,uint param_2)

{
  sbyte sVar1;
  uint *puVar2;
  uint local_1c;
  uint *local_18;
  uint *local_10;
  
  local_18 = (uint *)(param_1 + 0x18);
  if ((int)param_2 >> 5 < *(int *)(param_1 + 0x14)) {
    puVar2 = local_18 + *(int *)(param_1 + 0x14);
    local_10 = local_18 + ((int)param_2 >> 5);
    if ((param_2 & 0x1f) == 0) {
      while (local_10 < puVar2) {
        *local_18 = *local_10;
        local_18 = local_18 + 1;
        local_10 = local_10 + 1;
      }
    }
    else {
      sVar1 = (sbyte)(param_2 & 0x1f);
      local_1c = *local_10;
      while (local_10 = local_10 + 1, local_1c = local_1c >> sVar1, local_10 < puVar2) {
        *local_18 = *local_10 << (0x20U - sVar1 & 0x1f) | local_1c;
        local_1c = *local_10;
        local_18 = local_18 + 1;
      }
      *local_18 = local_1c;
      if (*local_18 != 0) {
        local_18 = local_18 + 1;
      }
    }
  }
  *(int *)(param_1 + 0x14) = (int)((longlong)local_18 - (param_1 + 0x18) >> 2);
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



int __trailz_D2A(longlong param_1)

{
  int iVar1;
  uint local_24;
  uint *local_20;
  int local_14;
  uint *local_10;
  
  local_10 = (uint *)(param_1 + 0x18);
  local_20 = local_10 + *(int *)(param_1 + 0x14);
  local_14 = 0;
  for (; (local_10 < local_20 && (*local_10 == 0)); local_10 = local_10 + 1) {
    local_14 = local_14 + 0x20;
  }
  if (local_10 < local_20) {
    local_24 = *local_10;
    iVar1 = __lo0bits_D2A(&local_24);
    local_14 = local_14 + iVar1;
  }
  return local_14;
}



void dtoa_lock_cleanup(void)

{
  int iVar1;
  int local_c;
  
  iVar1 = dtoa_CS_init;
  LOCK();
  dtoa_CS_init = 3;
  UNLOCK();
  if (iVar1 == 2) {
    for (local_c = 0; local_c < 2; local_c = local_c + 1) {
      DeleteCriticalSection((LPCRITICAL_SECTION)(&dtoa_CritSec + (longlong)local_c * 0x28));
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000140016d90)
// WARNING: Removing unreachable block (ram,0x000140016d96)

void dtoa_lock(uint param_1)

{
  int local_c;
  
  if (dtoa_CS_init == 2) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&dtoa_CritSec + (ulonglong)param_1 * 0x28));
  }
  else {
    if (dtoa_CS_init == 0) {
      LOCK();
      dtoa_CS_init = 1;
      UNLOCK();
      for (local_c = 0; local_c < 2; local_c = local_c + 1) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(&dtoa_CritSec + (longlong)local_c * 0x28));
      }
      atexit(dtoa_lock_cleanup);
      dtoa_CS_init = 2;
    }
    while (dtoa_CS_init == 1) {
      Sleep(1);
    }
    if (dtoa_CS_init == 2) {
      EnterCriticalSection((LPCRITICAL_SECTION)(&dtoa_CritSec + (ulonglong)param_1 * 0x28));
    }
  }
  return;
}



void dtoa_unlock(uint param_1)

{
  if (dtoa_CS_init == 2) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&dtoa_CritSec + (ulonglong)param_1 * 0x28));
  }
  return;
}



int __lo0bits_D2A(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = *param_1; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
    iVar2 = iVar2 + 1;
  }
  *param_1 = *param_1 >> ((byte)iVar2 & 0x1f);
  return iVar2;
}



uint __hi0bits_D2A(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  return uVar1 ^ 0x1f;
}



undefined8 * __Balloc_D2A(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *local_10;
  
  dtoa_lock(0);
  if ((param_1 < 10) &&
     (local_10 = *(undefined8 **)(&freelist + (longlong)param_1 * 8), local_10 != (undefined8 *)0x0)
     ) {
    *(undefined8 *)(&freelist + (longlong)param_1 * 8) = *local_10;
  }
  else {
    iVar2 = 1 << ((byte)param_1 & 0x1f);
    uVar1 = (longlong)(iVar2 + -1) * 4 + 0x27U >> 3;
    if ((param_1 < 10) &&
       ((uVar1 & 0xffffffff) + ((longlong)(pmem_next + -0x14002d2a0) >> 3) < 0x121)) {
      local_10 = (undefined8 *)pmem_next;
      pmem_next = pmem_next + (uVar1 & 0xffffffff) * 8;
    }
    else {
      local_10 = malloc((uVar1 & 0xffffffff) << 3);
      if (local_10 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    *(int *)(local_10 + 1) = param_1;
    *(int *)((longlong)local_10 + 0xc) = iVar2;
  }
  dtoa_unlock(0);
  *(undefined4 *)((longlong)local_10 + 0x14) = 0;
  *(undefined4 *)(local_10 + 2) = *(undefined4 *)((longlong)local_10 + 0x14);
  return local_10;
}



void __Bfree_D2A(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 1) < 10) {
      dtoa_lock(0);
      *param_1 = *(undefined8 *)(&freelist + (longlong)*(int *)(param_1 + 1) * 8);
      *(undefined8 **)(&freelist + (longlong)*(int *)(param_1 + 1) * 8) = param_1;
      dtoa_unlock(0);
    }
    else {
      free(param_1);
    }
  }
  return;
}



undefined8 * __multadd_D2A(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *local_res8;
  ulonglong local_20;
  uint *local_18;
  int local_c;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  local_c = 0;
  local_20 = (ulonglong)param_3;
  local_18 = (uint *)(param_1 + 3);
  do {
    uVar2 = local_20 + (ulonglong)*local_18 * (longlong)param_2;
    local_20 = uVar2 >> 0x20;
    *local_18 = (uint)uVar2;
    local_c = local_c + 1;
    local_18 = local_18 + 1;
  } while (local_c < iVar1);
  if (local_20 != 0) {
    local_res8 = param_1;
    if (*(int *)((longlong)param_1 + 0xc) <= iVar1) {
      local_res8 = __Balloc_D2A(*(int *)(param_1 + 1) + 1);
      if (local_res8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      memcpy(local_res8 + 2,param_1 + 2,((longlong)*(int *)((longlong)param_1 + 0x14) + 2) * 4);
      __Bfree_D2A(param_1);
    }
    *(int *)((longlong)local_res8 + ((longlong)iVar1 + 4) * 4 + 8) = (int)(uVar2 >> 0x20);
    *(int *)((longlong)local_res8 + 0x14) = iVar1 + 1;
    param_1 = local_res8;
  }
  return param_1;
}



undefined8 * __i2b_D2A(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = __Balloc_D2A(1);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 3) = param_1;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 1;
  }
  return puVar1;
}



undefined8 * __mult_D2A(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong local_res8;
  longlong local_res10;
  ulonglong local_38;
  uint *local_30;
  uint *local_28;
  uint *local_20;
  uint *local_18;
  int local_10;
  int local_c;
  
  local_res8 = param_1;
  local_res10 = param_2;
  if (*(int *)(param_1 + 0x14) < *(int *)(param_2 + 0x14)) {
    local_res8 = param_2;
    local_res10 = param_1;
  }
  local_c = *(int *)(local_res8 + 8);
  iVar3 = *(int *)(local_res8 + 0x14);
  iVar4 = *(int *)(local_res10 + 0x14);
  local_10 = iVar4 + iVar3;
  if (*(int *)(local_res8 + 0xc) < local_10) {
    local_c = local_c + 1;
  }
  puVar6 = __Balloc_D2A(local_c);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    local_18 = (uint *)(puVar6 + 3);
    puVar7 = (undefined8 *)((longlong)local_18 + (longlong)local_10 * 4);
    for (; local_18 < puVar7; local_18 = (uint *)((longlong)local_18 + 4)) {
      *local_18 = 0;
    }
    local_30 = (uint *)(puVar6 + 3);
    local_20 = (uint *)(local_res10 + 0x18);
    while (local_20 < (uint *)(local_res10 + 0x18) + iVar4) {
      uVar5 = *local_20;
      if (uVar5 != 0) {
        local_28 = local_30;
        local_38 = 0;
        local_18 = (uint *)(local_res8 + 0x18U);
        do {
          puVar1 = local_18 + 1;
          uVar8 = local_38 + (ulonglong)*local_18 * (ulonglong)uVar5 + (ulonglong)*local_28;
          local_38 = uVar8 >> 0x20;
          puVar2 = local_28 + 1;
          *local_28 = (uint)uVar8;
          local_28 = puVar2;
          local_18 = puVar1;
        } while (puVar1 < (uint *)(local_res8 + 0x18U) + iVar3);
        *puVar2 = (uint)(uVar8 >> 0x20);
      }
      local_30 = local_30 + 1;
      local_20 = local_20 + 1;
    }
    local_28 = (uint *)((longlong)puVar6 + (longlong)local_10 * 4 + 0x18);
    while ((0 < local_10 && (local_28 = local_28 + -1, *local_28 == 0))) {
      local_10 = local_10 + -1;
    }
    *(int *)((longlong)puVar6 + 0x14) = local_10;
  }
  return puVar6;
}



undefined8 * __pow5mult_D2A(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *local_res8;
  uint local_res10;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_res8 = param_1;
  if (((param_2 & 3) == 0) ||
     (local_res8 = __multadd_D2A(param_1,*(int *)(&p05_0 + (longlong)(int)((param_2 & 3) - 1) * 4),0
                                ), local_res8 != (undefined8 *)0x0)) {
    local_res10 = (int)param_2 >> 2;
    if (local_res10 != 0) {
      local_10 = p5s;
      if (p5s == (undefined8 *)0x0) {
        dtoa_lock(1);
        local_10 = p5s;
        if (p5s == (undefined8 *)0x0) {
          local_10 = __i2b_D2A(0x271);
          if (local_10 == (undefined8 *)0x0) {
            p5s = local_10;
            return (undefined8 *)0x0;
          }
          p5s = local_10;
          *local_10 = 0;
        }
        dtoa_unlock(1);
      }
      while( true ) {
        if ((local_res10 & 1) != 0) {
          puVar1 = __mult_D2A((longlong)local_res8,(longlong)local_10);
          if (puVar1 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          __Bfree_D2A(local_res8);
          local_res8 = puVar1;
        }
        local_res10 = (int)local_res10 >> 1;
        if (local_res10 == 0) break;
        local_18 = (undefined8 *)*local_10;
        if (local_18 == (undefined8 *)0x0) {
          dtoa_lock(1);
          local_18 = (undefined8 *)*local_10;
          if (local_18 == (undefined8 *)0x0) {
            puVar1 = __mult_D2A((longlong)local_10,(longlong)local_10);
            *local_10 = puVar1;
            local_18 = (undefined8 *)*local_10;
            if (local_18 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
            *local_18 = 0;
          }
          dtoa_unlock(1);
        }
        local_10 = local_18;
      }
      return local_res8;
    }
  }
  else {
    local_res8 = (undefined8 *)0x0;
  }
  return local_res8;
}



undefined8 * __lshift_D2A(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  sbyte sVar4;
  int iVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(param_1 + 1);
  iVar5 = ((int)param_2 >> 5) + *(int *)((longlong)param_1 + 0x14);
  local_14 = iVar5 + 1;
  for (local_c = *(int *)((longlong)param_1 + 0xc); local_c < local_14; local_c = local_c << 1) {
    local_10 = local_10 + 1;
  }
  puVar6 = __Balloc_D2A(local_10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    local_28 = (uint *)(puVar6 + 3);
    for (local_c = 0; local_c < (int)param_2 >> 5; local_c = local_c + 1) {
      *local_28 = 0;
      local_28 = local_28 + 1;
    }
    puVar7 = (uint *)(param_1 + 3);
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    local_20 = puVar7;
    if ((param_2 & 0x1f) == 0) {
      do {
        puVar1 = local_20 + 1;
        *local_28 = *local_20;
        local_28 = local_28 + 1;
        local_20 = puVar1;
      } while (puVar1 < puVar7 + iVar3);
    }
    else {
      sVar4 = (sbyte)(param_2 & 0x1f);
      local_2c = 0;
      do {
        puVar1 = local_28 + 1;
        *local_28 = *local_20 << sVar4 | local_2c;
        puVar2 = local_20 + 1;
        local_2c = *local_20 >> (0x20U - sVar4 & 0x1f);
        local_28 = puVar1;
        local_20 = puVar2;
      } while (puVar2 < puVar7 + iVar3);
      *puVar1 = local_2c;
      if (*puVar1 != 0) {
        local_14 = iVar5 + 2;
      }
    }
    *(int *)((longlong)puVar6 + 0x14) = local_14 + -1;
    __Bfree_D2A(param_1);
  }
  return puVar6;
}



int __cmp_D2A(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint *local_18;
  uint *local_10;
  
  iVar1 = *(int *)(param_2 + 0x14);
  iVar2 = *(int *)(param_1 + 0x14) - iVar1;
  if (iVar2 == 0) {
    local_10 = (uint *)(param_1 + 0x18) + iVar1;
    local_18 = (uint *)(param_2 + 0x18 + (longlong)iVar1 * 4);
    do {
      local_10 = local_10 + -1;
      local_18 = local_18 + -1;
      if (*local_10 != *local_18) {
        if (*local_10 < *local_18) {
          return -1;
        }
        return 1;
      }
    } while ((uint *)(param_1 + 0x18) < local_10);
    iVar2 = 0;
  }
  return iVar2;
}



undefined8 * __diff_D2A(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong local_res8;
  longlong local_res10;
  ulonglong local_30;
  int *local_28;
  uint *local_20;
  uint *local_18;
  int local_10;
  uint local_c;
  
  iVar4 = __cmp_D2A(param_1,param_2);
  if (iVar4 == 0) {
    puVar5 = __Balloc_D2A(0);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)((longlong)puVar5 + 0x14) = 1;
      *(undefined4 *)(puVar5 + 3) = 0;
    }
  }
  else {
    local_res8 = param_1;
    local_res10 = param_2;
    if (iVar4 < 0) {
      local_res8 = param_2;
      local_res10 = param_1;
    }
    local_c = (uint)(iVar4 < 0);
    puVar5 = __Balloc_D2A(*(int *)(local_res8 + 8));
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      *(uint *)(puVar5 + 2) = local_c;
      local_10 = *(int *)(local_res8 + 0x14);
      iVar4 = *(int *)(local_res10 + 0x14);
      local_30 = 0;
      local_28 = (int *)(puVar5 + 3);
      local_20 = (uint *)(local_res10 + 0x18U);
      local_18 = (uint *)(local_res8 + 0x18);
      do {
        puVar1 = local_18 + 1;
        puVar2 = local_20 + 1;
        lVar6 = ((ulonglong)*local_18 - (ulonglong)*local_20) - local_30;
        local_30 = (ulonglong)((uint)((ulonglong)lVar6 >> 0x20) & 1);
        piVar3 = local_28 + 1;
        *local_28 = (int)lVar6;
        local_28 = piVar3;
        local_20 = puVar2;
        local_18 = puVar1;
      } while (puVar2 < (uint *)(local_res10 + 0x18U) + iVar4);
      while (local_18 < (uint *)(local_res8 + 0x18) + local_10) {
        lVar6 = *local_18 - local_30;
        local_30 = (ulonglong)((uint)((ulonglong)lVar6 >> 0x20) & 1);
        *local_28 = (int)lVar6;
        local_28 = local_28 + 1;
        local_18 = local_18 + 1;
      }
      while (local_28 = local_28 + -1, *local_28 == 0) {
        local_10 = local_10 + -1;
      }
      *(int *)((longlong)puVar5 + 0x14) = local_10;
    }
  }
  return puVar5;
}



undefined8 __b2d_D2A(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  uint local_38;
  uint uStack_34;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  
  puVar5 = (uint *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x14);
  local_10 = puVar5 + (longlong)iVar1 + -1;
  uVar2 = *local_10;
  uVar4 = __hi0bits_D2A(uVar2);
  *param_2 = 0x20 - uVar4;
  if ((int)uVar4 < 0xb) {
    cVar3 = (char)uVar4;
    uStack_34 = uVar2 >> (0xbU - cVar3 & 0x1f) | 0x3ff00000;
    if (puVar5 < local_10) {
      local_14 = puVar5[(longlong)iVar1 + -2];
    }
    else {
      local_14 = 0;
    }
    local_38 = local_14 >> (0xbU - cVar3 & 0x1f) | uVar2 << (cVar3 + 0x15U & 0x1f);
  }
  else {
    if (puVar5 < local_10) {
      local_10 = puVar5 + (longlong)iVar1 + -2;
      local_1c = *local_10;
    }
    else {
      local_1c = 0;
    }
    if (uVar4 - 0xb == 0) {
      uStack_34 = uVar2 | 0x3ff00000;
      local_38 = local_1c;
    }
    else {
      bVar6 = (byte)(uVar4 - 0xb);
      uStack_34 = local_1c >> (0x20 - bVar6 & 0x1f) | uVar2 << (bVar6 & 0x1f) | 0x3ff00000;
      if (puVar5 < local_10) {
        local_18 = local_10[-1];
      }
      else {
        local_18 = 0;
      }
      local_38 = local_18 >> (0x20 - bVar6 & 0x1f) | local_1c << (bVar6 & 0x1f);
    }
  }
  return CONCAT44(uStack_34,local_38);
}



undefined8 * __d2b_D2A(ulonglong param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_48;
  uint local_44;
  undefined8 local_40;
  uint local_34;
  uint *local_30;
  undefined8 *local_28;
  int local_20;
  int local_1c;
  
  local_40 = param_1;
  local_28 = __Balloc_D2A(1);
  if (local_28 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_30 = (uint *)(local_28 + 3);
    local_48 = local_40._4_4_ & 0xfffff;
    local_40 = local_40 & 0x7fffffffffffffff;
    local_34 = local_40._4_4_ >> 0x14;
    if (local_34 != 0) {
      local_48 = local_48 | 0x100000;
    }
    local_44 = (uint)local_40;
    if ((uint)local_40 == 0) {
      local_20 = __lo0bits_D2A(&local_48);
      *local_30 = local_48;
      *(undefined4 *)((longlong)local_28 + 0x14) = 1;
      local_1c = *(int *)((longlong)local_28 + 0x14);
      local_20 = local_20 + 0x20;
    }
    else {
      local_20 = __lo0bits_D2A(&local_44);
      if (local_20 == 0) {
        *local_30 = local_44;
      }
      else {
        *local_30 = local_48 << (0x20 - (byte)local_20 & 0x1f) | local_44;
        local_48 = local_48 >> ((byte)local_20 & 0x1f);
      }
      local_30[1] = local_48;
      if (local_30[1] == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
      *(undefined4 *)((longlong)local_28 + 0x14) = uVar3;
      local_1c = *(int *)((longlong)local_28 + 0x14);
    }
    if (local_34 == 0) {
      *param_2 = local_20 + -0x432;
      iVar1 = local_1c * 0x20;
      uVar2 = __hi0bits_D2A(local_30[(longlong)local_1c + -1]);
      *param_3 = iVar1 - uVar2;
    }
    else {
      *param_2 = (local_34 - 0x433) + local_20;
      *param_3 = 0x35 - local_20;
    }
  }
  return local_28;
}



char * __strcp_D2A(char *param_1,char *param_2)

{
  char *local_res8;
  char *local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  while( true ) {
    *local_res8 = *local_res10;
    if (*local_res8 == '\0') break;
    local_res8 = local_res8 + 1;
    local_res10 = local_res10 + 1;
  }
  return local_res8;
}



undefined8 __fpclassify(ulonglong param_1)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = (uint)(param_1 >> 0x20);
  local_18 = (int)param_1;
  if ((param_1 & 0x7ff0000000000000) == 0 && (local_18 == 0 && (param_1 & 0xfffff00000000) == 0)) {
    uVar1 = 0x4000;
  }
  else if ((param_1 & 0x7ff0000000000000) == 0) {
    uVar1 = 0x4400;
  }
  else if ((uStack_14 & 0x7ff00000) == 0x7ff00000) {
    if (local_18 == 0 && (param_1 & 0xfffff00000000) == 0) {
      uVar1 = 0x500;
    }
    else {
      uVar1 = 0x100;
    }
  }
  else {
    uVar1 = 0x400;
  }
  return uVar1;
}



undefined8 __fpclassifyl(undefined1 (*param_1) [10])

{
  undefined1 auVar1 [10];
  int local_38;
  uint uStack_34;
  ushort uStack_30;
  
  auVar1 = *param_1;
  uStack_30 = auVar1._8_2_;
  local_38 = auVar1._0_4_;
  uStack_34 = auVar1._4_4_;
  if ((uStack_30 & 0x7fff) == 0) {
    if (local_38 == 0 && uStack_34 == 0) {
      return 0x4000;
    }
    if (-1 < (int)uStack_34) {
      return 0x4400;
    }
  }
  else if ((uStack_30 & 0x7fff) == 0x7fff) {
    if (local_38 == 0 && (uStack_34 & 0x7fffffff) == 0) {
      return 0x500;
    }
    return 0x100;
  }
  return 0x400;
}



int __cdecl __isnan(double _X)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = SUB84(_X,0);
  uStack_14 = (uint)((ulonglong)_X >> 0x20);
  return (int)(0x7ff00000 - (uStack_14 & 0x7fffffff | (-local_18 | local_18) >> 0x1f)) >> 0x1f;
}



int __isnanl(undefined1 (*param_1) [10])

{
  undefined1 auVar1 [10];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  
  auVar1 = *param_1;
  uStack_30 = auVar1._8_2_;
  local_38 = auVar1._0_4_;
  uStack_34 = auVar1._4_4_;
  local_38 = local_38 | uStack_34 & 0x7fffffff;
  return (int)(0xfffe - (uStack_30 * 2 & 0xffffU | (-local_38 | local_38) >> 0x1f)) >> 0x10;
}



size_t __cdecl wcsnlen(wchar_t *_Src,size_t _MaxCount)

{
  wchar_t *local_res8;
  ulonglong local_10;
  
  local_10 = 0;
  for (local_res8 = _Src; (local_10 < _MaxCount && (*local_res8 != L'\0'));
      local_res8 = local_res8 + 1) {
    local_10 = local_10 + 1;
  }
  return local_10;
}



size_t __cdecl strnlen(char *_Str,size_t _MaxCount)

{
  char *local_10;
  
  for (local_10 = _Str;
      ((ulonglong)((longlong)local_10 - (longlong)_Str) < _MaxCount && (*local_10 != '\0'));
      local_10 = local_10 + 1) {
  }
  return (longlong)local_10 - (longlong)_Str;
}



int _initterm_e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *local_10;
  
  local_10 = param_1;
  while( true ) {
    if (param_2 <= local_10) {
      return 0;
    }
    if ((*local_10 != 0) && (iVar1 = (*(code *)*local_10)(), iVar1 != 0)) break;
    local_10 = local_10 + 1;
  }
  return iVar1;
}



undefined * __p__fmode(void)

{
  return _fmode_exref;
}



undefined * __p__commode(void)

{
  return _commode_exref;
}



undefined * __p__acmdln(void)

{
  return _acmdln_exref;
}



undefined * __p___initenv(void)

{
  return __initenv_exref;
}



_invalid_parameter_handler __cdecl
mingw_set_invalid_parameter_handler(_invalid_parameter_handler _Handler)

{
  _invalid_parameter_handler p_Var1;
  
  p_Var1 = handler;
  LOCK();
  handler = _Handler;
  UNLOCK();
  return p_Var1;
}



_invalid_parameter_handler __cdecl mingw_get_invalid_parameter_handler(void)

{
  return handler;
}



int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
  if (_Flag == 1) {
    iVar1 = -1;
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}



double __cdecl sin(double _X)

{
  undefined8 uVar1;
  int *piVar2;
  undefined1 local_38 [10];
  float10 local_28;
  int local_c;
  
  uVar1 = __fpclassify((ulonglong)_X);
  local_c = (int)uVar1;
  if (local_c == 0x100) {
    piVar2 = _errno();
    *piVar2 = 0x21;
    __mingw_raise_matherr(1,&_rdata,_X,0,_X);
  }
  else if (local_c == 0x500) {
    piVar2 = _errno();
    *piVar2 = 0x21;
    __mingw_raise_matherr(1,&_rdata,_X,0,0x7ff8000000000000);
    _X = NAN;
  }
  else {
    local_38 = (undefined1  [10])(float10)_X;
    __sinl_internal(&local_28,&local_38);
    _X = (double)local_28;
  }
  return _X;
}



void sincos(double param_1,double *param_2,double *param_3)

{
  ushort in_FPUStatusWord;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar3 = (float10)fcos((float10)param_1);
  fVar1 = (float10)fsin((float10)param_1);
  if ((in_FPUStatusWord & 0x400) != 0) {
    fVar2 = (float10)3.141592653589793 + (float10)3.141592653589793;
    fVar1 = fVar3;
    do {
      fVar1 = fVar1 - ROUND(fVar1 / fVar2) * fVar2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fVar3 = (float10)fcos(fVar1);
    fVar1 = (float10)fsin(fVar1);
  }
  *param_2 = (double)fVar1;
  *param_3 = (double)fVar3;
  return;
}



void sincosf(float param_1,float *param_2,float *param_3)

{
  ushort in_FPUStatusWord;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar3 = (float10)fcos((float10)param_1);
  fVar1 = (float10)fsin((float10)param_1);
  if ((in_FPUStatusWord & 0x400) != 0) {
    fVar2 = (float10)3.141592653589793 + (float10)3.141592653589793;
    fVar1 = fVar3;
    do {
      fVar1 = fVar1 - ROUND(fVar1 / fVar2) * fVar2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fVar3 = (float10)fcos(fVar1);
    fVar1 = (float10)fsin(fVar1);
  }
  *param_2 = (float)fVar1;
  *param_3 = (float)fVar3;
  return;
}



double __cdecl cos(double _X)

{
  undefined8 uVar1;
  int *piVar2;
  undefined1 local_38 [10];
  float10 local_28;
  int local_c;
  
  uVar1 = __fpclassify((ulonglong)_X);
  local_c = (int)uVar1;
  if (local_c == 0x100) {
    piVar2 = _errno();
    *piVar2 = 0x21;
    __mingw_raise_matherr(1,&_rdata,_X,0,_X);
  }
  else if (local_c == 0x500) {
    piVar2 = _errno();
    *piVar2 = 0x21;
    __mingw_raise_matherr(1,&_rdata,_X,0,0x7ff8000000000000);
    _X = NAN;
  }
  else {
    local_38 = (undefined1  [10])(float10)_X;
    __cosl_internal(&local_28,&local_38);
    _X = (double)local_28;
  }
  return _X;
}



FILE * __acrt_iob_func(uint param_1)

{
  FILE *pFVar1;
  
  pFVar1 = __iob_func();
  return pFVar1 + param_1;
}



size_t __cdecl wcrtomb(char *_Dest,wchar_t _Source,mbstate_t *_State)

{
  UINT UVar1;
  int iVar2;
  size_t sVar3;
  
  UVar1 = ___lc_codepage_func();
  iVar2 = ___mb_cur_max_func();
  sVar3 = __mingw_wcrtomb_cp(_Dest,_Source,_State,UVar1,iVar2);
  return sVar3;
}



size_t __cdecl mbrtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SizeInBytes,mbstate_t *_State)

{
  UINT UVar1;
  int iVar2;
  ulonglong uVar3;
  uint *local_res20;
  
  local_res20 = (uint *)_State;
  if (_State == (mbstate_t *)0x0) {
    local_res20 = (uint *)&state_mbrtowc_0;
  }
  UVar1 = ___lc_codepage_func();
  iVar2 = ___mb_cur_max_func();
  uVar3 = __mingw_mbrtowc_cp(_DstCh,(byte *)_SrcCh,_SizeInBytes,local_res20,UVar1,iVar2);
  return uVar3;
}



longlong __mingw_wcrtomb_cp(undefined1 *param_1,WCHAR param_2,int *param_3,UINT param_4,int param_5)

{
  longlong lVar1;
  int *piVar2;
  WCHAR local_res10 [4];
  int *local_res18;
  UINT local_res20;
  CHAR local_12 [2];
  BOOL local_10;
  int local_c;
  
  if (param_1 == (undefined1 *)0x0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    lVar1 = 1;
  }
  else {
    local_res10[0] = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
      if (param_2 == L'\0') {
        if (param_1 != (undefined1 *)0x0) {
          *param_1 = 0;
        }
        lVar1 = 1;
      }
      else {
        if (param_4 == 0) {
          if ((ushort)param_2 < 0x100) {
            if (param_1 != (undefined1 *)0x0) {
              *param_1 = (char)param_2;
            }
            return 1;
          }
        }
        else {
          local_10 = 0;
          local_12[0] = '\0';
          local_12[1] = '\0';
          local_c = WideCharToMultiByte(param_4,0,local_res10,1,local_12,param_5,(LPCSTR)0x0,
                                        &local_10);
          if (((local_c != 0) && (local_c <= param_5)) && (local_10 == 0)) {
            memcpy(param_1,local_12,(longlong)local_c);
            return (longlong)local_c;
          }
        }
        piVar2 = _errno();
        *piVar2 = 0x2a;
        lVar1 = -1;
      }
    }
    else {
      piVar2 = _errno();
      *piVar2 = 0x16;
      lVar1 = -1;
    }
  }
  return lVar1;
}



ulonglong __mingw_mbrtowc_cp(WCHAR *param_1,byte *param_2,ulonglong param_3,uint *param_4,
                            uint param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  WCHAR *local_res8;
  byte *local_res10;
  ulonglong local_res18;
  WCHAR local_1a;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_2 == (byte *)0x0) {
    local_res8 = (WCHAR *)0x0;
    local_res10 = &_rdata;
    local_res18 = 1;
  }
  if (*param_4 < 0x100) {
    if (local_res18 == 0) {
      return 0xfffffffffffffffe;
    }
    local_18 = *param_4;
    if ((param_6 != 1) || ((char)local_18 == '\0')) {
      if (param_5 == 0) {
        if (local_res8 != (WCHAR *)0x0) {
          *local_res8 = (ushort)*local_res10;
        }
        return (ulonglong)(*local_res10 != 0);
      }
      local_c = 1;
      local_10 = 0;
      if ((char)local_18 == '\0') {
        if ((param_6 == 2) &&
           (iVar2 = __mingw_isleadbyte_cp((uint)*local_res10,param_5), uVar1 = local_18, iVar2 != 0)
           ) {
          local_18 = CONCAT31(local_18._1_3_,*local_res10);
          if (local_res18 < 2) {
            *param_4 = local_18;
            return 0xfffffffffffffffe;
          }
          local_18._2_2_ = SUB42(uVar1,2);
          local_18._0_2_ = CONCAT11(local_res10[1],*local_res10);
          local_10 = 2;
          local_c = 2;
        }
        else {
          local_18 = CONCAT31(local_18._1_3_,*local_res10);
          local_10 = 1;
        }
      }
      else {
        local_18._2_2_ = (undefined2)(local_18 >> 0x10);
        local_18._0_2_ = CONCAT11(*local_res10,(char)local_18);
        local_10 = 1;
        local_c = 2;
      }
      if ((char)local_18 == '\0') {
        if (local_res8 != (WCHAR *)0x0) {
          *local_res8 = L'\0';
        }
        *param_4 = 0;
        return 0;
      }
      if ((local_c != 2) || (local_18._1_1_ != '\0')) {
        local_1a = L'\xffff';
        local_14 = MultiByteToWideChar(param_5,8,(LPCSTR)&local_18,local_c,&local_1a,1);
        if (local_14 == 1) {
          if (local_res8 != (WCHAR *)0x0) {
            *local_res8 = local_1a;
          }
          *param_4 = 0;
          return (longlong)local_10;
        }
      }
      piVar3 = _errno();
      *piVar3 = 0x2a;
      return 0xffffffffffffffff;
    }
  }
  piVar3 = _errno();
  *piVar3 = 0x16;
  return 0xffffffffffffffff;
}



undefined8 fallback_IsDBCSLeadByteEx(UINT param_1,byte param_2)

{
  BOOL BVar1;
  _cpinfo local_28;
  int local_c;
  
  BVar1 = GetCPInfo(param_1,&local_28);
  if ((BVar1 != 0) && (local_28.MaxCharSize == 2)) {
    for (local_c = 0; (local_c < 0xc && (local_28.LeadByte[local_c] != '\0')); local_c = local_c + 2
        ) {
      if ((local_28.LeadByte[local_c] <= param_2) && (param_2 <= local_28.LeadByte[local_c + 1])) {
        return 1;
      }
    }
  }
  return 0;
}



void __mingw_isleadbyte_cp(uint param_1,uint param_2)

{
  HMODULE hModule;
  FARPROC local_10;
  
  if (call_IsDBCSLeadByteEx_0 == (FARPROC)0x0) {
    local_10 = (FARPROC)0x0;
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      local_10 = GetProcAddress(hModule,"IsDBCSLeadByteEx");
    }
    if (local_10 == (FARPROC)0x0) {
      local_10 = fallback_IsDBCSLeadByteEx;
    }
    LOCK();
    call_IsDBCSLeadByteEx_0 = local_10;
    UNLOCK();
  }
  (*call_IsDBCSLeadByteEx_0)((ulonglong)param_2,(ulonglong)(param_1 & 0xff));
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

EXCEPTION_DISPOSITION
__C_specific_handler
          (_EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,_CONTEXT *ContextRecord,
          _DISPATCHER_CONTEXT *DispatcherContext)

{
  EXCEPTION_DISPOSITION EVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018930. Too many branches
                    // WARNING: Treating indirect jump as call
  EVar1 = __C_specific_handler(ExceptionRecord,EstablisherFrame,ContextRecord,DispatcherContext);
  return EVar1;
}



UINT __cdecl ___lc_codepage_func(void)

{
  UINT UVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018938. Too many branches
                    // WARNING: Treating indirect jump as call
  UVar1 = ___lc_codepage_func();
  return UVar1;
}



int __cdecl ___mb_cur_max_func(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018940. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = ___mb_cur_max_func();
  return iVar1;
}



void __getmainargs(void)

{
                    // WARNING: Could not recover jumptable at 0x000140018948. Too many branches
                    // WARNING: Treating indirect jump as call
  __getmainargs();
  return;
}



FILE * __cdecl __iob_func(void)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018950. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = __iob_func();
  return pFVar1;
}



void __cdecl __set_app_type(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000140018958. Too many branches
                    // WARNING: Treating indirect jump as call
  __set_app_type(param_1);
  return;
}



void __setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x000140018960. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000140018968. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140018970. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



int * __cdecl _errno(void)

{
  int *piVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018978. Too many branches
                    // WARNING: Treating indirect jump as call
  piVar1 = _errno();
  return piVar1;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x000140018980. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



int __cdecl _crt_atexit(_func_5014 *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018988. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = atexit(param_1);
  return iVar1;
}



void __cdecl abort(void)

{
                    // WARNING: Could not recover jumptable at 0x000140018990. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  abort();
  return;
}



void * __cdecl calloc(size_t _Count,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018998. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = calloc(_Count,_Size);
  return pvVar1;
}



void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x0001400189a0. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  exit(_Code);
  return;
}



int __cdecl fflush(FILE *_File)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400189a8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fflush(_File);
  return iVar1;
}



int __cdecl fprintf(FILE *_File,char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400189b0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fprintf(_File,_Format);
  return iVar1;
}



int __cdecl fputc(int _Ch,FILE *_File)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400189b8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fputc(_Ch,_File);
  return iVar1;
}



int __cdecl fputs(char *_Str,FILE *_File)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400189c0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fputs(_Str,_File);
  return iVar1;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x0001400189c8. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



size_t __cdecl fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400189d0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = fwrite(_Str,_Size,_Count,_File);
  return sVar1;
}



char * __cdecl getenv(char *_VarName)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400189d8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = getenv(_VarName);
  return pcVar1;
}



lconv * __cdecl localeconv(void)

{
  lconv *plVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400189e0. Too many branches
                    // WARNING: Treating indirect jump as call
  plVar1 = localeconv();
  return plVar1;
}



void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400189e8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc(_Size);
  return pvVar1;
}



int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400189f0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400189f8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a00. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



int __cdecl rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = rand();
  return iVar1;
}



void * __cdecl realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a10. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = realloc(_Memory,_NewSize);
  return pvVar1;
}



int __cdecl setvbuf(FILE *_File,char *_Buf,int _Mode,size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = setvbuf(_File,_Buf,_Mode,_Size);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void signal(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000140018a20. Too many branches
                    // WARNING: Treating indirect jump as call
  signal(param_1);
  return;
}



char * __cdecl strchr(char *_Str,int _Val)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a28. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strchr(_Str,_Val);
  return pcVar1;
}



int __cdecl strcmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = strcmp(_Str1,_Str2);
  return iVar1;
}



char * __cdecl strerror(int param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a38. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strerror(param_1);
  return pcVar1;
}



size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a40. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen(_Str);
  return sVar1;
}



int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = strncmp(_Str1,_Str2,_MaxCount);
  return iVar1;
}



ulong __cdecl strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a50. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = strtoul(_Str,_EndPtr,_Radix);
  return uVar1;
}



int __cdecl vfprintf(FILE *_File,char *_Format,va_list _ArgList)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = vfprintf(_File,_Format,_ArgList);
  return iVar1;
}



size_t __cdecl wcslen(wchar_t *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a60. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = wcslen(_Str);
  return sVar1;
}



int __stdcall
WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
                   LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,
                   LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}



SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a78. Too many branches
                    // WARNING: Treating indirect jump as call
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}



BOOL __stdcall
VirtualProtect(LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a80. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = VirtualProtect(lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}



LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}



void __stdcall Sleep(DWORD dwMilliseconds)

{
                    // WARNING: Could not recover jumptable at 0x000140018a90. Too many branches
                    // WARNING: Treating indirect jump as call
  Sleep(dwMilliseconds);
  return;
}



LPTOP_LEVEL_EXCEPTION_FILTER __stdcall
SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018a98. Too many branches
                    // WARNING: Treating indirect jump as call
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}



PEXCEPTION_ROUTINE __stdcall
RtlVirtualUnwind(DWORD HandlerType,DWORD64 ImageBase,DWORD64 ControlPc,
                PRUNTIME_FUNCTION FunctionEntry,PCONTEXT ContextRecord,PVOID *HandlerData,
                PDWORD64 EstablisherFrame,PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)

{
  PEXCEPTION_ROUTINE puVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018aa0. Too many branches
                    // WARNING: Treating indirect jump as call
  puVar1 = RtlVirtualUnwind(HandlerType,ImageBase,ControlPc,FunctionEntry,ContextRecord,HandlerData,
                            EstablisherFrame,ContextPointers);
  return puVar1;
}



void __stdcall
RtlUnwindEx(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue,
           PCONTEXT ContextRecord,PUNWIND_HISTORY_TABLE HistoryTable)

{
                    // WARNING: Could not recover jumptable at 0x000140018aa8. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwindEx(TargetFrame,TargetIp,ExceptionRecord,ReturnValue,ContextRecord,HistoryTable);
  return;
}



PRUNTIME_FUNCTION __stdcall
RtlLookupFunctionEntry(DWORD64 ControlPc,PDWORD64 ImageBase,PUNWIND_HISTORY_TABLE HistoryTable)

{
  PRUNTIME_FUNCTION p_Var1;
  
                    // WARNING: Could not recover jumptable at 0x000140018ab0. Too many branches
                    // WARNING: Treating indirect jump as call
  p_Var1 = RtlLookupFunctionEntry(ControlPc,ImageBase,HistoryTable);
  return p_Var1;
}



void __stdcall
RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
              ULONG_PTR *lpArguments)

{
                    // WARNING: Could not recover jumptable at 0x000140018ac0. Too many branches
                    // WARNING: Treating indirect jump as call
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}



int __stdcall
MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                   LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018ac8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}



HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018ad0. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}



void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x000140018ad8. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection(lpCriticalSection);
  return;
}



BOOL __stdcall IsDBCSLeadByte(BYTE TestChar)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018ae0. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsDBCSLeadByte(TestChar);
  return BVar1;
}



void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x000140018ae8. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeCriticalSection(lpCriticalSection);
  return;
}



void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    // WARNING: Could not recover jumptable at 0x000140018af0. Too many branches
                    // WARNING: Treating indirect jump as call
  GetStartupInfoA(lpStartupInfo);
  return;
}



FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018af8. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}



HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018b00. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}



DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018b08. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetLastError();
  return DVar1;
}



BOOL __stdcall GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018b10. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = GetCPInfo(CodePage,lpCPInfo);
  return BVar1;
}



BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018b18. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}



void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x000140018b20. Too many branches
                    // WARNING: Treating indirect jump as call
  EnterCriticalSection(lpCriticalSection);
  return;
}



void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x000140018b28. Too many branches
                    // WARNING: Treating indirect jump as call
  DeleteCriticalSection(lpCriticalSection);
  return;
}



HANDLE __stdcall
CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes,SIZE_T dwStackSize,
            LPTHREAD_START_ROUTINE lpStartAddress,LPVOID lpParameter,DWORD dwCreationFlags,
            LPDWORD lpThreadId)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140018b30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = CreateThread(lpThreadAttributes,dwStackSize,lpStartAddress,lpParameter,dwCreationFlags,
                        lpThreadId);
  return pvVar1;
}



void _text(longlong *param_1,longlong *param_2)

{
  pthread_mutex_timedlock64(param_1,param_2);
  return;
}



undefined8 is_static_initializer(longlong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 < -3) || (0 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 * mutex_impl_init(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *_Memory;
  longlong lVar2;
  
  _Memory = malloc(0x18);
  if (_Memory == (undefined4 *)0x0) {
    _Memory = (undefined4 *)0x0;
  }
  else {
    *_Memory = 0;
    if (param_2 == -3) {
      uVar1 = 2;
    }
    else {
      uVar1 = (uint)(param_2 == -2);
    }
    _Memory[1] = uVar1;
    *(undefined8 *)(_Memory + 2) = 0;
    _Memory[4] = 0;
    _Memory[5] = 0xffffffff;
    LOCK();
    lVar2 = *param_1;
    if (param_2 == lVar2) {
      *param_1 = (longlong)_Memory;
      lVar2 = param_2;
    }
    UNLOCK();
    if (param_2 != lVar2) {
      free(_Memory);
      _Memory = (undefined4 *)*param_1;
    }
  }
  return _Memory;
}



undefined4 * mutex_impl(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  uVar1 = is_static_initializer((longlong)puVar2);
  if ((int)uVar1 != 0) {
    puVar2 = mutex_impl_init(param_1,(longlong)puVar2);
  }
  return puVar2;
}



undefined8 pthread_mutex_lock_intern(longlong *param_1,uint param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  int *piVar4;
  undefined8 uVar5;
  HANDLE hObject;
  longlong lVar6;
  
  piVar4 = mutex_impl(param_1);
  if (piVar4 == (int *)0x0) {
    uVar5 = 0xc;
  }
  else {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = 1;
    UNLOCK();
    if (iVar1 == 0) {
LAB_140018e7a:
      if (piVar4[1] != 0) {
        DVar3 = GetCurrentThreadId();
        piVar4[5] = DVar3;
      }
      uVar5 = 0;
    }
    else if ((piVar4[1] == 0) || (DVar3 = piVar4[5], DVar2 = GetCurrentThreadId(), DVar3 != DVar2))
    {
      if (*(longlong *)(piVar4 + 2) == 0) {
        hObject = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
        if (hObject == (HANDLE)0x0) {
          DVar3 = GetLastError();
          if (DVar3 == 5) {
            return 1;
          }
          return 0xc;
        }
        LOCK();
        lVar6 = *(longlong *)(piVar4 + 2);
        if (lVar6 == 0) {
          *(HANDLE *)(piVar4 + 2) = hObject;
          lVar6 = 0;
        }
        UNLOCK();
        if (lVar6 != 0) {
          CloseHandle(hObject);
        }
      }
      do {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = 2;
        UNLOCK();
        if (iVar1 == 0) goto LAB_140018e7a;
        DVar3 = _pthread_wait_for_single_object(*(HANDLE *)(piVar4 + 2),param_2);
      } while (DVar3 == 0);
      if (DVar3 == 0x102) {
        uVar5 = 0x8a;
      }
      else {
        uVar5 = 0x16;
      }
    }
    else {
      LOCK();
      if (*piVar4 == 1) {
        *piVar4 = iVar1;
      }
      UNLOCK();
      if (piVar4[1] == 2) {
        piVar4[4] = piVar4[4] + 1;
        uVar5 = 0;
      }
      else {
        uVar5 = 0x24;
      }
    }
  }
  return uVar5;
}



void pthread_mutex_lock(longlong *param_1)

{
  pthread_mutex_lock_intern(param_1,0xffffffff);
  return;
}



void __pthread_mutex_timedlock(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 local_10;
  
  if (param_2 == (longlong *)0x0) {
    local_10 = 0xffffffff;
  }
  else {
    local_10 = _pthread_time_in_ms_from_timespec(param_2);
    uVar1 = _pthread_time_in_ms();
    if (uVar1 < local_10) {
      local_10 = local_10 - uVar1;
    }
    else {
      local_10 = 0;
    }
    if (0xffffffff < local_10) {
      local_10 = 0xffffffff;
    }
  }
  pthread_mutex_lock_intern(param_1,(uint)local_10);
  return;
}



void pthread_mutex_timedlock64(longlong *param_1,longlong *param_2)

{
  __pthread_mutex_timedlock(param_1,param_2);
  return;
}



void pthread_mutex_timedlock32(longlong *param_1,int *param_2)

{
  longlong local_18;
  int local_10;
  
  local_18 = (longlong)*param_2;
  local_10 = param_2[1];
  __pthread_mutex_timedlock(param_1,&local_18);
  return;
}



undefined8 pthread_mutex_unlock(longlong *param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  BOOL BVar4;
  int *piVar5;
  
  piVar5 = mutex_impl(param_1);
  if (piVar5 == (int *)0x0) {
    return 0xc;
  }
  if (piVar5[1] != 0) {
    if (*piVar5 == 0) {
      return 0x16;
    }
    DVar2 = piVar5[5];
    DVar3 = GetCurrentThreadId();
    if (DVar2 != DVar3) {
      return 1;
    }
    if (piVar5[4] != 0) {
      piVar5[4] = piVar5[4] + -1;
      return 0;
    }
    piVar5[5] = -1;
  }
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = 0;
  UNLOCK();
  if ((iVar1 == 2) && (BVar4 = SetEvent(*(HANDLE *)(piVar5 + 2)), BVar4 == 0)) {
    return 1;
  }
  return 0;
}



undefined8 pthread_mutex_trylock(longlong *param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar4 = mutex_impl(param_1);
  if (piVar4 == (int *)0x0) {
    uVar5 = 0xc;
  }
  else {
    LOCK();
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      *piVar4 = 1;
      iVar1 = 0;
    }
    UNLOCK();
    if (iVar1 == 0) {
      if (piVar4[1] != 0) {
        DVar2 = GetCurrentThreadId();
        piVar4[5] = DVar2;
      }
      uVar5 = 0;
    }
    else if ((piVar4[1] == 2) && (DVar2 = piVar4[5], DVar3 = GetCurrentThreadId(), DVar2 == DVar3))
    {
      piVar4[4] = piVar4[4] + 1;
      uVar5 = 0;
    }
    else {
      uVar5 = 0x10;
    }
  }
  return uVar5;
}



undefined8 pthread_mutex_init(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  
  local_10 = 0xffffffffffffffff;
  if (param_2 != (uint *)0x0) {
    uVar1 = pthread_mutexattr_getpshared(param_2,&local_14);
    if (((int)uVar1 == 0) && (local_14 == 1)) {
      return 0x28;
    }
    uVar1 = pthread_mutexattr_gettype(param_2,&local_18);
    if ((int)uVar1 == 0) {
      if (local_18 == 1) {
        local_10 = 0xfffffffffffffffe;
      }
      else if (local_18 == 2) {
        local_10 = 0xfffffffffffffffd;
      }
      else {
        local_10 = 0xffffffffffffffff;
      }
    }
  }
  *param_1 = local_10;
  return 0;
}



undefined8 pthread_mutex_destroy(undefined8 *param_1)

{
  void *_Memory;
  undefined8 uVar1;
  
  _Memory = (void *)*param_1;
  uVar1 = is_static_initializer((longlong)_Memory);
  if ((int)uVar1 == 0) {
    if (*(longlong *)((longlong)_Memory + 8) != 0) {
      CloseHandle(*(HANDLE *)((longlong)_Memory + 8));
    }
    free(_Memory);
    *param_1 = 0;
  }
  return 0;
}



undefined8 pthread_mutexattr_init(undefined4 *param_1)

{
  *param_1 = 0;
  return 0;
}



undefined8 pthread_mutexattr_destroy(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x16;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_mutexattr_gettype(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
    uVar1 = 0x16;
  }
  else {
    *param_2 = *param_1 & 3;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_mutexattr_settype(uint *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (uint *)0x0) || (((param_2 != 0 && (param_2 != 2)) && (param_2 != 1)))) {
    uVar1 = 0x16;
  }
  else {
    *param_1 = *param_1 & 0xfffffffc;
    *param_1 = *param_1 | param_2;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_mutexattr_getpshared(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
    uVar1 = 0x16;
  }
  else {
    *param_2 = *param_1 >> 2 & 1;
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 pthread_mutexattr_setpshared(uint *param_1,int param_2)

{
  undefined4 local_res10;
  undefined4 local_c;
  
  local_c = 0;
  if ((param_1 == (uint *)0x0) || ((param_2 != 1 && (param_2 != 0)))) {
    local_c = 0x16;
  }
  else {
    local_res10 = param_2;
    if (param_2 == 1) {
      local_res10 = 0;
      local_c = 0x28;
    }
    if (local_res10 == 1) {
      local_res10 = 4;
    }
    else {
      local_res10 = 0;
    }
    *param_1 = *param_1 & 0xfffffffb;
    *param_1 = *param_1 | local_res10;
  }
  return local_c;
}



undefined8 pthread_mutexattr_getprotocol(uint *param_1,uint *param_2)

{
  *param_2 = *param_1 & 0x18;
  return 0;
}



undefined8 pthread_mutexattr_setprotocol(uint *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 0x18) == 0x18) {
    *param_1 = *param_1 & 0xffffffe7;
    *param_1 = *param_1 | param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x16;
  }
  return uVar1;
}



undefined8 pthread_mutexattr_getprioceiling(uint *param_1,uint *param_2)

{
  *param_2 = *param_1 >> 5;
  return 0;
}



undefined8 pthread_mutexattr_setprioceiling(uint *param_1,int param_2)

{
  *param_1 = *param_1 & 0x1f;
  *param_1 = param_2 * 0x20 + *param_1;
  return 0;
}



int snprintf(char *param_1,size_t param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  iVar1 = __ms_vsnprintf(param_1,param_2,param_3,(va_list)&local_res20);
  return iVar1;
}



void pthread_delay_np(longlong *param_1)

{
  pthread_delay64_np(param_1);
  return;
}



ulonglong dwMilliSecs(ulonglong param_1)

{
  if (0xfffffffe < param_1) {
    param_1 = 0xffffffff;
  }
  return param_1;
}



undefined8 SetThreadName_SEH(int *param_1)

{
  undefined8 uVar1;
  
  if (((param_1[1] & 1U) == 0) && (*param_1 == 0x406d1388)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void SetThreadName(undefined4 param_1,undefined8 param_2)

{
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_28[0] = 0x1000;
  local_14 = 0;
  local_c = 3;
  local_20 = param_2;
  local_18 = param_1;
  RaiseException(0x406d1388,0,3,(ULONG_PTR *)local_28);
  return;
}



undefined8 __pthread_get_pointer(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong local_18;
  ulonglong local_10;
  
  if (idListCnt == 0) {
    uVar1 = 0;
  }
  else if (idListCnt == 1) {
    if (param_1 == idList[1]) {
      uVar1 = *idList;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    local_10 = 0;
    local_18 = idListCnt - 1;
    while (local_10 <= local_18) {
      uVar2 = local_18 + local_10 >> 1;
      if (param_1 == idList[uVar2 * 2 + 1]) {
        return idList[uVar2 * 2];
      }
      if (param_1 < (ulonglong)idList[uVar2 * 2 + 1]) {
        if (uVar2 == local_10) {
          return 0;
        }
        local_18 = uVar2 - 1;
      }
      else {
        local_10 = uVar2 + 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



void __pth_remove_use_for_key(uint param_1)

{
  int local_c;
  
  pthread_mutex_lock((longlong *)&mtx_pthr_locked);
  for (local_c = 0; (ulonglong)(longlong)local_c < idListCnt; local_c = local_c + 1) {
    if (((*(longlong *)(idList + (longlong)local_c * 0x10) != 0) &&
        (*(longlong *)(*(longlong *)(idList + (longlong)local_c * 0x10) + 0x50) != 0)) &&
       (param_1 < *(uint *)(*(longlong *)(idList + (longlong)local_c * 0x10) + 0x48))) {
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(idList + (longlong)local_c * 0x10) + 0x50) +
       (ulonglong)param_1 * 8) = 0;
      *(undefined1 *)
       ((ulonglong)param_1 + *(longlong *)(*(longlong *)(idList + (longlong)local_c * 0x10) + 0x58))
           = 0;
    }
  }
  pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
  return;
}



undefined8 __pth_gpointer_locked(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    pthread_mutex_lock((longlong *)&mtx_pthr_locked);
    uVar1 = __pthread_get_pointer(param_1);
    pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
  }
  return uVar1;
}



ulonglong __pthread_register_pointer(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong local_10;
  
  if (param_1 == 0) {
    return 0;
  }
  if (idListMax <= idListCnt) {
    if (idListCnt == 0) {
      pvVar1 = malloc(0x100);
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      idListMax = 0x10;
      idList = pvVar1;
    }
    else {
      pvVar1 = realloc(idList,(idListMax + 0x10) * 0x10);
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      idListMax = idListMax + 0x10;
      idList = pvVar1;
    }
  }
  do {
    idListNextId = idListNextId + 1;
    if ((idListNextId & 0x4000000000000000) != 0) {
      idListNextId = 1;
    }
  } while ((idListNextId == 0) || (lVar2 = __pthread_get_pointer(idListNextId), lVar2 != 0));
  local_10 = idListCnt;
  if (idListCnt != 0) {
    while ((local_10 != 0 &&
           (idListNextId < *(ulonglong *)((longlong)idList + local_10 * 0x10 + -8)))) {
      local_10 = local_10 - 1;
    }
    if (local_10 != idListCnt) {
      memmove((void *)((longlong)idList + (local_10 + 1) * 0x10),
              (void *)(local_10 * 0x10 + (longlong)idList),(idListCnt - local_10) * 0x10);
    }
  }
  *(ulonglong *)((longlong)idList + local_10 * 0x10 + 8) = idListNextId;
  *(longlong *)(local_10 * 0x10 + (longlong)idList) = param_1;
  idListCnt = idListCnt + 1;
  return idListNextId;
}



undefined8 __pthread_deregister_pointer(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong local_18;
  ulonglong local_10;
  
  if (idListCnt != 0) {
    local_10 = 0;
    local_18 = idListCnt - 1;
    while (local_10 <= local_18) {
      uVar2 = local_18 + local_10 >> 1;
      if (param_1 == *(ulonglong *)((longlong)idList + uVar2 * 0x10 + 8)) {
        uVar1 = *(undefined8 *)((longlong)idList + uVar2 * 0x10);
        uVar2 = uVar2 + 1;
        if (uVar2 < idListCnt) {
          memmove((void *)((longlong)idList + uVar2 * 0x10 + -0x10),
                  (void *)(uVar2 * 0x10 + (longlong)idList),(idListCnt - uVar2) * 0x10);
        }
        idListCnt = idListCnt - 1;
        if (idListCnt == 0) {
          free(idList);
          idListCnt = 0;
          idListMax = 0;
          return uVar1;
        }
        return uVar1;
      }
      if (param_1 < *(ulonglong *)((longlong)idList + uVar2 * 0x10 + 8)) {
        if (uVar2 == local_10) {
          return 0;
        }
        local_18 = uVar2 - 1;
      }
      else {
        local_10 = uVar2 + 1;
      }
    }
  }
  return 0;
}



void push_pthread_mem(void *param_1)

{
  void *pvVar1;
  
  if ((param_1 != (void *)0x0) && (*(longlong *)((longlong)param_1 + 0x1d0) == 0)) {
    pthread_mutex_lock((longlong *)&mtx_pthr_locked);
    if (*(longlong *)((longlong)param_1 + 0x1d8) != 0) {
      __pthread_deregister_pointer(*(ulonglong *)((longlong)param_1 + 0x1d8));
    }
    if (*(longlong *)((longlong)param_1 + 0x50) != 0) {
      free(*(void **)((longlong)param_1 + 0x50));
    }
    if (*(longlong *)((longlong)param_1 + 0x58) != 0) {
      free(*(void **)((longlong)param_1 + 0x58));
    }
    if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
      free(*(void **)((longlong)param_1 + 0x60));
    }
    memset(param_1,0,0x1e0);
    pvVar1 = param_1;
    if (pthr_last != (void *)0x0) {
      *(void **)((longlong)pthr_last + 0x1d0) = param_1;
      pvVar1 = pthr_root;
    }
    pthr_root = pvVar1;
    pthr_last = param_1;
    pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
  }
  return;
}



void * pop_pthread_mem(void)

{
  void *pvVar1;
  ulonglong uVar2;
  void *local_10;
  
  pthread_mutex_lock((longlong *)&mtx_pthr_locked);
  pvVar1 = pthr_root;
  local_10 = pthr_root;
  if (pthr_root == (void *)0x0) {
    local_10 = calloc(1,0x1e0);
    if (local_10 != (void *)0x0) {
      uVar2 = __pthread_register_pointer((longlong)local_10);
      *(ulonglong *)((longlong)local_10 + 0x1d8) = uVar2;
      if (*(longlong *)((longlong)local_10 + 0x1d8) == 0) {
        free(local_10);
        local_10 = (void *)0x0;
      }
    }
    pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
  }
  else {
    uVar2 = __pthread_register_pointer((longlong)pthr_root);
    *(ulonglong *)((longlong)pvVar1 + 0x1d8) = uVar2;
    if (*(longlong *)((longlong)pvVar1 + 0x1d8) == 0) {
      local_10 = (void *)0x0;
    }
    else {
      pthr_root = *(void **)((longlong)pvVar1 + 0x1d0);
      if (pthr_root == (void *)0x0) {
        pthr_last = 0;
      }
      *(undefined8 *)((longlong)pvVar1 + 0x1d0) = 0;
    }
    pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
  }
  return local_10;
}



void free_pthread_mem(void)

{
  return;
}



void replace_spin_keys(undefined8 *param_1,undefined8 param_2)

{
  DWORD DVar1;
  undefined8 uVar2;
  char local_48 [64];
  
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = pthread_spin_destroy();
    if ((int)uVar2 == 1) {
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      local_48[8] = '\0';
      local_48[9] = '\0';
      local_48[10] = '\0';
      local_48[0xb] = '\0';
      local_48[0xc] = '\0';
      local_48[0xd] = '\0';
      local_48[0xe] = '\0';
      local_48[0xf] = '\0';
      local_48[0x10] = '\0';
      local_48[0x11] = '\0';
      local_48[0x12] = '\0';
      local_48[0x13] = '\0';
      local_48[0x14] = '\0';
      local_48[0x15] = '\0';
      local_48[0x16] = '\0';
      local_48[0x17] = '\0';
      local_48[0x18] = '\0';
      local_48[0x19] = '\0';
      local_48[0x1a] = '\0';
      local_48[0x1b] = '\0';
      local_48[0x1c] = '\0';
      local_48[0x1d] = '\0';
      local_48[0x1e] = '\0';
      local_48[0x1f] = '\0';
      local_48[0x20] = '\0';
      local_48[0x21] = '\0';
      local_48[0x22] = '\0';
      local_48[0x23] = '\0';
      local_48[0x24] = '\0';
      local_48[0x25] = '\0';
      local_48[0x26] = '\0';
      local_48[0x27] = '\0';
      local_48[0x28] = '\0';
      local_48[0x29] = '\0';
      local_48[0x2a] = '\0';
      local_48[0x2b] = '\0';
      local_48[0x2c] = '\0';
      local_48[0x2d] = '\0';
      local_48[0x2e] = '\0';
      local_48[0x2f] = '\0';
      local_48[0x30] = '\0';
      local_48[0x31] = '\0';
      local_48[0x32] = '\0';
      local_48[0x33] = '\0';
      local_48[0x34] = '\0';
      DVar1 = GetCurrentThreadId();
      snprintf(local_48,0x35,"Error cleaning up spin_keys for thread %lu.\n",(ulonglong)DVar1);
      OutputDebugStringA(local_48);
                    // WARNING: Subroutine does not return
      abort();
    }
    *param_1 = param_2;
  }
  return;
}



void tls_callback_2(undefined8 param_1,int param_2)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (param_2 == 0) {
    free_pthread_mem();
  }
  else if ((param_2 != 1) && (param_2 == 3)) {
    if (_pthread_tls != 0xffffffff) {
      local_10 = TlsGetValue(_pthread_tls);
    }
    if ((local_10 == (undefined4 *)0x0) || ((*(byte *)(local_10 + 0x10) & 0x30) == 0)) {
      if ((local_10 == (undefined4 *)0x0) || (local_10[0x2f] != 0)) {
        if (local_10 != (undefined4 *)0x0) {
          if (*(longlong *)(local_10 + 0xc) != 0) {
            CloseHandle(*(HANDLE *)(local_10 + 0xc));
          }
          *(undefined8 *)(local_10 + 0xc) = 0;
          pthread_mutex_destroy((undefined8 *)(local_10 + 0xe));
          replace_spin_keys((undefined8 *)(local_10 + 0x1a),0xffffffffffffffff);
        }
      }
      else {
        if (*(longlong *)(local_10 + 0xc) != 0) {
          CloseHandle(*(HANDLE *)(local_10 + 0xc));
        }
        *(undefined8 *)(local_10 + 0xc) = 0;
        local_10[0x2f] = 1;
        _pthread_cleanup_dest(*(ulonglong *)(local_10 + 0x76));
        if ((local_10[0x11] & 4) == 0) {
          pthread_mutex_destroy((undefined8 *)(local_10 + 0xe));
          replace_spin_keys((undefined8 *)(local_10 + 0x1a),0xffffffffffffffff);
        }
        else {
          *local_10 = 0xdeadbeef;
          if (*(longlong *)(local_10 + 10) != 0) {
            CloseHandle(*(HANDLE *)(local_10 + 10));
          }
          *(undefined8 *)(local_10 + 10) = 0;
          pthread_mutex_destroy((undefined8 *)(local_10 + 0xe));
          replace_spin_keys((undefined8 *)(local_10 + 0x1a),0xffffffffffffffff);
          push_pthread_mem(local_10);
          TlsSetValue(_pthread_tls,(LPVOID)0x0);
        }
      }
    }
    else {
      _pthread_cleanup_dest(*(ulonglong *)(local_10 + 0x76));
      if (*(longlong *)(local_10 + 10) != 0) {
        CloseHandle(*(HANDLE *)(local_10 + 10));
        if (*(longlong *)(local_10 + 0xc) != 0) {
          CloseHandle(*(HANDLE *)(local_10 + 0xc));
        }
        *(undefined8 *)(local_10 + 0xc) = 0;
        *(undefined8 *)(local_10 + 10) = 0;
      }
      pthread_mutex_destroy((undefined8 *)(local_10 + 0xe));
      replace_spin_keys((undefined8 *)(local_10 + 0x1a),0xffffffffffffffff);
      push_pthread_mem(local_10);
      TlsSetValue(_pthread_tls,(LPVOID)0x0);
    }
  }
  return;
}



longlong * enterOnceObject(longlong param_1)

{
  longlong *plVar1;
  longlong *local_18;
  longlong *local_10;
  
  local_18 = (longlong *)0x0;
  pthread_spin_lock((longlong *)&once_global);
  for (local_10 = once_obj; (local_10 != (longlong *)0x0 && (param_1 != *local_10));
      local_10 = (longlong *)local_10[3]) {
    local_18 = local_10;
  }
  if (local_10 == (longlong *)0x0) {
    local_10 = calloc(1,0x20);
    *local_10 = param_1;
    *(undefined4 *)(local_10 + 2) = 1;
    plVar1 = local_10;
    if (local_18 != (longlong *)0x0) {
      local_18[3] = (longlong)local_10;
      plVar1 = once_obj;
    }
    once_obj = plVar1;
    pthread_mutex_init(local_10 + 1,(uint *)0x0);
  }
  else {
    *(int *)(local_10 + 2) = (int)local_10[2] + 1;
  }
  pthread_spin_unlock((undefined8 *)&once_global);
  return local_10;
}



void leaveOnceObject(void *param_1)

{
  FILE *_File;
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  if (param_1 != (void *)0x0) {
    pthread_spin_lock((longlong *)&once_global);
    for (local_10 = once_obj; (local_10 != (void *)0x0 && (param_1 != local_10));
        local_10 = *(void **)((longlong)local_10 + 0x18)) {
      local_18 = local_10;
    }
    if (local_10 == (void *)0x0) {
      _File = (FILE *)(*(code *)__imp___acrt_iob_func)(2);
      fprintf(_File,"%p not found?!?!\n",param_1);
    }
    else {
      *(int *)((longlong)param_1 + 0x10) = *(int *)((longlong)param_1 + 0x10) + -1;
      if (*(int *)((longlong)param_1 + 0x10) == 0) {
        pthread_mutex_destroy((undefined8 *)((longlong)param_1 + 8));
        if (local_18 == (void *)0x0) {
          once_obj = *(void **)((longlong)param_1 + 0x18);
        }
        else {
          *(undefined8 *)((longlong)local_18 + 0x18) = *(undefined8 *)((longlong)param_1 + 0x18);
        }
        free(param_1);
      }
    }
    pthread_spin_unlock((undefined8 *)&once_global);
  }
  return;
}



void _pthread_once_cleanup(void *param_1)

{
  pthread_mutex_unlock((longlong *)((longlong)param_1 + 8));
  leaveOnceObject(param_1);
  return;
}



undefined8 _pthread_once_raw(uint *param_1,undefined *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  FILE *_File;
  
  if (param_1 == (uint *)0x0) {
    uVar2 = 0x16;
  }
  else if (param_2 == (undefined *)0x0) {
    uVar2 = 0x16;
  }
  else if (*param_1 == 1) {
    uVar2 = 0;
  }
  else {
    plVar3 = enterOnceObject((longlong)param_1);
    pthread_mutex_lock(plVar3 + 1);
    if (*param_1 == 0) {
      (*(code *)param_2)();
      *param_1 = 1;
    }
    else if (*param_1 != 1) {
      uVar1 = *param_1;
      _File = (FILE *)(*(code *)__imp___acrt_iob_func)(2);
      fprintf(_File," once %p is %ld\n",param_1,(ulonglong)uVar1);
    }
    pthread_mutex_unlock(plVar3 + 1);
    leaveOnceObject(plVar3);
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 pthread_timechange_handler_np(void)

{
  return 0;
}



undefined8 __pthread_delay_np(longlong *param_1)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  undefined4 local_c;
  
  if (param_1 == (longlong *)0x0) {
    local_c = 0;
  }
  else {
    uVar1 = _pthread_time_in_ms_from_timespec(param_1);
    uVar1 = dwMilliSecs(uVar1);
    local_c = (uint)uVar1;
  }
  pvVar2 = __pthread_self_lite();
  if (local_c == 0) {
    pthread_testcancel();
    Sleep(0);
    pthread_testcancel();
  }
  else {
    pthread_testcancel();
    if (*(longlong *)((longlong)pvVar2 + 0x30) == 0) {
      Sleep(local_c);
    }
    else {
      _pthread_wait_for_single_object(*(HANDLE *)((longlong)pvVar2 + 0x30),local_c);
    }
    pthread_testcancel();
  }
  return 0;
}



void pthread_delay64_np(longlong *param_1)

{
  __pthread_delay_np(param_1);
  return;
}



void pthread_delay32_np(int *param_1)

{
  longlong local_18;
  int local_10;
  
  local_18 = (longlong)*param_1;
  local_10 = param_1[1];
  __pthread_delay_np(&local_18);
  return;
}



undefined8 _pthread_delay_np_ms(uint param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = __pthread_self_lite();
  if (param_1 == 0) {
    pthread_testcancel();
    Sleep(0);
    pthread_testcancel();
  }
  else {
    pthread_testcancel();
    if (*(longlong *)((longlong)pvVar1 + 0x30) == 0) {
      Sleep(param_1);
    }
    else {
      _pthread_wait_for_single_object(*(HANDLE *)((longlong)pvVar1 + 0x30),param_1);
    }
    pthread_testcancel();
  }
  return 0;
}



int pthread_num_processors_np(void)

{
  BOOL BVar1;
  HANDLE hProcess;
  ULONG_PTR local_20;
  ulonglong local_18;
  int local_c;
  
  local_c = 0;
  hProcess = GetCurrentProcess();
  BVar1 = GetProcessAffinityMask(hProcess,&local_18,&local_20);
  if (BVar1 != 0) {
    for (; local_18 != 0; local_18 = local_18 >> 1) {
      local_c = local_c + ((uint)local_18 & 1);
    }
  }
  if (local_c == 0) {
    local_c = 1;
  }
  return local_c;
}



int pthread_set_num_processors_np(int param_1)

{
  BOOL BVar1;
  HANDLE pvVar2;
  int local_res8;
  ULONG_PTR local_28;
  ulonglong local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = 0;
  local_14 = 0;
  local_res8 = param_1;
  if (param_1 == 0) {
    local_res8 = 1;
  }
  pvVar2 = GetCurrentProcess();
  BVar1 = GetProcessAffinityMask(pvVar2,&local_20,&local_28);
  if (BVar1 != 0) {
    for (; local_20 != 0; local_20 = local_20 >> 1) {
      local_10 = local_10 << 1;
      if (((local_20 & 1) != 0) && (local_14 < local_res8)) {
        local_10 = local_10 | 1;
        local_14 = local_14 + 1;
      }
    }
    pvVar2 = GetCurrentProcess();
    SetProcessAffinityMask(pvVar2,local_10);
  }
  return local_14;
}



undefined8 pthread_once(uint *param_1,undefined *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  FILE *_File;
  code *local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_28;
  uint local_1c;
  
  local_1c = *param_1;
  if (param_1 == (uint *)0x0) {
    uVar2 = 0x16;
  }
  else if (param_2 == (undefined *)0x0) {
    uVar2 = 0x16;
  }
  else if (local_1c == 1) {
    uVar2 = 0;
  }
  else {
    local_28 = enterOnceObject((longlong)param_1);
    pthread_mutex_lock(local_28 + 1);
    if (*param_1 == 0) {
      local_48 = _pthread_once_cleanup;
      local_40 = local_28;
      puVar3 = (undefined8 *)pthread_getclean();
      local_38 = *puVar3;
      LOCK();
      UNLOCK();
      plVar4 = (longlong *)pthread_getclean();
      *plVar4 = (longlong)&local_48;
      LOCK();
      UNLOCK();
      (*(code *)param_2)();
      puVar3 = (undefined8 *)pthread_getclean();
      *puVar3 = local_38;
      *param_1 = 1;
    }
    else if (*param_1 != 1) {
      uVar1 = *param_1;
      _File = (FILE *)(*(code *)__imp___acrt_iob_func)(2);
      fprintf(_File," once %p is %ld\n",param_1,(ulonglong)uVar1);
    }
    pthread_mutex_unlock(local_28 + 1);
    leaveOnceObject(local_28);
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 pthread_key_create(uint *param_1,longlong param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  uint local_10;
  uint local_c;
  
  if (param_1 == (uint *)0x0) {
    uVar1 = 0x16;
  }
  else {
    pthread_rwlock_wrlock((longlong *)&_pthread_key_lock);
    for (local_c = _pthread_key_sch; local_c < _pthread_key_max; local_c = local_c + 1) {
      if (*(longlong *)((longlong)_pthread_key_dest + (ulonglong)local_c * 8) == 0) {
        *param_1 = local_c;
        if (param_2 == 0) {
          *(undefined8 *)((longlong)_pthread_key_dest + (ulonglong)local_c * 8) = 1;
        }
        else {
          *(longlong *)((ulonglong)local_c * 8 + (longlong)_pthread_key_dest) = param_2;
        }
        pthread_rwlock_unlock((longlong *)&_pthread_key_lock);
        return 0;
      }
    }
    for (local_c = 0; local_c < _pthread_key_sch; local_c = local_c + 1) {
      if (*(longlong *)((longlong)_pthread_key_dest + (ulonglong)local_c * 8) == 0) {
        *param_1 = local_c;
        if (param_2 == 0) {
          *(undefined8 *)((longlong)_pthread_key_dest + (ulonglong)local_c * 8) = 1;
        }
        else {
          *(longlong *)((ulonglong)local_c * 8 + (longlong)_pthread_key_dest) = param_2;
        }
        pthread_rwlock_unlock((longlong *)&_pthread_key_lock);
        return 0;
      }
    }
    if (_pthread_key_max == 0x100000) {
      pthread_rwlock_unlock((longlong *)&_pthread_key_lock);
      uVar1 = 0xc;
    }
    else {
      local_10 = _pthread_key_max * 2;
      if (local_10 == 0) {
        local_10 = _pthread_key_max + 1;
      }
      if (0x100000 < (int)local_10) {
        local_10 = 0x100000;
      }
      pvVar2 = realloc(_pthread_key_dest,(longlong)(int)local_10 * 8);
      if (pvVar2 == (void *)0x0) {
        pthread_rwlock_unlock((longlong *)&_pthread_key_lock);
        uVar1 = 0xc;
      }
      else {
        memset((void *)((longlong)pvVar2 + (ulonglong)_pthread_key_max * 8),0,
               (ulonglong)(local_10 - _pthread_key_max) * 8);
        _pthread_key_sch = _pthread_key_max + 1;
        _pthread_key_dest = pvVar2;
        *param_1 = _pthread_key_max;
        _pthread_key_max = local_10;
        if (param_2 == 0) {
          *(undefined8 *)((ulonglong)*param_1 * 8 + (longlong)_pthread_key_dest) = 1;
        }
        else {
          *(longlong *)((longlong)_pthread_key_dest + (ulonglong)*param_1 * 8) = param_2;
        }
        pthread_rwlock_unlock((longlong *)&_pthread_key_lock);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



undefined8 pthread_key_delete(uint param_1)

{
  undefined8 uVar1;
  
  if ((param_1 < _pthread_key_max) && (_pthread_key_dest != 0)) {
    pthread_rwlock_wrlock((longlong *)&_pthread_key_lock);
    *(undefined8 *)(_pthread_key_dest + (ulonglong)param_1 * 8) = 0;
    if (param_1 < _pthread_key_sch) {
      _pthread_key_sch = param_1;
    }
    __pth_remove_use_for_key(param_1);
    pthread_rwlock_unlock((longlong *)&_pthread_key_lock);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x16;
  }
  return uVar1;
}



undefined8 pthread_getspecific(uint param_1)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  undefined8 local_10;
  
  dwErrCode = GetLastError();
  pvVar1 = __pthread_self_lite();
  pthread_spin_lock((longlong *)((longlong)pvVar1 + 0x68));
  if ((param_1 < *(uint *)((longlong)pvVar1 + 0x48)) &&
     (*(char *)((ulonglong)param_1 + *(longlong *)((longlong)pvVar1 + 0x58)) != '\0')) {
    local_10 = *(undefined8 *)(*(longlong *)((longlong)pvVar1 + 0x50) + (ulonglong)param_1 * 8);
  }
  else {
    local_10 = 0;
  }
  pthread_spin_unlock((undefined8 *)((longlong)pvVar1 + 0x68));
  SetLastError(dwErrCode);
  return local_10;
}



undefined8 pthread_setspecific(uint param_1,undefined8 param_2)

{
  DWORD dwErrCode;
  int iVar1;
  LPVOID pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  dwErrCode = GetLastError();
  pvVar2 = __pthread_self_lite();
  pthread_spin_lock((longlong *)((longlong)pvVar2 + 0x68));
  if (*(uint *)((longlong)pvVar2 + 0x48) <= param_1) {
    iVar1 = param_1 + 1;
    pvVar3 = realloc(*(void **)((longlong)pvVar2 + 0x50),(longlong)iVar1 * 8);
    if (pvVar3 == (void *)0x0) {
      pthread_spin_unlock((undefined8 *)((longlong)pvVar2 + 0x68));
      return 0xc;
    }
    pvVar4 = realloc(*(void **)((longlong)pvVar2 + 0x58),(longlong)iVar1);
    if (pvVar4 == (void *)0x0) {
      pthread_spin_unlock((undefined8 *)((longlong)pvVar2 + 0x68));
      return 0xc;
    }
    memset((void *)((longlong)pvVar3 + (ulonglong)*(uint *)((longlong)pvVar2 + 0x48) * 8),0,
           (ulonglong)(uint)(iVar1 - *(int *)((longlong)pvVar2 + 0x48)) * 8);
    memset((void *)((longlong)pvVar4 + (ulonglong)*(uint *)((longlong)pvVar2 + 0x48)),0,
           (ulonglong)(uint)(iVar1 - *(int *)((longlong)pvVar2 + 0x48)));
    *(void **)((longlong)pvVar2 + 0x50) = pvVar3;
    *(void **)((longlong)pvVar2 + 0x58) = pvVar4;
    *(int *)((longlong)pvVar2 + 0x48) = iVar1;
  }
  *(undefined8 *)((ulonglong)param_1 * 8 + *(longlong *)((longlong)pvVar2 + 0x50)) = param_2;
  *(undefined1 *)((ulonglong)param_1 + *(longlong *)((longlong)pvVar2 + 0x58)) = 1;
  pthread_spin_unlock((undefined8 *)((longlong)pvVar2 + 0x68));
  SetLastError(dwErrCode);
  return 0;
}



bool pthread_equal(longlong param_1,longlong param_2)

{
  return param_1 == param_2;
}



void pthread_tls_init(void)

{
  _pthread_tls = TlsAlloc();
  if (_pthread_tls == 0xffffffff) {
                    // WARNING: Subroutine does not return
    abort();
  }
  return;
}



void _pthread_cleanup_dest(ulonglong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  int local_10;
  uint local_c;
  
  if ((param_1 != 0) && (lVar3 = __pth_gpointer_locked(param_1), lVar3 != 0)) {
    for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
      bVar2 = false;
      pthread_spin_lock((longlong *)(lVar3 + 0x68));
      local_10 = *(int *)(lVar3 + 0x48);
      while (local_10 = local_10 + -1, -1 < local_10) {
        uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x50) + (longlong)local_10 * 8);
        if (*(char *)((longlong)local_10 + *(longlong *)(lVar3 + 0x58)) != '\0') {
          pthread_rwlock_rdlock((longlong *)&_pthread_key_lock);
          if (*(ulonglong *)(_pthread_key_dest + (longlong)local_10 * 8) < 2) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x50) + (longlong)local_10 * 8) = 0;
            *(undefined1 *)((longlong)local_10 + *(longlong *)(lVar3 + 0x58)) = 0;
          }
          else {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x50) + (longlong)local_10 * 8) = 0;
            *(undefined1 *)((longlong)local_10 + *(longlong *)(lVar3 + 0x58)) = 0;
            pthread_spin_unlock((undefined8 *)(lVar3 + 0x68));
            (**(code **)(_pthread_key_dest + (longlong)local_10 * 8))(uVar1);
            pthread_spin_lock((longlong *)(lVar3 + 0x68));
            bVar2 = true;
          }
          pthread_rwlock_unlock((longlong *)&_pthread_key_lock);
        }
      }
      pthread_spin_unlock((undefined8 *)(lVar3 + 0x68));
      if (!bVar2) {
        return;
      }
    }
  }
  return;
}



LPVOID __pthread_self_lite(void)

{
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  LPVOID lpTlsValue;
  HANDLE pvVar4;
  HANDLE hSourceHandle;
  HANDLE hSourceProcessHandle;
  
  _pthread_once_raw((uint *)&_pthread_tls_once,pthread_tls_init);
  lpTlsValue = TlsGetValue(_pthread_tls);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = pop_pthread_mem();
    if (lpTlsValue == (void *)0x0) {
      lpTlsValue = (LPVOID)0x0;
    }
    else {
      *(undefined4 *)((longlong)lpTlsValue + 0x44) = 1;
      DVar1 = GetCurrentThreadId();
      *(DWORD *)((longlong)lpTlsValue + 0x70) = DVar1;
      pvVar4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      *(HANDLE *)((longlong)lpTlsValue + 0x30) = pvVar4;
      *(undefined8 *)((longlong)lpTlsValue + 0x38) = 0xffffffffffffffff;
      replace_spin_keys((undefined8 *)((longlong)lpTlsValue + 0x68),0xffffffffffffffff);
      *(undefined4 *)((longlong)lpTlsValue + 0xb8) = 0;
      *(undefined8 *)((longlong)lpTlsValue + 0x28) = 0;
      pvVar4 = GetCurrentProcess();
      hSourceHandle = GetCurrentThread();
      hSourceProcessHandle = GetCurrentProcess();
      BVar2 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,pvVar4,
                              (LPHANDLE)((longlong)lpTlsValue + 0x28),0,0,2);
      if (BVar2 == 0) {
                    // WARNING: Subroutine does not return
        abort();
      }
      iVar3 = GetThreadPriority(*(HANDLE *)((longlong)lpTlsValue + 0x28));
      *(int *)((longlong)lpTlsValue + 0xc0) = iVar3;
      *(undefined4 *)((longlong)lpTlsValue + 0xbc) = 0;
      *(byte *)((longlong)lpTlsValue + 0x40) = *(byte *)((longlong)lpTlsValue + 0x40) & 0xcf | 0x10;
      BVar2 = TlsSetValue(_pthread_tls,lpTlsValue);
      if (BVar2 == 0) {
                    // WARNING: Subroutine does not return
        abort();
      }
    }
  }
  return lpTlsValue;
}



undefined8 pthread_self(void)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  
  pvVar1 = __pthread_self_lite();
  if (pvVar1 == (LPVOID)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)((longlong)pvVar1 + 0x1d8);
  }
  return uVar2;
}



undefined8 pthread_getevent(void)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  
  pvVar1 = __pthread_self_lite();
  if (pvVar1 == (LPVOID)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)((longlong)pvVar1 + 0x30);
  }
  return uVar2;
}



undefined8 pthread_gethandle(ulonglong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __pth_gpointer_locked(param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
  }
  return uVar2;
}



longlong pthread_getclean(void)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  pvVar1 = __pthread_self_lite();
  if (pvVar1 == (LPVOID)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)pvVar1 + 0x18;
  }
  return lVar2;
}



undefined8 pthread_get_concurrency(undefined4 *param_1)

{
  *param_1 = _pthread_concur;
  return 0;
}



undefined8 pthread_set_concurrency(undefined4 param_1)

{
  _pthread_concur = param_1;
  return 0;
}



void pthread_exit(undefined8 param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  undefined8 *puStack_58;
  uint local_c;
  
  local_c = (uint)param_1;
  pvVar1 = __pthread_self_lite();
  *(undefined8 *)((longlong)pvVar1 + 8) = param_1;
  _pthread_cleanup_dest(*(ulonglong *)((longlong)pvVar1 + 0x1d8));
  if ((*(byte *)((longlong)pvVar1 + 0x40) & 0x30) == 0) {
                    // WARNING: Subroutine does not return
    longjmp((_JBTYPE *)((longlong)pvVar1 + 0xd0),1);
  }
  puVar2 = TlsGetValue(_pthread_tls);
  if (puVar2 != (undefined4 *)0x0) {
    if (*(longlong *)(puVar2 + 10) == 0) {
      *puVar2 = 0xdeadbeef;
      if (*(longlong *)(puVar2 + 0xc) != 0) {
        CloseHandle(*(HANDLE *)(puVar2 + 0xc));
      }
      *(undefined8 *)(puVar2 + 0xc) = 0;
      local_c = (uint)*(undefined8 *)(puVar2 + 2);
      push_pthread_mem(puVar2);
      TlsSetValue(_pthread_tls,(LPVOID)0x0);
    }
    else {
      local_c = (uint)*(undefined8 *)(puVar2 + 2);
      puVar2[0x2f] = 1;
      if (*(longlong *)(puVar2 + 0xc) != 0) {
        CloseHandle(*(HANDLE *)(puVar2 + 0xc));
      }
      *(undefined8 *)(puVar2 + 0xc) = 0;
      if ((puVar2[0x11] & 4) != 0) {
        *puVar2 = 0xdeadbeef;
        CloseHandle(*(HANDLE *)(puVar2 + 10));
        *(undefined8 *)(puVar2 + 10) = 0;
        push_pthread_mem(puVar2);
        TlsSetValue(_pthread_tls,(LPVOID)0x0);
      }
    }
  }
  _endthreadex(local_c);
  pvVar1 = __pthread_self_lite();
  *(byte *)((longlong)pvVar1 + 0x40) = *(byte *)((longlong)pvVar1 + 0x40) & 0xf3 | 4;
  _pthread_setnobreak(1);
  LOCK();
  _pthread_cancelling = _pthread_cancelling + -1;
  UNLOCK();
  for (puStack_58 = *(undefined8 **)((longlong)pvVar1 + 0x18); puStack_58 != (undefined8 *)0x0;
      puStack_58 = (undefined8 *)puStack_58[2]) {
    (*(code *)*puStack_58)(puStack_58[1]);
  }
  _pthread_setnobreak(0);
  pthread_exit(0xdeadbeef);
  return;
}



void _pthread_invoke_cancel(void)

{
  LPVOID pvVar1;
  undefined8 *local_10;
  
  pvVar1 = __pthread_self_lite();
  *(byte *)((longlong)pvVar1 + 0x40) = *(byte *)((longlong)pvVar1 + 0x40) & 0xf3 | 4;
  _pthread_setnobreak(1);
  LOCK();
  _pthread_cancelling = _pthread_cancelling + -1;
  UNLOCK();
  for (local_10 = *(undefined8 **)((longlong)pvVar1 + 0x18); local_10 != (undefined8 *)0x0;
      local_10 = (undefined8 *)local_10[2]) {
    (*(code *)*local_10)(local_10[1]);
  }
  _pthread_setnobreak(0);
  pthread_exit(0xdeadbeef);
  return;
}



undefined8 __pthread_shallcancel(void)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  if (_pthread_cancelling == 0) {
    uVar1 = 0;
  }
  else {
    pvVar2 = __pthread_self_lite();
    if (pvVar2 == (LPVOID)0x0) {
      uVar1 = 0;
    }
    else if (((*(int *)((longlong)pvVar2 + 0x20) < 1) &&
             ((*(byte *)((longlong)pvVar2 + 0x40) & 3) != 0)) &&
            ((*(uint *)((longlong)pvVar2 + 0x44) & 1) != 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



void _pthread_setnobreak(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = __pthread_self_lite();
  if (pvVar1 != (LPVOID)0x0) {
    if (param_1 < 1) {
      LOCK();
      *(int *)((longlong)pvVar1 + 0x20) = *(int *)((longlong)pvVar1 + 0x20) + -1;
      UNLOCK();
    }
    else {
      LOCK();
      *(int *)((longlong)pvVar1 + 0x20) = *(int *)((longlong)pvVar1 + 0x20) + 1;
      UNLOCK();
    }
  }
  return;
}



void pthread_testcancel(void)

{
  LPVOID pvVar1;
  
  pvVar1 = __pthread_self_lite();
  if (((pvVar1 != (LPVOID)0x0) && ((*(byte *)((longlong)pvVar1 + 0x40) & 0xc) == 0)) &&
     (_pthread_cancelling != 0)) {
    pthread_mutex_lock((longlong *)((longlong)pvVar1 + 0x38));
    if ((((*(byte *)((longlong)pvVar1 + 0x40) & 3) != 0) &&
        ((*(uint *)((longlong)pvVar1 + 0x44) & 1) != 0)) && (*(int *)((longlong)pvVar1 + 0x20) < 1))
    {
      *(byte *)((longlong)pvVar1 + 0x40) = *(byte *)((longlong)pvVar1 + 0x40) & 0xf3 | 4;
      *(uint *)((longlong)pvVar1 + 0x44) = *(uint *)((longlong)pvVar1 + 0x44) & 0xfffffffe;
      if (*(longlong *)((longlong)pvVar1 + 0x30) != 0) {
        ResetEvent(*(HANDLE *)((longlong)pvVar1 + 0x30));
      }
      pthread_mutex_unlock((longlong *)((longlong)pvVar1 + 0x38));
      _pthread_invoke_cancel();
    }
    pthread_mutex_unlock((longlong *)((longlong)pvVar1 + 0x38));
  }
  return;
}



undefined8 pthread_cancel(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined7 extraout_var;
  _CONTEXT local_508;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 *local_18;
  longlong local_10;
  
  local_10 = __pth_gpointer_locked(param_1);
  if (local_10 == 0) {
    return 3;
  }
  if (local_10 == 0) {
    return 3;
  }
  if ((*(longlong *)(local_10 + 0x28) == 0) || (*(longlong *)(local_10 + 0x28) == -1)) {
LAB_14001b78e:
    uVar4 = 3;
  }
  else {
    if (_pthread_get_handle_information != (code *)0x0) {
      local_2c = 0;
      iVar2 = (*_pthread_get_handle_information)(*(undefined8 *)(local_10 + 0x28),&local_2c);
      if ((iVar2 == 0) && (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_14001b78e;
    }
    pthread_mutex_lock((longlong *)(local_10 + 0x38));
    lVar5 = pthread_self();
    bVar1 = pthread_equal(lVar5,param_1);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      if (((*(uint *)(local_10 + 0x44) & 2) == 0) || ((*(uint *)(local_10 + 0x44) & 1) == 0)) {
        if ((*(byte *)(local_10 + 0x40) & 3) != 0) {
          pthread_mutex_unlock((longlong *)(local_10 + 0x38));
          if ((*(byte *)(local_10 + 0x40) & 0xc) != 0) {
            return 3;
          }
          return 0;
        }
        *(byte *)(local_10 + 0x40) = *(byte *)(local_10 + 0x40) & 0xfc | 1;
        local_28 = &_pthread_cancelling;
        LOCK();
        _pthread_cancelling = _pthread_cancelling + 1;
        UNLOCK();
        if (*(longlong *)(local_10 + 0x30) != 0) {
          SetEvent(*(HANDLE *)(local_10 + 0x30));
        }
      }
      else {
        if ((*(byte *)(local_10 + 0x40) & 0xc) != 0) {
          pthread_mutex_unlock((longlong *)(local_10 + 0x38));
          if ((*(byte *)(local_10 + 0x40) & 0xc) != 0) {
            return 3;
          }
          return 0;
        }
        if (((*(byte *)(local_10 + 0x40) & 3) != 0) || ((*(byte *)(local_10 + 0x40) & 0xc) != 0)) {
          return 3;
        }
        local_508.ContextFlags = 0x100001;
        SuspendThread(*(HANDLE *)(local_10 + 0x28));
        DVar3 = WaitForSingleObject(*(HANDLE *)(local_10 + 0x28),0);
        if (DVar3 == 0x102) {
          GetThreadContext(*(HANDLE *)(local_10 + 0x28),&local_508);
          local_508.Rip = (DWORD64)_pthread_invoke_cancel;
          SetThreadContext(*(HANDLE *)(local_10 + 0x28),&local_508);
          *(byte *)(local_10 + 0x40) = *(byte *)(local_10 + 0x40) & 0xfc | 1;
          *(uint *)(local_10 + 0x44) = *(uint *)(local_10 + 0x44) & 0xfffffffe;
          *(byte *)(local_10 + 0x40) = *(byte *)(local_10 + 0x40) & 0xf3 | 4;
          local_20 = &_pthread_cancelling;
          LOCK();
          _pthread_cancelling = _pthread_cancelling + 1;
          UNLOCK();
          if (*(longlong *)(local_10 + 0x30) != 0) {
            SetEvent(*(HANDLE *)(local_10 + 0x30));
          }
          pthread_mutex_unlock((longlong *)(local_10 + 0x38));
          ResumeThread(*(HANDLE *)(local_10 + 0x28));
        }
      }
      pthread_mutex_unlock((longlong *)(local_10 + 0x38));
      uVar4 = 0;
    }
    else if ((*(byte *)(local_10 + 0x40) & 3) == 0) {
      *(byte *)(local_10 + 0x40) = *(byte *)(local_10 + 0x40) & 0xfc | 1;
      local_18 = &_pthread_cancelling;
      LOCK();
      _pthread_cancelling = _pthread_cancelling + 1;
      UNLOCK();
      if (*(longlong *)(local_10 + 0x30) != 0) {
        SetEvent(*(HANDLE *)(local_10 + 0x30));
      }
      if (((*(uint *)(local_10 + 0x44) & 2) == 0) || ((*(uint *)(local_10 + 0x44) & 1) == 0)) {
        pthread_mutex_unlock((longlong *)(local_10 + 0x38));
      }
      else {
        *(uint *)(local_10 + 0x44) = *(uint *)(local_10 + 0x44) & 0xfffffffe;
        *(byte *)(local_10 + 0x40) = *(byte *)(local_10 + 0x40) & 0xf3 | 4;
        pthread_mutex_unlock((longlong *)(local_10 + 0x38));
        _pthread_invoke_cancel();
      }
      uVar4 = 0;
    }
    else {
      pthread_mutex_unlock((longlong *)(local_10 + 0x38));
      if ((*(byte *)(local_10 + 0x40) & 0xc) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 3;
      }
    }
  }
  return uVar4;
}



undefined8 pthread_kill(ulonglong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  pthread_mutex_lock((longlong *)&mtx_pthr_locked);
  lVar1 = __pthread_get_pointer(param_1);
  if (((((lVar1 == 0) || (param_1 != *(ulonglong *)(lVar1 + 0x1d8))) ||
       ((*(byte *)(lVar1 + 0x40) & 0xc) != 0)) ||
      ((*(int *)(lVar1 + 0xbc) != 0 || (*(longlong *)(lVar1 + 0x28) == 0)))) ||
     (*(longlong *)(lVar1 + 0x28) == -1)) {
    pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
    uVar2 = 3;
  }
  else {
    pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else if ((param_2 < 2) || (0x17 < param_2)) {
      uVar2 = 0x16;
    }
    else {
      uVar2 = pthread_cancel(param_1);
    }
  }
  return uVar2;
}



uint _pthread_get_state(uint *param_1,uint param_2)

{
  return *param_1 & param_2;
}



undefined8 _pthread_set_state(uint *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((~param_2 & param_3) == 0) {
    *param_1 = ~param_2 & *param_1;
    *param_1 = *param_1 | param_3;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x16;
  }
  return uVar1;
}



undefined8 pthread_attr_init(undefined4 *param_1)

{
  memset(param_1,0,0x20);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return 0;
}



undefined8 pthread_attr_destroy(void *param_1)

{
  memset(param_1,0,0x20);
  return 0;
}



void pthread_attr_setdetachstate(uint *param_1,uint param_2)

{
  _pthread_set_state(param_1,4,param_2);
  return;
}



undefined8 pthread_attr_getdetachstate(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = _pthread_get_state(param_1,4);
  *param_2 = uVar1;
  return 0;
}



undefined8 pthread_attr_setinheritsched(uint *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (uint *)0x0) || ((param_2 != 8 && (param_2 != 0)))) {
    uVar1 = 0x16;
  }
  else {
    uVar1 = _pthread_set_state(param_1,8,param_2);
  }
  return uVar1;
}



undefined8 pthread_attr_getinheritsched(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = _pthread_get_state(param_1,8);
  *param_2 = uVar1;
  return 0;
}



void pthread_attr_setscope(uint *param_1,uint param_2)

{
  _pthread_set_state(param_1,0x10,param_2);
  return;
}



undefined8 pthread_attr_getscope(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = _pthread_get_state(param_1,0x10);
  *param_2 = uVar1;
  return 0;
}



undefined8 pthread_attr_getstack(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  *param_2 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
  *param_3 = *(undefined8 *)(param_1 + 0x10);
  return 0;
}



undefined8 pthread_attr_setstack(longlong param_1,longlong param_2,longlong param_3)

{
  *(longlong *)(param_1 + 0x10) = param_3;
  *(longlong *)(param_1 + 8) = param_2 + param_3;
  return 0;
}



undefined8 pthread_attr_getstackaddr(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 8);
  return 0;
}



undefined8 pthread_attr_setstackaddr(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return 0;
}



undefined8 pthread_attr_getstacksize(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  return 0;
}



undefined8 pthread_attr_setstacksize(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 0;
}



void test_cancel_locked(ulonglong param_1)

{
  DWORD DVar1;
  longlong lVar2;
  
  lVar2 = __pth_gpointer_locked(param_1);
  if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0x40) & 0xc) == 0)) && (*(int *)(lVar2 + 0xbc) == 0)) &&
     ((((*(uint *)(lVar2 + 0x44) & 1) != 0 && ((*(uint *)(lVar2 + 0x44) & 2) != 0)) &&
      (DVar1 = WaitForSingleObject(*(HANDLE *)(lVar2 + 0x30),0), DVar1 == 0)))) {
    pthread_mutex_unlock((longlong *)(lVar2 + 0x38));
    _pthread_invoke_cancel();
  }
  return;
}



undefined8 pthread_setcancelstate(uint param_1,uint *param_2)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  
  pvVar1 = __pthread_self_lite();
  if ((pvVar1 == (LPVOID)0x0) || (1 < param_1)) {
    uVar2 = 0x16;
  }
  else {
    pthread_mutex_lock((longlong *)((longlong)pvVar1 + 0x38));
    if (param_2 != (uint *)0x0) {
      *param_2 = *(uint *)((longlong)pvVar1 + 0x44) & 1;
    }
    *(uint *)((longlong)pvVar1 + 0x44) = *(uint *)((longlong)pvVar1 + 0x44) & 0xfffffffe;
    *(uint *)((longlong)pvVar1 + 0x44) = *(uint *)((longlong)pvVar1 + 0x44) | param_1;
    test_cancel_locked(*(ulonglong *)((longlong)pvVar1 + 0x1d8));
    pthread_mutex_unlock((longlong *)((longlong)pvVar1 + 0x38));
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 pthread_setcanceltype(uint param_1,uint *param_2)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  
  pvVar1 = __pthread_self_lite();
  if ((pvVar1 == (LPVOID)0x0) || ((param_1 & 0xfffffffd) != 0)) {
    uVar2 = 0x16;
  }
  else {
    pthread_mutex_lock((longlong *)((longlong)pvVar1 + 0x38));
    if (param_2 != (uint *)0x0) {
      *param_2 = *(uint *)((longlong)pvVar1 + 0x44) & 2;
    }
    *(uint *)((longlong)pvVar1 + 0x44) = *(uint *)((longlong)pvVar1 + 0x44) & 0xfffffffd;
    *(uint *)((longlong)pvVar1 + 0x44) = *(uint *)((longlong)pvVar1 + 0x44) | param_1;
    test_cancel_locked(*(ulonglong *)((longlong)pvVar1 + 0x1d8));
    pthread_mutex_unlock((longlong *)((longlong)pvVar1 + 0x38));
    uVar2 = 0;
  }
  return uVar2;
}



undefined8
pthread_create_wrapper(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DWORD DVar1;
  int iVar2;
  undefined8 uVar3;
  HANDLE pvVar4;
  LPVOID pvVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint uStack_7c;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  HANDLE pvStack_58;
  undefined1 *puStack_50;
  undefined8 *puStack_40;
  uint *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  uint local_1c;
  uint *local_18;
  undefined4 *local_10;
  
  puVar7 = (uint *)&stack0xfffffffffffffff8;
  local_1c = 0;
  puStack_50 = (undefined1 *)0x14001c197;
  local_10 = param_1;
  _text();
  puStack_50 = (undefined1 *)0x14001c1a6;
  pthread_mutex_lock((longlong *)&mtx_pthr_locked);
  puStack_50 = (undefined1 *)0x14001c1b6;
  pthread_mutex_lock((longlong *)(local_10 + 0xe));
  puStack_50 = (undefined1 *)0x14001c1cc;
  _pthread_once_raw((uint *)&_pthread_tls_once,pthread_tls_init);
  puStack_50 = (undefined1 *)0x14001c1e1;
  TlsSetValue(_pthread_tls,local_10);
  puStack_50 = (undefined1 *)0x14001c1ea;
  DVar1 = GetCurrentThreadId();
  local_10[0x1c] = DVar1;
  puStack_50 = (undefined1 *)0x14001c201;
  pthread_mutex_unlock((longlong *)(local_10 + 0xe));
  puStack_50 = (undefined1 *)0x14001c21a;
  iVar2 = _setjmp((_JBTYPE *)(local_10 + 0x34));
  if (iVar2 == 0) {
    local_18 = (uint *)0x80;
    puStack_50 = (undefined1 *)0x14001c235;
    pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
    if (*(longlong *)(local_10 + 4) != 0) {
      puStack_50 = (undefined1 *)0x14001c257;
      local_18 = (uint *)(**(code **)(local_10 + 4))(*(undefined8 *)(local_10 + 2));
    }
    puStack_50 = (undefined1 *)0x14001c26c;
    pthread_mutex_lock((longlong *)&mtx_pthr_locked);
    *(uint **)(local_10 + 2) = local_18;
    puStack_50 = (undefined1 *)0x14001c28b;
    puVar7 = local_18;
    _pthread_cleanup_dest(*(ulonglong *)(local_10 + 0x76));
  }
  else {
    puStack_50 = (undefined1 *)0x14001c29c;
    pthread_mutex_lock((longlong *)&mtx_pthr_locked);
  }
  puStack_50 = (undefined1 *)0x14001c2ac;
  pthread_mutex_lock((longlong *)(local_10 + 0xe));
  local_1c = (uint)*(undefined8 *)(local_10 + 2);
  if (*(longlong *)(local_10 + 0xc) != 0) {
    puStack_50 = (undefined1 *)0x14001c2d8;
    CloseHandle(*(HANDLE *)(local_10 + 0xc));
  }
  *(undefined8 *)(local_10 + 0xc) = 0;
  if (*(longlong *)(local_10 + 10) == 0) {
    *local_10 = 0xdeadbeef;
    puStack_50 = (undefined1 *)0x14001c30b;
    pthread_mutex_unlock((longlong *)(local_10 + 0xe));
    puStack_50 = (undefined1 *)0x14001c31b;
    pthread_mutex_destroy((undefined8 *)(local_10 + 0xe));
    puStack_50 = (undefined1 *)0x14001c327;
    push_pthread_mem(local_10);
    local_10 = (undefined4 *)0x0;
    puVar7 = (uint *)0x0;
    puStack_50 = (undefined1 *)0x14001c344;
    TlsSetValue(_pthread_tls,(LPVOID)0x0);
  }
  else {
    puStack_50 = (undefined1 *)0x14001c356;
    pthread_mutex_unlock((longlong *)(local_10 + 0xe));
    puStack_50 = (undefined1 *)0x14001c366;
    pthread_mutex_destroy((undefined8 *)(local_10 + 0xe));
    *(undefined8 *)(local_10 + 0xe) = 0xffffffffffffffff;
    local_10[0x2f] = 1;
  }
  while( true ) {
    puStack_50 = (undefined1 *)0x14001c39f;
    uVar3 = pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
    if ((int)uVar3 != 0) break;
    puStack_50 = (undefined1 *)0x14001c390;
    Sleep(0);
  }
  puVar6 = (undefined8 *)(ulonglong)local_1c;
  puStack_50 = (undefined1 *)0x14001c3b1;
  _endthreadex(local_1c);
  pvStack_58 = (HANDLE)0x0;
  iStack_5c = 0;
  uStack_60 = 0;
  uStack_70 = 0xffffffffffffffff;
  if ((puVar7 == (uint *)0x0) || (*(ulonglong *)(puVar7 + 4) < 0x100000000)) {
    puStack_50 = &stack0xfffffffffffffff8;
    puStack_40 = puVar6;
    puStack_38 = puVar7;
    uStack_30 = param_3;
    uStack_28 = param_4;
    puStack_78 = pop_pthread_mem();
    if (puStack_78 == (undefined4 *)0x0) {
      uVar3 = 0xb;
    }
    else {
      if (puStack_40 != (undefined8 *)0x0) {
        *puStack_40 = *(undefined8 *)(puStack_78 + 0x76);
      }
      puStack_78[0x2f] = 0;
      *(undefined8 *)(puStack_78 + 2) = uStack_28;
      *(undefined8 *)(puStack_78 + 4) = uStack_30;
      puStack_78[0x11] = 1;
      *(undefined8 *)(puStack_78 + 10) = 0xffffffffffffffff;
      do {
        pvVar4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
        *(HANDLE *)(puStack_78 + 0xc) = pvVar4;
        if (*(longlong *)(puStack_78 + 0xc) != 0) break;
        if (iStack_5c == 0) {
          DVar1 = 0;
        }
        else {
          DVar1 = 0x14;
        }
        Sleep(DVar1);
        iStack_5c = iStack_5c + 1;
      } while (iStack_5c < 5);
      *(undefined8 *)(puStack_78 + 0xe) = 0xffffffffffffffff;
      replace_spin_keys((undefined8 *)(puStack_78 + 0x1a),uStack_70);
      *puStack_78 = 0xbab1f00d;
      puStack_78[0x30] = 0;
      puStack_78[0x2e] = 0;
      if (*(longlong *)(puStack_78 + 0xc) == 0) {
        if (puStack_40 != (undefined8 *)0x0) {
          memset(puStack_40,0,8);
        }
        push_pthread_mem(puStack_78);
        uVar3 = 0xb;
      }
      else {
        if (puStack_38 != (uint *)0x0) {
          uStack_7c = 0;
          puStack_78[0x11] = *puStack_38;
          uStack_60 = (uint)*(undefined8 *)(puStack_38 + 4);
          pthread_attr_getinheritsched(puStack_38,&uStack_7c);
          if (uStack_7c == 0) {
            puStack_78[0x30] = puStack_38[6];
          }
          else {
            pvVar5 = __pthread_self_lite();
            puStack_78[0x30] = *(undefined4 *)((longlong)pvVar5 + 0xc0);
          }
        }
        pvStack_58 = (HANDLE)_beginthreadex((void *)0x0,uStack_60,pthread_create_wrapper,puStack_78,
                                            4,(uint *)0x0);
        if (pvStack_58 == (HANDLE)0xffffffffffffffff) {
          pvStack_58 = (HANDLE)0x0;
        }
        if (pvStack_58 == (HANDLE)0x0) {
          if (*(longlong *)(puStack_78 + 0xc) != 0) {
            CloseHandle(*(HANDLE *)(puStack_78 + 0xc));
          }
          pthread_mutex_destroy((undefined8 *)(puStack_78 + 0xe));
          replace_spin_keys((undefined8 *)(puStack_78 + 0x1a),uStack_70);
          *(undefined8 *)(puStack_78 + 0xc) = 0;
          *(undefined8 *)(puStack_78 + 10) = 0;
          if (puStack_40 != (undefined8 *)0x0) {
            memset(puStack_40,0,8);
          }
          push_pthread_mem(puStack_78);
          uVar3 = 0xb;
        }
        else {
          iStack_64 = puStack_78[0x30];
          if (iStack_64 < -0xe) {
            iStack_64 = -0xf;
          }
          else if (iStack_64 < -1) {
            iStack_64 = -2;
          }
          else if (iStack_64 < 0xf) {
            if (1 < iStack_64) {
              iStack_64 = 2;
            }
          }
          else {
            iStack_64 = 0xf;
          }
          SetThreadPriority(pvStack_58,iStack_64);
          ResetEvent(*(HANDLE *)(puStack_78 + 0xc));
          if ((puStack_78[0x11] & 4) == 0) {
            *(HANDLE *)(puStack_78 + 10) = pvStack_58;
            ResumeThread(pvStack_58);
          }
          else {
            *(undefined8 *)(puStack_78 + 10) = 0;
            ResumeThread(pvStack_58);
            CloseHandle(pvStack_58);
          }
          Sleep(0);
          uVar3 = 0;
        }
      }
    }
  }
  else {
    uVar3 = 0x16;
  }
  return uVar3;
}



undefined8 pthread_create(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  DWORD dwMilliseconds;
  undefined8 uVar1;
  HANDLE pvVar2;
  LPVOID pvVar3;
  uint local_34;
  undefined4 *local_30;
  undefined8 local_28;
  int local_1c;
  uint local_18;
  int local_14;
  HANDLE local_10;
  
  local_10 = (HANDLE)0x0;
  local_14 = 0;
  local_18 = 0;
  local_28 = 0xffffffffffffffff;
  if ((param_2 == (uint *)0x0) || (*(ulonglong *)(param_2 + 4) < 0x100000000)) {
    local_30 = pop_pthread_mem();
    if (local_30 == (undefined4 *)0x0) {
      uVar1 = 0xb;
    }
    else {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *(undefined8 *)(local_30 + 0x76);
      }
      local_30[0x2f] = 0;
      *(undefined8 *)(local_30 + 2) = param_4;
      *(undefined8 *)(local_30 + 4) = param_3;
      local_30[0x11] = 1;
      *(undefined8 *)(local_30 + 10) = 0xffffffffffffffff;
      do {
        pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
        *(HANDLE *)(local_30 + 0xc) = pvVar2;
        if (*(longlong *)(local_30 + 0xc) != 0) break;
        if (local_14 == 0) {
          dwMilliseconds = 0;
        }
        else {
          dwMilliseconds = 0x14;
        }
        Sleep(dwMilliseconds);
        local_14 = local_14 + 1;
      } while (local_14 < 5);
      *(undefined8 *)(local_30 + 0xe) = 0xffffffffffffffff;
      replace_spin_keys((undefined8 *)(local_30 + 0x1a),local_28);
      *local_30 = 0xbab1f00d;
      local_30[0x30] = 0;
      local_30[0x2e] = 0;
      if (*(longlong *)(local_30 + 0xc) == 0) {
        if (param_1 != (undefined8 *)0x0) {
          memset(param_1,0,8);
        }
        push_pthread_mem(local_30);
        uVar1 = 0xb;
      }
      else {
        if (param_2 != (uint *)0x0) {
          local_34 = 0;
          local_30[0x11] = *param_2;
          local_18 = (uint)*(undefined8 *)(param_2 + 4);
          pthread_attr_getinheritsched(param_2,&local_34);
          if (local_34 == 0) {
            local_30[0x30] = param_2[6];
          }
          else {
            pvVar3 = __pthread_self_lite();
            local_30[0x30] = *(undefined4 *)((longlong)pvVar3 + 0xc0);
          }
        }
        local_10 = (HANDLE)_beginthreadex((void *)0x0,local_18,pthread_create_wrapper,local_30,4,
                                          (uint *)0x0);
        if (local_10 == (HANDLE)0xffffffffffffffff) {
          local_10 = (HANDLE)0x0;
        }
        if (local_10 == (HANDLE)0x0) {
          if (*(longlong *)(local_30 + 0xc) != 0) {
            CloseHandle(*(HANDLE *)(local_30 + 0xc));
          }
          pthread_mutex_destroy((undefined8 *)(local_30 + 0xe));
          replace_spin_keys((undefined8 *)(local_30 + 0x1a),local_28);
          *(undefined8 *)(local_30 + 0xc) = 0;
          *(undefined8 *)(local_30 + 10) = 0;
          if (param_1 != (undefined8 *)0x0) {
            memset(param_1,0,8);
          }
          push_pthread_mem(local_30);
          uVar1 = 0xb;
        }
        else {
          local_1c = local_30[0x30];
          if (local_1c < -0xe) {
            local_1c = -0xf;
          }
          else if (local_1c < -1) {
            local_1c = -2;
          }
          else if (local_1c < 0xf) {
            if (1 < local_1c) {
              local_1c = 2;
            }
          }
          else {
            local_1c = 0xf;
          }
          SetThreadPriority(local_10,local_1c);
          ResetEvent(*(HANDLE *)(local_30 + 0xc));
          if ((local_30[0x11] & 4) == 0) {
            *(HANDLE *)(local_30 + 10) = local_10;
            ResumeThread(local_10);
          }
          else {
            *(undefined8 *)(local_30 + 10) = 0;
            ResumeThread(local_10);
            CloseHandle(local_10);
          }
          Sleep(0);
          uVar1 = 0;
        }
      }
    }
  }
  else {
    uVar1 = 0x16;
  }
  return uVar1;
}



undefined8 pthread_join(ulonglong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined7 extraout_var;
  undefined4 local_1c;
  undefined8 local_18;
  void *local_10;
  
  local_10 = (void *)__pth_gpointer_locked(param_1);
  local_18 = 0xffffffffffffffff;
  if (local_10 == (void *)0x0) {
    return 3;
  }
  if ((*(longlong *)((longlong)local_10 + 0x28) == 0) ||
     (*(longlong *)((longlong)local_10 + 0x28) == -1)) {
LAB_14001c820:
    uVar4 = 3;
  }
  else {
    if (_pthread_get_handle_information != (code *)0x0) {
      local_1c = 0;
      iVar2 = (*_pthread_get_handle_information)
                        (*(undefined8 *)((longlong)local_10 + 0x28),&local_1c);
      if ((iVar2 == 0) && (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_14001c820;
    }
    if ((*(uint *)((longlong)local_10 + 0x44) & 4) == 0) {
      lVar5 = pthread_self();
      bVar1 = pthread_equal(lVar5,param_1);
      if ((int)CONCAT71(extraout_var,bVar1) == 0) {
        if ((*(int *)((longlong)local_10 + 0xbc) == 0) ||
           ((*(longlong *)((longlong)local_10 + 0x28) != 0 &&
            (*(longlong *)((longlong)local_10 + 0x28) != -1)))) {
          WaitForSingleObject(*(HANDLE *)((longlong)local_10 + 0x28),0xffffffff);
        }
        CloseHandle(*(HANDLE *)((longlong)local_10 + 0x28));
        if (*(longlong *)((longlong)local_10 + 0x30) != 0) {
          CloseHandle(*(HANDLE *)((longlong)local_10 + 0x30));
        }
        *(undefined8 *)((longlong)local_10 + 0x30) = 0;
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = *(undefined8 *)((longlong)local_10 + 8);
        }
        pthread_mutex_destroy((undefined8 *)((longlong)local_10 + 0x38));
        replace_spin_keys((undefined8 *)((longlong)local_10 + 0x68),local_18);
        push_pthread_mem(local_10);
        uVar4 = 0;
      }
      else {
        uVar4 = 0x24;
      }
    }
    else {
      uVar4 = 0x16;
    }
  }
  return uVar4;
}



undefined8 _pthread_tryjoin(ulonglong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined7 extraout_var;
  undefined4 local_1c;
  void *local_18;
  undefined8 local_10;
  
  local_10 = 0xffffffffffffffff;
  pthread_mutex_lock((longlong *)&mtx_pthr_locked);
  local_18 = (void *)__pthread_get_pointer(param_1);
  if (((local_18 == (void *)0x0) || (*(longlong *)((longlong)local_18 + 0x28) == 0)) ||
     (*(longlong *)((longlong)local_18 + 0x28) == -1)) {
LAB_14001c9d5:
    pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
    uVar4 = 3;
  }
  else {
    if (_pthread_get_handle_information != (code *)0x0) {
      local_1c = 0;
      iVar2 = (*_pthread_get_handle_information)
                        (*(undefined8 *)((longlong)local_18 + 0x28),&local_1c);
      if ((iVar2 == 0) && (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_14001c9d5;
    }
    if ((*(uint *)((longlong)local_18 + 0x44) & 4) == 0) {
      lVar5 = pthread_self();
      bVar1 = pthread_equal(lVar5,param_1);
      if ((int)CONCAT71(extraout_var,bVar1) == 0) {
        if (((*(int *)((longlong)local_18 + 0xbc) == 0) &&
            (DVar3 = WaitForSingleObject(*(HANDLE *)((longlong)local_18 + 0x28),0), DVar3 != 0)) &&
           (*(int *)((longlong)local_18 + 0xbc) == 0)) {
          pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
          return 0x10;
        }
        CloseHandle(*(HANDLE *)((longlong)local_18 + 0x28));
        if (*(longlong *)((longlong)local_18 + 0x30) != 0) {
          CloseHandle(*(HANDLE *)((longlong)local_18 + 0x30));
        }
        *(undefined8 *)((longlong)local_18 + 0x30) = 0;
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = *(undefined8 *)((longlong)local_18 + 8);
        }
        pthread_mutex_destroy((undefined8 *)((longlong)local_18 + 0x38));
        replace_spin_keys((undefined8 *)((longlong)local_18 + 0x68),local_10);
        push_pthread_mem(local_18);
        pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
        uVar4 = 0;
      }
      else {
        pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
        uVar4 = 0x24;
      }
    }
    else {
      pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
      uVar4 = 0x16;
    }
  }
  return uVar4;
}



undefined4 pthread_detach(ulonglong param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 local_2c;
  HANDLE local_28;
  undefined8 local_20;
  void *local_18;
  undefined4 local_c;
  
  local_c = 0;
  local_18 = (void *)__pth_gpointer_locked(param_1);
  local_20 = 0xffffffffffffffff;
  pthread_mutex_lock((longlong *)&mtx_pthr_locked);
  if (((local_18 == (void *)0x0) || (*(longlong *)((longlong)local_18 + 0x28) == 0)) ||
     (*(longlong *)((longlong)local_18 + 0x28) == -1)) {
LAB_14001cbd9:
    pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
    local_c = 3;
  }
  else {
    if (_pthread_get_handle_information != (code *)0x0) {
      local_2c = 0;
      iVar1 = (*_pthread_get_handle_information)
                        (*(undefined8 *)((longlong)local_18 + 0x28),&local_2c);
      if (iVar1 == 0) {
        DVar2 = GetLastError();
        if (DVar2 != 0x78) goto LAB_14001cbd9;
      }
    }
    if ((*(uint *)((longlong)local_18 + 0x44) & 4) == 0) {
      local_28 = *(HANDLE *)((longlong)local_18 + 0x28);
      *(undefined8 *)((longlong)local_18 + 0x28) = 0;
      *(uint *)((longlong)local_18 + 0x44) = *(uint *)((longlong)local_18 + 0x44) | 4;
      if (local_28 != (HANDLE)0x0) {
        CloseHandle(local_28);
        if (*(int *)((longlong)local_18 + 0xbc) != 0) {
          if (*(longlong *)((longlong)local_18 + 0x30) != 0) {
            CloseHandle(*(HANDLE *)((longlong)local_18 + 0x30));
          }
          *(undefined8 *)((longlong)local_18 + 0x30) = 0;
          pthread_mutex_destroy((undefined8 *)((longlong)local_18 + 0x38));
          replace_spin_keys((undefined8 *)((longlong)local_18 + 0x68),local_20);
          push_pthread_mem(local_18);
        }
      }
      pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
    }
    else {
      pthread_mutex_unlock((longlong *)&mtx_pthr_locked);
      local_c = 0x16;
    }
  }
  return local_c;
}



undefined4 pthread_getconcurrency(void)

{
  return dummy_concurrency_level;
}



undefined8 pthread_setconcurrency(undefined4 param_1)

{
  dummy_concurrency_level = param_1;
  return 0;
}



undefined8 pthread_setname_np(ulonglong param_1,char *param_2)

{
  undefined8 uVar1;
  char *local_res10 [3];
  undefined8 local_30;
  void *local_28;
  longlong local_20;
  char *local_18;
  longlong local_10;
  
  if (param_2 == (char *)0x0) {
    uVar1 = 0x16;
  }
  else {
    local_res10[0] = param_2;
    local_10 = __pth_gpointer_locked(param_1);
    if ((((local_10 == 0) || (param_1 != *(ulonglong *)(local_10 + 0x1d8))) ||
        ((*(byte *)(local_10 + 0x40) & 0xc) != 0)) ||
       (((*(int *)(local_10 + 0xbc) != 0 || (*(longlong *)(local_10 + 0x28) == 0)) ||
        (*(longlong *)(local_10 + 0x28) == -1)))) {
      uVar1 = 3;
    }
    else {
      local_18 = strdup(local_res10[0]);
      if (local_18 == (char *)0x0) {
        uVar1 = 0xc;
      }
      else {
        if (*(longlong *)(local_10 + 0x60) != 0) {
          free(*(void **)(local_10 + 0x60));
        }
        *(char **)(local_10 + 0x60) = local_18;
        SetThreadName(*(undefined4 *)(local_10 + 0x70),local_res10[0]);
        if (_pthread_set_thread_description != (code *)0x0) {
          local_30 = 0;
          local_20 = (*(code *)__imp_mbsrtowcs)(0,local_res10,0,&local_30);
          if (local_20 != -1) {
            local_28 = malloc((local_20 + 1) * 2);
            if (local_28 != (void *)0x0) {
              (*(code *)__imp_mbsrtowcs)(local_28,local_res10,local_20 + 1,&local_30);
              (*_pthread_set_thread_description)(*(undefined8 *)(local_10 + 0x28),local_28);
              free(local_28);
            }
          }
        }
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



undefined8 pthread_getname_np(ulonglong param_1,undefined1 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  size_t sVar3;
  
  if (param_2 == (undefined1 *)0x0) {
    uVar1 = 0x16;
  }
  else {
    lVar2 = __pth_gpointer_locked(param_1);
    if ((((lVar2 == 0) || (param_1 != *(ulonglong *)(lVar2 + 0x1d8))) ||
        ((*(byte *)(lVar2 + 0x40) & 0xc) != 0)) ||
       (((*(int *)(lVar2 + 0xbc) != 0 || (*(longlong *)(lVar2 + 0x28) == 0)) ||
        (*(longlong *)(lVar2 + 0x28) == -1)))) {
      uVar1 = 3;
    }
    else if (param_3 == 0) {
      uVar1 = 0x22;
    }
    else if (*(longlong *)(lVar2 + 0x60) == 0) {
      *param_2 = 0;
      uVar1 = 0;
    }
    else {
      sVar3 = strlen(*(char **)(lVar2 + 0x60));
      if (sVar3 < param_3) {
        memcpy(param_2,*(void **)(lVar2 + 0x60),sVar3 + 1);
        uVar1 = 0;
      }
      else {
        uVar1 = 0x22;
      }
    }
  }
  return uVar1;
}



void winpthreads_init(void)

{
  HMODULE pHVar1;
  
  pHVar1 = GetModuleHandleA("kernel32.dll");
  if (pHVar1 != (HMODULE)0x0) {
    _pthread_get_handle_information = GetProcAddress(pHVar1,"GetHandleInformation");
    _pthread_get_tick_count_64 = GetProcAddress(pHVar1,"GetTickCount64");
    _pthread_set_thread_description = GetProcAddress(pHVar1,"SetThreadDescription");
    _pthread_get_system_time_best_as_file_time =
         GetProcAddress(pHVar1,"GetSystemTimePreciseAsFileTime");
  }
  if (_pthread_get_system_time_best_as_file_time == (FARPROC)0x0) {
    _pthread_get_system_time_best_as_file_time = GetSystemTimeAsFileTime_exref;
  }
  if (_pthread_set_thread_description == (FARPROC)0x0) {
    pHVar1 = GetModuleHandleA("kernelbase.dll");
    if (pHVar1 != (HMODULE)0x0) {
      _pthread_set_thread_description = GetProcAddress(pHVar1,"SetThreadDescription");
    }
  }
  return;
}



ulonglong _pthread_time_in_ms(void)

{
  _FILETIME local_10;
  
  GetSystemTimeAsFileTime(&local_10);
  return ((longlong)local_10 + 0xfe624e212ac18000U) / 10000;
}



longlong _pthread_time_in_ms_from_timespec(longlong *param_1)

{
  return *param_1 * 1000 + (ulonglong)(longlong)((int)param_1[1] + 999999) / 1000000;
}



longlong _pthread_rel_time_in_ms(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = _pthread_time_in_ms_from_timespec(param_1);
  uVar2 = _pthread_time_in_ms();
  if (uVar1 < uVar2) {
    lVar3 = 0;
  }
  else {
    lVar3 = uVar1 - uVar2;
  }
  return lVar3;
}



ulonglong _pthread_get_tick_count(LARGE_INTEGER *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  LARGE_INTEGER local_18;
  LARGE_INTEGER local_10;
  
  if (_pthread_get_tick_count_64 == (code *)0x0) {
    if (param_1->QuadPart == 0) {
      BVar1 = QueryPerformanceFrequency(&local_10);
      if (BVar1 == 0) {
        param_1->QuadPart = -1;
      }
      else {
        *param_1 = local_10;
      }
    }
    if ((0 < param_1->QuadPart) && (BVar1 = QueryPerformanceCounter(&local_18), BVar1 != 0)) {
      return local_18.QuadPart / (param_1->QuadPart / 1000);
    }
    DVar2 = GetTickCount();
    uVar3 = (ulonglong)DVar2;
  }
  else {
    uVar3 = (*_pthread_get_tick_count_64)();
  }
  return uVar3;
}



DWORD _pthread_wait_for_single_object(HANDLE param_1,uint param_2)

{
  LARGE_INTEGER local_38;
  ulonglong local_30;
  DWORD local_24;
  ulonglong local_20;
  ulonglong local_18;
  DWORD local_c;
  
  local_38.QuadPart = 0;
  if ((param_2 == 0xffffffff) || (param_2 == 0)) {
    local_24 = WaitForSingleObject(param_1,param_2);
  }
  else {
    local_18 = _pthread_get_tick_count(&local_38);
    local_20 = local_18 + param_2;
    local_c = param_2;
    while ((local_24 = WaitForSingleObject(param_1,local_c), local_24 == 0x102 &&
           (local_30 = _pthread_get_tick_count(&local_38), local_30 < local_20))) {
      local_c = (int)local_20 - (int)local_30;
    }
  }
  return local_24;
}



DWORD _pthread_wait_for_multiple_objects(DWORD param_1,HANDLE *param_2,BOOL param_3,uint param_4)

{
  LARGE_INTEGER local_38;
  ulonglong local_30;
  DWORD local_24;
  ulonglong local_20;
  ulonglong local_18;
  DWORD local_c;
  
  local_38.QuadPart = 0;
  if ((param_4 == 0xffffffff) || (param_4 == 0)) {
    local_24 = WaitForMultipleObjects(param_1,param_2,param_3,param_4);
  }
  else {
    local_18 = _pthread_get_tick_count(&local_38);
    local_20 = local_18 + param_4;
    local_c = param_4;
    while ((local_24 = WaitForMultipleObjects(param_1,param_2,param_3,local_c), local_24 == 0x102 &&
           (local_30 = _pthread_get_tick_count(&local_38), local_30 < local_20))) {
      local_c = (int)local_20 - (int)local_30;
    }
  }
  return local_24;
}



void pthread_rwlock_timedwrlock(longlong *param_1,longlong *param_2)

{
  pthread_rwlock_timedwrlock64(param_1,param_2);
  return;
}



void pthread_rwlock_timedrdlock(longlong *param_1,longlong *param_2)

{
  pthread_rwlock_timedrdlock64(param_1,param_2);
  return;
}



undefined4 rwl_unref(longlong *param_1,undefined4 param_2)

{
  pthread_spin_lock((longlong *)&rwl_global);
  if ((*(int *)*param_1 != -0x454e0f13) || (*(int *)(*param_1 + 4) < 1)) {
    _assert("(((rwlock_t *)*rwl)->valid == LIFE_RWLOCK) && (((rwlock_t *)*rwl)->busy > 0)",
            0x140026390,0x32);
  }
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
  pthread_spin_unlock((undefined8 *)&rwl_global);
  return param_2;
}



int rwl_ref(longlong *param_1)

{
  ulonglong uVar1;
  int local_c;
  
  local_c = 0;
  if (*param_1 == -1) {
    uVar1 = rwlock_static_init(param_1);
    local_c = (int)uVar1;
    if ((local_c != 0) && (local_c != 0x10)) {
      return local_c;
    }
  }
  pthread_spin_lock((longlong *)&rwl_global);
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(int *)*param_1 != -0x454e0f13)) {
    local_c = 0x16;
  }
  else {
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  }
  pthread_spin_unlock((undefined8 *)&rwl_global);
  return local_c;
}



undefined4 rwl_ref_unlock(longlong *param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  pthread_spin_lock((longlong *)&rwl_global);
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(int *)*param_1 != -0x454e0f13)) {
    local_c = 0x16;
  }
  else if (*param_1 == -1) {
    local_c = 1;
  }
  else {
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  }
  pthread_spin_unlock((undefined8 *)&rwl_global);
  return local_c;
}



undefined4 rwl_ref_destroy(longlong *param_1,longlong *param_2)

{
  undefined4 local_c;
  
  local_c = 0;
  *param_2 = 0;
  pthread_spin_lock((longlong *)&rwl_global);
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    local_c = 0x16;
  }
  else if (*param_1 == -1) {
    *param_1 = 0;
  }
  else if (*(int *)*param_1 == -0x454e0f13) {
    if (((int *)*param_1)[1] == 0) {
      *param_2 = *param_1;
      *param_1 = 0;
    }
    else {
      local_c = 0x10;
    }
  }
  else {
    local_c = 0x16;
  }
  pthread_spin_unlock((undefined8 *)&rwl_global);
  return local_c;
}



int rwlock_gain_both_locks(longlong param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((longlong *)(param_1 + 0x18));
  if ((iVar1 == 0) && (iVar1 = pthread_mutex_lock((longlong *)(param_1 + 0x20)), iVar1 != 0)) {
    pthread_mutex_unlock((longlong *)(param_1 + 0x18));
  }
  return iVar1;
}



int rwlock_free_both_locks(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_c;
  
  uVar3 = pthread_mutex_unlock((longlong *)(param_1 + 0x20));
  iVar1 = (int)uVar3;
  uVar3 = pthread_mutex_unlock((longlong *)(param_1 + 0x18));
  iVar2 = (int)uVar3;
  if ((((param_2 == 0) || (local_c = iVar2, iVar2 == 0)) && (local_c = iVar1, param_2 == 0)) &&
     (iVar1 == 0)) {
    local_c = iVar2;
  }
  return local_c;
}



ulonglong rwlock_static_init(longlong *param_1)

{
  ulonglong uVar1;
  
  pthread_spin_lock((longlong *)&cond_locked);
  if (*param_1 == -1) {
    uVar1 = pthread_rwlock_init(param_1);
    pthread_spin_unlock((undefined8 *)&cond_locked);
    uVar1 = uVar1 & 0xffffffff;
  }
  else {
    pthread_spin_unlock((undefined8 *)&cond_locked);
    uVar1 = 0x16;
  }
  return uVar1;
}



ulonglong pthread_rwlock_init(undefined8 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *_Memory;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 0x16;
  }
  else {
    *param_1 = 0;
    _Memory = calloc(1,0x30);
    if (_Memory == (undefined4 *)0x0) {
      uVar2 = 0xc;
    }
    else {
      *_Memory = 0xdeadb0ef;
      _Memory[4] = 0;
      _Memory[3] = _Memory[4];
      _Memory[2] = _Memory[3];
      uVar2 = pthread_mutex_init((undefined8 *)(_Memory + 6),(uint *)0x0);
      if ((int)uVar2 == 0) {
        uVar2 = pthread_mutex_init((undefined8 *)(_Memory + 8),(uint *)0x0);
        if ((int)uVar2 == 0) {
          uVar1 = pthread_cond_init((undefined8 *)(_Memory + 10),(int *)0x0);
          if (uVar1 == 0) {
            *_Memory = 0xbab1f0ed;
            *param_1 = _Memory;
            uVar2 = 0;
          }
          else {
            pthread_mutex_destroy((undefined8 *)(_Memory + 6));
            pthread_mutex_destroy((undefined8 *)(_Memory + 8));
            free(_Memory);
            uVar2 = (ulonglong)uVar1;
          }
        }
        else {
          pthread_mutex_destroy((undefined8 *)(_Memory + 6));
          free(_Memory);
          uVar2 = uVar2 & 0xffffffff;
        }
      }
      else {
        free(_Memory);
        uVar2 = uVar2 & 0xffffffff;
      }
    }
  }
  return uVar2;
}



int pthread_rwlock_destroy(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 *local_28;
  int local_1c;
  undefined4 *local_18;
  int local_c;
  
  pthread_spin_lock((longlong *)&cond_locked);
  local_c = rwl_ref_destroy(param_1,(longlong *)&local_28);
  pthread_spin_unlock((undefined8 *)&cond_locked);
  if (local_c == 0) {
    if (local_28 == (undefined4 *)0x0) {
      local_c = 0;
    }
    else {
      local_18 = local_28;
      local_c = rwlock_gain_both_locks((longlong)local_28);
      if (local_c == 0) {
        if (((int)local_18[4] < (int)local_18[3]) || (0 < (int)local_18[2])) {
          *param_1 = (longlong)local_28;
          local_c = rwlock_free_both_locks((longlong)local_18,1);
          if (local_c == 0) {
            local_c = 0x10;
          }
        }
        else {
          *local_18 = 0xdeadb0ef;
          local_c = rwlock_free_both_locks((longlong)local_18,0);
          if (local_c == 0) {
            local_c = pthread_cond_destroy((longlong *)(local_18 + 10));
            uVar1 = pthread_mutex_destroy((undefined8 *)(local_18 + 6));
            local_1c = (int)uVar1;
            if (local_c == 0) {
              local_c = local_1c;
            }
            uVar1 = pthread_mutex_destroy((undefined8 *)(local_18 + 8));
            local_1c = (int)uVar1;
            if (local_c == 0) {
              local_c = local_1c;
            }
            *local_18 = 0xdeadb0ef;
            free(local_28);
            local_c = 0;
          }
          else {
            *param_1 = (longlong)local_28;
          }
        }
      }
      else {
        *param_1 = (longlong)local_28;
      }
    }
  }
  return local_c;
}



int pthread_rwlock_rdlock(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = rwl_ref(param_1);
  if (iVar2 == 0) {
    lVar1 = *param_1;
    iVar2 = pthread_mutex_lock((longlong *)(lVar1 + 0x18));
    if (iVar2 == 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
      if (*(int *)(lVar1 + 0xc) == 0x7fffffff) {
        iVar2 = pthread_mutex_lock((longlong *)(lVar1 + 0x20));
        if (iVar2 == 0) {
          *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 0x10);
          *(undefined4 *)(lVar1 + 0x10) = 0;
          iVar2 = rwlock_free_both_locks(lVar1,0);
          iVar2 = rwl_unref(param_1,iVar2);
        }
        else {
          pthread_mutex_unlock((longlong *)(lVar1 + 0x18));
          iVar2 = rwl_unref(param_1,iVar2);
        }
      }
      else {
        uVar3 = pthread_mutex_unlock((longlong *)(lVar1 + 0x18));
        iVar2 = rwl_unref(param_1,(int)uVar3);
      }
    }
    else {
      iVar2 = rwl_unref(param_1,iVar2);
    }
  }
  return iVar2;
}



int __pthread_rwlock_timedrdlock(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = rwl_ref(param_1);
  if (iVar2 == 0) {
    lVar1 = *param_1;
    iVar2 = pthread_mutex_timedlock64((longlong *)(lVar1 + 0x18),param_2);
    if (iVar2 == 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
      if (*(int *)(lVar1 + 0xc) == 0x7fffffff) {
        iVar2 = pthread_mutex_timedlock64((longlong *)(lVar1 + 0x20),param_2);
        if (iVar2 == 0) {
          *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 0x10);
          *(undefined4 *)(lVar1 + 0x10) = 0;
          iVar2 = rwlock_free_both_locks(lVar1,0);
          iVar2 = rwl_unref(param_1,iVar2);
        }
        else {
          if (iVar2 == 0x8a) {
            LOCK();
            *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
            UNLOCK();
          }
          pthread_mutex_unlock((longlong *)(lVar1 + 0x18));
          iVar2 = rwl_unref(param_1,iVar2);
        }
      }
      else {
        uVar3 = pthread_mutex_unlock((longlong *)(lVar1 + 0x18));
        iVar2 = rwl_unref(param_1,(int)uVar3);
      }
    }
    else {
      iVar2 = rwl_unref(param_1,iVar2);
    }
  }
  return iVar2;
}



void pthread_rwlock_timedrdlock64(longlong *param_1,longlong *param_2)

{
  __pthread_rwlock_timedrdlock(param_1,param_2);
  return;
}



void pthread_rwlock_timedrdlock32(longlong *param_1,int *param_2)

{
  longlong local_18;
  int local_10;
  
  local_18 = (longlong)*param_2;
  local_10 = param_2[1];
  __pthread_rwlock_timedrdlock(param_1,&local_18);
  return;
}



int pthread_rwlock_tryrdlock(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = rwl_ref(param_1);
  if (iVar2 == 0) {
    lVar1 = *param_1;
    uVar3 = pthread_mutex_trylock((longlong *)(lVar1 + 0x18));
    if ((int)uVar3 == 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
      if (*(int *)(lVar1 + 0xc) == 0x7fffffff) {
        iVar2 = pthread_mutex_lock((longlong *)(lVar1 + 0x20));
        if (iVar2 == 0) {
          *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 0x10);
          *(undefined4 *)(lVar1 + 0x10) = 0;
          iVar2 = rwlock_free_both_locks(lVar1,0);
          iVar2 = rwl_unref(param_1,iVar2);
        }
        else {
          pthread_mutex_unlock((longlong *)(lVar1 + 0x18));
          iVar2 = rwl_unref(param_1,iVar2);
        }
      }
      else {
        uVar3 = pthread_mutex_unlock((longlong *)(lVar1 + 0x18));
        iVar2 = rwl_unref(param_1,(int)uVar3);
      }
    }
    else {
      iVar2 = rwl_unref(param_1,(int)uVar3);
    }
  }
  return iVar2;
}



int pthread_rwlock_trywrlock(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_c;
  
  iVar2 = rwl_ref(param_1);
  if (iVar2 == 0) {
    lVar1 = *param_1;
    uVar3 = pthread_mutex_trylock((longlong *)(lVar1 + 0x18));
    if ((int)uVar3 == 0) {
      uVar3 = pthread_mutex_trylock((longlong *)(lVar1 + 0x20));
      if ((int)uVar3 == 0) {
        if (*(int *)(lVar1 + 8) == 0) {
          if (0 < *(int *)(lVar1 + 0x10)) {
            *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 0x10);
            *(undefined4 *)(lVar1 + 0x10) = 0;
          }
          if (*(int *)(lVar1 + 0xc) < 1) {
            *(undefined4 *)(lVar1 + 8) = 1;
            iVar2 = rwl_unref(param_1,0);
          }
          else {
            local_c = rwlock_free_both_locks(lVar1,0);
            if (local_c == 0) {
              local_c = 0x10;
            }
            iVar2 = rwl_unref(param_1,local_c);
          }
        }
        else {
          iVar2 = rwl_unref(param_1,0x10);
        }
      }
      else {
        uVar4 = pthread_mutex_unlock((longlong *)(lVar1 + 0x18));
        local_c = (int)uVar3;
        if ((int)uVar4 != 0) {
          local_c = (int)uVar4;
        }
        iVar2 = rwl_unref(param_1,local_c);
      }
    }
    else {
      iVar2 = rwl_unref(param_1,(int)uVar3);
    }
  }
  return iVar2;
}



int pthread_rwlock_unlock(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_c;
  
  iVar2 = rwl_ref_unlock(param_1);
  if (iVar2 == 0) {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 8) == 0) {
      local_c = pthread_mutex_lock((longlong *)(lVar1 + 0x20));
      if (local_c == 0) {
        LOCK();
        *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
        UNLOCK();
        if (*(int *)(lVar1 + 0x10) == 0) {
          local_c = pthread_cond_signal((longlong *)(lVar1 + 0x28));
        }
        uVar3 = pthread_mutex_unlock((longlong *)(lVar1 + 0x20));
        if (local_c == 0) {
          local_c = (int)uVar3;
        }
      }
    }
    else {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
      UNLOCK();
      local_c = rwlock_free_both_locks(lVar1,0);
    }
    iVar2 = rwl_unref(param_1,local_c);
  }
  return iVar2;
}



void st_cancelwrite(longlong param_1)

{
  *(int *)(param_1 + 0xc) = -*(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  rwlock_free_both_locks(param_1,0);
  return;
}



int pthread_rwlock_wrlock(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *local_38;
  longlong local_30;
  undefined8 local_28;
  int *local_20;
  longlong local_18;
  int local_c;
  
  local_c = rwl_ref(param_1);
  if (local_c == 0) {
    local_18 = *param_1;
    local_c = rwlock_gain_both_locks(local_18);
    if (local_c == 0) {
      iVar1 = 0;
      if (*(int *)(local_18 + 8) == 0) {
        if (0 < *(int *)(local_18 + 0x10)) {
          *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) - *(int *)(local_18 + 0x10);
          *(undefined4 *)(local_18 + 0x10) = 0;
        }
        if (0 < *(int *)(local_18 + 0xc)) {
          *(int *)(local_18 + 0x10) = -*(int *)(local_18 + 0xc);
          local_38 = st_cancelwrite;
          local_30 = local_18;
          puVar2 = (undefined8 *)pthread_getclean();
          local_28 = *puVar2;
          LOCK();
          UNLOCK();
          plVar3 = (longlong *)pthread_getclean();
          *plVar3 = (longlong)&local_38;
          LOCK();
          UNLOCK();
          iVar1 = local_c;
          do {
            local_c = iVar1;
            local_c = pthread_cond_wait((longlong *)(local_18 + 0x28),(longlong *)(local_18 + 0x20))
            ;
            if (local_c != 0) break;
            iVar1 = 0;
          } while (*(int *)(local_18 + 0x10) < 0);
          puVar2 = (undefined8 *)pthread_getclean();
          *puVar2 = local_28;
          if (local_c != 0) {
            (*local_38)(local_30);
          }
          iVar1 = local_c;
          if (local_c == 0) {
            *(undefined4 *)(local_18 + 0xc) = 0;
          }
        }
      }
      local_c = iVar1;
      if (local_c == 0) {
        local_20 = (int *)(local_18 + 8);
        LOCK();
        *local_20 = *local_20 + 1;
        UNLOCK();
      }
      local_c = rwl_unref(param_1,local_c);
    }
    else {
      local_c = rwl_unref(param_1,local_c);
    }
  }
  return local_c;
}



int __pthread_rwlock_timedwrlock(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *local_38;
  longlong local_30;
  undefined8 local_28;
  int *local_20;
  longlong local_18;
  int local_c;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
    local_c = 0x16;
  }
  else {
    local_c = rwl_ref(param_1);
    if (local_c == 0) {
      local_18 = *param_1;
      local_c = pthread_mutex_timedlock64((longlong *)(local_18 + 0x18),param_2);
      if (local_c == 0) {
        local_c = pthread_mutex_timedlock64((longlong *)(local_18 + 0x20),param_2);
        if (local_c == 0) {
          iVar1 = 0;
          if (*(int *)(local_18 + 8) == 0) {
            if (0 < *(int *)(local_18 + 0x10)) {
              *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) - *(int *)(local_18 + 0x10);
              *(undefined4 *)(local_18 + 0x10) = 0;
            }
            if (0 < *(int *)(local_18 + 0xc)) {
              *(int *)(local_18 + 0x10) = -*(int *)(local_18 + 0xc);
              local_38 = st_cancelwrite;
              local_30 = local_18;
              puVar2 = (undefined8 *)pthread_getclean();
              local_28 = *puVar2;
              LOCK();
              UNLOCK();
              plVar3 = (longlong *)pthread_getclean();
              *plVar3 = (longlong)&local_38;
              LOCK();
              UNLOCK();
              do {
                local_c = pthread_cond_timedwait64
                                    ((longlong *)(local_18 + 0x28),(longlong *)(local_18 + 0x20),
                                     param_2);
                if (-1 < *(int *)(local_18 + 0x10)) break;
              } while (local_c == 0);
              puVar2 = (undefined8 *)pthread_getclean();
              *puVar2 = local_28;
              if (local_c != 0) {
                (*local_38)(local_30);
              }
              iVar1 = local_c;
              if (local_c == 0) {
                *(undefined4 *)(local_18 + 0xc) = 0;
              }
            }
          }
          local_c = iVar1;
          if (local_c == 0) {
            local_20 = (int *)(local_18 + 8);
            LOCK();
            *local_20 = *local_20 + 1;
            UNLOCK();
          }
          local_c = rwl_unref(param_1,local_c);
        }
        else {
          pthread_mutex_unlock((longlong *)(local_18 + 0x18));
          local_c = rwl_unref(param_1,local_c);
        }
      }
      else {
        local_c = rwl_unref(param_1,local_c);
      }
    }
  }
  return local_c;
}



void pthread_rwlock_timedwrlock64(longlong *param_1,longlong *param_2)

{
  __pthread_rwlock_timedwrlock(param_1,param_2);
  return;
}



void pthread_rwlock_timedwrlock32(longlong *param_1,int *param_2)

{
  longlong local_18;
  int local_10;
  
  local_18 = (longlong)*param_2;
  local_10 = param_2[1];
  __pthread_rwlock_timedwrlock(param_1,&local_18);
  return;
}



undefined8 pthread_rwlockattr_destroy(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x16;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_rwlockattr_init(undefined4 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0x16;
  }
  else {
    *param_1 = 0;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_rwlockattr_getpshared(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0x16;
  }
  else {
    *param_2 = *param_1;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_rwlockattr_setpshared(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (int *)0x0) || ((param_2 != 1 && (param_2 != 0)))) {
    uVar1 = 0x16;
  }
  else {
    *param_1 = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_spin_init(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  return 0;
}



undefined8 pthread_spin_destroy(void)

{
  return 0;
}



undefined8 pthread_spin_lock(longlong *param_1)

{
  longlong lVar1;
  
  do {
    LOCK();
    lVar1 = *param_1;
    *param_1 = 0;
    UNLOCK();
  } while (lVar1 == 0);
  return 0;
}



undefined8 pthread_spin_trylock(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  LOCK();
  lVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (lVar1 == 0) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 pthread_spin_unlock(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  return 0;
}



void pthread_cond_timedwait(longlong *param_1,longlong *param_2,longlong *param_3)

{
  pthread_cond_timedwait64(param_1,param_2,param_3);
  return;
}



void pthread_cond_timedwait_relative_np(longlong *param_1,longlong *param_2,longlong *param_3)

{
  pthread_cond_timedwait64_relative_np(param_1,param_2,param_3);
  return;
}



ulonglong dwMilliSecs(ulonglong param_1)

{
  if (0xfffffffe < param_1) {
    param_1 = 0xffffffff;
  }
  return param_1;
}



int cond_static_init(longlong *param_1)

{
  int local_c;
  
  pthread_spin_lock((longlong *)&cond_locked);
  if (param_1 == (longlong *)0x0) {
    local_c = 0x16;
  }
  else if (*param_1 == -1) {
    local_c = pthread_cond_init(param_1,(int *)0x0);
  }
  else {
    local_c = 0;
  }
  pthread_spin_unlock((undefined8 *)&cond_locked);
  return local_c;
}



undefined8 pthread_condattr_destroy(undefined4 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0x16;
  }
  else {
    *param_1 = 0;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_condattr_init(undefined4 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0x16;
  }
  else {
    *param_1 = 0;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_condattr_getpshared(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0x16;
  }
  else {
    *param_2 = *param_1;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_condattr_getclock(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0x16;
  }
  else {
    *param_2 = 0;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_condattr_setclock(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (param_2 != 0)) {
    uVar1 = 0x16;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_condattr_setpshared(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (int *)0x0) || ((param_2 != 1 && (param_2 != 0)))) {
    uVar1 = 0x16;
  }
  else if (param_2 == 1) {
    *param_1 = 0;
    uVar1 = 0x28;
  }
  else {
    *param_1 = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



int pthread_cond_init(undefined8 *param_1,int *param_2)

{
  undefined4 *_Memory;
  HANDLE pvVar1;
  int local_c;
  
  local_c = 0;
  if (param_1 == (undefined8 *)0x0) {
    local_c = 0x16;
  }
  else if ((param_2 == (int *)0x0) || (*param_2 != 1)) {
    _Memory = calloc(1,0xb0);
    if (_Memory == (undefined4 *)0x0) {
      local_c = 0xc;
    }
    else {
      *_Memory = 0xc0deadbf;
      _Memory[1] = 0;
      _Memory[2] = 0;
      _Memory[4] = 0;
      _Memory[3] = 0;
      pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
      *(HANDLE *)(_Memory + 0x28) = pvVar1;
      pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
      *(HANDLE *)(_Memory + 0x2a) = pvVar1;
      if ((*(longlong *)(_Memory + 0x28) == 0) || (*(longlong *)(_Memory + 0x2a) == 0)) {
        if (*(longlong *)(_Memory + 0x28) != 0) {
          CloseHandle(*(HANDLE *)(_Memory + 0x28));
        }
        if (*(longlong *)(_Memory + 0x2a) != 0) {
          CloseHandle(*(HANDLE *)(_Memory + 0x2a));
        }
        free(_Memory);
        local_c = 0xb;
      }
      else {
        InitializeCriticalSection((LPCRITICAL_SECTION)(_Memory + 6));
        InitializeCriticalSection((LPCRITICAL_SECTION)(_Memory + 0x1c));
        InitializeCriticalSection((LPCRITICAL_SECTION)(_Memory + 0x10));
        _Memory[0x1a] = 0;
        _Memory[0x26] = 1;
      }
      if (local_c == 0) {
        *_Memory = 0xc0bab1fd;
        *param_1 = _Memory;
      }
      else {
        *param_1 = 0;
      }
    }
  }
  else {
    local_c = 0x28;
  }
  return local_c;
}



int pthread_cond_destroy(longlong *param_1)

{
  undefined4 *_Memory;
  BOOL BVar1;
  undefined8 uVar2;
  int local_c;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    local_c = 0x16;
  }
  else if (*param_1 == -1) {
    pthread_spin_lock((longlong *)&cond_locked);
    if (*param_1 == -1) {
      *param_1 = 0;
      local_c = 0;
    }
    else {
      local_c = 0x10;
    }
    pthread_spin_unlock((undefined8 *)&cond_locked);
  }
  else {
    _Memory = (undefined4 *)*param_1;
    local_c = do_sema_b_wait(*(HANDLE *)(_Memory + 0x2a),0,0xffffffff,
                             (LPCRITICAL_SECTION)(_Memory + 0x1c),_Memory + 0x26);
    if (local_c == 0) {
      BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(_Memory + 6));
      if (BVar1 == 0) {
        do_sema_b_release(*(HANDLE *)(_Memory + 0x2a),1,(LPCRITICAL_SECTION)(_Memory + 0x1c),
                          _Memory + 0x26);
        local_c = 0x10;
      }
      else if ((int)_Memory[4] < (int)_Memory[2]) {
        uVar2 = do_sema_b_release(*(HANDLE *)(_Memory + 0x2a),1,(LPCRITICAL_SECTION)(_Memory + 0x1c)
                                  ,_Memory + 0x26);
        local_c = (int)uVar2;
        if (local_c == 0) {
          local_c = 0x10;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(_Memory + 6));
      }
      else {
        *param_1 = 0;
        do_sema_b_release(*(HANDLE *)(_Memory + 0x2a),1,(LPCRITICAL_SECTION)(_Memory + 0x1c),
                          _Memory + 0x26);
        CloseHandle(*(HANDLE *)(_Memory + 0x28));
        CloseHandle(*(HANDLE *)(_Memory + 0x2a));
        LeaveCriticalSection((LPCRITICAL_SECTION)(_Memory + 6));
        DeleteCriticalSection((LPCRITICAL_SECTION)(_Memory + 6));
        DeleteCriticalSection((LPCRITICAL_SECTION)(_Memory + 0x1c));
        DeleteCriticalSection((LPCRITICAL_SECTION)(_Memory + 0x10));
        *_Memory = 0xc0deadbf;
        free(_Memory);
        local_c = 0;
      }
    }
  }
  return local_c;
}



int pthread_cond_signal(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    iVar2 = 0x16;
  }
  else {
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0xffffffffffffffff) {
      iVar2 = 0;
    }
    else if (*piVar1 == -0x3f454e03) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 6));
      if (piVar1[3] == 0) {
        if (piVar1[2] <= piVar1[4]) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 6));
          return 0;
        }
        iVar2 = do_sema_b_wait(*(HANDLE *)(piVar1 + 0x2a),1,0xffffffff,
                               (LPCRITICAL_SECTION)(piVar1 + 0x1c),piVar1 + 0x26);
        if (iVar2 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 6));
          return iVar2;
        }
        if (piVar1[4] != 0) {
          piVar1[2] = piVar1[2] - piVar1[4];
          piVar1[4] = 0;
        }
        piVar1[2] = piVar1[2] + -1;
        piVar1[3] = 1;
      }
      else {
        if (piVar1[2] == 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 6));
          return 0;
        }
        piVar1[2] = piVar1[2] + -1;
        piVar1[3] = piVar1[3] + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 6));
      uVar3 = do_sema_b_release(*(HANDLE *)(piVar1 + 0x28),1,(LPCRITICAL_SECTION)(piVar1 + 0x10),
                                piVar1 + 0x1a);
      iVar2 = (int)uVar3;
    }
    else {
      iVar2 = 0x16;
    }
  }
  return iVar2;
}



int pthread_cond_broadcast(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int local_c;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    iVar2 = 0x16;
  }
  else {
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0xffffffffffffffff) {
      iVar2 = 0;
    }
    else if (*piVar1 == -0x3f454e03) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 6));
      if (piVar1[3] == 0) {
        if (piVar1[2] <= piVar1[4]) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 6));
          return 0;
        }
        iVar2 = do_sema_b_wait(*(HANDLE *)(piVar1 + 0x2a),1,0xffffffff,
                               (LPCRITICAL_SECTION)(piVar1 + 0x1c),piVar1 + 0x26);
        if (iVar2 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 6));
          return iVar2;
        }
        if (piVar1[4] != 0) {
          piVar1[2] = piVar1[2] - piVar1[4];
          piVar1[4] = 0;
        }
        local_c = piVar1[2];
        piVar1[2] = 0;
        piVar1[3] = local_c;
      }
      else {
        if (piVar1[2] == 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 6));
          return 0;
        }
        local_c = piVar1[2];
        piVar1[2] = 0;
        piVar1[3] = piVar1[3] + local_c;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 6));
      uVar3 = do_sema_b_release(*(HANDLE *)(piVar1 + 0x28),local_c,
                                (LPCRITICAL_SECTION)(piVar1 + 0x10),piVar1 + 0x1a);
      iVar2 = (int)uVar3;
    }
    else {
      iVar2 = 0x16;
    }
  }
  return iVar2;
}



int pthread_cond_wait(longlong *param_1,longlong *param_2)

{
  BOOL BVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *local_48;
  int **local_40;
  undefined8 local_38;
  int local_2c;
  int *local_28;
  longlong *local_20;
  int *local_18;
  int *local_10;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    local_2c = 0x16;
  }
  else {
    local_10 = (int *)*param_1;
    if (*param_1 == -1) {
      local_2c = cond_static_init(param_1);
      if ((local_2c != 0) && (local_2c != 0x10)) {
        return local_2c;
      }
      local_10 = (int *)*param_1;
    }
    else if (*local_10 != -0x3f454e03) {
      return 0x16;
    }
    while (local_2c = do_sema_b_wait(*(HANDLE *)(local_10 + 0x2a),0,0xffffffff,
                                     (LPCRITICAL_SECTION)(local_10 + 0x1c),local_10 + 0x26),
          local_2c == 0) {
      BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(local_10 + 6));
      if (BVar1 != 0) {
        local_10[2] = local_10[2] + 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_10 + 6));
        uVar2 = do_sema_b_release(*(HANDLE *)(local_10 + 0x2a),1,
                                  (LPCRITICAL_SECTION)(local_10 + 0x1c),local_10 + 0x26);
        local_2c = (int)uVar2;
        if (local_2c != 0) {
          return local_2c;
        }
        local_28 = local_10;
        local_18 = &local_2c;
        local_48 = cleanup_wait;
        local_40 = &local_28;
        local_20 = param_2;
        puVar3 = (undefined8 *)pthread_getclean();
        local_38 = *puVar3;
        LOCK();
        UNLOCK();
        plVar4 = (longlong *)pthread_getclean();
        *plVar4 = (longlong)&local_48;
        LOCK();
        UNLOCK();
        uVar2 = pthread_mutex_unlock(param_2);
        local_2c = (int)uVar2;
        if (local_2c == 0) {
          local_2c = do_sema_b_wait(*(HANDLE *)(local_10 + 0x28),0,0xffffffff,
                                    (LPCRITICAL_SECTION)(local_10 + 0x10),local_10 + 0x1a);
        }
        puVar3 = (undefined8 *)pthread_getclean();
        *puVar3 = local_38;
        (*local_48)(local_40);
        return local_2c;
      }
      uVar2 = do_sema_b_release(*(HANDLE *)(local_10 + 0x2a),1,(LPCRITICAL_SECTION)(local_10 + 0x1c)
                                ,local_10 + 0x26);
      local_2c = (int)uVar2;
      if (local_2c != 0) {
        return local_2c;
      }
      sched_yield();
    }
  }
  return local_2c;
}



int pthread_cond_timedwait_impl(longlong *param_1,longlong *param_2,longlong *param_3,int param_4)

{
  BOOL BVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *local_58;
  int **local_50;
  undefined8 local_48;
  int local_3c;
  int *local_38;
  longlong *local_30;
  int *local_28;
  int *local_18;
  uint local_c;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    local_3c = 0x16;
  }
  else {
    local_18 = (int *)*param_1;
    if (local_18 == (int *)0xffffffffffffffff) {
      local_3c = cond_static_init(param_1);
      if ((local_3c != 0) && (local_3c != 0x10)) {
        return local_3c;
      }
      local_18 = (int *)*param_1;
    }
    else if (*local_18 != -0x3f454e03) {
      return 0x16;
    }
    if (param_4 == 0) {
      uVar2 = _pthread_rel_time_in_ms(param_3);
      uVar2 = dwMilliSecs(uVar2);
      local_c = (uint)uVar2;
    }
    else {
      uVar2 = _pthread_time_in_ms_from_timespec(param_3);
      uVar2 = dwMilliSecs(uVar2);
      local_c = (uint)uVar2;
    }
    while (local_3c = do_sema_b_wait(*(HANDLE *)(local_18 + 0x2a),0,0xffffffff,
                                     (LPCRITICAL_SECTION)(local_18 + 0x1c),local_18 + 0x26),
          local_3c == 0) {
      BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(local_18 + 6));
      if (BVar1 != 0) {
        local_18[2] = local_18[2] + 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_18 + 6));
        uVar3 = do_sema_b_release(*(HANDLE *)(local_18 + 0x2a),1,
                                  (LPCRITICAL_SECTION)(local_18 + 0x1c),local_18 + 0x26);
        local_3c = (int)uVar3;
        if (local_3c != 0) {
          return local_3c;
        }
        local_38 = local_18;
        local_28 = &local_3c;
        local_58 = cleanup_wait;
        local_50 = &local_38;
        local_30 = param_2;
        puVar4 = (undefined8 *)pthread_getclean();
        local_48 = *puVar4;
        LOCK();
        UNLOCK();
        plVar5 = (longlong *)pthread_getclean();
        *plVar5 = (longlong)&local_58;
        LOCK();
        UNLOCK();
        uVar3 = pthread_mutex_unlock(param_2);
        local_3c = (int)uVar3;
        if (local_3c == 0) {
          local_3c = do_sema_b_wait(*(HANDLE *)(local_18 + 0x28),0,local_c,
                                    (LPCRITICAL_SECTION)(local_18 + 0x10),local_18 + 0x1a);
        }
        puVar4 = (undefined8 *)pthread_getclean();
        *puVar4 = local_48;
        (*local_58)(local_50);
        return local_3c;
      }
      uVar3 = do_sema_b_release(*(HANDLE *)(local_18 + 0x2a),1,(LPCRITICAL_SECTION)(local_18 + 0x1c)
                                ,local_18 + 0x26);
      local_3c = (int)uVar3;
      if (local_3c != 0) {
        return local_3c;
      }
      sched_yield();
    }
  }
  return local_3c;
}



void pthread_cond_timedwait64(longlong *param_1,longlong *param_2,longlong *param_3)

{
  pthread_cond_timedwait_impl(param_1,param_2,param_3,0);
  return;
}



void pthread_cond_timedwait32(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong local_18;
  int local_10;
  
  local_18 = (longlong)*param_3;
  local_10 = param_3[1];
  pthread_cond_timedwait_impl(param_1,param_2,&local_18,0);
  return;
}



void pthread_cond_timedwait64_relative_np(longlong *param_1,longlong *param_2,longlong *param_3)

{
  pthread_cond_timedwait_impl(param_1,param_2,param_3,1);
  return;
}



void pthread_cond_timedwait32_relative_np(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong local_18;
  int local_10;
  
  local_18 = (longlong)*param_3;
  local_10 = param_3[1];
  pthread_cond_timedwait_impl(param_1,param_2,&local_18,1);
  return;
}



void cleanup_wait(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  iVar3 = *(int *)(lVar1 + 0xc);
  if (iVar3 == 0) {
    if (*(int *)(lVar1 + 0x10) == 0x3ffffffe) {
      *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
      iVar2 = do_sema_b_wait(*(HANDLE *)(lVar1 + 0xa8),1,0xffffffff,
                             (LPCRITICAL_SECTION)(lVar1 + 0x70),(int *)(lVar1 + 0x98));
      if (iVar2 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
        *(int *)param_1[2] = iVar2;
        return;
      }
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x10);
      uVar4 = do_sema_b_release(*(HANDLE *)(lVar1 + 0xa8),1,(LPCRITICAL_SECTION)(lVar1 + 0x70),
                                (int *)(lVar1 + 0x98));
      if ((int)uVar4 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
        *(int *)param_1[2] = (int)uVar4;
        return;
      }
      *(undefined4 *)(lVar1 + 0x10) = 0;
    }
    else {
      *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    }
  }
  else {
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  if (iVar3 == 1) {
    uVar4 = do_sema_b_release(*(HANDLE *)(lVar1 + 0xa8),1,(LPCRITICAL_SECTION)(lVar1 + 0x70),
                              (int *)(lVar1 + 0x98));
    if ((int)uVar4 != 0) {
      *(int *)param_1[2] = (int)uVar4;
      return;
    }
  }
  iVar3 = pthread_mutex_lock((longlong *)param_1[1]);
  if (iVar3 != 0) {
    *(int *)param_1[2] = iVar3;
  }
  return;
}



int do_sema_b_wait(HANDLE param_1,int param_2,uint param_3,LPCRITICAL_SECTION param_4,int *param_5)

{
  int iVar1;
  
  EnterCriticalSection(param_4);
  LOCK();
  *param_5 = *param_5 + -1;
  UNLOCK();
  iVar1 = *param_5;
  LeaveCriticalSection(param_4);
  if (iVar1 < 0) {
    iVar1 = do_sema_b_wait_intern(param_1,param_2,param_3);
    EnterCriticalSection(param_4);
    if (iVar1 != 0) {
      LOCK();
      *param_5 = *param_5 + 1;
      UNLOCK();
    }
    LeaveCriticalSection(param_4);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int do_sema_b_wait_intern(HANDLE param_1,int param_2,uint param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  uint local_res18;
  HANDLE local_28;
  HANDLE local_20;
  DWORD local_18;
  uint local_14;
  int local_10;
  DWORD local_c;
  
  local_c = 1;
  local_10 = 0;
  if (param_2 != 1) {
    local_28 = param_1;
    local_20 = (HANDLE)pthread_getevent();
    if (local_20 != (HANDLE)0x0) {
      local_c = local_c + 1;
    }
    if (local_c != 2) {
      if (param_3 != 0xffffffff) {
        local_14 = 0x14;
        local_res18 = param_3;
        do {
          if (local_res18 < local_14) {
            local_14 = local_res18;
          }
          local_18 = _pthread_wait_for_single_object(param_1,local_14);
          if (local_18 == 0x102) {
            local_10 = 0x8a;
          }
          else if (local_18 < 0x103) {
            if (local_18 == 0) {
              local_10 = 0;
            }
            else {
              if (local_18 != 0x80) goto LAB_14001fdb5;
              local_10 = 1;
            }
          }
          else {
LAB_14001fdb5:
            local_10 = 0x16;
          }
          local_res18 = local_res18 - local_14;
          if (((local_res18 != 0) && (local_10 != 0)) &&
             (uVar2 = __pthread_shallcancel(), (int)uVar2 != 0)) {
            return 0x16;
          }
          if ((local_10 != 0x8a) || (local_res18 == 0)) {
            if ((local_10 != 0) &&
               ((local_10 == 0x8a && (DVar1 = WaitForSingleObject(param_1,0), DVar1 == 0)))) {
              local_10 = 0;
            }
            if (local_10 == 0) {
              return 0;
            }
            if (param_2 == 2) {
              return local_10;
            }
            pthread_testcancel();
            return local_10;
          }
        } while( true );
      }
      do {
        local_18 = _pthread_wait_for_single_object(param_1,0x28);
        if (local_18 == 0x102) {
          local_10 = 0x8a;
        }
        else if (local_18 < 0x103) {
          if (local_18 == 0) {
            local_10 = 0;
          }
          else {
            if (local_18 != 0x80) goto LAB_14001fce4;
            local_10 = 1;
          }
        }
        else {
LAB_14001fce4:
          local_10 = 0x16;
        }
        if ((local_10 != 0) && (uVar2 = __pthread_shallcancel(), (int)uVar2 != 0)) {
          if (param_2 != 2) {
            pthread_testcancel();
          }
          return 0x16;
        }
        if (local_10 != 0x8a) {
          if (local_10 == 0) {
            return 0;
          }
          if (local_10 == 0x16) {
            return 0x16;
          }
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 != 0) {
            return local_10;
          }
          return 0;
        }
      } while( true );
    }
    do {
      local_18 = _pthread_wait_for_multiple_objects(local_c,&local_28,0,param_3);
      if (local_18 == 0x102) {
        local_10 = 0x8a;
LAB_14001fc35:
        if (((local_10 != 0) && (local_10 != 0x16)) &&
           (DVar1 = WaitForSingleObject(local_28,0), DVar1 == 0)) {
          local_10 = 0;
        }
        if (local_10 == 0) {
          return 0;
        }
        if (param_2 == 2) {
          return local_10;
        }
        uVar2 = __pthread_shallcancel();
        if ((int)uVar2 == 0) {
          return local_10;
        }
        return 0x16;
      }
      if (0x102 < local_18) {
LAB_14001fc2e:
        local_10 = 0x16;
        goto LAB_14001fc35;
      }
      if (local_18 == 0x80) {
        local_10 = 1;
        goto LAB_14001fc35;
      }
      if (0x80 < local_18) goto LAB_14001fc2e;
      if (local_18 == 0) {
        local_10 = 0;
        goto LAB_14001fc35;
      }
      if (local_18 != 1) goto LAB_14001fc2e;
      ResetEvent(local_20);
      if (param_2 != 2) {
        pthread_testcancel();
        return 0x16;
      }
      pthread_testcancel();
    } while( true );
  }
  local_18 = _pthread_wait_for_single_object(param_1,param_3);
  if (local_18 == 0x102) {
    local_10 = 0x8a;
    goto LAB_14001fb38;
  }
  if (local_18 < 0x103) {
    if (local_18 == 0) goto LAB_14001fb38;
    if (local_18 == 0x80) {
      local_10 = 1;
      goto LAB_14001fb38;
    }
  }
  local_10 = 0x16;
LAB_14001fb38:
  if (((local_10 != 0) && (local_10 != 0x16)) &&
     (DVar1 = WaitForSingleObject(param_1,0), DVar1 == 0)) {
    local_10 = 0;
  }
  return local_10;
}



undefined8 do_sema_b_release(HANDLE param_1,int param_2,LPCRITICAL_SECTION param_3,int *param_4)

{
  LONG lReleaseCount;
  int iVar1;
  BOOL BVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_3);
  if ((longlong)param_2 + (longlong)*param_4 < 0x80000000) {
    iVar1 = -*param_4;
    LOCK();
    *param_4 = *param_4 + param_2;
    UNLOCK();
    if (0 < iVar1) {
      lReleaseCount = param_2;
      if (iVar1 < param_2) {
        lReleaseCount = iVar1;
      }
      BVar2 = ReleaseSemaphore(param_1,lReleaseCount,(LPLONG)0x0);
      if (BVar2 == 0) {
        LOCK();
        *param_4 = *param_4 - param_2;
        UNLOCK();
        LeaveCriticalSection(param_3);
        return 0x16;
      }
    }
    LeaveCriticalSection(param_3);
    uVar3 = 0;
  }
  else {
    LeaveCriticalSection(param_3);
    uVar3 = 0x22;
  }
  return uVar3;
}



undefined8 sched_get_priority_min(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((param_1 < 0) || (2 < param_1)) {
    piVar1 = _errno();
    *piVar1 = 0x16;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xfffffff1;
  }
  return uVar2;
}



undefined8 sched_get_priority_max(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((param_1 < 0) || (2 < param_1)) {
    piVar1 = _errno();
    *piVar1 = 0x16;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xf;
  }
  return uVar2;
}



undefined4 pthread_attr_setschedparam(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0x16;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *param_2;
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 pthread_attr_getschedparam(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0x16;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_attr_setschedpolicy(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) || (param_2 < 0)) || (2 < param_2)) {
    uVar1 = 0x16;
  }
  else if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x81;
  }
  return uVar1;
}



undefined8 pthread_attr_getschedpolicy(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0x16;
  }
  else {
    *param_2 = 0;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 pthread_check(ulonglong param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined8 uVar3;
  undefined4 local_14;
  longlong local_10;
  
  if (param_1 == 0) {
    return 3;
  }
  local_10 = __pth_gpointer_locked(param_1);
  if (*(int *)(local_10 + 0xbc) == 0) {
    return 0;
  }
  if (local_10 == 0) {
    return 3;
  }
  if ((*(longlong *)(local_10 + 0x28) == 0) || (*(longlong *)(local_10 + 0x28) == -1)) {
LAB_140020154:
    uVar3 = 3;
  }
  else {
    if (_pthread_get_handle_information != (code *)0x0) {
      local_14 = 0;
      iVar1 = (*_pthread_get_handle_information)(*(undefined8 *)(local_10 + 0x28),&local_14);
      if ((iVar1 == 0) && (DVar2 = GetLastError(), DVar2 != 0x78)) goto LAB_140020154;
    }
    uVar3 = 0;
  }
  return uVar3;
}



ulonglong pthread_getschedparam(ulonglong param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = pthread_check(param_1);
  if ((int)uVar1 == 0) {
    if ((param_3 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
      uVar1 = 0x16;
    }
    else {
      lVar2 = __pth_gpointer_locked(param_1);
      *param_2 = *(undefined4 *)(lVar2 + 0xb8);
      lVar2 = __pth_gpointer_locked(param_1);
      *param_3 = *(undefined4 *)(lVar2 + 0xc0);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



ulonglong pthread_setschedparam(ulonglong param_1,int param_2,int *param_3)

{
  BOOL BVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_10;
  uint local_c;
  
  uVar2 = pthread_check(param_1);
  if ((int)uVar2 == 0) {
    if (((param_2 < 0) || (2 < param_2)) || (param_3 == (int *)0x0)) {
      uVar2 = 0x16;
    }
    else if (param_2 == 0) {
      local_10 = *param_3;
      uVar3 = sched_get_priority_min(0);
      if (((int)uVar3 <= local_10) && (uVar3 = sched_get_priority_max(0), local_10 <= (int)uVar3)) {
        if (local_10 < -0xe) {
          local_10 = -0xf;
        }
        else if (local_10 < -1) {
          local_10 = -2;
        }
        else if (local_10 < 0xf) {
          if (1 < local_10) {
            local_10 = 2;
          }
        }
        else {
          local_10 = 0xf;
        }
        lVar4 = __pth_gpointer_locked(param_1);
        BVar1 = SetThreadPriority(*(HANDLE *)(lVar4 + 0x28),local_10);
        if (BVar1 == 0) {
          local_c = 0x16;
        }
        else {
          *(undefined4 *)(lVar4 + 0xb8) = 0;
          *(int *)(lVar4 + 0xc0) = *param_3;
          local_c = 0;
        }
        return (ulonglong)local_c;
      }
      uVar2 = 0x16;
    }
    else {
      uVar2 = 0x81;
    }
  }
  else {
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



undefined8 sched_getscheduler(longlong param_1)

{
  DWORD DVar1;
  int *piVar2;
  int iVar3;
  HANDLE local_20;
  
  if (param_1 != 0) {
    local_20 = (HANDLE)0x0;
    DVar1 = GetCurrentProcessId();
    if ((param_1 != (int)DVar1) &&
       (local_20 = OpenProcess(0x400,0,(DWORD)param_1), local_20 == (HANDLE)0x0)) {
      DVar1 = GetLastError();
      if (DVar1 == 5) {
        iVar3 = 1;
      }
      else {
        iVar3 = 3;
      }
      piVar2 = _errno();
      *piVar2 = iVar3;
      return 0xffffffff;
    }
    if (local_20 != (HANDLE)0x0) {
      CloseHandle(local_20);
    }
  }
  return 0;
}



undefined8 sched_setscheduler(longlong param_1,int param_2,longlong param_3)

{
  DWORD DVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  HANDLE local_20;
  
  if (param_3 == 0) {
    piVar2 = _errno();
    *piVar2 = 0x16;
    uVar3 = 0xffffffff;
  }
  else {
    if (param_1 != 0) {
      local_20 = (HANDLE)0x0;
      DVar1 = GetCurrentProcessId();
      if ((param_1 != (int)DVar1) &&
         (local_20 = OpenProcess(0x200,0,(DWORD)param_1), local_20 == (HANDLE)0x0)) {
        DVar1 = GetLastError();
        if (DVar1 == 5) {
          iVar4 = 1;
        }
        else {
          iVar4 = 3;
        }
        piVar2 = _errno();
        *piVar2 = iVar4;
        return 0xffffffff;
      }
      if (local_20 != (HANDLE)0x0) {
        CloseHandle(local_20);
      }
    }
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      piVar2 = _errno();
      *piVar2 = 0x28;
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



undefined8 sched_yield(void)

{
  Sleep(0);
  return 0;
}



BOOL __stdcall SetCursorPos(int X,int Y)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400204d0. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = SetCursorPos(X,Y);
  return BVar1;
}



int __stdcall ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400204d8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}



int __stdcall MessageBoxW(HWND hWnd,LPCWSTR lpText,LPCWSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400204e0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = MessageBoxW(hWnd,lpText,lpCaption,uType);
  return iVar1;
}



HICON __stdcall LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400204e8. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = LoadIconA(hInstance,lpIconName);
  return pHVar1;
}



int __stdcall GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400204f0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}



HDC __stdcall GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400204f8. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}



BOOL __stdcall DrawIcon(HDC hDC,int X,int Y,HICON hIcon)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020500. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = DrawIcon(hDC,X,Y,hIcon);
  return BVar1;
}



DWORD __stdcall WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020510. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}



DWORD __stdcall
WaitForMultipleObjects(DWORD nCount,HANDLE *lpHandles,BOOL bWaitAll,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020518. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = WaitForMultipleObjects(nCount,lpHandles,bWaitAll,dwMilliseconds);
  return DVar1;
}



BOOL __stdcall TryEnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020520. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  return BVar1;
}



BOOL __stdcall TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020528. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}



DWORD __stdcall TlsAlloc(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020530. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = TlsAlloc();
  return DVar1;
}



DWORD __stdcall SuspendThread(HANDLE hThread)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020538. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = SuspendThread(hThread);
  return DVar1;
}



BOOL __stdcall SetThreadPriority(HANDLE hThread,int nPriority)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020540. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = SetThreadPriority(hThread,nPriority);
  return BVar1;
}



BOOL __stdcall SetThreadContext(HANDLE hThread,CONTEXT *lpContext)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020548. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = SetThreadContext(hThread,lpContext);
  return BVar1;
}



BOOL __stdcall SetProcessAffinityMask(HANDLE hProcess,DWORD_PTR dwProcessAffinityMask)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020550. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = SetProcessAffinityMask(hProcess,dwProcessAffinityMask);
  return BVar1;
}



void __stdcall SetLastError(DWORD dwErrCode)

{
                    // WARNING: Could not recover jumptable at 0x000140020558. Too many branches
                    // WARNING: Treating indirect jump as call
  SetLastError(dwErrCode);
  return;
}



BOOL __stdcall SetEvent(HANDLE hEvent)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020560. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = SetEvent(hEvent);
  return BVar1;
}



DWORD __stdcall ResumeThread(HANDLE hThread)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020568. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = ResumeThread(hThread);
  return DVar1;
}



BOOL __stdcall ResetEvent(HANDLE hEvent)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020570. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = ResetEvent(hEvent);
  return BVar1;
}



BOOL __stdcall ReleaseSemaphore(HANDLE hSemaphore,LONG lReleaseCount,LPLONG lpPreviousCount)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020578. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = ReleaseSemaphore(hSemaphore,lReleaseCount,lpPreviousCount);
  return BVar1;
}



BOOL __stdcall QueryPerformanceFrequency(LARGE_INTEGER *lpFrequency)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020580. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = QueryPerformanceFrequency(lpFrequency);
  return BVar1;
}



BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020588. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = QueryPerformanceCounter(lpPerformanceCount);
  return BVar1;
}



void __stdcall OutputDebugStringA(LPCSTR lpOutputString)

{
                    // WARNING: Could not recover jumptable at 0x000140020590. Too many branches
                    // WARNING: Treating indirect jump as call
  OutputDebugStringA(lpOutputString);
  return;
}



HANDLE __stdcall OpenProcess(DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwProcessId)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020598. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = OpenProcess(dwDesiredAccess,bInheritHandle,dwProcessId);
  return pvVar1;
}



DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400205a0. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetTickCount();
  return DVar1;
}



int __stdcall GetThreadPriority(HANDLE hThread)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400205a8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = GetThreadPriority(hThread);
  return iVar1;
}



BOOL __stdcall GetThreadContext(HANDLE hThread,LPCONTEXT lpContext)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400205b0. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = GetThreadContext(hThread,lpContext);
  return BVar1;
}



void __stdcall GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime)

{
                    // WARNING: Could not recover jumptable at 0x0001400205b8. Too many branches
                    // WARNING: Treating indirect jump as call
  GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
  return;
}



BOOL __stdcall
GetProcessAffinityMask
          (HANDLE hProcess,PDWORD_PTR lpProcessAffinityMask,PDWORD_PTR lpSystemAffinityMask)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400205c0. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = GetProcessAffinityMask(hProcess,lpProcessAffinityMask,lpSystemAffinityMask);
  return BVar1;
}



DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400205c8. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



HANDLE __stdcall GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400205d0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = GetCurrentThread();
  return pvVar1;
}



DWORD __stdcall GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400205d8. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetCurrentProcessId();
  return DVar1;
}



HANDLE __stdcall GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400205e0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}



BOOL __stdcall
DuplicateHandle(HANDLE hSourceProcessHandle,HANDLE hSourceHandle,HANDLE hTargetProcessHandle,
               LPHANDLE lpTargetHandle,DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwOptions)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400205e8. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          dwDesiredAccess,bInheritHandle,dwOptions);
  return BVar1;
}



HANDLE __stdcall
CreateSemaphoreA(LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,LONG lInitialCount,LONG lMaximumCount,
                LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400205f0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = CreateSemaphoreA(lpSemaphoreAttributes,lInitialCount,lMaximumCount,lpName);
  return pvVar1;
}



HANDLE __stdcall
CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes,BOOL bManualReset,BOOL bInitialState,
            LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400205f8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = CreateEventA(lpEventAttributes,bManualReset,bInitialState,lpName);
  return pvVar1;
}



BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020600. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = CloseHandle(hObject);
  return BVar1;
}



int _assert(char *param_1,size_t param_2,uint param_3)

{
  int iVar1;
  FILE *_File;
  char *_Format;
  code *_Args;
  
  _File = __acrt_iob_func(2);
  fflush(_File);
  iVar1 = fileno(_File);
  _setmode(iVar1,0x4000);
  _Format = (char *)(ulonglong)param_3;
  _Args = _assert_exref;
  _assert();
  if (param_2 == 0) {
    iVar1 = _vscprintf(_Format,(va_list)_Args);
  }
  else {
    iVar1 = _vsnprintf(param_1,param_2,_Format,(va_list)_Args);
    if ((iVar1 < 0) || (param_2 == (longlong)iVar1)) {
      param_1[param_2 - 1] = '\0';
    }
    if (iVar1 < 0) {
      iVar1 = _vscprintf(_Format,(va_list)_Args);
    }
  }
  return iVar1;
}



int __ms_vsnprintf(char *param_1,size_t param_2,char *param_3,va_list param_4)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = _vscprintf(param_3,param_4);
  }
  else {
    iVar1 = _vsnprintf(param_1,param_2,param_3,param_4);
    if ((iVar1 < 0) || (param_2 == (longlong)iVar1)) {
      param_1[param_2 - 1] = '\0';
    }
    if (iVar1 < 0) {
      iVar1 = _vscprintf(param_3,param_4);
    }
  }
  return iVar1;
}



float10 * __cosl_internal(float10 *param_1,undefined1 (*param_2) [10])

{
  ushort in_FPUStatusWord;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos(*param_2);
  if ((in_FPUStatusWord & 0x400) != 0) {
    fVar2 = (float10)3.141592653589793 + (float10)3.141592653589793;
    do {
      fVar1 = fVar1 - ROUND(fVar1 / fVar2) * fVar2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fVar1 = (float10)fcos(fVar1);
  }
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *param_1 = fVar1;
  return param_1;
}



float10 * __sinl_internal(float10 *param_1,undefined1 (*param_2) [10])

{
  ushort in_FPUStatusWord;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fsin(*param_2);
  if ((in_FPUStatusWord & 0x400) == 0) {
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *param_1 = fVar1;
    return param_1;
  }
  fVar2 = (float10)3.141592653589793 + (float10)3.141592653589793;
  do {
    fVar1 = fVar1 - ROUND(fVar1 / fVar2) * fVar2;
  } while ((in_FPUStatusWord & 0x400) != 0);
  fVar1 = (float10)fsin(fVar1);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *param_1 = fVar1;
  return param_1;
}



size_t __cdecl mbsrtowcs(wchar_t *_Dest,char **_PSrc,size_t _Count,mbstate_t *_State)

{
  wchar_t *local_res8;
  uint *local_res20;
  WCHAR local_2e;
  uint local_2c;
  ulonglong local_28;
  int local_20;
  UINT local_1c;
  byte *local_18;
  size_t local_10;
  
  local_res20 = (uint *)_State;
  if (_State == (mbstate_t *)0x0) {
    local_res20 = &state_mbsrtowcs_0;
  }
  local_2c = *local_res20;
  local_10 = 0;
  local_2e = L'\0';
  local_18 = (byte *)*_PSrc;
  local_1c = ___lc_codepage_func();
  local_20 = ___mb_cur_max_func();
  local_res8 = _Dest;
  while( true ) {
    local_28 = __mingw_mbrtowc_cp(&local_2e,local_18,(longlong)local_20,&local_2c,local_1c,local_20)
    ;
    if (local_28 == 0xffffffffffffffff) {
      if (local_res8 != (wchar_t *)0x0) {
        *_PSrc = (char *)local_18;
        *local_res20 = local_2c;
      }
      return 0xffffffffffffffff;
    }
    if ((local_res8 != (wchar_t *)0x0) && (_Count == 0)) {
      return 0;
    }
    if (local_28 == 0) break;
    if (local_res8 != (wchar_t *)0x0) {
      *local_res8 = local_2e;
      local_res8 = local_res8 + 1;
    }
    local_10 = local_10 + 1;
    local_18 = local_18 + local_28;
    if ((local_res8 != (wchar_t *)0x0) && (local_10 == _Count)) {
      *_PSrc = (char *)local_18;
LAB_1400208cd:
      if (local_res8 == (wchar_t *)0x0) {
        return local_10;
      }
      *local_res20 = local_2c;
      return local_10;
    }
  }
  if (local_res8 != (wchar_t *)0x0) {
    *local_res8 = L'\0';
    *_PSrc = (char *)0x0;
  }
  goto LAB_1400208cd;
}



uintptr_t __cdecl
_beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
              uint _InitFlag,uint *_ThrdAddr)

{
  uintptr_t uVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400208f0. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = _beginthreadex(_Security,_StackSize,_StartAddress,_ArgList,_InitFlag,_ThrdAddr);
  return uVar1;
}



void __cdecl _endthreadex(uint _Retval)

{
                    // WARNING: Could not recover jumptable at 0x0001400208f8. Too many branches
                    // WARNING: Treating indirect jump as call
  _endthreadex(_Retval);
  return;
}



int __cdecl fileno(FILE *_File)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020900. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _fileno(_File);
  return iVar1;
}



int __cdecl _setjmp(_JBTYPE *_Buf)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020908. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _setjmp(_Buf);
  return iVar1;
}



int __cdecl _setmode(int _FileHandle,int _Mode)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020910. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _setmode(_FileHandle,_Mode);
  return iVar1;
}



char * __cdecl strdup(char *_Src)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020918. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = _strdup(_Src);
  return pcVar1;
}



int __cdecl _vscprintf(char *_Format,va_list _ArgList)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020920. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _vscprintf(_Format,_ArgList);
  return iVar1;
}



int __cdecl _vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020928. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _vsnprintf(_Dest,_Count,_Format,_Args);
  return iVar1;
}



void __cdecl longjmp(_JBTYPE *_Buf,int _Value)

{
                    // WARNING: Could not recover jumptable at 0x000140020930. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  longjmp(_Buf,_Value);
  return;
}



void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140020938. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



// ~bad_exception() const

void __thiscall std::bad_exception::~bad_exception(void)

{
  return;
}



// ~exception() const

void __thiscall std::exception::~exception(void)

{
  return;
}



// get_adjusted_ptr(std::type_info const*, std::type_info const*, void**)

void get_adjusted_ptr(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *local_20;
  
  local_20 = (undefined8 *)*param_3;
  cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (cVar1 != '\0') {
    local_20 = (undefined8 *)*local_20;
  }
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_20,1);
  if (cVar1 != '\0') {
    *param_3 = local_20;
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// parse_lsda_header(_Unwind_Context*, unsigned char const*, lsda_header_info*)

byte * parse_lsda_header(_Unwind_Context *param_1,byte *param_2,_Unwind_Ptr *param_3)

{
  byte bVar1;
  byte bVar2;
  _Unwind_Ptr _Var3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  
  _Var3 = 0;
  if (param_1 != (_Unwind_Context *)0x0) {
    _Var3 = _Unwind_GetRegionStart(param_1);
  }
  *param_3 = _Var3;
  puVar5 = (ulonglong *)(param_2 + 1);
  bVar6 = *param_2;
  if (bVar6 == 0xff) {
    param_3[1] = _Var3;
  }
  else {
    puVar4 = (ulonglong *)base_of_encoded_value(bVar6,param_1);
    puVar5 = read_encoded_value_with_base(bVar6,puVar4,puVar5,param_3 + 1);
  }
  uVar9 = *puVar5;
  pbVar8 = (byte *)((longlong)puVar5 + 1);
  pbVar7 = (byte *)0x0;
  *(char *)(param_3 + 5) = (char)uVar9;
  if ((char)uVar9 != -1) {
    bVar6 = 0;
    do {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      bVar2 = bVar6 & 0x3f;
      bVar6 = bVar6 + 7;
      pbVar7 = (byte *)((ulonglong)pbVar7 | (ulonglong)(bVar1 & 0x7f) << bVar2);
    } while ((char)bVar1 < '\0');
    pbVar7 = pbVar7 + (longlong)pbVar8;
  }
  param_3[3] = (_Unwind_Ptr)pbVar7;
  pbVar7 = pbVar8 + 1;
  uVar9 = 0;
  bVar6 = 0;
  *(byte *)((longlong)param_3 + 0x29) = *pbVar8;
  do {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    bVar2 = bVar6 & 0x3f;
    bVar6 = bVar6 + 7;
    uVar9 = uVar9 | (ulonglong)(bVar1 & 0x7f) << bVar2;
  } while ((char)bVar1 < '\0');
  param_3[4] = (_Unwind_Ptr)(pbVar7 + uVar9);
  return pbVar7;
}



// check_exception_spec(lsda_header_info*, std::type_info const*, void*, long long)

undefined8
check_exception_spec(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  byte *pbVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 local_res18 [2];
  longlong *local_20;
  
  pbVar5 = (byte *)(~param_4 + *(longlong *)(param_1 + 0x18));
  local_res18[0] = param_3;
  do {
    uVar7 = 0;
    bVar4 = 0;
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar1 = bVar4 & 0x3f;
      bVar4 = bVar4 + 7;
      uVar7 = uVar7 | (ulonglong)(bVar2 & 0x7f) << bVar1;
    } while ((char)bVar2 < '\0');
    if (uVar7 == 0) {
      return 0;
    }
    bVar4 = *(byte *)(param_1 + 0x28);
    if (bVar4 == 0xff) {
      lVar6 = 0;
    }
    else {
      bVar2 = bVar4 & 7;
      if (bVar2 == 2) {
        lVar6 = uVar7 * -2;
      }
      else {
        if (bVar2 < 3) {
          if (bVar2 != 0) {
            uVar3 = check_exception_spec();
            return uVar3;
          }
        }
        else {
          lVar6 = uVar7 * -4;
          if (bVar2 == 3) goto LAB_140020b66;
          if (bVar2 != 4) {
                    // WARNING: Subroutine does not return
            abort();
          }
        }
        lVar6 = uVar7 * -8;
      }
    }
LAB_140020b66:
    read_encoded_value_with_base
              (bVar4,*(ulonglong **)(param_1 + 0x10),
               (ulonglong *)(lVar6 + *(longlong *)(param_1 + 0x18)),&local_20);
    uVar3 = get_adjusted_ptr(local_20,param_2,local_res18);
    if ((char)uVar3 != '\0') {
      return uVar3;
    }
  } while( true );
}



// base_of_encoded_value(unsigned char, _Unwind_Context*)

_Unwind_Ptr base_of_encoded_value(byte param_1,_Unwind_Context *param_2)

{
  _Unwind_Ptr _Var1;
  byte bVar2;
  
  if (param_1 != 0xff) {
    bVar2 = param_1 & 0x70;
    if (bVar2 == 0x30) {
      _Var1 = _Unwind_GetDataRelBase(param_2);
      return _Var1;
    }
    if (bVar2 < 0x31) {
      if (bVar2 == 0x20) {
        _Var1 = _Unwind_GetTextRelBase(param_2);
        return _Var1;
      }
    }
    else {
      if (bVar2 == 0x40) {
        _Var1 = _Unwind_GetRegionStart(param_2);
        return _Var1;
      }
      if (bVar2 != 0x50) {
        _Var1 = base_of_encoded_value();
        return _Var1;
      }
    }
  }
  return 0;
}



// __gxx_exception_cleanup(_Unwind_Reason_Code, _Unwind_Exception*)

void __gxx_exception_cleanup(uint param_1,longlong param_2)

{
  int *piVar1;
  
  if (1 < param_1) {
                    // WARNING: Subroutine does not return
    __cxxabiv1::__terminate(*(undefined **)(param_2 + -0x38));
  }
  LOCK();
  piVar1 = (int *)(param_2 + -0x60);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    if (*(code **)(param_2 + -0x48) != (code *)0x0) {
      (**(code **)(param_2 + -0x48))();
    }
    __cxa_free_exception(param_2 + 0x40);
    return;
  }
  return;
}



// read_encoded_value_with_base(unsigned char, unsigned long long, unsigned char const*, unsigned
// long long*)

ulonglong *
read_encoded_value_with_base(byte param_1,ulonglong *param_2,ulonglong *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 == 0x50) {
    puVar2 = (undefined8 *)((longlong)param_3 + 7U & 0xfffffffffffffff8);
    *param_4 = *puVar2;
    return puVar2 + 1;
  }
  puVar3 = param_3;
  switch(param_1 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    uVar4 = *param_3;
    puVar3 = param_3 + 1;
    break;
  case 1:
    uVar4 = 0;
    bVar5 = 0;
    do {
      uVar1 = *puVar3;
      puVar3 = (ulonglong *)((longlong)puVar3 + 1);
      uVar4 = uVar4 | (ulonglong)((byte)uVar1 & 0x7f) << (bVar5 & 0x3f);
      bVar5 = bVar5 + 7;
    } while ((char)(byte)uVar1 < '\0');
    break;
  case 2:
    uVar4 = (ulonglong)(ushort)*param_3;
    puVar3 = (ulonglong *)((longlong)param_3 + 2);
    break;
  case 3:
    uVar4 = (ulonglong)(uint)*param_3;
    puVar3 = (ulonglong *)((longlong)param_3 + 4);
    break;
  default:
                    // WARNING: Subroutine does not return
    abort();
  case 9:
    uVar4 = 0;
    uVar6 = 0;
    do {
      bVar5 = (byte)*puVar3;
      puVar3 = (ulonglong *)((longlong)puVar3 + 1);
      uVar7 = uVar6 + 7;
      uVar4 = uVar4 | (ulonglong)(bVar5 & 0x7f) << ((byte)uVar6 & 0x3f);
      uVar6 = uVar7;
    } while ((char)bVar5 < '\0');
    if ((0x3f < uVar7) || ((bVar5 & 0x40) == 0)) break;
    uVar4 = uVar4 | -1L << ((byte)uVar7 & 0x3f);
    goto LAB_140020d04;
  case 10:
    uVar4 = (ulonglong)(short)*param_3;
    puVar3 = (ulonglong *)((longlong)param_3 + 2);
    break;
  case 0xb:
    uVar4 = (ulonglong)(int)*param_3;
    puVar3 = (ulonglong *)((longlong)param_3 + 4);
  }
  puVar2 = (undefined8 *)0x0;
  if (uVar4 != 0) {
LAB_140020d04:
    if ((param_1 & 0x70) == 0x10) {
      param_2 = param_3;
    }
    puVar2 = (undefined8 *)(uVar4 + (longlong)param_2);
    if ((char)param_1 < '\0') {
      *param_4 = *puVar2;
      return puVar3;
    }
  }
  *param_4 = puVar2;
  return puVar3;
}



// __cxxabiv1::__terminate(void (*)())

void __cxxabiv1::__terminate(undefined *param_1)

{
  (*(code *)param_1)();
  __terminate();
  return;
}



// __cxxabiv1::__unexpected(void (*)())

void __cxxabiv1::__unexpected(undefined *param_1)

{
  (*(code *)param_1)();
                    // WARNING: Subroutine does not return
  std::terminate();
}



// __cxxabiv1::__forced_unwind::~__forced_unwind()

void __thiscall __cxxabiv1::__forced_unwind::~__forced_unwind(__forced_unwind *this)

{
  operator_delete(this);
  return;
}



// __cxxabiv1::__forced_unwind::~__forced_unwind()

void __thiscall __cxxabiv1::__forced_unwind::~__forced_unwind(void)

{
  return;
}



// __cxxabiv1::__class_type_info::~__class_type_info()

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  *(undefined ***)this = &PTR____class_type_info_1400269b0;
  std::type_info::~type_info();
  operator_delete(this);
  return;
}



// __cxxabiv1::__class_type_info::~__class_type_info()

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  *(undefined ***)this = &PTR____class_type_info_1400269b0;
  std::type_info::~type_info();
  return;
}



// __cxxabiv1::__foreign_exception::~__foreign_exception()

void __thiscall __cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  operator_delete(this);
  return;
}



// __cxxabiv1::__foreign_exception::~__foreign_exception()

void __thiscall __cxxabiv1::__foreign_exception::~__foreign_exception(void)

{
  return;
}



// __cxxabiv1::__si_class_type_info::~__si_class_type_info()

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  *(undefined ***)this = &PTR____si_class_type_info_140026a40;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  operator_delete(this);
  return;
}



// __cxxabiv1::__si_class_type_info::~__si_class_type_info()

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  *(undefined ***)this = &PTR____si_class_type_info_140026a40;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return;
}



// __cxxabiv1::__gxx_personality_imp(int, int, unsigned long long, _Unwind_Exception*,
// _Unwind_Context*)

undefined8
__cxxabiv1::__gxx_personality_imp
          (int param_1,uint param_2,longlong param_3,byte *param_4,_Unwind_Context *param_5)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  _Unwind_Ptr _Var8;
  longlong *plVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulonglong uVar17;
  ulonglong in_R10;
  _Unwind_Word val;
  undefined **ppuVar18;
  ulonglong *unaff_R12;
  ulonglong uVar19;
  longlong *unaff_R13;
  _Unwind_Ptr _Var20;
  ulonglong uVar21;
  bool bVar22;
  ulonglong *unaff_XMM6_Qa;
  ulonglong *unaff_XMM6_Qb;
  byte local_f8;
  byte *local_f0;
  byte local_e4;
  ulonglong *local_e0;
  byte local_be;
  int local_ac;
  byte *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  ulonglong *local_78;
  ulonglong *local_70;
  ulonglong *puStack_68;
  byte local_60;
  byte local_5f;
  
  local_a8 = (byte *)0x0;
  local_ac = 0;
  if (param_1 != 1) {
    return 3;
  }
  uVar4 = param_3 + 0xb8b1aabcbcd4d500;
  bVar2 = param_2 == 6 && uVar4 < 2;
  if (bVar2) {
    _Var20 = *(_Unwind_Ptr *)(param_4 + -0x10);
    unaff_R13 = (longlong *)0x0;
    if (_Var20 != 0) {
      local_f0 = *(byte **)(param_4 + -0x18);
      uVar19 = (ulonglong)*(uint *)(param_4 + -0x24);
LAB_140020fe1:
      val = (_Unwind_Word)(int)uVar19;
      if ((int)uVar19 < 0) {
        local_60 = local_be;
        parse_lsda_header(param_5,local_f0,(_Unwind_Ptr *)&local_88);
        bVar10 = local_60;
        base_of_encoded_value(local_60,param_5);
        _Var8 = base_of_encoded_value(bVar10,param_5);
        *(_Unwind_Ptr *)(param_4 + -0x10) = _Var8;
      }
      goto LAB_140020ff0;
    }
LAB_140021233:
    __cxa_call_terminate((longlong *)param_4);
  }
  else {
    local_f0 = _Unwind_GetLanguageSpecificData(param_5);
    if (local_f0 == (byte *)0x0) {
      return 8;
    }
    local_70 = (ulonglong *)0x0;
    puStack_68 = (ulonglong *)0x0;
    local_60 = 0;
    puVar5 = (ulonglong *)parse_lsda_header(param_5,local_f0,(_Unwind_Ptr *)&local_88);
    local_e4 = local_60;
    unaff_R12 = puStack_68;
    unaff_XMM6_Qa = local_70;
    local_be = local_60;
    local_e0 = (ulonglong *)base_of_encoded_value(local_60,param_5);
    local_78 = local_e0;
    _Var20 = _Unwind_GetIPInfo(param_5,&local_ac);
    uVar19 = _Var20 - (local_ac == 0);
    do {
      unaff_XMM6_Qb = unaff_R12;
      if (unaff_R12 <= puVar5) {
LAB_1400211c8:
        if ((param_2 & 1) != 0) {
          pbVar16 = (byte *)0x0;
          _Var20 = 0;
          uVar19 = 0;
          goto LAB_1400211d6;
        }
        if (((param_2 & 8) != 0) || (param_2 = 0, 1 < uVar4)) {
                    // WARNING: Subroutine does not return
          std::terminate();
        }
        goto LAB_140021233;
      }
      puVar6 = (ulonglong *)base_of_encoded_value(local_5f,(_Unwind_Context *)0x0);
      puVar5 = read_encoded_value_with_base(local_5f,puVar6,puVar5,&local_a0);
      puVar6 = (ulonglong *)base_of_encoded_value(local_5f,(_Unwind_Context *)0x0);
      puVar5 = read_encoded_value_with_base(local_5f,puVar6,puVar5,&local_98);
      puVar6 = (ulonglong *)base_of_encoded_value(local_5f,(_Unwind_Context *)0x0);
      puVar5 = read_encoded_value_with_base(local_5f,puVar6,puVar5,&local_90);
      in_R10 = 0;
      bVar10 = 0;
      do {
        uVar21 = *puVar5;
        puVar5 = (ulonglong *)((longlong)puVar5 + 1);
        bVar11 = bVar10 & 0x3f;
        bVar10 = bVar10 + 7;
        in_R10 = in_R10 | (ulonglong)((byte)uVar21 & 0x7f) << bVar11;
      } while ((char)(byte)uVar21 < '\0');
      unaff_R13 = local_88;
      if (uVar19 < (ulonglong)(local_a0 + (longlong)local_88)) goto LAB_1400211c8;
    } while ((ulonglong)(local_a0 + (longlong)local_88 + local_98) <= uVar19);
    unaff_R13 = local_90;
    if (local_90 == (longlong *)0x0) {
      return 8;
    }
  }
  _Var20 = (longlong)unaff_R13 + local_80;
  if (in_R10 != 0) {
    if (_Var20 == 0) {
      return 8;
    }
    pbVar16 = (byte *)((longlong)unaff_R12 + (in_R10 - 1));
    uVar14 = param_2 & 8;
    if (uVar14 == 0) {
      if (uVar4 < 2) {
        local_a8 = param_4 + 0x40;
        if ((*param_4 & 1) != 0) {
          local_a8 = *(byte **)(param_4 + -0x50);
        }
        ppuVar18 = *(undefined ***)(local_a8 + -0x90);
        bVar22 = ppuVar18 != (undefined **)0x0;
      }
      else {
        bVar22 = true;
        ppuVar18 = &__foreign_exception::typeinfo;
      }
    }
    else {
      bVar22 = true;
      ppuVar18 = &__forced_unwind::typeinfo;
    }
    local_f8 = local_be & 7;
    do {
      uVar19 = 0;
      uVar12 = 0;
      pbVar15 = pbVar16;
      do {
        bVar10 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        bVar11 = (byte)uVar12;
        uVar12 = uVar12 + 7;
        uVar19 = uVar19 | (ulonglong)(bVar10 & 0x7f) << (bVar11 & 0x3f);
      } while ((char)bVar10 < '\0');
      if ((uVar12 < 0x40) && ((bVar10 & 0x40) != 0)) {
        uVar19 = -(1L << ((byte)uVar12 & 0x3f)) | uVar19;
      }
      uVar21 = 0;
      uVar12 = 0;
      pbVar13 = pbVar15;
      do {
        bVar10 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        bVar11 = (byte)uVar12;
        uVar12 = uVar12 + 7;
        uVar21 = uVar21 | (ulonglong)(bVar10 & 0x7f) << (bVar11 & 0x3f);
      } while ((char)bVar10 < '\0');
      if ((0x3f < uVar12) || ((bVar10 & 0x40) == 0)) {
        if (uVar19 == 0) {
          bVar2 = true;
        }
        else if (param_2 != 2) goto LAB_140021369;
        goto LAB_1400213c5;
      }
      uVar21 = uVar21 | -(1L << ((byte)uVar12 & 0x3f));
      if (uVar19 == 0) {
        bVar2 = true;
      }
      else if (param_2 != 2) {
LAB_140021369:
        if ((longlong)uVar19 < 1) {
          if ((((byte)(uVar14 >> 3) ^ 1) & uVar4 < 2 & bVar22) == 0) {
            uVar17 = 0;
            bVar10 = 0;
            pbVar13 = (byte *)(~uVar19 + (longlong)unaff_XMM6_Qa);
            do {
              bVar11 = *pbVar13;
              pbVar13 = pbVar13 + 1;
              bVar1 = bVar10 & 0x3f;
              bVar10 = bVar10 + 7;
              uVar17 = uVar17 | (ulonglong)(bVar11 & 0x7f) << bVar1;
            } while ((char)bVar11 < '\0');
            if (uVar17 == 0) goto LAB_140021544;
          }
          else {
            local_60 = local_be;
            local_70 = unaff_XMM6_Qa;
            puStack_68 = unaff_XMM6_Qb;
            uVar7 = check_exception_spec((longlong)&local_88,(longlong *)ppuVar18,local_a8,uVar19);
            if ((char)uVar7 == '\0') {
              if ((param_2 & 1) == 0) goto LAB_140021564;
              goto LAB_140021420;
            }
          }
        }
        else {
          puVar5 = unaff_XMM6_Qa;
          if (local_be != 0xff) {
            if (local_f8 == 2) {
              puVar5 = (ulonglong *)((longlong)unaff_XMM6_Qa + uVar19 * -2);
            }
            else {
              if (local_f8 < 3) {
                if (local_f8 != 0) {
                    // WARNING: Subroutine does not return
                  abort();
                }
              }
              else {
                puVar5 = (ulonglong *)((longlong)unaff_XMM6_Qa + uVar19 * -4);
                if (local_f8 == 3) goto LAB_140021501;
                if (local_f8 != 4) {
                    // WARNING: Subroutine does not return
                  abort();
                }
              }
              puVar5 = unaff_XMM6_Qa + -uVar19;
            }
          }
LAB_140021501:
          read_encoded_value_with_base(local_e4,local_e0,puVar5,&local_90);
          if ((local_90 == (longlong *)0x0) ||
             ((ppuVar18 != (undefined **)0x0 &&
              (cVar3 = get_adjusted_ptr(local_90,(longlong *)ppuVar18,&local_a8), cVar3 != '\0'))))
          {
LAB_140021544:
            if ((param_2 & 1) != 0) {
LAB_1400211d6:
              if (uVar4 < 2) {
LAB_140021420:
                *(int *)(param_4 + -0x24) = (int)uVar19;
                *(byte **)(param_4 + -0x20) = pbVar16;
                *(byte **)(param_4 + -0x18) = local_f0;
                *(_Unwind_Ptr *)(param_4 + -0x10) = _Var20;
                *(byte **)(param_4 + -8) = local_a8;
              }
              return 6;
            }
            if (uVar14 == 0) {
LAB_140021564:
              if (uVar4 < 2) goto LAB_140020fe1;
            }
            if ((int)uVar19 < 0) {
              plVar9 = (longlong *)std::unexpected();
              __cxa_begin_catch(plVar9);
                    // WARNING: Subroutine does not return
              std::terminate();
            }
            val = uVar19 & 0xffffffff;
            goto LAB_140020ff0;
          }
        }
LAB_1400213c5:
        if (uVar21 == 0) goto LAB_14002159a;
      }
      pbVar16 = pbVar15 + uVar21;
    } while( true );
  }
  if (_Var20 == 0) {
    return 8;
  }
  goto LAB_1400215bc;
LAB_14002159a:
  if (!bVar2) {
    return 8;
  }
LAB_1400215bc:
  val = 0;
  if ((param_2 & 1) != 0) {
    return 8;
  }
LAB_140020ff0:
  _Unwind_SetGR(param_5,0,(_Unwind_Word)param_4);
  _Unwind_SetGR(param_5,1,val);
  _Unwind_SetIP(param_5,_Var20);
  return 7;
}



// (anonymous namespace)::pool::free(void*) [clone .constprop.0]

void (anonymous_namespace)::pool::free(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  iVar5 = pthread_mutex_lock((longlong *)&emergency_pool);
  if (iVar5 == 0) {
    lVar9 = *(longlong *)(param_1 + -0x10);
    plVar1 = (longlong *)(param_1 + -0x10);
    if ((DAT_140023208 == (longlong *)0x0) ||
       (plVar3 = (longlong *)((longlong)plVar1 + lVar9), plVar3 < DAT_140023208)) {
      *(longlong *)(param_1 + -0x10) = lVar9;
      *(longlong **)(param_1 + -8) = DAT_140023208;
      DAT_140023208 = plVar1;
    }
    else if (DAT_140023208 == plVar3) {
      lVar4 = DAT_140023208[1];
      *(longlong *)(param_1 + -0x10) = lVar9 + *DAT_140023208;
      *(longlong *)(param_1 + -8) = lVar4;
      DAT_140023208 = plVar1;
    }
    else {
      plVar10 = (longlong *)&DAT_140023208;
      plVar6 = DAT_140023208;
      plVar8 = (longlong *)DAT_140023208[1];
      if ((longlong *)DAT_140023208[1] != (longlong *)0x0) {
        do {
          if (plVar3 <= plVar8) {
            if (plVar3 == plVar8) {
              lVar9 = lVar9 + *plVar3;
              plVar6[1] = plVar3[1];
            }
            break;
          }
          plVar2 = plVar8 + 1;
          plVar10 = plVar6 + 1;
          plVar6 = plVar8;
          plVar8 = (longlong *)*plVar2;
        } while ((longlong *)*plVar2 != (longlong *)0x0);
        plVar6 = (longlong *)*plVar10;
      }
      if (plVar1 == (longlong *)((longlong)plVar6 + *plVar6)) {
        *plVar6 = *plVar6 + lVar9;
      }
      else {
        lVar4 = plVar6[1];
        *(longlong *)(param_1 + -0x10) = lVar9;
        *(longlong *)(param_1 + -8) = lVar4;
        *(longlong **)(*plVar10 + 8) = plVar1;
      }
    }
    uVar7 = pthread_mutex_unlock((longlong *)&emergency_pool);
    if ((int)uVar7 == 0) {
      return;
    }
    __gnu_cxx::__throw_concurrence_unlock_error();
  }
  __gnu_cxx::__throw_concurrence_lock_error();
  __gnu_cxx::__throw_concurrence_lock_error();
  __gnu_cxx::__throw_concurrence_unlock_error();
  if (DAT_140023210 != (void *)0x0) {
    ::free(DAT_140023210);
    DAT_140023210 = (void *)0x0;
  }
  return;
}



// (anonymous namespace)::pool::allocate(unsigned long long) [clone .constprop.0]

ulonglong * (anonymous_namespace)::pool::allocate(ulonglong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  iVar1 = pthread_mutex_lock((longlong *)&emergency_pool);
  if (iVar1 == 0) {
    uVar2 = param_1 + 0x1f & 0xfffffffffffffff0;
    if (0xffffffffffffffef < param_1) {
      uVar2 = 0x10;
    }
    puVar5 = (ulonglong *)&DAT_140023208;
    puVar6 = DAT_140023208;
    if (DAT_140023208 == (ulonglong *)0x0) {
      puVar4 = (ulonglong *)0x0;
    }
    else {
      do {
        if (uVar2 <= *puVar6) {
          uVar7 = *puVar6 - uVar2;
          if (uVar7 < 0x10) {
            *puVar6 = *puVar6;
            puVar4 = (ulonglong *)puVar6[1];
          }
          else {
            puVar4 = (ulonglong *)((longlong)puVar6 + uVar2);
            puVar4[1] = puVar6[1];
            puVar6 = (ulonglong *)*puVar5;
            *puVar4 = uVar7;
            *puVar6 = uVar2;
          }
          *puVar5 = (ulonglong)puVar4;
          puVar4 = puVar6 + 2;
          break;
        }
        puVar5 = puVar6 + 1;
        puVar6 = (ulonglong *)puVar6[1];
        puVar4 = (ulonglong *)0x0;
      } while (puVar6 != (ulonglong *)0x0);
    }
    uVar3 = pthread_mutex_unlock((longlong *)&emergency_pool);
    if ((int)uVar3 == 0) {
      return puVar4;
    }
  }
  else {
    __gnu_cxx::__throw_concurrence_lock_error();
  }
  puVar5 = (ulonglong *)__gnu_cxx::__throw_concurrence_unlock_error();
  if (DAT_140023210 != (void *)0x0) {
    ::free(DAT_140023210);
    puVar5 = (ulonglong *)0x0;
    DAT_140023210 = (void *)0x0;
  }
  return puVar5;
}



// __gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error()

void __thiscall
__gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error(__concurrence_lock_error *this)

{
  *(undefined ***)this = &PTR____concurrence_lock_error_140026aa0;
  std::exception::~exception();
  operator_delete(this);
  return;
}



// __gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error()

void __thiscall
__gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error(__concurrence_lock_error *this)

{
  *(undefined ***)this = &PTR____concurrence_lock_error_140026aa0;
  std::exception::~exception();
  return;
}



// __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error()

void __thiscall
__gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error(__concurrence_unlock_error *this)

{
  *(undefined ***)this = &PTR____concurrence_unlock_error_140026ad0;
  std::exception::~exception();
  operator_delete(this);
  return;
}



// __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error()

void __thiscall
__gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error(__concurrence_unlock_error *this)

{
  *(undefined ***)this = &PTR____concurrence_unlock_error_140026ad0;
  std::exception::~exception();
  return;
}



// __gnu_cxx::__verbose_terminate_handler()

void __gnu_cxx::__verbose_terminate_handler(void)

{
  undefined *puVar1;
  longlong lVar2;
  char *_Str;
  FILE *pFVar3;
  longlong *plVar4;
  char *_Str_00;
  int local_1c;
  
  if (__verbose_terminate_handler()::terminating != '\0') {
    pFVar3 = (FILE *)(*(code *)__imp___acrt_iob_func)(2);
    fwrite("terminate called recursively\n",1,0x1d,pFVar3);
                    // WARNING: Subroutine does not return
    abort();
  }
  __verbose_terminate_handler()::terminating = 1;
  lVar2 = __cxa_current_exception_type();
  if (lVar2 == 0) {
    pFVar3 = (FILE *)(*(code *)__imp___acrt_iob_func)(2);
    fwrite("terminate called without an active exception\n",1,0x2d,pFVar3);
  }
  else {
    local_1c = -1;
    _Str_00 = *(char **)(lVar2 + 8) + (**(char **)(lVar2 + 8) == '*');
    _Str = __cxa_demangle(_Str_00,(char *)0x0,(ulonglong *)0x0,&local_1c);
    puVar1 = __imp___acrt_iob_func;
    pFVar3 = (FILE *)(*(code *)__imp___acrt_iob_func)(2);
    fwrite("terminate called after throwing an instance of \'",1,0x30,pFVar3);
    if (local_1c == 0) {
      pFVar3 = (FILE *)(*(code *)puVar1)(2);
      fputs(_Str,pFVar3);
    }
    else {
      pFVar3 = (FILE *)(*(code *)puVar1)();
      fputs(_Str_00,pFVar3);
    }
    pFVar3 = (FILE *)(*(code *)puVar1)(2);
    plVar4 = (longlong *)&DAT_1400242f1;
    fwrite(&DAT_1400242f1,1,2,pFVar3);
    if (local_1c == 0) {
      FUN_1400229cc();
      return;
    }
    __cxa_rethrow();
    __cxa_begin_catch(plVar4);
    __cxa_end_catch();
  }
                    // WARNING: Subroutine does not return
  abort();
}



// __gnu_cxx::__throw_concurrence_lock_error()

void __gnu_cxx::__throw_concurrence_lock_error(void)

{
  ulonglong *puVar1;
  
  puVar1 = __cxa_allocate_exception(8);
  *puVar1 = (ulonglong)&PTR____concurrence_lock_error_140026aa0;
                    // WARNING: Subroutine does not return
  __cxa_throw((longlong)puVar1,&__concurrence_lock_error::typeinfo,
              __concurrence_lock_error::~__concurrence_lock_error);
}



// __gnu_cxx::__throw_concurrence_unlock_error()

void __gnu_cxx::__throw_concurrence_unlock_error(void)

{
  ulonglong *puVar1;
  
  puVar1 = __cxa_allocate_exception(8);
  *puVar1 = (ulonglong)&PTR____concurrence_unlock_error_140026ad0;
                    // WARNING: Subroutine does not return
  __cxa_throw((longlong)puVar1,&__concurrence_unlock_error::typeinfo,
              __concurrence_unlock_error::~__concurrence_unlock_error);
}



// __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const

void __thiscall
__cxxabiv1::__class_type_info::__do_catch
          (__class_type_info *this,type_info *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = std::type_info::operator==((type_info *)this,param_1);
  if (((char)uVar1 == '\0') && (param_3 < 4)) {
    if (*(code **)(*(longlong *)param_1 + 0x28) != __do_upcast) {
                    // WARNING: Could not recover jumptable at 0x000140021ab8. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*(longlong *)param_1 + 0x28))();
      return;
    }
    __do_upcast((__class_type_info *)param_1,(type_info *)this,param_2);
    return;
  }
  return;
}



// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info::__upcast_result&) const

void __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,type_info *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = std::type_info::operator==((type_info *)this,param_1);
  if ((char)uVar1 != '\0') {
    *param_3 = param_2;
    param_3[2] = 0x10;
    *(undefined4 *)(param_3 + 1) = 6;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000140021b70)
// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const

undefined8 __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,type_info *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  if (*(code **)(*(longlong *)this + 0x30) == __do_upcast) {
    uVar2 = std::type_info::operator==((type_info *)this,param_1);
    if ((char)uVar2 != '\0') {
      *param_2 = uVar1;
      return 1;
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x30))();
  }
  return 0;
}



// __cxxabiv1::__class_type_info::__do_dyncast(long long, __cxxabiv1::__class_type_info::__sub_kind,
// __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
// const*, __cxxabiv1::__class_type_info::__dyncast_result&) const

undefined8 __thiscall
__cxxabiv1::__class_type_info::__do_dyncast
          (__class_type_info *this,undefined8 param_1,undefined4 param_2,type_info *param_3,
          longlong param_4,type_info *param_5,longlong param_6,longlong *param_7)

{
  undefined8 uVar1;
  
  if (param_4 == param_6) {
    uVar1 = std::type_info::operator==((type_info *)this,param_5);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)((longlong)param_7 + 0xc) = param_2;
      return 0;
    }
  }
  uVar1 = std::type_info::operator==((type_info *)this,param_3);
  if ((char)uVar1 != '\0') {
    *(undefined4 *)(param_7 + 1) = param_2;
    *param_7 = param_4;
    *(undefined4 *)(param_7 + 2) = 1;
  }
  return 0;
}



// __cxxabiv1::__class_type_info::__do_find_public_src(long long, void const*,
// __cxxabiv1::__class_type_info const*, void const*) const

char __thiscall
__cxxabiv1::__class_type_info::__do_find_public_src
          (__class_type_info *this,undefined8 param_2_00,longlong param_2,undefined8 param_4_00,
          longlong param_4)

{
  return (param_4 == param_2) * '\x05' + '\x01';
}



// __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info::__upcast_result&) const

void __thiscall
__cxxabiv1::__si_class_type_info::__do_upcast
          (__si_class_type_info *this,type_info *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  
  cVar1 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  if (cVar1 == '\0') {
                    // WARNING: Could not recover jumptable at 0x000140021c6d. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(this + 0x10) + 0x30))
              (*(longlong **)(this + 0x10),param_1,param_2,param_3);
    return;
  }
  return;
}



// __cxxabiv1::__si_class_type_info::__do_dyncast(long long,
// __cxxabiv1::__class_type_info::__sub_kind, __cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info::__dyncast_result&) const

undefined8 __thiscall
__cxxabiv1::__si_class_type_info::__do_dyncast
          (__si_class_type_info *this,longlong param_1,undefined4 param_2,type_info *param_3,
          longlong param_4,type_info *param_5,longlong param_6,longlong *param_7)

{
  undefined8 uVar1;
  
  uVar1 = std::type_info::operator==((type_info *)this,param_3);
  if ((char)uVar1 != '\0') {
    *param_7 = param_4;
    *(undefined4 *)(param_7 + 1) = param_2;
    if (param_1 < 0) {
      if (param_1 == -2) {
        *(undefined4 *)(param_7 + 2) = 1;
      }
    }
    else {
      *(uint *)(param_7 + 2) = (uint)(param_6 == param_4 + param_1) * 5 + 1;
    }
    return 0;
  }
  if ((param_4 == param_6) &&
     (uVar1 = std::type_info::operator==((type_info *)this,param_5), (char)uVar1 != '\0')) {
    *(undefined4 *)((longlong)param_7 + 0xc) = param_2;
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x000140021d15. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x38))
                    (*(longlong **)(this + 0x10),param_1,param_2,param_3);
  return uVar1;
}



// __cxxabiv1::__si_class_type_info::__do_find_public_src(long long, void const*,
// __cxxabiv1::__class_type_info const*, void const*) const

undefined8 __thiscall
__cxxabiv1::__si_class_type_info::__do_find_public_src
          (__si_class_type_info *this,undefined8 param_1,longlong param_2,type_info *param_3,
          longlong param_4)

{
  undefined8 uVar1;
  
  if (param_4 == param_2) {
    uVar1 = std::type_info::operator==((type_info *)this,param_3);
    if ((char)uVar1 != '\0') {
      return 6;
    }
  }
                    // WARNING: Could not recover jumptable at 0x000140021dbe. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x40))
                    (*(longlong **)(this + 0x10),param_1,param_2,param_3);
  return uVar1;
}



// __gnu_cxx::__concurrence_lock_error::what() const

char * __gnu_cxx::__concurrence_lock_error::what(void)

{
  return "__gnu_cxx::__concurrence_lock_error";
}



// __gnu_cxx::__concurrence_unlock_error::what() const

char * __gnu_cxx::__concurrence_unlock_error::what(void)

{
  return "__gnu_cxx::__concurrence_unlock_error";
}



// std::bad_exception::what() const

char * std::bad_exception::what(void)

{
  return "std::bad_exception";
}



// std::bad_alloc::what() const

char * std::bad_alloc::what(void)

{
  return "std::bad_alloc";
}



// std::exception::what() const

char * std::exception::what(void)

{
  return "std::exception";
}



// std::type_info::__do_catch(std::type_info const*, void**, unsigned int) const

undefined8 std::type_info::__do_catch(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 extraout_var;
  
  uVar2 = 1;
  if (param_1 != param_2) {
    uVar2 = 0;
    if (**(char **)(param_1 + 8) != '*') {
      iVar1 = strcmp(*(char **)(param_1 + 8),
                     *(char **)(param_2 + 8) + (**(char **)(param_2 + 8) == '*'));
      uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
    }
  }
  return uVar2;
}



// std::type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const

undefined8 std::type_info::__do_upcast(void)

{
  return 0;
}



// std::type_info::__is_pointer_p() const

undefined8 std::type_info::__is_pointer_p(void)

{
  return 0;
}



// std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const

undefined8 __thiscall std::type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 extraout_var;
  
  uVar2 = 1;
  if (param_1 != this) {
    uVar2 = 0;
    if (**(char **)(this + 8) != '*') {
      iVar1 = strcmp(*(char **)(this + 8),
                     *(char **)(param_1 + 8) + (**(char **)(param_1 + 8) == '*'));
      uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
    }
  }
  return uVar2;
}



// std::bad_exception::~bad_exception()

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  operator_delete(this);
  return;
}



// std::bad_exception::~bad_exception()

void __thiscall std::bad_exception::~bad_exception(void)

{
  return;
}



// std::bad_alloc::~bad_alloc()

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(undefined ***)this = &PTR__bad_alloc_140026b30;
  exception::~exception();
  operator_delete(this);
  return;
}



// std::bad_alloc::~bad_alloc()

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(undefined ***)this = &PTR__bad_alloc_140026b30;
  exception::~exception();
  return;
}



// std::exception::~exception()

void __thiscall std::exception::~exception(exception *this)

{
  operator_delete(this);
  return;
}



// std::exception::~exception()

void __thiscall std::exception::~exception(void)

{
  return;
}



// std::type_info::~type_info()

void __thiscall std::type_info::~type_info(type_info *this)

{
  operator_delete(this);
  return;
}



// std::type_info::~type_info()

void __thiscall std::type_info::~type_info(void)

{
  return;
}



// std::get_terminate()

undefined * std::get_terminate(void)

{
  return __cxxabiv1::__terminate_handler;
}



// std::set_terminate(void (*)())

undefined * std::set_terminate(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = __cxxabiv1::__terminate_handler;
  pcVar2 = __gnu_cxx::__verbose_terminate_handler;
  if (param_1 != (undefined *)0x0) {
    pcVar2 = (code *)param_1;
  }
  LOCK();
  __cxxabiv1::__terminate_handler = pcVar2;
  UNLOCK();
  return puVar1;
}



// std::get_unexpected()

undefined * std::get_unexpected(void)

{
  return __cxxabiv1::__unexpected_handler;
}



// std::set_unexpected(void (*)())

undefined * std::set_unexpected(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = __cxxabiv1::__unexpected_handler;
  pcVar2 = terminate;
  if (param_1 != (undefined *)0x0) {
    pcVar2 = (code *)param_1;
  }
  LOCK();
  __cxxabiv1::__unexpected_handler = pcVar2;
  UNLOCK();
  return puVar1;
}



// std::get_new_handler()

undefined8 std::get_new_handler(void)

{
  return (anonymous_namespace)::__new_handler;
}



// std::set_new_handler(void (*)())

undefined8 std::set_new_handler(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = (anonymous_namespace)::__new_handler;
  LOCK();
  (anonymous_namespace)::__new_handler = param_1;
  UNLOCK();
  return uVar1;
}



// std::uncaught_exception()

undefined4 std::uncaught_exception(void)

{
  longlong lVar1;
  
  lVar1 = __cxa_get_globals();
  return CONCAT31((int3)((uint)*(int *)(lVar1 + 8) >> 8),*(int *)(lVar1 + 8) != 0);
}



// std::uncaught_exceptions()

undefined4 std::uncaught_exceptions(void)

{
  longlong lVar1;
  
  lVar1 = __cxa_get_globals();
  return *(undefined4 *)(lVar1 + 8);
}



// operator delete[](void*)

void operator_delete__(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001400189c8. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}



// operator delete(void*)

void operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001400189c8. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}



// operator delete(void*, unsigned long long)

void operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001400189c8. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}



// operator new[](unsigned long long)

void * operator_new__(size_t param_1)

{
  size_t _Size;
  void *pvVar1;
  code *pcVar2;
  ulonglong *puVar3;
  
  _Size = 1;
  if (param_1 != 0) {
    _Size = param_1;
  }
  while( true ) {
    pvVar1 = malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    pcVar2 = (code *)std::get_new_handler();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
  puVar3 = __cxa_allocate_exception(8);
  *puVar3 = (ulonglong)&PTR__bad_alloc_140026b30;
                    // WARNING: Subroutine does not return
  __cxa_throw((longlong)puVar3,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}



// operator new(unsigned long long)

void * operator_new(size_t param_1)

{
  size_t _Size;
  void *pvVar1;
  code *pcVar2;
  ulonglong *puVar3;
  
  _Size = 1;
  if (param_1 != 0) {
    _Size = param_1;
  }
  while( true ) {
    pvVar1 = malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    pcVar2 = (code *)std::get_new_handler();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
  puVar3 = __cxa_allocate_exception(8);
  *puVar3 = (ulonglong)&PTR__bad_alloc_140026b30;
                    // WARNING: Subroutine does not return
  __cxa_throw((longlong)puVar3,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}



void __cxa_allocate_dependent_exception(void)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = malloc(0x90);
  if ((pauVar1 == (undefined1 (*) [16])0x0) &&
     (pauVar1 = (undefined1 (*) [16])(anonymous_namespace)::pool::allocate(0x90),
     pauVar1 == (undefined1 (*) [16])0x0)) {
                    // WARNING: Subroutine does not return
    std::terminate();
  }
  *pauVar1 = (undefined1  [16])0x0;
  pauVar1[1] = (undefined1  [16])0x0;
  pauVar1[2] = (undefined1  [16])0x0;
  pauVar1[3] = (undefined1  [16])0x0;
  pauVar1[4] = (undefined1  [16])0x0;
  pauVar1[5] = (undefined1  [16])0x0;
  pauVar1[6] = (undefined1  [16])0x0;
  pauVar1[7] = (undefined1  [16])0x0;
  pauVar1[8] = (undefined1  [16])0x0;
  return;
}



ulonglong * __cxa_allocate_exception(longlong param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  puVar1 = malloc(param_1 + 0xa0U);
  if ((puVar1 == (ulonglong *)0x0) &&
     (puVar1 = (anonymous_namespace)::pool::allocate(param_1 + 0xa0U), puVar1 == (ulonglong *)0x0))
  {
                    // WARNING: Subroutine does not return
    std::terminate();
  }
  *(undefined1 (*) [16])(puVar1 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x12) = (undefined1  [16])0x0;
  uVar3 = 0;
  do {
    uVar2 = (int)uVar3 + 0x40;
    *(undefined1 (*) [16])((longlong)puVar1 + uVar3) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)puVar1 + uVar3 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)puVar1 + uVar3 + 0x20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)puVar1 + uVar3 + 0x30) = (undefined1  [16])0x0;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < 0x80);
  return puVar1 + 0x14;
}



longlong __cxa_begin_catch(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)__cxa_get_globals();
  plVar1 = param_1 + -10;
  plVar2 = (longlong *)*plVar4;
  if (*param_1 + 0xb8b1aabcbcd4d500U < 2) {
    iVar3 = (int)param_1[-5];
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    *(int *)(param_1 + -5) = iVar3 + 1;
    *(int *)(plVar4 + 1) = (int)plVar4[1] + -1;
    if (plVar2 != plVar1) {
      param_1[-6] = (longlong)plVar2;
      *plVar4 = (longlong)plVar1;
    }
    return param_1[-1];
  }
  if (plVar2 == (longlong *)0x0) {
    *plVar4 = (longlong)plVar1;
    return 0;
  }
                    // WARNING: Subroutine does not return
  std::terminate();
}



void __cxa_call_unexpected(longlong *param_1)

{
  __cxa_begin_catch(param_1);
                    // WARNING: Subroutine does not return
  __cxxabiv1::__unexpected((undefined *)param_1[-8]);
}



longlong __cxa_current_exception_type(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)__cxa_get_globals();
  plVar1 = (longlong *)*plVar1;
  lVar2 = 0;
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte *)(plVar1 + 10) & 1) != 0) {
      plVar1 = (longlong *)(*plVar1 + -0x90);
    }
    lVar2 = *plVar1;
  }
  return lVar2;
}



void __cxa_end_catch(void)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)__cxa_get_globals_fast();
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    if (1 < *(longlong *)(lVar1 + 0x50) + 0xb8b1aabcbcd4d500U) {
      *plVar3 = 0;
      _Unwind_DeleteException((_Unwind_Exception *)(lVar1 + 0x50));
      return;
    }
    iVar2 = *(int *)(lVar1 + 0x28);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
      if (iVar2 == 0) {
        *plVar3 = *(longlong *)(lVar1 + 0x20);
      }
    }
    else {
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        *plVar3 = *(longlong *)(lVar1 + 0x20);
        _Unwind_DeleteException((_Unwind_Exception *)(lVar1 + 0x50));
        return;
      }
      if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
        std::terminate();
      }
    }
    *(int *)(lVar1 + 0x28) = iVar2;
  }
  return;
}



void __cxa_free_dependent_exception(void *param_1)

{
  if ((param_1 < (void *)(DAT_140023218 + (longlong)DAT_140023210)) && (DAT_140023210 < param_1)) {
    (anonymous_namespace)::pool::free((longlong)param_1);
    return;
  }
  free(param_1);
  return;
}



void __cxa_free_exception(longlong param_1)

{
  void *_Memory;
  
  _Memory = (void *)(param_1 + -0xa0);
  if ((_Memory < (void *)(DAT_140023218 + (longlong)DAT_140023210)) && (DAT_140023210 < _Memory)) {
    (anonymous_namespace)::pool::free((longlong)_Memory);
    return;
  }
  free(_Memory);
  return;
}



undefined8 __cxa_get_exception_ptr(longlong param_1)

{
  return *(undefined8 *)(param_1 + -8);
}



void __cxa_get_globals(void)

{
  __emutls_get_address((__emutls_object *)&__emutls_v__ZZN12_GLOBAL__N_1L10get_globalEvE6global);
  return;
}



void __cxa_get_globals_fast(void)

{
  __emutls_get_address((__emutls_object *)&__emutls_v__ZZN12_GLOBAL__N_1L10get_globalEvE6global);
  return;
}



longlong __cxa_init_primary_exception(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + -0xa0) = 0;
  *(undefined8 *)(param_1 + -0x90) = param_2;
  *(undefined8 *)(param_1 + -0x88) = param_3;
  puVar1 = std::get_unexpected();
  *(undefined **)(param_1 + -0x80) = puVar1;
  puVar1 = std::get_terminate();
  *(undefined **)(param_1 + -0x78) = puVar1;
  *(undefined8 *)(param_1 + -0x40) = 0x474e5543432b2b00;
  *(code **)(param_1 + -0x38) = __gxx_exception_cleanup;
  return param_1 + -0xa0;
}



void __cxa_rethrow(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)__cxa_get_globals();
  lVar1 = *plVar2;
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x50) + 0xb8b1aabcbcd4d500U < 2) {
      *(int *)(lVar1 + 0x28) = -*(int *)(lVar1 + 0x28);
    }
    else {
      *plVar2 = 0;
    }
    _Unwind_Resume_or_Rethrow((_Unwind_Exception *)(lVar1 + 0x50));
    __cxa_begin_catch((longlong *)(lVar1 + 0x50));
                    // WARNING: Subroutine does not return
    std::__cxa_rethrow_cold();
  }
                    // WARNING: Subroutine does not return
  std::terminate();
}



void __cxa_throw(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = __cxa_get_globals();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  *(undefined4 *)(param_1 + -0xa0) = 0;
  *(undefined8 *)(param_1 + -0x90) = param_2;
  *(undefined8 *)(param_1 + -0x88) = param_3;
  puVar2 = std::get_unexpected();
  *(undefined **)(param_1 + -0x80) = puVar2;
  puVar2 = std::get_terminate();
  *(undefined4 *)(param_1 + -0xa0) = 1;
  *(undefined **)(param_1 + -0x78) = puVar2;
  *(undefined8 *)(param_1 + -0x40) = 0x474e5543432b2b00;
  *(code **)(param_1 + -0x38) = __gxx_exception_cleanup;
  _Unwind_RaiseException((_Unwind_Exception *)(param_1 + -0x40));
  __cxa_begin_catch((longlong *)(param_1 + -0x40));
                    // WARNING: Subroutine does not return
  std::terminate();
}



void __gxx_personality_seh0
               (PEXCEPTION_RECORD param_1,void *param_2,PCONTEXT param_3,PDISPATCHER_CONTEXT param_4
               )

{
  _GCC_specific_handler(param_1,param_2,param_3,param_4,__cxxabiv1::__gxx_personality_imp);
  return;
}



void __tcf_ZN12_GLOBAL__N_1L14emergency_poolE(void)

{
  pthread_mutex_destroy((undefined8 *)&(anonymous_namespace)::emergency_pool);
  return;
}



// operator new(unsigned long long) [clone .cold]

void * operator_new(void)

{
  ulonglong *puVar1;
  
  puVar1 = __cxa_allocate_exception(8);
  *puVar1 = (ulonglong)&PTR__bad_alloc_140026b30;
                    // WARNING: Subroutine does not return
  __cxa_throw((longlong)puVar1,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}



// (anonymous namespace)::pool::free(void*) [clone .constprop.0] [clone .cold]

void (anonymous_namespace)::pool::free(void)

{
  __gnu_cxx::__throw_concurrence_unlock_error();
  __gnu_cxx::__throw_concurrence_lock_error();
  __gnu_cxx::__throw_concurrence_lock_error();
  __gnu_cxx::__throw_concurrence_unlock_error();
  if (DAT_140023210 != (void *)0x0) {
    ::free(DAT_140023210);
    DAT_140023210 = (void *)0x0;
  }
  return;
}



// (anonymous namespace)::pool::allocate(unsigned long long) [clone .constprop.0] [clone .cold]

void (anonymous_namespace)::pool::allocate(void)

{
  __gnu_cxx::__throw_concurrence_lock_error();
  __gnu_cxx::__throw_concurrence_unlock_error();
  if (DAT_140023210 != (void *)0x0) {
    ::free(DAT_140023210);
    DAT_140023210 = (void *)0x0;
  }
  return;
}



// __gnu_cxx::__freeres()

void __gnu_cxx::__freeres(void)

{
  if (DAT_140023210 != (void *)0x0) {
    free(DAT_140023210);
    DAT_140023210 = (void *)0x0;
  }
  return;
}



void std::__cxa_allocate_exception_cold(void)

{
                    // WARNING: Subroutine does not return
  terminate();
}



void std::__cxa_allocate_dependent_exception_cold(void)

{
                    // WARNING: Subroutine does not return
  terminate();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// __gnu_cxx::__freeres()

void __gnu_cxx::_GLOBAL__sub_I___freeres(void)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  longlong lVar4;
  size_t sVar5;
  size_t *psVar6;
  longlong lVar7;
  longlong *_Str;
  longlong *plVar8;
  longlong *local_60;
  size_t local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  char *local_38;
  int local_30;
  
  pthread_mutex_init((undefined8 *)&(anonymous_namespace)::emergency_pool,(uint *)0x0);
  DAT_140023218 = 0;
  _DAT_140023208 = (undefined1  [16])0x0;
  pcVar3 = getenv("GLIBCXX_TUNABLES");
  local_30 = 0x100;
  local_48 = 0;
  local_50 = "obj_size";
  local_58 = 8;
  local_40 = 9;
  local_38 = "obj_count";
  do {
    if (pcVar3 == (char *)0x0) {
      lVar7 = 0x1000;
      if (local_30 < 0x1001) {
        lVar7 = (longlong)local_30;
      }
      lVar4 = (longlong)(int)local_48;
      if ((int)local_48 == 0) {
        lVar4 = 6;
      }
      sVar5 = (lVar4 + 0x26) * lVar7 * 8;
      DAT_140023218 = sVar5;
      if (sVar5 != 0) {
        psVar6 = malloc(sVar5);
        DAT_140023210 = psVar6;
        if (psVar6 == (size_t *)0x0) {
          DAT_140023218 = 0;
        }
        else {
          DAT_140023208 = psVar6;
          *psVar6 = sVar5;
          psVar6[1] = 0;
        }
      }
      atexit(__tcf_ZN12_GLOBAL__N_1L14emergency_poolE);
      return;
    }
    plVar8 = (longlong *)(pcVar3 + (*pcVar3 == ':'));
    _Str = plVar8;
    if (((*plVar8 == 0x2e78786362696c67) &&
        (*(longlong *)((longlong)plVar8 + 7) == 0x6c6f6f705f68652e)) &&
       (*(char *)((longlong)plVar8 + 0xf) == '.')) {
      _Str = plVar8 + 2;
      psVar6 = &local_58;
      do {
        sVar5 = *psVar6;
        if (((sVar5 == 0) || (iVar1 = memcmp((void *)psVar6[1],_Str,sVar5), iVar1 == 0)) &&
           (*(char *)((longlong)_Str + sVar5) == '=')) {
          uVar2 = strtoul((char *)((longlong)plVar8 + sVar5 + 0x11),(char **)&local_60,0);
          _Str = local_60;
          if (((char)*local_60 == ':' || (char)*local_60 == '\0') && (-1 < (int)uVar2)) {
            *(ulong *)(psVar6 + 2) = uVar2;
          }
          break;
        }
        psVar6 = psVar6 + 3;
      } while ((size_t *)&stack0xffffffffffffffd8 != psVar6);
    }
    pcVar3 = strchr((char *)_Str,0x3a);
  } while( true );
}



// base_of_encoded_value(unsigned char, _Unwind_Context*) [clone .cold]

void base_of_encoded_value(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// read_encoded_value_with_base(unsigned char, unsigned long long, unsigned char const*, unsigned
// long long*) [clone .cold]

void read_encoded_value_with_base(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// check_exception_spec(lsda_header_info*, std::type_info const*, void*, long long) [clone .cold]

void check_exception_spec(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// __cxxabiv1::__gxx_personality_imp(int, int, unsigned long long, _Unwind_Exception*,
// _Unwind_Context*) [clone .cold]

void __cxxabiv1::__gxx_personality_imp(void)

{
                    // WARNING: Subroutine does not return
  std::terminate();
}



void __cdecl abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



void __cxa_call_unexpected_cold(void)

{
  longlong *in_RAX;
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  byte *unaff_RBP;
  ulonglong unaff_RSI;
  undefined *unaff_RDI;
  _Unwind_Ptr local_res20;
  
  __cxa_begin_catch(in_RAX);
  plVar1 = (longlong *)__cxa_get_globals_fast();
  puVar4 = (undefined8 *)*plVar1;
  if ((*(byte *)(puVar4 + 10) & 1) == 0) {
    puVar4 = puVar4 + 0x12;
  }
  else {
    puVar4 = (undefined8 *)*puVar4;
  }
  parse_lsda_header((_Unwind_Context *)0x0,unaff_RBP,&local_res20);
  uVar2 = check_exception_spec((longlong)&local_res20,(longlong *)puVar4[-0x12],puVar4,unaff_RSI);
  if ((char)uVar2 == '\0') {
    uVar2 = check_exception_spec
                      ((longlong)&local_res20,(longlong *)&std::bad_exception::typeinfo,0,unaff_RSI)
    ;
    if ((char)uVar2 != '\0') {
      puVar3 = __cxa_allocate_exception(8);
      *puVar3 = (ulonglong)&PTR__bad_exception_140026b00;
                    // WARNING: Subroutine does not return
      __cxa_throw((longlong)puVar3,&std::bad_exception::typeinfo,std::bad_exception::~bad_exception)
      ;
    }
  }
  else {
    __cxa_rethrow();
  }
                    // WARNING: Subroutine does not return
  __cxxabiv1::__terminate(unaff_RDI);
}



// __cxxabiv1::__terminate(void (*)()) [clone .cold]

void __cxxabiv1::__terminate(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// std::terminate()

void std::terminate(void)

{
                    // WARNING: Subroutine does not return
  __cxxabiv1::__terminate(__cxxabiv1::__terminate_handler);
}



// std::unexpected()

void std::unexpected(void)

{
                    // WARNING: Subroutine does not return
  __cxxabiv1::__unexpected(__cxxabiv1::__unexpected_handler);
}



void std::__cxa_rethrow_cold(void)

{
                    // WARNING: Subroutine does not return
  terminate();
}



// __gnu_cxx::__verbose_terminate_handler() [clone .cold]

void __gnu_cxx::__verbose_terminate_handler(undefined8 param_1,longlong param_2)

{
  longlong *in_RAX;
  longlong *plVar1;
  char *_Str;
  FILE *pFVar2;
  code *unaff_RSI;
  
  if (param_2 == 1) {
    plVar1 = (longlong *)__cxa_begin_catch(in_RAX);
    _Str = (char *)(**(code **)(*plVar1 + 0x10))(plVar1);
    pFVar2 = (FILE *)(*unaff_RSI)(2);
    fwrite("  what():  ",1,0xb,pFVar2);
    pFVar2 = (FILE *)(*unaff_RSI)(2);
    fputs(_Str,pFVar2);
    pFVar2 = (FILE *)(*unaff_RSI)(2);
    fputc(10,pFVar2);
    __cxa_end_catch();
  }
  else {
    __cxa_begin_catch(in_RAX);
    __cxa_end_catch();
  }
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_1400229cc(void)

{
  longlong *unaff_RDI;
  
  free(unaff_RDI);
  __cxa_rethrow();
  __cxa_begin_catch(unaff_RDI);
  __cxa_end_catch();
                    // WARNING: Subroutine does not return
  abort();
}



void d_type_cold(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong unaff_RBX;
  
  *(undefined8 *)(unaff_RBX + 0x18) = param_2;
  _text((longlong)&stack0x00000030,"%d",param_3,param_4);
                    // WARNING: Does not return
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void __cxa_call_terminate(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    __cxa_begin_catch(param_1);
    if (*param_1 + 0xb8b1aabcbcd4d500U < 2) {
                    // WARNING: Subroutine does not return
      __cxxabiv1::__terminate((undefined *)param_1[-7]);
    }
  }
                    // WARNING: Subroutine does not return
  std::terminate();
}



void std::__cxa_begin_catch_cold(void)

{
                    // WARNING: Subroutine does not return
  terminate();
}



void std::__cxa_end_catch_cold(void)

{
                    // WARNING: Subroutine does not return
  terminate();
}



// DWARF: {@address 0x140011890 _Unwind_GetGR} disjoint block 1

void __cdecl _Unwind_GetGR_cold(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// DWARF: {@address 0x1400118b0 _Unwind_SetGR} disjoint block 1

void __cdecl _Unwind_SetGR_cold(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// DWARF: {@address 0x140012050 emutls_init} disjoint block 1

void __cdecl emutls_init_cold(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// DWARF: {@address 0x140012090 __emutls_get_address} disjoint block 1

void __cdecl __emutls_get_address_cold(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



void register_frame_ctor(void)

{
  HMODULE hModule;
  code *pcVar1;
  
  hModule = GetModuleHandleA("libgcc_s_dw2-1.dll");
  if (hModule == (HMODULE)0x0) {
    pcVar1 = _text;
    DAT_140023000 = _weak___deregister_frame_info_hmod_libgcc;
  }
  else {
    hmod_libgcc = LoadLibraryA("libgcc_s_dw2-1.dll");
    pcVar1 = GetProcAddress(hModule,"__register_frame_info");
    DAT_140023000 = GetProcAddress(hModule,"__deregister_frame_info");
    if (pcVar1 == (FARPROC)0x0) goto LAB_1400016ee;
  }
  (*pcVar1)(&DAT_140028000,&obj);
LAB_1400016ee:
  atexit(__gcc_deregister_frame);
  return;
}



/* Generated by Nim Compiler v0.20.99 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <setjmp.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  typedef struct NimStrPayload NimStrPayload;
typedef struct AllocatorObj AllocatorObj;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA;
typedef struct TNimNode TNimNode;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct NimStrPayload {
NI cap;
AllocatorObj* allocator;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct TNimType {
void* destructor;
NI size;
NCSTRING name;
};
struct RootObj {
TNimType* m_type;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
NU raiseId;
Exception* up;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc__NT9bSe2DDkjdtx7j9aov2Z6g;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc__NT9bSe2DDkjdtx7j9aov2Z6g raiseAction;
};
struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA {
  Exception Sup;
};
struct tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA {
  tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA Sup;
};
struct TNimNode {
char dummy;
};
typedef N_NOINLINE_PTR(void, tyProc__3gvKfsQ1hDtNkoDSJ9asWpQ) (NimStringV2 msg);
typedef N_NIMCALL_PTR(void*, tyProc__g4DU8Xso7TeLfKjjMA54hg) (AllocatorObj* a, NI size, NI alignment);
typedef N_NIMCALL_PTR(void, tyProc__f0fmYWZ9bBl5n2coKW0dYBQ) (AllocatorObj* a, void* p, NI size);
typedef N_NIMCALL_PTR(void*, tyProc__pc9bof8Viqlm9byLAeLaBy4g) (AllocatorObj* a, void* p, NI oldSize, NI newSize);
typedef N_NIMCALL_PTR(void, tyProc__up7108S0Kt9cUg781lCWRSQ) (AllocatorObj* a);
typedef NU8 tySet_tyEnum_AllocatorFlag__djJDT3jOEYT7cpwNwzEzRg;
struct AllocatorObj {
TNimType* m_type;
tyProc__g4DU8Xso7TeLfKjjMA54hg alloc;
tyProc__f0fmYWZ9bBl5n2coKW0dYBQ dealloc;
tyProc__pc9bof8Viqlm9byLAeLaBy4g realloc;
tyProc__up7108S0Kt9cUg781lCWRSQ deallocAll;
tySet_tyEnum_AllocatorFlag__djJDT3jOEYT7cpwNwzEzRg flags;
NCSTRING name;
NI allocCount;
NI deallocCount;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap;AllocatorObj* allocator;tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NOINLINE(void, raiseAssert__gpGJG5CoQzE64skFd9bPG7A)(NimStringV2 msg) __attribute__((noreturn));
static N_INLINE(void, sysFatal__METp0EHKQZlD51D9bYP6PAAassertions)(NimStringV2 message) __attribute__((noreturn));
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void*, nimNewObj)(NI size);
N_LIB_PRIVATE N_NIMCALL(void, eq___aBBXmHFBEivKqERloP6zmA_2)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, eq___B9bR6PaYjd42pgdl6M2ae2w)(tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA** dest, tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA* src);
N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(TFrame*, getFrame)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___AJYA5jIfo0rxv4jmSr7y8Q)(tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA** dest);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI__G9cUlLvU4AFC26wbFxLFkFA_;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler__rqLlY5bs9atDw2OXYqJEn5g;
	excHandler__rqLlY5bs9atDw2OXYqJEn5g = s;
}

N_LIB_PRIVATE N_NIMCALL(void, eq___B9bR6PaYjd42pgdl6M2ae2w)(tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA** dest, tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA* src) {
	{
		if (!(*dest)) goto LA3_;
		nimDestroyAndDispose((*dest));
	}
	LA3_: ;
	(*dest) = src;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler__rqLlY5bs9atDw2OXYqJEn5g = (*excHandler__rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(TFrame*, getFrame)(void) {
	TFrame* result;
	result = (TFrame*)0;
	result = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
	return result;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
}

N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___AJYA5jIfo0rxv4jmSr7y8Q)(tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA** dest) {
	{
		if (!(*dest)) goto LA3_;
		nimDestroyAndDispose((*dest));
	}
	LA3_: ;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA9_;
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(void, sysFatal__METp0EHKQZlD51D9bYP6PAAassertions)(NimStringV2 message) {
	tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA* e;
	tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA* colontmpD_;
	TSafePoint TM__h1bPSEm4o1Lcq1L2w1tzIQ_2;
	TFrame* _nimCurFrame;
	nimfr_("sysFatal", "/p/Nim/lib/system/fatal.nim");
	_nimCurFrame = getFrame();
	e = (tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA*)0;
	colontmpD_ = (tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA*)0;
	nimln_(33, "/p/Nim/lib/system/fatal.nim");
	pushSafePoint(&TM__h1bPSEm4o1Lcq1L2w1tzIQ_2);
	TM__h1bPSEm4o1Lcq1L2w1tzIQ_2.status = setjmp(TM__h1bPSEm4o1Lcq1L2w1tzIQ_2.context);
	if (TM__h1bPSEm4o1Lcq1L2w1tzIQ_2.status == 0) {
		nimln_(37, "/p/Nim/lib/system/fatal.nim");
		e = (tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA*) nimNewObj(sizeof(tyObject_AssertionError__G9cUlLvU4AFC26wbFxLFkFA));
		(*e).Sup.Sup.Sup.m_type = (&NTI__G9cUlLvU4AFC26wbFxLFkFA_);
		(*e).Sup.Sup.name = "AssertionError";
		nimln_(34, "/p/Nim/lib/system/fatal.nim");
		eq___aBBXmHFBEivKqERloP6zmA_2((&(*e).Sup.Sup.message), message);
		nimln_(39, "/p/Nim/lib/system/fatal.nim");
		colontmpD_ = 0;
		nimln_(34, "/p/Nim/lib/system/fatal.nim");
		eq___B9bR6PaYjd42pgdl6M2ae2w(&colontmpD_, e);
		nimln_(39, "/p/Nim/lib/system/fatal.nim");
		e = 0;
		raiseExceptionEx((Exception*)colontmpD_, "AssertionError", "sysFatal", "/p/Nim/lib/system/fatal.nim", 39);
		colontmpD_ = NIM_NIL;
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame(_nimCurFrame);
	}
	{
		nimln_(34, "/p/Nim/lib/system/fatal.nim");
		eqdestroy___AJYA5jIfo0rxv4jmSr7y8Q(&e);
	}
	if (TM__h1bPSEm4o1Lcq1L2w1tzIQ_2.status != 0) reraiseException();
	popFrame();
}

N_LIB_PRIVATE N_NOINLINE(void, raiseAssert__gpGJG5CoQzE64skFd9bPG7A)(NimStringV2 msg) {
	nimfr_("raiseAssert", "/p/Nim/lib/system/assertions.nim");
	nimln_(20, "/p/Nim/lib/system/assertions.nim");
	sysFatal__METp0EHKQZlD51D9bYP6PAAassertions(msg);
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringV2 msg) {
	nimfr_("failedAssertImpl", "/p/Nim/lib/system/assertions.nim");
	nimln_(27, "/p/Nim/lib/system/assertions.nim");
	((tyProc__3gvKfsQ1hDtNkoDSJ9asWpQ) (raiseAssert__gpGJG5CoQzE64skFd9bPG7A))(msg);
	popFrame();
}
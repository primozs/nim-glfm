/* Generated by Nim Compiler v2.0.8 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
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
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
typedef NIM_CHAR tyArray__eVNFTutn6un5gcq48fQLdg[65];
N_LIB_PRIVATE N_NIMCALL(NI, writeFloatToBufferSprintf__stdZformatfloat_u90)(NIM_CHAR* buf_p0, NF value_p1);
N_LIB_PRIVATE N_NIMCALL(void, writeToBuffer__stdZformatfloat_u81)(NIM_CHAR* buf_p0, NCSTRING value_p1);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, addCstringN__stdZformatfloat_u5)(NimStringV2* result_p0, NCSTRING buf_p1, NI buflen_p2);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s_p0, NI newLen_p1);
N_LIB_PRIVATE N_NIMCALL(void, nimTestErrorFlag)(void);
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__system_u4345;
N_LIB_PRIVATE N_NIMCALL(void, writeToBuffer__stdZformatfloat_u81)(NIM_CHAR* buf_p0, NCSTRING value_p1) {
	NI i;
	i = ((NI)0);
	{
		while (1) {
			if (!!(((NU8)(value_p1[i]) == (NU8)(0)))) goto LA2;
			buf_p0[(i)- 0] = value_p1[i];
			i += ((NI)1);
		} LA2: ;
	}
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (&nimInErrorMode__system_u4345);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, writeFloatToBufferSprintf__stdZformatfloat_u90)(NIM_CHAR* buf_p0, NF value_p1) {
	NI result;
	NI n;
	int T1_;
	NIM_BOOL hasDot;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (int)0;
	T1_ = snprintf(((NCSTRING) (buf_p0)), ((size_t)65), "%.16g", value_p1);
	n = ((NI) (T1_));
	hasDot = NIM_FALSE;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(n - ((NI)1));
		res = ((NI)0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = ((NI) (res));
				{
					if (!((NU8)(buf_p0[(i)- 0]) == (NU8)(44))) goto LA7_;
					buf_p0[(i)- 0] = 46;
					hasDot = NIM_TRUE;
				}
				goto LA5_;
LA7_: ;
				{
					if (!(((NU8)(buf_p0[(i)- 0])) >= ((NU8)(97)) && ((NU8)(buf_p0[(i)- 0])) <= ((NU8)(122)) || ((NU8)(buf_p0[(i)- 0])) >= ((NU8)(65)) && ((NU8)(buf_p0[(i)- 0])) <= ((NU8)(90)) || ((NU8)(buf_p0[(i)- 0])) == ((NU8)(46)))) goto LA10_;
					hasDot = NIM_TRUE;
				}
				goto LA5_;
LA10_: ;
LA5_: ;
				res += ((NI)1);
			} LA4: ;
		}
	}
	{
		if (!!(hasDot)) goto LA14_;
		buf_p0[(n)- 0] = 46;
		buf_p0[((NI)(n + ((NI)1)))- 0] = 48;
		buf_p0[((NI)(n + ((NI)2)))- 0] = 0;
		result = (NI)(n + ((NI)2));
	}
	goto LA12_;
LA14_: ;
	{
		result = n;
	}
LA12_: ;
	{
		if (!(((NU8)(buf_p0[((NI)(n - ((NI)1)))- 0])) == ((NU8)(110)) || ((NU8)(buf_p0[((NI)(n - ((NI)1)))- 0])) == ((NU8)(78)) || ((NU8)(buf_p0[((NI)(n - ((NI)1)))- 0])) == ((NU8)(68)) || ((NU8)(buf_p0[((NI)(n - ((NI)1)))- 0])) == ((NU8)(100)) || ((NU8)(buf_p0[((NI)(n - ((NI)1)))- 0])) == ((NU8)(41)))) goto LA19_;
		writeToBuffer__stdZformatfloat_u81(buf_p0, "nan");
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = ((NI)3);
	}
	goto LA17_;
LA19_: ;
	{
		if (!((NU8)(buf_p0[((NI)(n - ((NI)1)))- 0]) == (NU8)(70))) goto LA22_;
		{
			if (!((NU8)(buf_p0[(((NI)0))- 0]) == (NU8)(45))) goto LA26_;
			writeToBuffer__stdZformatfloat_u81(buf_p0, "-inf");
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			result = ((NI)4);
		}
		goto LA24_;
LA26_: ;
		{
			writeToBuffer__stdZformatfloat_u81(buf_p0, "inf");
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			result = ((NI)3);
		}
LA24_: ;
	}
	goto LA17_;
LA22_: ;
LA17_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addCstringN__stdZformatfloat_u5)(NimStringV2* result_p0, NCSTRING buf_p1, NI buflen_p2) {
	NI oldLen;
	NI newLen;
	void* T1_;
	oldLen = (*result_p0).len;
	newLen = (NI)(oldLen + buflen_p2);
	setLengthStrV2((&(*result_p0)), ((NI) (newLen)));
	T1_ = (void*)0;
	T1_ = memcpy(((void*) ((&(*result_p0).p->data[oldLen]))), ((void*) (buf_p1)), ((size_t) (buflen_p2)));
}
N_LIB_PRIVATE N_NIMCALL(void, addFloatSprintf__stdZformatfloat_u140)(NimStringV2* result_p0, NF x_p1) {
	tyArray__eVNFTutn6un5gcq48fQLdg buffer;
	NI n;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	n = writeFloatToBufferSprintf__stdZformatfloat_u90(buffer, x_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	addCstringN__stdZformatfloat_u5(result_p0, ((NCSTRING) ((&buffer[(((NI)0))- 0]))), n);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}

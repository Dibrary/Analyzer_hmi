/**
 * File: BitSet.h
 * Autogenerated on Mon Aug 04 16:04:22 EDT 2008 based on
 * BitSet.java
 * for the Java class
 * java/util/BitSet
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef BITSET_H
#define BITSET_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JString;
class BitSet;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED BitSet : public BaseJavaClass // CPPClass.getClassDeclaration
{
public: 
	int cardinality();
	int hashCode();
	int length();
	int size();
	BitSet();
	void clear();
	unsigned char isEmpty();
	int nextClearBit(int param0);
	int nextSetBit(int param0);
	BitSet(int param0);
	void clear(int param0);
	void flip(int param0);
	void set(int param0);
	unsigned char get(int param0);
	void clear(int param0, int param1);
	void flip(int param0, int param1);
	void set(int param0, int param1);
	void set(int param0, int param1, unsigned char param2);
	void set(int param0, unsigned char param1);
	JString toString();
	BitSet get(int param0, int param1);
#if 0
	void and(BitSet& param0);
#endif
	void andNot(BitSet& param0);
#if 0
	void or(BitSet& param0);
#endif
#if 0
	void xor(BitSet& param0);
#endif
	unsigned char intersects(BitSet& param0);
	~BitSet();
	// No public Java copy constructor; creating one:
	BitSet(const BitSet &that);
	// Creating assignment operator declaration:
	BitSet &operator=(const BitSet &that);

private:
	jmethodID mid_cardinality27;
	jmethodID mid_hashCode28;
	jmethodID mid_length29;
	jmethodID mid_size30;
	jmethodID mid_BitSet31;
	jmethodID mid_clear32;
	jmethodID mid_isEmpty33;
	jmethodID mid_nextClearBit34;
	jmethodID mid_nextSetBit35;
	jmethodID mid_BitSet36;
	jmethodID mid_clear37;
	jmethodID mid_flip38;
	jmethodID mid_set39;
	jmethodID mid_get40;
	jmethodID mid_clear41;
	jmethodID mid_flip42;
	jmethodID mid_set43;
	jmethodID mid_set44;
	jmethodID mid_set45;
	jmethodID mid_toString46;
	jmethodID mid_get47;
	jmethodID mid_and48;
	jmethodID mid_andNot49;
	jmethodID mid_or50;
	jmethodID mid_xor51;
	jmethodID mid_intersects52;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_BITSET_T
#define EXTERN_TYPEDEF_BITSET_T
	typedef void* BITSET_T;
#endif /* EXTERN_TYPEDEF_BITSET_T */

	EXPORTED int BitSet_cardinality(BITSET_T c_bit_set);
	EXPORTED int BitSet_hashCode(BITSET_T c_bit_set);
	EXPORTED int BitSet_length(BITSET_T c_bit_set);
	EXPORTED int BitSet_size(BITSET_T c_bit_set);
	EXPORTED BITSET_T BitSet_Create();
	EXPORTED void BitSet_clear(BITSET_T c_bit_set);
	EXPORTED unsigned char BitSet_isEmpty(BITSET_T c_bit_set);
	EXPORTED int BitSet_nextClearBit(BITSET_T c_bit_set, int param0);
	EXPORTED int BitSet_nextSetBit(BITSET_T c_bit_set, int param0);
	EXPORTED BITSET_T BitSet_Create_1(int param0);
	EXPORTED void BitSet_clear_1(BITSET_T c_bit_set, int param0);
	EXPORTED void BitSet_flip(BITSET_T c_bit_set, int param0);
	EXPORTED void BitSet_set(BITSET_T c_bit_set, int param0);
	EXPORTED unsigned char BitSet_get(BITSET_T c_bit_set, int param0);
	EXPORTED void BitSet_clear_2(BITSET_T c_bit_set, int param0, int param1);
	EXPORTED void BitSet_flip_1(BITSET_T c_bit_set, int param0, int param1);
	EXPORTED void BitSet_set_1(BITSET_T c_bit_set, int param0, int param1);
	EXPORTED void BitSet_set_2(BITSET_T c_bit_set, int param0, int param1, unsigned char param2);
	EXPORTED void BitSet_set_3(BITSET_T c_bit_set, int param0, unsigned char param1);
	EXPORTED void BitSet_toString(BITSET_T c_bit_set, JSTRING_T retval);
	EXPORTED void BitSet_get_1(BITSET_T c_bit_set, int param0, int param1, BITSET_T retval);
	EXPORTED void BitSet_and(BITSET_T c_bit_set, BITSET_T param0);
	EXPORTED void BitSet_andNot(BITSET_T c_bit_set, BITSET_T param0);
	EXPORTED void BitSet_or(BITSET_T c_bit_set, BITSET_T param0);
	EXPORTED void BitSet_xor(BITSET_T c_bit_set, BITSET_T param0);
	EXPORTED unsigned char BitSet_intersects(BITSET_T c_bit_set, BITSET_T param0);
	EXPORTED void BitSet_Destroy(BITSET_T bit_set);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL BitSet_cardinality_stdcall(BITSET_T c_bit_set);
	EXPORTED int STDCALL BitSet_hashCode_stdcall(BITSET_T c_bit_set);
	EXPORTED int STDCALL BitSet_length_stdcall(BITSET_T c_bit_set);
	EXPORTED int STDCALL BitSet_size_stdcall(BITSET_T c_bit_set);
	EXPORTED BITSET_T STDCALL BitSet_Create_stdcall();
	EXPORTED void STDCALL BitSet_clear_stdcall(BITSET_T c_bit_set);
	EXPORTED unsigned char STDCALL BitSet_isEmpty_stdcall(BITSET_T c_bit_set);
	EXPORTED int STDCALL BitSet_nextClearBit_stdcall(BITSET_T c_bit_set, int param0);
	EXPORTED int STDCALL BitSet_nextSetBit_stdcall(BITSET_T c_bit_set, int param0);
	EXPORTED BITSET_T STDCALL BitSet_Create_stdcall_1(int param0);
	EXPORTED void STDCALL BitSet_clear_stdcall_1(BITSET_T c_bit_set, int param0);
	EXPORTED void STDCALL BitSet_flip_stdcall(BITSET_T c_bit_set, int param0);
	EXPORTED void STDCALL BitSet_set_stdcall(BITSET_T c_bit_set, int param0);
	EXPORTED unsigned char STDCALL BitSet_get_stdcall(BITSET_T c_bit_set, int param0);
	EXPORTED void STDCALL BitSet_clear_stdcall_2(BITSET_T c_bit_set, int param0, int param1);
	EXPORTED void STDCALL BitSet_flip_stdcall_1(BITSET_T c_bit_set, int param0, int param1);
	EXPORTED void STDCALL BitSet_set_stdcall_1(BITSET_T c_bit_set, int param0, int param1);
	EXPORTED void STDCALL BitSet_set_stdcall_2(BITSET_T c_bit_set, int param0, int param1, unsigned char param2);
	EXPORTED void STDCALL BitSet_set_stdcall_3(BITSET_T c_bit_set, int param0, unsigned char param1);
	EXPORTED void STDCALL BitSet_toString_stdcall(BITSET_T c_bit_set, JSTRING_T retval);
	EXPORTED void STDCALL BitSet_get_stdcall_1(BITSET_T c_bit_set, int param0, int param1, BITSET_T retval);
	EXPORTED void STDCALL BitSet_and_stdcall(BITSET_T c_bit_set, BITSET_T param0);
	EXPORTED void STDCALL BitSet_andNot_stdcall(BITSET_T c_bit_set, BITSET_T param0);
	EXPORTED void STDCALL BitSet_or_stdcall(BITSET_T c_bit_set, BITSET_T param0);
	EXPORTED void STDCALL BitSet_xor_stdcall(BITSET_T c_bit_set, BITSET_T param0);
	EXPORTED unsigned char STDCALL BitSet_intersects_stdcall(BITSET_T c_bit_set, BITSET_T param0);
	EXPORTED void STDCALL BitSet_Destroy_stdcall(BITSET_T bit_set);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* BITSET_H */

/**
 * File: Iterator.h
 * Autogenerated on Mon Aug 04 16:04:22 EDT 2008 based on
 * Iterator.java
 * for the Java class
 * java/util/Iterator
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ITERATOR_H
#define ITERATOR_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED Iterator : public BaseJavaClass // CPPClass.getClassDeclaration
{
public: 
	void remove();
	unsigned char hasNext();
	~Iterator();
	// No public default Java constructor; creating one:
	Iterator();
	// No public Java copy constructor; creating one:
	Iterator(const Iterator &that);
	// Creating assignment operator declaration:
	Iterator &operator=(const Iterator &that);

private:
	jmethodID mid_remove92;
	jmethodID mid_hasNext93;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_ITERATOR_T
#define EXTERN_TYPEDEF_ITERATOR_T
	typedef void* ITERATOR_T;
#endif /* EXTERN_TYPEDEF_ITERATOR_T */

	// No public default Java constructor; creating one:
	EXPORTED ITERATOR_T Iterator_Create();
	EXPORTED void Iterator_remove(ITERATOR_T c_iterator);
	EXPORTED unsigned char Iterator_hasNext(ITERATOR_T c_iterator);
	EXPORTED void Iterator_Destroy(ITERATOR_T iterator);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL Iterator_remove_stdcall(ITERATOR_T c_iterator);
	EXPORTED unsigned char STDCALL Iterator_hasNext_stdcall(ITERATOR_T c_iterator);
	EXPORTED void STDCALL Iterator_Destroy_stdcall(ITERATOR_T iterator);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ITERATOR_H */

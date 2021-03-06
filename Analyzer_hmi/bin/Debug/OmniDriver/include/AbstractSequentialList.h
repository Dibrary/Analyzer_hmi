/**
 * File: AbstractSequentialList.h
 * Autogenerated on Mon Aug 04 16:04:22 EDT 2008 based on
 * AbstractSequentialList.java
 * for the Java class
 * java/util/AbstractSequentialList
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ABSTRACTSEQUENTIALLIST_H
#define ABSTRACTSEQUENTIALLIST_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "AbstractList.h"
#include "Collection.h"
#include "Iterator.h"
#include "ListIterator.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class AbstractList;
class Collection;
class Iterator;
class ListIterator;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED AbstractSequentialList : public AbstractList // CPPClass.getClassDeclaration
{
public: 
	unsigned char addAll(int param0, Collection& param1);
	Iterator iterator();
	ListIterator listIterator(int param0);
	~AbstractSequentialList();
	// No public default Java constructor; creating one:
	AbstractSequentialList();
	// No public Java copy constructor; creating one:
	AbstractSequentialList(const AbstractSequentialList &that);
	// Creating assignment operator declaration:
	AbstractSequentialList &operator=(const AbstractSequentialList &that);

private:
	jmethodID mid_addAll24;
	jmethodID mid_iterator25;
	jmethodID mid_listIterator26;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_ABSTRACTLIST_T
#define EXTERN_TYPEDEF_ABSTRACTLIST_T
	typedef void* ABSTRACTLIST_T;
#endif /* EXTERN_TYPEDEF_ABSTRACTLIST_T */
#ifndef EXTERN_TYPEDEF_COLLECTION_T
#define EXTERN_TYPEDEF_COLLECTION_T
	typedef void* COLLECTION_T;
#endif /* EXTERN_TYPEDEF_COLLECTION_T */
#ifndef EXTERN_TYPEDEF_ITERATOR_T
#define EXTERN_TYPEDEF_ITERATOR_T
	typedef void* ITERATOR_T;
#endif /* EXTERN_TYPEDEF_ITERATOR_T */
#ifndef EXTERN_TYPEDEF_LISTITERATOR_T
#define EXTERN_TYPEDEF_LISTITERATOR_T
	typedef void* LISTITERATOR_T;
#endif /* EXTERN_TYPEDEF_LISTITERATOR_T */
#ifndef EXTERN_TYPEDEF_ABSTRACTSEQUENTIALLIST_T
#define EXTERN_TYPEDEF_ABSTRACTSEQUENTIALLIST_T
	typedef void* ABSTRACTSEQUENTIALLIST_T;
#endif /* EXTERN_TYPEDEF_ABSTRACTSEQUENTIALLIST_T */

	// No public default Java constructor; creating one:
	EXPORTED ABSTRACTSEQUENTIALLIST_T AbstractSequentialList_Create();
	EXPORTED unsigned char AbstractSequentialList_addAll(ABSTRACTSEQUENTIALLIST_T c_abstract_sequential_list, int param0, COLLECTION_T param1);
	EXPORTED void AbstractSequentialList_iterator(ABSTRACTSEQUENTIALLIST_T c_abstract_sequential_list, ITERATOR_T retval);
	EXPORTED void AbstractSequentialList_listIterator(ABSTRACTSEQUENTIALLIST_T c_abstract_sequential_list, int param0, LISTITERATOR_T retval);
	EXPORTED void AbstractSequentialList_Destroy(ABSTRACTSEQUENTIALLIST_T abstract_sequential_list);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED unsigned char STDCALL AbstractSequentialList_addAll_stdcall(ABSTRACTSEQUENTIALLIST_T c_abstract_sequential_list, int param0, COLLECTION_T param1);
	EXPORTED void STDCALL AbstractSequentialList_iterator_stdcall(ABSTRACTSEQUENTIALLIST_T c_abstract_sequential_list, ITERATOR_T retval);
	EXPORTED void STDCALL AbstractSequentialList_listIterator_stdcall(ABSTRACTSEQUENTIALLIST_T c_abstract_sequential_list, int param0, LISTITERATOR_T retval);
	EXPORTED void STDCALL AbstractSequentialList_Destroy_stdcall(ABSTRACTSEQUENTIALLIST_T abstract_sequential_list);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ABSTRACTSEQUENTIALLIST_H */

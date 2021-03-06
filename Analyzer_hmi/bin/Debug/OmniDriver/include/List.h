/**
 * File: List.h
 * Autogenerated on Mon Aug 04 16:04:22 EDT 2008 based on
 * List.java
 * for the Java class
 * java/util/List
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef LIST_H
#define LIST_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Collection.h"
#include "Iterator.h"
#include "ListIterator.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Collection;
class Iterator;
class List;
class ListIterator;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED List : public BaseJavaClass // CPPClass.getClassDeclaration
{
public: 
	int hashCode();
	int size();
	void clear();
	unsigned char isEmpty();
	unsigned char addAll(int param0, Collection& param1);
	unsigned char addAll(Collection& param0);
	unsigned char containsAll(Collection& param0);
	unsigned char removeAll(Collection& param0);
	unsigned char retainAll(Collection& param0);
	Iterator iterator();
	List subList(int param0, int param1);
	ListIterator listIterator();
	ListIterator listIterator(int param0);
	~List();
	// No public default Java constructor; creating one:
	List();
	// No public Java copy constructor; creating one:
	List(const List &that);
	// Creating assignment operator declaration:
	List &operator=(const List &that);

private:
	jmethodID mid_hashCode101;
	jmethodID mid_size102;
	jmethodID mid_clear103;
	jmethodID mid_isEmpty104;
	jmethodID mid_addAll105;
	jmethodID mid_addAll106;
	jmethodID mid_containsAll107;
	jmethodID mid_removeAll108;
	jmethodID mid_retainAll109;
	jmethodID mid_iterator110;
	jmethodID mid_subList111;
	jmethodID mid_listIterator112;
	jmethodID mid_listIterator113;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_COLLECTION_T
#define EXTERN_TYPEDEF_COLLECTION_T
	typedef void* COLLECTION_T;
#endif /* EXTERN_TYPEDEF_COLLECTION_T */
#ifndef EXTERN_TYPEDEF_ITERATOR_T
#define EXTERN_TYPEDEF_ITERATOR_T
	typedef void* ITERATOR_T;
#endif /* EXTERN_TYPEDEF_ITERATOR_T */
#ifndef EXTERN_TYPEDEF_LIST_T
#define EXTERN_TYPEDEF_LIST_T
	typedef void* LIST_T;
#endif /* EXTERN_TYPEDEF_LIST_T */
#ifndef EXTERN_TYPEDEF_LISTITERATOR_T
#define EXTERN_TYPEDEF_LISTITERATOR_T
	typedef void* LISTITERATOR_T;
#endif /* EXTERN_TYPEDEF_LISTITERATOR_T */

	// No public default Java constructor; creating one:
	EXPORTED LIST_T List_Create();
	EXPORTED int List_hashCode(LIST_T c_list);
	EXPORTED int List_size(LIST_T c_list);
	EXPORTED void List_clear(LIST_T c_list);
	EXPORTED unsigned char List_isEmpty(LIST_T c_list);
	EXPORTED unsigned char List_addAll(LIST_T c_list, int param0, COLLECTION_T param1);
	EXPORTED unsigned char List_addAll_1(LIST_T c_list, COLLECTION_T param0);
	EXPORTED unsigned char List_containsAll(LIST_T c_list, COLLECTION_T param0);
	EXPORTED unsigned char List_removeAll(LIST_T c_list, COLLECTION_T param0);
	EXPORTED unsigned char List_retainAll(LIST_T c_list, COLLECTION_T param0);
	EXPORTED void List_iterator(LIST_T c_list, ITERATOR_T retval);
	EXPORTED void List_subList(LIST_T c_list, int param0, int param1, LIST_T retval);
	EXPORTED void List_listIterator(LIST_T c_list, LISTITERATOR_T retval);
	EXPORTED void List_listIterator_1(LIST_T c_list, int param0, LISTITERATOR_T retval);
	EXPORTED void List_Destroy(LIST_T list);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL List_hashCode_stdcall(LIST_T c_list);
	EXPORTED int STDCALL List_size_stdcall(LIST_T c_list);
	EXPORTED void STDCALL List_clear_stdcall(LIST_T c_list);
	EXPORTED unsigned char STDCALL List_isEmpty_stdcall(LIST_T c_list);
	EXPORTED unsigned char STDCALL List_addAll_stdcall(LIST_T c_list, int param0, COLLECTION_T param1);
	EXPORTED unsigned char STDCALL List_addAll_stdcall_1(LIST_T c_list, COLLECTION_T param0);
	EXPORTED unsigned char STDCALL List_containsAll_stdcall(LIST_T c_list, COLLECTION_T param0);
	EXPORTED unsigned char STDCALL List_removeAll_stdcall(LIST_T c_list, COLLECTION_T param0);
	EXPORTED unsigned char STDCALL List_retainAll_stdcall(LIST_T c_list, COLLECTION_T param0);
	EXPORTED void STDCALL List_iterator_stdcall(LIST_T c_list, ITERATOR_T retval);
	EXPORTED void STDCALL List_subList_stdcall(LIST_T c_list, int param0, int param1, LIST_T retval);
	EXPORTED void STDCALL List_listIterator_stdcall(LIST_T c_list, LISTITERATOR_T retval);
	EXPORTED void STDCALL List_listIterator_stdcall_1(LIST_T c_list, int param0, LISTITERATOR_T retval);
	EXPORTED void STDCALL List_Destroy_stdcall(LIST_T list);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* LIST_H */

/**
 * File: AbstractCollection.h
 * Autogenerated on Mon Aug 04 16:04:22 EDT 2008 based on
 * AbstractCollection.java
 * for the Java class
 * java/util/AbstractCollection
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ABSTRACTCOLLECTION_H
#define ABSTRACTCOLLECTION_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#include "Collection.h"
#include "Iterator.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JString;
class Collection;
class Iterator;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED AbstractCollection : public BaseJavaClass // CPPClass.getClassDeclaration
{
public: 
	int size();
	void clear();
	unsigned char isEmpty();
	JString toString();
	unsigned char addAll(Collection& param0);
	unsigned char containsAll(Collection& param0);
	unsigned char removeAll(Collection& param0);
	unsigned char retainAll(Collection& param0);
	Iterator iterator();
	~AbstractCollection();
	// No public default Java constructor; creating one:
	AbstractCollection();
	// No public Java copy constructor; creating one:
	AbstractCollection(const AbstractCollection &that);
	// Creating assignment operator declaration:
	AbstractCollection &operator=(const AbstractCollection &that);

private:
	jmethodID mid_size8;
	jmethodID mid_clear9;
	jmethodID mid_isEmpty10;
	jmethodID mid_toString11;
	jmethodID mid_addAll12;
	jmethodID mid_containsAll13;
	jmethodID mid_removeAll14;
	jmethodID mid_retainAll15;
	jmethodID mid_iterator16;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_COLLECTION_T
#define EXTERN_TYPEDEF_COLLECTION_T
	typedef void* COLLECTION_T;
#endif /* EXTERN_TYPEDEF_COLLECTION_T */
#ifndef EXTERN_TYPEDEF_ITERATOR_T
#define EXTERN_TYPEDEF_ITERATOR_T
	typedef void* ITERATOR_T;
#endif /* EXTERN_TYPEDEF_ITERATOR_T */
#ifndef EXTERN_TYPEDEF_ABSTRACTCOLLECTION_T
#define EXTERN_TYPEDEF_ABSTRACTCOLLECTION_T
	typedef void* ABSTRACTCOLLECTION_T;
#endif /* EXTERN_TYPEDEF_ABSTRACTCOLLECTION_T */

	// No public default Java constructor; creating one:
	EXPORTED ABSTRACTCOLLECTION_T AbstractCollection_Create();
	EXPORTED int AbstractCollection_size(ABSTRACTCOLLECTION_T c_abstract_collection);
	EXPORTED void AbstractCollection_clear(ABSTRACTCOLLECTION_T c_abstract_collection);
	EXPORTED unsigned char AbstractCollection_isEmpty(ABSTRACTCOLLECTION_T c_abstract_collection);
	EXPORTED void AbstractCollection_toString(ABSTRACTCOLLECTION_T c_abstract_collection, JSTRING_T retval);
	EXPORTED unsigned char AbstractCollection_addAll(ABSTRACTCOLLECTION_T c_abstract_collection, COLLECTION_T param0);
	EXPORTED unsigned char AbstractCollection_containsAll(ABSTRACTCOLLECTION_T c_abstract_collection, COLLECTION_T param0);
	EXPORTED unsigned char AbstractCollection_removeAll(ABSTRACTCOLLECTION_T c_abstract_collection, COLLECTION_T param0);
	EXPORTED unsigned char AbstractCollection_retainAll(ABSTRACTCOLLECTION_T c_abstract_collection, COLLECTION_T param0);
	EXPORTED void AbstractCollection_iterator(ABSTRACTCOLLECTION_T c_abstract_collection, ITERATOR_T retval);
	EXPORTED void AbstractCollection_Destroy(ABSTRACTCOLLECTION_T abstract_collection);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL AbstractCollection_size_stdcall(ABSTRACTCOLLECTION_T c_abstract_collection);
	EXPORTED void STDCALL AbstractCollection_clear_stdcall(ABSTRACTCOLLECTION_T c_abstract_collection);
	EXPORTED unsigned char STDCALL AbstractCollection_isEmpty_stdcall(ABSTRACTCOLLECTION_T c_abstract_collection);
	EXPORTED void STDCALL AbstractCollection_toString_stdcall(ABSTRACTCOLLECTION_T c_abstract_collection, JSTRING_T retval);
	EXPORTED unsigned char STDCALL AbstractCollection_addAll_stdcall(ABSTRACTCOLLECTION_T c_abstract_collection, COLLECTION_T param0);
	EXPORTED unsigned char STDCALL AbstractCollection_containsAll_stdcall(ABSTRACTCOLLECTION_T c_abstract_collection, COLLECTION_T param0);
	EXPORTED unsigned char STDCALL AbstractCollection_removeAll_stdcall(ABSTRACTCOLLECTION_T c_abstract_collection, COLLECTION_T param0);
	EXPORTED unsigned char STDCALL AbstractCollection_retainAll_stdcall(ABSTRACTCOLLECTION_T c_abstract_collection, COLLECTION_T param0);
	EXPORTED void STDCALL AbstractCollection_iterator_stdcall(ABSTRACTCOLLECTION_T c_abstract_collection, ITERATOR_T retval);
	EXPORTED void STDCALL AbstractCollection_Destroy_stdcall(ABSTRACTCOLLECTION_T abstract_collection);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ABSTRACTCOLLECTION_H */
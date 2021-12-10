/**
 * File: EndProgramSequenceImpl.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * EndProgramSequenceImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/endprogramsequence/EndProgramSequenceImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ENDPROGRAMSEQUENCEIMPL_H
#define ENDPROGRAMSEQUENCEIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "FaulhaberCommandOnly.h"
#include "UniRS232.h"
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class FaulhaberCommandOnly;
class UniRS232;
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED EndProgramSequenceImpl : public FaulhaberCommandOnly // CPPClass.tag001
{
public: 
	EndProgramSequenceImpl(UniRS232& serPort);
	void endProgramSequence(Node& node);
	~EndProgramSequenceImpl();
	// No public default Java constructor; creating one:
	EndProgramSequenceImpl();
	// No public Java copy constructor; creating one:
	EndProgramSequenceImpl(const EndProgramSequenceImpl &that);
	// Creating assignment operator declaration:
	EndProgramSequenceImpl &operator=(const EndProgramSequenceImpl &that);

private:
	jmethodID mid_EndProgramSequenceImpl56;
	jmethodID mid_endProgramSequence57;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_FAULHABERCOMMANDONLY_T
#define EXTERN_TYPEDEF_FAULHABERCOMMANDONLY_T
	typedef void* FAULHABERCOMMANDONLY_T;
#endif /* EXTERN_TYPEDEF_FAULHABERCOMMANDONLY_T */
#ifndef EXTERN_TYPEDEF_UNIRS232_T
#define EXTERN_TYPEDEF_UNIRS232_T
	typedef void* UNIRS232_T;
#endif /* EXTERN_TYPEDEF_UNIRS232_T */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_ENDPROGRAMSEQUENCEIMPL_T
#define EXTERN_TYPEDEF_ENDPROGRAMSEQUENCEIMPL_T
	typedef void* ENDPROGRAMSEQUENCEIMPL_T;
#endif /* EXTERN_TYPEDEF_ENDPROGRAMSEQUENCEIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED ENDPROGRAMSEQUENCEIMPL_T EndProgramSequenceImpl_Create();
	EXPORTED ENDPROGRAMSEQUENCEIMPL_T EndProgramSequenceImpl_Create_1(UNIRS232_T serPort);
	EXPORTED void EndProgramSequenceImpl_endProgramSequence(ENDPROGRAMSEQUENCEIMPL_T c_end_program_sequence_impl, NODE_T node);
	EXPORTED void EndProgramSequenceImpl_Destroy(ENDPROGRAMSEQUENCEIMPL_T end_program_sequence_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED ENDPROGRAMSEQUENCEIMPL_T STDCALL EndProgramSequenceImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED void STDCALL EndProgramSequenceImpl_endProgramSequence_stdcall(ENDPROGRAMSEQUENCEIMPL_T c_end_program_sequence_impl, NODE_T node);
	EXPORTED void STDCALL EndProgramSequenceImpl_Destroy_stdcall(ENDPROGRAMSEQUENCEIMPL_T end_program_sequence_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ENDPROGRAMSEQUENCEIMPL_H */

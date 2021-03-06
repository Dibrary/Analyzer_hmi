/**
 * File: TableModel.h
 * Autogenerated on Mon Aug 04 16:04:22 EDT 2008 based on
 * TableModel.java
 * for the Java class
 * javax/swing/table/TableModel
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef TABLEMODEL_H
#define TABLEMODEL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#include "TableModelListener.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JString;
class TableModelListener;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED TableModel : public BaseJavaClass // CPPClass.getClassDeclaration
{
public: 
	int getColumnCount();
	int getRowCount();
	unsigned char isCellEditable(int param0, int param1);
	JString getColumnName(int param0);
	void addTableModelListener(TableModelListener& param0);
	void removeTableModelListener(TableModelListener& param0);
	~TableModel();
	// No public default Java constructor; creating one:
	TableModel();
	// No public Java copy constructor; creating one:
	TableModel(const TableModel &that);
	// Creating assignment operator declaration:
	TableModel &operator=(const TableModel &that);

private:
	jmethodID mid_getColumnCount186;
	jmethodID mid_getRowCount187;
	jmethodID mid_isCellEditable188;
	jmethodID mid_getColumnName189;
	jmethodID mid_addTableModelListener190;
	jmethodID mid_removeTableModelListener191;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_TABLEMODELLISTENER_T
#define EXTERN_TYPEDEF_TABLEMODELLISTENER_T
	typedef void* TABLEMODELLISTENER_T;
#endif /* EXTERN_TYPEDEF_TABLEMODELLISTENER_T */
#ifndef EXTERN_TYPEDEF_TABLEMODEL_T
#define EXTERN_TYPEDEF_TABLEMODEL_T
	typedef void* TABLEMODEL_T;
#endif /* EXTERN_TYPEDEF_TABLEMODEL_T */

	// No public default Java constructor; creating one:
	EXPORTED TABLEMODEL_T TableModel_Create();
	EXPORTED int TableModel_getColumnCount(TABLEMODEL_T c_table_model);
	EXPORTED int TableModel_getRowCount(TABLEMODEL_T c_table_model);
	EXPORTED unsigned char TableModel_isCellEditable(TABLEMODEL_T c_table_model, int param0, int param1);
	EXPORTED void TableModel_getColumnName(TABLEMODEL_T c_table_model, int param0, JSTRING_T retval);
	EXPORTED void TableModel_addTableModelListener(TABLEMODEL_T c_table_model, TABLEMODELLISTENER_T param0);
	EXPORTED void TableModel_removeTableModelListener(TABLEMODEL_T c_table_model, TABLEMODELLISTENER_T param0);
	EXPORTED void TableModel_Destroy(TABLEMODEL_T table_model);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL TableModel_getColumnCount_stdcall(TABLEMODEL_T c_table_model);
	EXPORTED int STDCALL TableModel_getRowCount_stdcall(TABLEMODEL_T c_table_model);
	EXPORTED unsigned char STDCALL TableModel_isCellEditable_stdcall(TABLEMODEL_T c_table_model, int param0, int param1);
	EXPORTED void STDCALL TableModel_getColumnName_stdcall(TABLEMODEL_T c_table_model, int param0, JSTRING_T retval);
	EXPORTED void STDCALL TableModel_addTableModelListener_stdcall(TABLEMODEL_T c_table_model, TABLEMODELLISTENER_T param0);
	EXPORTED void STDCALL TableModel_removeTableModelListener_stdcall(TABLEMODEL_T c_table_model, TABLEMODELLISTENER_T param0);
	EXPORTED void STDCALL TableModel_Destroy_stdcall(TABLEMODEL_T table_model);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* TABLEMODEL_H */

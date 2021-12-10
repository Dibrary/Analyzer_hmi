/**
 * File: Date.h
 * Autogenerated on Mon Aug 04 16:04:22 EDT 2008 based on
 * Date.java
 * for the Java class
 * java/util/Date
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef DATE_H
#define DATE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED Date : public BaseJavaClass // CPPClass.getClassDeclaration
{
public: 
	int getDate();
	int getDay();
	int getHours();
	int getMinutes();
	int getMonth();
	int getSeconds();
	int getTimezoneOffset();
	int getYear();
	int hashCode();
	long long getTime();
	Date();
	void setDate(int param0);
	void setHours(int param0);
	void setMinutes(int param0);
	void setMonth(int param0);
	void setSeconds(int param0);
	void setYear(int param0);
	Date(int param0, int param1, int param2);
	Date(int param0, int param1, int param2, int param3, int param4);
	long long UTC(int param0, int param1, int param2, int param3, int param4, int param5);
	Date(int param0, int param1, int param2, int param3, int param4, int param5);
	Date(long long param0);
	void setTime(long long param0);
	JString toGMTString();
	JString toLocaleString();
	JString toString();
	long long parse(JString& param0);
	Date(JString& param0);
	~Date();
	// No public Java copy constructor; creating one:
	Date(const Date &that);
	// Creating assignment operator declaration:
	Date &operator=(const Date &that);

private:
	jmethodID mid_getDate62;
	jmethodID mid_getDay63;
	jmethodID mid_getHours64;
	jmethodID mid_getMinutes65;
	jmethodID mid_getMonth66;
	jmethodID mid_getSeconds67;
	jmethodID mid_getTimezoneOffset68;
	jmethodID mid_getYear69;
	jmethodID mid_hashCode70;
	jmethodID mid_getTime71;
	jmethodID mid_Date72;
	jmethodID mid_setDate73;
	jmethodID mid_setHours74;
	jmethodID mid_setMinutes75;
	jmethodID mid_setMonth76;
	jmethodID mid_setSeconds77;
	jmethodID mid_setYear78;
	jmethodID mid_Date79;
	jmethodID mid_Date80;
	jmethodID mid_UTC81;
	jmethodID mid_Date82;
	jmethodID mid_Date83;
	jmethodID mid_setTime84;
	jmethodID mid_toGMTString85;
	jmethodID mid_toLocaleString86;
	jmethodID mid_toString87;
	jmethodID mid_parse88;
	jmethodID mid_Date89;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_DATE_T
#define EXTERN_TYPEDEF_DATE_T
	typedef void* DATE_T;
#endif /* EXTERN_TYPEDEF_DATE_T */

	EXPORTED int Date_getDate(DATE_T c_date);
	EXPORTED int Date_getDay(DATE_T c_date);
	EXPORTED int Date_getHours(DATE_T c_date);
	EXPORTED int Date_getMinutes(DATE_T c_date);
	EXPORTED int Date_getMonth(DATE_T c_date);
	EXPORTED int Date_getSeconds(DATE_T c_date);
	EXPORTED int Date_getTimezoneOffset(DATE_T c_date);
	EXPORTED int Date_getYear(DATE_T c_date);
	EXPORTED int Date_hashCode(DATE_T c_date);
	EXPORTED long long Date_getTime(DATE_T c_date);
	EXPORTED DATE_T Date_Create();
	EXPORTED void Date_setDate(DATE_T c_date, int param0);
	EXPORTED void Date_setHours(DATE_T c_date, int param0);
	EXPORTED void Date_setMinutes(DATE_T c_date, int param0);
	EXPORTED void Date_setMonth(DATE_T c_date, int param0);
	EXPORTED void Date_setSeconds(DATE_T c_date, int param0);
	EXPORTED void Date_setYear(DATE_T c_date, int param0);
	EXPORTED DATE_T Date_Create_1(int param0, int param1, int param2);
	EXPORTED DATE_T Date_Create_2(int param0, int param1, int param2, int param3, int param4);
	EXPORTED long long Date_UTC(DATE_T c_date, int param0, int param1, int param2, int param3, int param4, int param5);
	EXPORTED DATE_T Date_Create_3(int param0, int param1, int param2, int param3, int param4, int param5);
	EXPORTED DATE_T Date_Create_4(long long param0);
	EXPORTED void Date_setTime(DATE_T c_date, long long param0);
	EXPORTED void Date_toGMTString(DATE_T c_date, JSTRING_T retval);
	EXPORTED void Date_toLocaleString(DATE_T c_date, JSTRING_T retval);
	EXPORTED void Date_toString(DATE_T c_date, JSTRING_T retval);
	EXPORTED long long Date_parse(DATE_T c_date, JSTRING_T param0);
	EXPORTED DATE_T Date_Create_5(JSTRING_T param0);
	EXPORTED void Date_Destroy(DATE_T date);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL Date_getDate_stdcall(DATE_T c_date);
	EXPORTED int STDCALL Date_getDay_stdcall(DATE_T c_date);
	EXPORTED int STDCALL Date_getHours_stdcall(DATE_T c_date);
	EXPORTED int STDCALL Date_getMinutes_stdcall(DATE_T c_date);
	EXPORTED int STDCALL Date_getMonth_stdcall(DATE_T c_date);
	EXPORTED int STDCALL Date_getSeconds_stdcall(DATE_T c_date);
	EXPORTED int STDCALL Date_getTimezoneOffset_stdcall(DATE_T c_date);
	EXPORTED int STDCALL Date_getYear_stdcall(DATE_T c_date);
	EXPORTED int STDCALL Date_hashCode_stdcall(DATE_T c_date);
	EXPORTED long long STDCALL Date_getTime_stdcall(DATE_T c_date);
	EXPORTED DATE_T STDCALL Date_Create_stdcall();
	EXPORTED void STDCALL Date_setDate_stdcall(DATE_T c_date, int param0);
	EXPORTED void STDCALL Date_setHours_stdcall(DATE_T c_date, int param0);
	EXPORTED void STDCALL Date_setMinutes_stdcall(DATE_T c_date, int param0);
	EXPORTED void STDCALL Date_setMonth_stdcall(DATE_T c_date, int param0);
	EXPORTED void STDCALL Date_setSeconds_stdcall(DATE_T c_date, int param0);
	EXPORTED void STDCALL Date_setYear_stdcall(DATE_T c_date, int param0);
	EXPORTED DATE_T STDCALL Date_Create_stdcall_1(int param0, int param1, int param2);
	EXPORTED DATE_T STDCALL Date_Create_stdcall_2(int param0, int param1, int param2, int param3, int param4);
	EXPORTED long long STDCALL Date_UTC_stdcall(DATE_T c_date, int param0, int param1, int param2, int param3, int param4, int param5);
	EXPORTED DATE_T STDCALL Date_Create_stdcall_3(int param0, int param1, int param2, int param3, int param4, int param5);
	EXPORTED DATE_T STDCALL Date_Create_stdcall_4(long long param0);
	EXPORTED void STDCALL Date_setTime_stdcall(DATE_T c_date, long long param0);
	EXPORTED void STDCALL Date_toGMTString_stdcall(DATE_T c_date, JSTRING_T retval);
	EXPORTED void STDCALL Date_toLocaleString_stdcall(DATE_T c_date, JSTRING_T retval);
	EXPORTED void STDCALL Date_toString_stdcall(DATE_T c_date, JSTRING_T retval);
	EXPORTED long long STDCALL Date_parse_stdcall(DATE_T c_date, JSTRING_T param0);
	EXPORTED DATE_T STDCALL Date_Create_stdcall_5(JSTRING_T param0);
	EXPORTED void STDCALL Date_Destroy_stdcall(DATE_T date);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* DATE_H */
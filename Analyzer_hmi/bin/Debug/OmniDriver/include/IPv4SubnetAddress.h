/**
 * File: IPv4SubnetAddress.h
 * Autogenerated on Fri Mar 23 13:38:38 EDT 2018 based on
 * IPv4SubnetAddress.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/networkconfigure/IPv4SubnetAddress
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef IPV4SUBNETADDRESS_H
#define IPV4SUBNETADDRESS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "IPv4Address.h"
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class IPv4Address;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED IPv4SubnetAddress : public IPv4Address // CPPClass.tag001
{
public: 
	IPv4SubnetAddress(CharArray& address, int length);
	int getMaskLength();
	IPv4SubnetAddress(CharArray& address, CharArray& netmask);
	JString toString();
	~IPv4SubnetAddress();
	// No public default Java constructor; creating one:
	IPv4SubnetAddress();
	// No public Java copy constructor; creating one:
	IPv4SubnetAddress(const IPv4SubnetAddress &that);
	// Creating assignment operator declaration:
	IPv4SubnetAddress &operator=(const IPv4SubnetAddress &that);

private:
	jmethodID mid_IPv4SubnetAddress1782;
	jmethodID mid_getMaskLength1783;
	jmethodID mid_IPv4SubnetAddress1784;
	jmethodID mid_toString1785;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_IPV4ADDRESS_T
#define EXTERN_TYPEDEF_IPV4ADDRESS_T
	typedef void* IPV4ADDRESS_T;
#endif /* EXTERN_TYPEDEF_IPV4ADDRESS_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_IPV4SUBNETADDRESS_T
#define EXTERN_TYPEDEF_IPV4SUBNETADDRESS_T
	typedef void* IPV4SUBNETADDRESS_T;
#endif /* EXTERN_TYPEDEF_IPV4SUBNETADDRESS_T */

	// No public default Java constructor; creating one:
	EXPORTED IPV4SUBNETADDRESS_T IPv4SubnetAddress_Create();
	EXPORTED IPV4SUBNETADDRESS_T IPv4SubnetAddress_Create_1(CHARARRAY_T address, int length);
	EXPORTED int IPv4SubnetAddress_getMaskLength(IPV4SUBNETADDRESS_T c_ipv4subnetaddress);
	EXPORTED IPV4SUBNETADDRESS_T IPv4SubnetAddress_Create_2(CHARARRAY_T address, CHARARRAY_T netmask);
	EXPORTED void IPv4SubnetAddress_toString(IPV4SUBNETADDRESS_T c_ipv4subnetaddress, JSTRING_T retval);
	EXPORTED void IPv4SubnetAddress_Destroy(IPV4SUBNETADDRESS_T ipv4subnetaddress);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED IPV4SUBNETADDRESS_T STDCALL IPv4SubnetAddress_Create_stdcall_1(CHARARRAY_T address, int length);
	EXPORTED int STDCALL IPv4SubnetAddress_getMaskLength_stdcall(IPV4SUBNETADDRESS_T c_ipv4subnetaddress);
	EXPORTED IPV4SUBNETADDRESS_T STDCALL IPv4SubnetAddress_Create_stdcall_2(CHARARRAY_T address, CHARARRAY_T netmask);
	EXPORTED void STDCALL IPv4SubnetAddress_toString_stdcall(IPV4SUBNETADDRESS_T c_ipv4subnetaddress, JSTRING_T retval);
	EXPORTED void STDCALL IPv4SubnetAddress_Destroy_stdcall(IPV4SUBNETADDRESS_T ipv4subnetaddress);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* IPV4SUBNETADDRESS_H */

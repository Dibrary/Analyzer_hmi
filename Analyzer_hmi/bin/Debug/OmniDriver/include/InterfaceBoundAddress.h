/**
 * File: InterfaceBoundAddress.h
 * Autogenerated on Fri Mar 23 13:38:38 EDT 2018 based on
 * InterfaceBoundAddress.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/networkconfigure/InterfaceBoundAddress
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef INTERFACEBOUNDADDRESS_H
#define INTERFACEBOUNDADDRESS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "InetSocketAddress.h"
#include "InetAddress.h"
#include "NetworkInterface.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class InetSocketAddress;
class InetAddress;
class NetworkInterface;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED InterfaceBoundAddress : public BaseJavaClass // CPPClass.tag001
{
public: 
	InterfaceBoundAddress(InetSocketAddress& group, InetAddress& localAddress, NetworkInterface& intf);
	InetAddress getInterfaceAddress();
	InetSocketAddress getGroupAddress();
	NetworkInterface getNetworkInterface();
	~InterfaceBoundAddress();
	// No public default Java constructor; creating one:
	InterfaceBoundAddress();
	// No public Java copy constructor; creating one:
	InterfaceBoundAddress(const InterfaceBoundAddress &that);
	// Creating assignment operator declaration:
	InterfaceBoundAddress &operator=(const InterfaceBoundAddress &that);

private:
	jmethodID mid_InterfaceBoundAddress1786;
	jmethodID mid_getInterfaceAddress1787;
	jmethodID mid_getGroupAddress1788;
	jmethodID mid_getNetworkInterface1789;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_INETSOCKETADDRESS_T
#define EXTERN_TYPEDEF_INETSOCKETADDRESS_T
	typedef void* INETSOCKETADDRESS_T;
#endif /* EXTERN_TYPEDEF_INETSOCKETADDRESS_T */
#ifndef EXTERN_TYPEDEF_INETADDRESS_T
#define EXTERN_TYPEDEF_INETADDRESS_T
	typedef void* INETADDRESS_T;
#endif /* EXTERN_TYPEDEF_INETADDRESS_T */
#ifndef EXTERN_TYPEDEF_NETWORKINTERFACE_T
#define EXTERN_TYPEDEF_NETWORKINTERFACE_T
	typedef void* NETWORKINTERFACE_T;
#endif /* EXTERN_TYPEDEF_NETWORKINTERFACE_T */
#ifndef EXTERN_TYPEDEF_INTERFACEBOUNDADDRESS_T
#define EXTERN_TYPEDEF_INTERFACEBOUNDADDRESS_T
	typedef void* INTERFACEBOUNDADDRESS_T;
#endif /* EXTERN_TYPEDEF_INTERFACEBOUNDADDRESS_T */

	// No public default Java constructor; creating one:
	EXPORTED INTERFACEBOUNDADDRESS_T InterfaceBoundAddress_Create();
	EXPORTED INTERFACEBOUNDADDRESS_T InterfaceBoundAddress_Create_1(INETSOCKETADDRESS_T group, INETADDRESS_T localAddress, NETWORKINTERFACE_T intf);
	EXPORTED void InterfaceBoundAddress_getInterfaceAddress(INTERFACEBOUNDADDRESS_T c_interface_bound_address, INETADDRESS_T retval);
	EXPORTED void InterfaceBoundAddress_getGroupAddress(INTERFACEBOUNDADDRESS_T c_interface_bound_address, INETSOCKETADDRESS_T retval);
	EXPORTED void InterfaceBoundAddress_getNetworkInterface(INTERFACEBOUNDADDRESS_T c_interface_bound_address, NETWORKINTERFACE_T retval);
	EXPORTED void InterfaceBoundAddress_Destroy(INTERFACEBOUNDADDRESS_T interface_bound_address);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED INTERFACEBOUNDADDRESS_T STDCALL InterfaceBoundAddress_Create_stdcall_1(INETSOCKETADDRESS_T group, INETADDRESS_T localAddress, NETWORKINTERFACE_T intf);
	EXPORTED void STDCALL InterfaceBoundAddress_getInterfaceAddress_stdcall(INTERFACEBOUNDADDRESS_T c_interface_bound_address, INETADDRESS_T retval);
	EXPORTED void STDCALL InterfaceBoundAddress_getGroupAddress_stdcall(INTERFACEBOUNDADDRESS_T c_interface_bound_address, INETSOCKETADDRESS_T retval);
	EXPORTED void STDCALL InterfaceBoundAddress_getNetworkInterface_stdcall(INTERFACEBOUNDADDRESS_T c_interface_bound_address, NETWORKINTERFACE_T retval);
	EXPORTED void STDCALL InterfaceBoundAddress_Destroy_stdcall(INTERFACEBOUNDADDRESS_T interface_bound_address);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* INTERFACEBOUNDADDRESS_H */

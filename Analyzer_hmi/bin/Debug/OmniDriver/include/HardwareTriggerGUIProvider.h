/**
 * File: HardwareTriggerGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:35 EDT 2018 based on
 * HardwareTriggerGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/hardwaretrigger/HardwareTriggerGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef HARDWARETRIGGERGUIPROVIDER_H
#define HARDWARETRIGGERGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED HardwareTriggerGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~HardwareTriggerGUIProvider();
	// No public default Java constructor; creating one:
	HardwareTriggerGUIProvider();
	// No public Java copy constructor; creating one:
	HardwareTriggerGUIProvider(const HardwareTriggerGUIProvider &that);
	// Creating assignment operator declaration:
	HardwareTriggerGUIProvider &operator=(const HardwareTriggerGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_HARDWARETRIGGERGUIPROVIDER_T
#define EXTERN_TYPEDEF_HARDWARETRIGGERGUIPROVIDER_T
	typedef void* HARDWARETRIGGERGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_HARDWARETRIGGERGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED HARDWARETRIGGERGUIPROVIDER_T HardwareTriggerGUIProvider_Create();
	EXPORTED void HardwareTriggerGUIProvider_Destroy(HARDWARETRIGGERGUIPROVIDER_T hardware_trigger_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL HardwareTriggerGUIProvider_Destroy_stdcall(HARDWARETRIGGERGUIPROVIDER_T hardware_trigger_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* HARDWARETRIGGERGUIPROVIDER_H */
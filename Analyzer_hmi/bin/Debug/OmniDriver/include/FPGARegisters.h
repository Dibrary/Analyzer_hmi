/**
 * File: FPGARegisters.h
 * Autogenerated on Fri Mar 23 13:38:46 EDT 2018 based on
 * FPGARegisters.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/FPGARegisters
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef FPGAREGISTERS_H
#define FPGAREGISTERS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED FPGARegisters : public BaseJavaClass // CPPClass.tag001
{
public: 
	FPGARegisters();
	JString toString();
	~FPGARegisters();
	// No public Java copy constructor; creating one:
	FPGARegisters(const FPGARegisters &that);
	// Creating assignment operator declaration:
	FPGARegisters &operator=(const FPGARegisters &that);
	signed char FPGA_MASTER_CLOCK;
	signed char FPGA_FIRMWARE;
	signed char FPGA_CSTROBE_INT;
	signed char FPGA_CSTROBE_MSW;
	signed char FPGA_CSTROBE_CLOCK;
	signed char FPGA_CSTROBE_LSW;
	signed char FPGA_INT_BASE_CLOCK;
	signed char FPGA_INT_CLOCK;
	signed char FPGA_SHUTTER_CLOCK;
	signed char FPGA_HARDWARE_TRIG_DELAY;
	signed char FPGA_HARDWARE_TRIG_MODE;
	signed char FPGA_INTERRUPT_COUNT;
	signed char FPGA_SINGLE_STROBE_HIGH;
	signed char FPGA_SINGLE_STROBE_LOW;
	signed char FPGA_STROBE_ENABLE;
	signed char FPGA_GPIO_MUX;
	signed char FPGA_GPIO_ENABLE;
	signed char FPGA_GPIO_DATA_REG;
	signed char FPGA_ADC_TRIGGER_DELAY;
	signed char FPGA_CSTROBE_MODE;
	signed char FPGA_DELAY_INTEGRATION;
	signed char FPGA_REGISTERS;
	signed char INPUT;
	signed char OUTPUT;

private:
	jmethodID mid_FPGARegisters2907;
	jmethodID mid_toString2908;
	jfieldID fid_FPGA_MASTER_CLOCK;
	jfieldID fid_FPGA_FIRMWARE;
	jfieldID fid_FPGA_CSTROBE_INT;
	jfieldID fid_FPGA_CSTROBE_MSW;
	jfieldID fid_FPGA_CSTROBE_CLOCK;
	jfieldID fid_FPGA_CSTROBE_LSW;
	jfieldID fid_FPGA_INT_BASE_CLOCK;
	jfieldID fid_FPGA_INT_CLOCK;
	jfieldID fid_FPGA_SHUTTER_CLOCK;
	jfieldID fid_FPGA_HARDWARE_TRIG_DELAY;
	jfieldID fid_FPGA_HARDWARE_TRIG_MODE;
	jfieldID fid_FPGA_INTERRUPT_COUNT;
	jfieldID fid_FPGA_SINGLE_STROBE_HIGH;
	jfieldID fid_FPGA_SINGLE_STROBE_LOW;
	jfieldID fid_FPGA_STROBE_ENABLE;
	jfieldID fid_FPGA_GPIO_MUX;
	jfieldID fid_FPGA_GPIO_ENABLE;
	jfieldID fid_FPGA_GPIO_DATA_REG;
	jfieldID fid_FPGA_ADC_TRIGGER_DELAY;
	jfieldID fid_FPGA_CSTROBE_MODE;
	jfieldID fid_FPGA_DELAY_INTEGRATION;
	jfieldID fid_FPGA_REGISTERS;
	jfieldID fid_fpgaDescriptions;
	jfieldID fid_INPUT;
	jfieldID fid_OUTPUT;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_FPGAREGISTERS_T
#define EXTERN_TYPEDEF_FPGAREGISTERS_T
	typedef void* FPGAREGISTERS_T;
#endif /* EXTERN_TYPEDEF_FPGAREGISTERS_T */

	EXPORTED FPGAREGISTERS_T FPGARegisters_Create();
	EXPORTED void FPGARegisters_toString(FPGAREGISTERS_T c_fpgaregisters, JSTRING_T retval);
	EXPORTED void FPGARegisters_Destroy(FPGAREGISTERS_T fpgaregisters);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED FPGAREGISTERS_T STDCALL FPGARegisters_Create_stdcall();
	EXPORTED void STDCALL FPGARegisters_toString_stdcall(FPGAREGISTERS_T c_fpgaregisters, JSTRING_T retval);
	EXPORTED void STDCALL FPGARegisters_Destroy_stdcall(FPGAREGISTERS_T fpgaregisters);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* FPGAREGISTERS_H */
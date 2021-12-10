/**
 * File: MappingTable.h
 * Autogenerated on Fri Mar 23 13:38:25 EDT 2018 based on
 * MappingTable.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/devices/MappingTable
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MAPPINGTABLE_H
#define MAPPINGTABLE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "MPDeviceBase.h"
#include "UniRS232.h"
#include "Node.h"
#include "JString.h"
#include "JStringArray.h"
#include "PrintStream.h"
#include "GetStatus$Status.h"
#include "GetOperationStatus$OperationStatus.h"
#include "GetFaultStatus$FaultStatus.h"
#include "GetActualStatus$ActualStatus.h"
#include "GetActualHomingStatus$ActualHomingStatus.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class MPDeviceBase;
class UniRS232;
class Node;
class JString;
class JStringArray;
class PrintStream;
class GetStatus$Status;
class GetOperationStatus$OperationStatus;
class GetFaultStatus$FaultStatus;
class GetActualStatus$ActualStatus;
class GetActualHomingStatus$ActualHomingStatus;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED MappingTable : public MPDeviceBase // CPPClass.tag001
{
public: 
	MappingTable(UniRS232& serPort);
	double readCurrentPositionInMM(int axis);
	double getCurrentPositionInMM(int axis);
	void moveToMM(int axis, double position);
	void moveToInch(int axis, double position);
	void moveRelativeMM(int axis, double position);
	void moveRelativeInch(int axis, double position);
	void moveToMM(Node& n, double position);
	void moveToInch(Node& n, double position);
	void moveRelativeMM(Node& n, double position);
	void moveRelativeInch(Node& n, double position);
	void moveToMMAndWait(int axis, double position);
	void moveToInchAndWait(int axis, double position);
	void moveRelativeMMAndWait(int axis, double position);
	void moveRelativeInchAndWait(int axis, double position);
	void moveToMMAndWait(Node& n, double position);
	void moveToInchAndWait(Node& n, double position);
	void moveRelativeMMAndWait(Node& n, double position);
	void moveRelativeInchAndWait(Node& n, double position);
	double getPositionInMM(int axis);
	double getPositionInMM(Node& n);
	double getPositionInInch(int axis);
	double getPositionInInch(Node& n);
	void setAxesConfiguration(int config);
	void setXConfiguration(int config);
	void setYConfiguration(int config);
	void setZConfiguration(int config);
	JString getXConfiguration();
	JString getYConfiguration();
	JString getZConfiguration();
	JString getAxesConfiguration();
	short xPresent();
	short yPresent();
	short zPresent();
	void printEEPROM(JStringArray& param0, PrintStream& param1);
	void setResponseMode(Node& param0, int param1);
	void toggleDigitalOutput(Node& param0);
	void setVelocity(Node& param0, int param1);
	void setSpeed(Node& param0, int param1);
	void setOutputError(Node& param0);
	void setOutputDigital(Node& param0);
	void setHomePosition(Node& param0);
	void setDigitalOutput(Node& param0);
	void saveToEEPROM(Node& param0);
	void runHomingSequence(Node& param0);
	void runHallHoming(Node& param0);
	void resumeProgram(Node& param0);
	void resetNode(Node& param0);
	void notifyPositionEnable(Node& param0);
	void notifyPositionDisable(Node& param0);
	void moveAndWait(Node& param0, long long param1);
	void moveAndWait(Node& param0);
	void move(Node& param0);
	void loadRelativePosition(Node& param0, int param1);
	void loadAbsolutePosition(Node& param0, int param1);
	JString getVersion(Node& param0);
	int getVelocity(Node& param0);
	int getTemperature(Node& param0);
	int getTargetPosition(Node& param0);
	int getSpeed(Node& param0);
	GetStatus$Status getStatus(Node& param0);
	JStringArray getProgramSequence(Node& param0);
	int getPositiveLimit(Node& param0);
	int getPosition(Node& param0);
	GetOperationStatus$OperationStatus getOperationStatus(Node& param0);
	int getNodeNumber(Node& param0);
	int getNegativeLimit(Node& param0);
	int getMaximumSpeed(Node& param0);
	GetFaultStatus$FaultStatus getFaultStatus(Node& param0);
	int getCurrentActualVelocity(Node& param0);
	JString getControllerType(Node& param0);
	JString getControllerSerialNumber(Node& param0);
	GetActualStatus$ActualStatus getActualStatus(Node& param0);
	GetActualHomingStatus$ActualHomingStatus getActualHomingStatus(Node& param0);
	void endProgramSequence(Node& param0);
	void enableProgram(Node& param0);
	void enableDrive(Node& param0);
	void disableProgram(Node& param0);
	void disableDrive(Node& param0);
	void clearDigitalOutput(Node& param0);
	void beginProgrammingSequence(Node& param0);
	UniRS232 getSerialPort();
	void setSerialPort(UniRS232& param0);
	~MappingTable();
	// No public default Java constructor; creating one:
	MappingTable();
	// No public Java copy constructor; creating one:
	MappingTable(const MappingTable &that);
	// Creating assignment operator declaration:
	MappingTable &operator=(const MappingTable &that);
	int X_150;
	int X_200;
	int Y_150;
	int Z_100;
	int X_ABSENT;
	int Y_ABSENT;
	int Z_ABSENT;

private:
	jmethodID mid_MappingTable282;
	jmethodID mid_readCurrentPositionInMM283;
	jmethodID mid_getCurrentPositionInMM284;
	jmethodID mid_moveToMM285;
	jmethodID mid_moveToInch286;
	jmethodID mid_moveRelativeMM287;
	jmethodID mid_moveRelativeInch288;
	jmethodID mid_moveToMM289;
	jmethodID mid_moveToInch290;
	jmethodID mid_moveRelativeMM291;
	jmethodID mid_moveRelativeInch292;
	jmethodID mid_moveToMMAndWait293;
	jmethodID mid_moveToInchAndWait294;
	jmethodID mid_moveRelativeMMAndWait295;
	jmethodID mid_moveRelativeInchAndWait296;
	jmethodID mid_moveToMMAndWait297;
	jmethodID mid_moveToInchAndWait298;
	jmethodID mid_moveRelativeMMAndWait299;
	jmethodID mid_moveRelativeInchAndWait300;
	jmethodID mid_getPositionInMM301;
	jmethodID mid_getPositionInMM302;
	jmethodID mid_getPositionInInch303;
	jmethodID mid_getPositionInInch304;
	jmethodID mid_setAxesConfiguration305;
	jmethodID mid_setXConfiguration306;
	jmethodID mid_setYConfiguration307;
	jmethodID mid_setZConfiguration308;
	jmethodID mid_getXConfiguration309;
	jmethodID mid_getYConfiguration310;
	jmethodID mid_getZConfiguration311;
	jmethodID mid_getAxesConfiguration312;
	jmethodID mid_xPresent313;
	jmethodID mid_yPresent314;
	jmethodID mid_zPresent315;
	jmethodID mid_printEEPROM316;
	jmethodID mid_setResponseMode317;
	jmethodID mid_toggleDigitalOutput318;
	jmethodID mid_setVelocity319;
	jmethodID mid_setSpeed320;
	jmethodID mid_setOutputError321;
	jmethodID mid_setOutputDigital322;
	jmethodID mid_setHomePosition323;
	jmethodID mid_setDigitalOutput324;
	jmethodID mid_saveToEEPROM325;
	jmethodID mid_runHomingSequence326;
	jmethodID mid_runHallHoming327;
	jmethodID mid_resumeProgram328;
	jmethodID mid_resetNode329;
	jmethodID mid_notifyPositionEnable330;
	jmethodID mid_notifyPositionDisable331;
	jmethodID mid_moveAndWait332;
	jmethodID mid_moveAndWait333;
	jmethodID mid_move334;
	jmethodID mid_loadRelativePosition335;
	jmethodID mid_loadAbsolutePosition336;
	jmethodID mid_getVersion337;
	jmethodID mid_getVelocity338;
	jmethodID mid_getTemperature339;
	jmethodID mid_getTargetPosition340;
	jmethodID mid_getSpeed341;
	jmethodID mid_getStatus342;
	jmethodID mid_getProgramSequence343;
	jmethodID mid_getPositiveLimit344;
	jmethodID mid_getPosition345;
	jmethodID mid_getOperationStatus346;
	jmethodID mid_getNodeNumber347;
	jmethodID mid_getNegativeLimit348;
	jmethodID mid_getMaximumSpeed349;
	jmethodID mid_getFaultStatus350;
	jmethodID mid_getCurrentActualVelocity351;
	jmethodID mid_getControllerType352;
	jmethodID mid_getControllerSerialNumber353;
	jmethodID mid_getActualStatus354;
	jmethodID mid_getActualHomingStatus355;
	jmethodID mid_endProgramSequence356;
	jmethodID mid_enableProgram357;
	jmethodID mid_enableDrive358;
	jmethodID mid_disableProgram359;
	jmethodID mid_disableDrive360;
	jmethodID mid_clearDigitalOutput361;
	jmethodID mid_beginProgrammingSequence362;
	jmethodID mid_getSerialPort363;
	jmethodID mid_setSerialPort364;
	jfieldID fid_X_150;
	jfieldID fid_X_200;
	jfieldID fid_Y_150;
	jfieldID fid_Z_100;
	jfieldID fid_X_ABSENT;
	jfieldID fid_Y_ABSENT;
	jfieldID fid_Z_ABSENT;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_MPDEVICEBASE_T
#define EXTERN_TYPEDEF_MPDEVICEBASE_T
	typedef void* MPDEVICEBASE_T;
#endif /* EXTERN_TYPEDEF_MPDEVICEBASE_T */
#ifndef EXTERN_TYPEDEF_UNIRS232_T
#define EXTERN_TYPEDEF_UNIRS232_T
	typedef void* UNIRS232_T;
#endif /* EXTERN_TYPEDEF_UNIRS232_T */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_PRINTSTREAM_T
#define EXTERN_TYPEDEF_PRINTSTREAM_T
	typedef void* PRINTSTREAM_T;
#endif /* EXTERN_TYPEDEF_PRINTSTREAM_T */
#ifndef EXTERN_TYPEDEF_GETSTATUS$STATUS_T
#define EXTERN_TYPEDEF_GETSTATUS$STATUS_T
	typedef void* GETSTATUS$STATUS_T;
#endif /* EXTERN_TYPEDEF_GETSTATUS$STATUS_T */
#ifndef EXTERN_TYPEDEF_GETOPERATIONSTATUS$OPERATIONSTATUS_T
#define EXTERN_TYPEDEF_GETOPERATIONSTATUS$OPERATIONSTATUS_T
	typedef void* GETOPERATIONSTATUS$OPERATIONSTATUS_T;
#endif /* EXTERN_TYPEDEF_GETOPERATIONSTATUS$OPERATIONSTATUS_T */
#ifndef EXTERN_TYPEDEF_GETFAULTSTATUS$FAULTSTATUS_T
#define EXTERN_TYPEDEF_GETFAULTSTATUS$FAULTSTATUS_T
	typedef void* GETFAULTSTATUS$FAULTSTATUS_T;
#endif /* EXTERN_TYPEDEF_GETFAULTSTATUS$FAULTSTATUS_T */
#ifndef EXTERN_TYPEDEF_GETACTUALSTATUS$ACTUALSTATUS_T
#define EXTERN_TYPEDEF_GETACTUALSTATUS$ACTUALSTATUS_T
	typedef void* GETACTUALSTATUS$ACTUALSTATUS_T;
#endif /* EXTERN_TYPEDEF_GETACTUALSTATUS$ACTUALSTATUS_T */
#ifndef EXTERN_TYPEDEF_GETACTUALHOMINGSTATUS$ACTUALHOMINGSTATUS_T
#define EXTERN_TYPEDEF_GETACTUALHOMINGSTATUS$ACTUALHOMINGSTATUS_T
	typedef void* GETACTUALHOMINGSTATUS$ACTUALHOMINGSTATUS_T;
#endif /* EXTERN_TYPEDEF_GETACTUALHOMINGSTATUS$ACTUALHOMINGSTATUS_T */
#ifndef EXTERN_TYPEDEF_MAPPINGTABLE_T
#define EXTERN_TYPEDEF_MAPPINGTABLE_T
	typedef void* MAPPINGTABLE_T;
#endif /* EXTERN_TYPEDEF_MAPPINGTABLE_T */

	// No public default Java constructor; creating one:
	EXPORTED MAPPINGTABLE_T MappingTable_Create();
	EXPORTED MAPPINGTABLE_T MappingTable_Create_1(UNIRS232_T serPort);
	EXPORTED double MappingTable_readCurrentPositionInMM(MAPPINGTABLE_T c_mapping_table, int axis);
	EXPORTED double MappingTable_getCurrentPositionInMM(MAPPINGTABLE_T c_mapping_table, int axis);
	EXPORTED void MappingTable_moveToMM(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void MappingTable_moveToInch(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void MappingTable_moveRelativeMM(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void MappingTable_moveRelativeInch(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void MappingTable_moveToMM_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void MappingTable_moveToInch_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void MappingTable_moveRelativeMM_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void MappingTable_moveRelativeInch_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void MappingTable_moveToMMAndWait(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void MappingTable_moveToInchAndWait(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void MappingTable_moveRelativeMMAndWait(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void MappingTable_moveRelativeInchAndWait(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void MappingTable_moveToMMAndWait_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void MappingTable_moveToInchAndWait_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void MappingTable_moveRelativeMMAndWait_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void MappingTable_moveRelativeInchAndWait_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED double MappingTable_getPositionInMM(MAPPINGTABLE_T c_mapping_table, int axis);
	EXPORTED double MappingTable_getPositionInMM_1(MAPPINGTABLE_T c_mapping_table, NODE_T n);
	EXPORTED double MappingTable_getPositionInInch(MAPPINGTABLE_T c_mapping_table, int axis);
	EXPORTED double MappingTable_getPositionInInch_1(MAPPINGTABLE_T c_mapping_table, NODE_T n);
	EXPORTED void MappingTable_setAxesConfiguration(MAPPINGTABLE_T c_mapping_table, int config);
	EXPORTED void MappingTable_setXConfiguration(MAPPINGTABLE_T c_mapping_table, int config);
	EXPORTED void MappingTable_setYConfiguration(MAPPINGTABLE_T c_mapping_table, int config);
	EXPORTED void MappingTable_setZConfiguration(MAPPINGTABLE_T c_mapping_table, int config);
	EXPORTED void MappingTable_getXConfiguration(MAPPINGTABLE_T c_mapping_table, JSTRING_T retval);
	EXPORTED void MappingTable_getYConfiguration(MAPPINGTABLE_T c_mapping_table, JSTRING_T retval);
	EXPORTED void MappingTable_getZConfiguration(MAPPINGTABLE_T c_mapping_table, JSTRING_T retval);
	EXPORTED void MappingTable_getAxesConfiguration(MAPPINGTABLE_T c_mapping_table, JSTRING_T retval);
	EXPORTED short MappingTable_xPresent(MAPPINGTABLE_T c_mapping_table);
	EXPORTED short MappingTable_yPresent(MAPPINGTABLE_T c_mapping_table);
	EXPORTED short MappingTable_zPresent(MAPPINGTABLE_T c_mapping_table);
	EXPORTED void MappingTable_printEEPROM(MAPPINGTABLE_T c_mapping_table, JSTRINGARRAY_T param0, PRINTSTREAM_T param1);
	EXPORTED void MappingTable_setResponseMode(MAPPINGTABLE_T c_mapping_table, NODE_T param0, int param1);
	EXPORTED void MappingTable_toggleDigitalOutput(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_setVelocity(MAPPINGTABLE_T c_mapping_table, NODE_T param0, int param1);
	EXPORTED void MappingTable_setSpeed(MAPPINGTABLE_T c_mapping_table, NODE_T param0, int param1);
	EXPORTED void MappingTable_setOutputError(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_setOutputDigital(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_setHomePosition(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_setDigitalOutput(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_saveToEEPROM(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_runHomingSequence(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_runHallHoming(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_resumeProgram(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_resetNode(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_notifyPositionEnable(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_notifyPositionDisable(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_moveAndWait(MAPPINGTABLE_T c_mapping_table, NODE_T param0, long long param1);
	EXPORTED void MappingTable_moveAndWait_1(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_move(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_loadRelativePosition(MAPPINGTABLE_T c_mapping_table, NODE_T param0, int param1);
	EXPORTED void MappingTable_loadAbsolutePosition(MAPPINGTABLE_T c_mapping_table, NODE_T param0, int param1);
	EXPORTED void MappingTable_getVersion(MAPPINGTABLE_T c_mapping_table, NODE_T param0, JSTRING_T retval);
	EXPORTED int MappingTable_getVelocity(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int MappingTable_getTemperature(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int MappingTable_getTargetPosition(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int MappingTable_getSpeed(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_getStatus(MAPPINGTABLE_T c_mapping_table, NODE_T param0, GETSTATUS$STATUS_T retval);
	EXPORTED void MappingTable_getProgramSequence(MAPPINGTABLE_T c_mapping_table, NODE_T param0, JSTRINGARRAY_T retval);
	EXPORTED int MappingTable_getPositiveLimit(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int MappingTable_getPosition(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_getOperationStatus(MAPPINGTABLE_T c_mapping_table, NODE_T param0, GETOPERATIONSTATUS$OPERATIONSTATUS_T retval);
	EXPORTED int MappingTable_getNodeNumber(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int MappingTable_getNegativeLimit(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int MappingTable_getMaximumSpeed(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_getFaultStatus(MAPPINGTABLE_T c_mapping_table, NODE_T param0, GETFAULTSTATUS$FAULTSTATUS_T retval);
	EXPORTED int MappingTable_getCurrentActualVelocity(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_getControllerType(MAPPINGTABLE_T c_mapping_table, NODE_T param0, JSTRING_T retval);
	EXPORTED void MappingTable_getControllerSerialNumber(MAPPINGTABLE_T c_mapping_table, NODE_T param0, JSTRING_T retval);
	EXPORTED void MappingTable_getActualStatus(MAPPINGTABLE_T c_mapping_table, NODE_T param0, GETACTUALSTATUS$ACTUALSTATUS_T retval);
	EXPORTED void MappingTable_getActualHomingStatus(MAPPINGTABLE_T c_mapping_table, NODE_T param0, GETACTUALHOMINGSTATUS$ACTUALHOMINGSTATUS_T retval);
	EXPORTED void MappingTable_endProgramSequence(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_enableProgram(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_enableDrive(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_disableProgram(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_disableDrive(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_clearDigitalOutput(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_beginProgrammingSequence(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void MappingTable_getSerialPort(MAPPINGTABLE_T c_mapping_table, UNIRS232_T retval);
	EXPORTED void MappingTable_setSerialPort(MAPPINGTABLE_T c_mapping_table, UNIRS232_T param0);
	EXPORTED void MappingTable_Destroy(MAPPINGTABLE_T mapping_table);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED MAPPINGTABLE_T STDCALL MappingTable_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED double STDCALL MappingTable_readCurrentPositionInMM_stdcall(MAPPINGTABLE_T c_mapping_table, int axis);
	EXPORTED double STDCALL MappingTable_getCurrentPositionInMM_stdcall(MAPPINGTABLE_T c_mapping_table, int axis);
	EXPORTED void STDCALL MappingTable_moveToMM_stdcall(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void STDCALL MappingTable_moveToInch_stdcall(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void STDCALL MappingTable_moveRelativeMM_stdcall(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void STDCALL MappingTable_moveRelativeInch_stdcall(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void STDCALL MappingTable_moveToMM_stdcall_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void STDCALL MappingTable_moveToInch_stdcall_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void STDCALL MappingTable_moveRelativeMM_stdcall_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void STDCALL MappingTable_moveRelativeInch_stdcall_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void STDCALL MappingTable_moveToMMAndWait_stdcall(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void STDCALL MappingTable_moveToInchAndWait_stdcall(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void STDCALL MappingTable_moveRelativeMMAndWait_stdcall(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void STDCALL MappingTable_moveRelativeInchAndWait_stdcall(MAPPINGTABLE_T c_mapping_table, int axis, double position);
	EXPORTED void STDCALL MappingTable_moveToMMAndWait_stdcall_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void STDCALL MappingTable_moveToInchAndWait_stdcall_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void STDCALL MappingTable_moveRelativeMMAndWait_stdcall_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED void STDCALL MappingTable_moveRelativeInchAndWait_stdcall_1(MAPPINGTABLE_T c_mapping_table, NODE_T n, double position);
	EXPORTED double STDCALL MappingTable_getPositionInMM_stdcall(MAPPINGTABLE_T c_mapping_table, int axis);
	EXPORTED double STDCALL MappingTable_getPositionInMM_stdcall_1(MAPPINGTABLE_T c_mapping_table, NODE_T n);
	EXPORTED double STDCALL MappingTable_getPositionInInch_stdcall(MAPPINGTABLE_T c_mapping_table, int axis);
	EXPORTED double STDCALL MappingTable_getPositionInInch_stdcall_1(MAPPINGTABLE_T c_mapping_table, NODE_T n);
	EXPORTED void STDCALL MappingTable_setAxesConfiguration_stdcall(MAPPINGTABLE_T c_mapping_table, int config);
	EXPORTED void STDCALL MappingTable_setXConfiguration_stdcall(MAPPINGTABLE_T c_mapping_table, int config);
	EXPORTED void STDCALL MappingTable_setYConfiguration_stdcall(MAPPINGTABLE_T c_mapping_table, int config);
	EXPORTED void STDCALL MappingTable_setZConfiguration_stdcall(MAPPINGTABLE_T c_mapping_table, int config);
	EXPORTED void STDCALL MappingTable_getXConfiguration_stdcall(MAPPINGTABLE_T c_mapping_table, JSTRING_T retval);
	EXPORTED void STDCALL MappingTable_getYConfiguration_stdcall(MAPPINGTABLE_T c_mapping_table, JSTRING_T retval);
	EXPORTED void STDCALL MappingTable_getZConfiguration_stdcall(MAPPINGTABLE_T c_mapping_table, JSTRING_T retval);
	EXPORTED void STDCALL MappingTable_getAxesConfiguration_stdcall(MAPPINGTABLE_T c_mapping_table, JSTRING_T retval);
	EXPORTED short STDCALL MappingTable_xPresent_stdcall(MAPPINGTABLE_T c_mapping_table);
	EXPORTED short STDCALL MappingTable_yPresent_stdcall(MAPPINGTABLE_T c_mapping_table);
	EXPORTED short STDCALL MappingTable_zPresent_stdcall(MAPPINGTABLE_T c_mapping_table);
	EXPORTED void STDCALL MappingTable_printEEPROM_stdcall(MAPPINGTABLE_T c_mapping_table, JSTRINGARRAY_T param0, PRINTSTREAM_T param1);
	EXPORTED void STDCALL MappingTable_setResponseMode_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, int param1);
	EXPORTED void STDCALL MappingTable_toggleDigitalOutput_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_setVelocity_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, int param1);
	EXPORTED void STDCALL MappingTable_setSpeed_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, int param1);
	EXPORTED void STDCALL MappingTable_setOutputError_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_setOutputDigital_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_setHomePosition_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_setDigitalOutput_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_saveToEEPROM_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_runHomingSequence_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_runHallHoming_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_resumeProgram_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_resetNode_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_notifyPositionEnable_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_notifyPositionDisable_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_moveAndWait_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, long long param1);
	EXPORTED void STDCALL MappingTable_moveAndWait_stdcall_1(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_move_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_loadRelativePosition_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, int param1);
	EXPORTED void STDCALL MappingTable_loadAbsolutePosition_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, int param1);
	EXPORTED void STDCALL MappingTable_getVersion_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, JSTRING_T retval);
	EXPORTED int STDCALL MappingTable_getVelocity_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int STDCALL MappingTable_getTemperature_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int STDCALL MappingTable_getTargetPosition_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int STDCALL MappingTable_getSpeed_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_getStatus_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, GETSTATUS$STATUS_T retval);
	EXPORTED void STDCALL MappingTable_getProgramSequence_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, JSTRINGARRAY_T retval);
	EXPORTED int STDCALL MappingTable_getPositiveLimit_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int STDCALL MappingTable_getPosition_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_getOperationStatus_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, GETOPERATIONSTATUS$OPERATIONSTATUS_T retval);
	EXPORTED int STDCALL MappingTable_getNodeNumber_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int STDCALL MappingTable_getNegativeLimit_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED int STDCALL MappingTable_getMaximumSpeed_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_getFaultStatus_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, GETFAULTSTATUS$FAULTSTATUS_T retval);
	EXPORTED int STDCALL MappingTable_getCurrentActualVelocity_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_getControllerType_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, JSTRING_T retval);
	EXPORTED void STDCALL MappingTable_getControllerSerialNumber_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, JSTRING_T retval);
	EXPORTED void STDCALL MappingTable_getActualStatus_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, GETACTUALSTATUS$ACTUALSTATUS_T retval);
	EXPORTED void STDCALL MappingTable_getActualHomingStatus_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0, GETACTUALHOMINGSTATUS$ACTUALHOMINGSTATUS_T retval);
	EXPORTED void STDCALL MappingTable_endProgramSequence_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_enableProgram_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_enableDrive_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_disableProgram_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_disableDrive_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_clearDigitalOutput_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_beginProgrammingSequence_stdcall(MAPPINGTABLE_T c_mapping_table, NODE_T param0);
	EXPORTED void STDCALL MappingTable_getSerialPort_stdcall(MAPPINGTABLE_T c_mapping_table, UNIRS232_T retval);
	EXPORTED void STDCALL MappingTable_setSerialPort_stdcall(MAPPINGTABLE_T c_mapping_table, UNIRS232_T param0);
	EXPORTED void STDCALL MappingTable_Destroy_stdcall(MAPPINGTABLE_T mapping_table);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MAPPINGTABLE_H */
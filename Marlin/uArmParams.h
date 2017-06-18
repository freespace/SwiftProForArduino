/**
  ******************************************************************************
  * @file	uArmParams.h
  * @author	David.Long
  * @email	xiaokun.long@ufactory.cc
  * @date	2017-03-15
  ******************************************************************************
  */

#ifndef _UARMPARAMS_H_
#define _UARMPARAMS_H_






#define TICK_INTERVAL	50

#define EEPROM_X_ANGLE_ADDR	100
#define EEPROM_Y_ANGLE_ADDR	110
#define EEPROM_Z_ANGLE_ADDR	120

// e2prom device
#define EEPROM_ON_CHIP			0
#define EEPROM_EXTERN_USER		1
#define EEPROM_EXTERN_SYSTEM	2

// e2prom data type
#define DATA_TYPE_BYTE          1
#define DATA_TYPE_INTEGER       2
#define DATA_TYPE_FLOAT         4

#define EXTERNAL_EEPROM_USER_ADDRESS 0xa0
#define EXTERNAL_EEPROM_SYS_ADDRESS 0xa2

#define SERVO_9G_MAX    460
#define SERVO_9G_MIN    98


#define EEPROM_REFERENCE_VALUE_ADDR		800

#define EEPROM_MODE_ADDR	900
#define EEPROM_HEIGHT_ADDR	910
#define EEPROM_FRONT_ADDR	920

#define EEPROM_WRITE_TEST_ADDR	1992


#define MATH_PI 			3.141592653589793238463

// this is just 180/PI, i.e. degrees per radian
#define MATH_TRANS  		57.2958

// these seem to be offset constants
// MATH_L1 seems to correspond to the height of the shoulder joint
#define MATH_L1 			106.6	//90.00

// MATH_L2 seems to be the X offset of the shoulder joint from the Z rotation
// axis
#define MATH_L2 			13.2		//21.17

// MATH_LOWER_ARM is the length of the lower arm in mm
#define MATH_LOWER_ARM 		142.07	//148.25

// MATH_UPPER_ARM is the length of the upper arm in mm
#define MATH_UPPER_ARM 		158.81	//158.8	//160.2

//#define MATH_FRONT_HEADER 	69//(29.4+38.6)//43.75)	//25.00// the distance between wrist to the front point we use
#define MATH_UPPER_LOWER 	MATH_UPPER_ARM/MATH_LOWER_ARM

// gripper or pump status
#define STOP            		0
#define WORKING          		1
#define GRABBING        		2

#define PUMP_GRABBING_CURRENT 	70

#define RESULT_BUFFER_SIZE 128

#define E_OK	0
#define E_PARAMETERS_WRONG	21
#define E_OUT_OF_RANGE	22
#define E_BUFFER_FULL	23
#define E_NO_POWER		24
#define E_FAIL			25


#define LOWER_ARM_MAX_ANGLE      135.6
#define LOWER_ARM_MIN_ANGLE      0
#define UPPER_ARM_MAX_ANGLE      100.7
#define UPPER_ARM_MIN_ANGLE      0
#define LOWER_UPPER_MAX_ANGLE    151
#define LOWER_UPPER_MIN_ANGLE    10


#define BT_NAME_MAX_LEN		11

#define UNLOCK_NUM	22765

#define REPORT_TYPE_POS		3
#define REPORT_TYPE_GROVE	10


#endif // _UARMPARAMS_H_

#pragma once
#include <cstdint>
#include <string.h>
#include <memory>
#include <string>
#include <math.h>
#include "ev3api.h"
#define CORRECTIONDATA_ON
#define SYS_OK 0    //正常終了
#define SYS_NG 1    //異常終了
#define SYS_PARAM 2 //引数エラー
#define TIMEATTACK_NUM 20 
#define SLALOMEEBUI_NUM 21
#define SLALOMEIFIE_NUM 16
#define SLALOMBLACKY_NUM 12
#define GARAGE_NUM 26

#define CAR_WIDTH 134.22f      //車体の幅(mm)
#define CAR_WHEEL_WIDTH 90.33f //車輪の直径(mm)

// integer 8bit
using int8 = int8_t;

// integer 16bit
using int16 = int16_t;

// integer 32bit
using int32 = int32_t;

// integer 64bit
using int64 = int64_t;

// unsigned integer 8bit
using uint8 = uint8_t;

// unsigned integer 16bit
using uint16 = uint16_t;

// unsigned integer 32bit
using uint32 = uint32_t;

// unsigned integer 64bit
using uint64 = uint64_t;

// int pointer
using intptr = intptr_t;

// uint pointer
using uintptr = uintptr_t;

/* 列挙型の定義 */
enum SensorPort
{
  SENSOR_TOUCH, //タッチセンサー
  SENSOR_COLOR, //カラーセンサー
  SENSOR_SONAR, //超音波センサー
  SENSOR_GYRO,  //ジャイロセンサー
};


/* 構造体定義 */
//PIDの構造体
typedef struct GAIN_TAG {	
	float p;
	float i;
	float d;
}GAIN;

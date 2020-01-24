#ifndef __COMMON_H__
#define __COMMON_H__

#include "DataFrame.h"

/*
 * 数据帧格式
 * 0xa5 0x5a nData instruction deviceNo arg1 arg2... verify 0xaa
 * nData为除去帧头尾的有效数据字节数,byte
 * instruction为指令（Instruction）
 * deviceNo为设备号，用于指定1号或者2号台
 * arg...为参数
 * 帧头尾为8位，其余均为32位
 */

enum Instruction:uint32_t
{
	MOVE_XYZC = 0,
	MOVE_X_POS = 0x01,
	MOVE_Y_POS = 0x01 << 1,
	MOVE_Z_POS = 0x01 << 2,
	MOVE_C_POS = 0x01 << 3,
	MOVE_X_NEG = 0x01 << 4,
	MOVE_Y_NEG = 0x01 << 5,
	MOVE_Z_NEG = 0x01 << 6,
	MOVE_C_NEG = 0x01 << 7,
	MOVE_AXIS = 0xff,//方便程序使用的，并非实际指令
	AIR_PUMP_ON,
	AIR_PUMP_OFF,
	RESET_XYZ,
	RESET_C,
	RETURN_TO_ZERO,
	DELAY,
	GET_POSE,
	SET_POSE_ZERO,
	SEWING_MACHINE_FOOT_ON,
	SEWING_MACHINE_FOOT_OFF,
	SEWING_MACHINE_START,
	SEWING_MACHINE_STOP,
	STOP,
};

#define ACK 'k'
#define BAUD_RATE 115200

#endif // __COMMON_H__
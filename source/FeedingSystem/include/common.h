#ifndef __COMMON_H__
#define __COMMON_H__

#include "DataFrame.h"

/*
 * ����֡��ʽ
 * 0xa5 0x5a nData instruction deviceNo arg1 arg2... verify 0xaa
 * nDataΪ��ȥ֡ͷβ����Ч�����ֽ���,byte
 * instructionΪָ�Instruction��
 * deviceNoΪ�豸�ţ�����ָ��1�Ż���2��̨
 * arg...Ϊ����
 * ֡ͷβΪ8λ�������Ϊ32λ
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
	MOVE_AXIS = 0xff,//�������ʹ�õģ�����ʵ��ָ��
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
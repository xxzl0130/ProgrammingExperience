#ifndef __STEPPER_MOTOR_CONTROLLER_H__
#define __STEPPER_MOTOR_CONTROLLER_H__

#include <Arduino.h>
#include "AbstractStepperMotor.h"
#include <FlexiTimer2.h>

namespace Controller
{
	/* �����벻Ҫֱ���޸ĸ�ָ�룡��
	 * �����ڷ���motor����
	 * ����������ͨ��Controller��������
	 */
	extern AbstractStepperMotor* motors;
	/**
	 * \brief ��ʼ��
	 * \param n �������
	 */
	void init(uint16_t n);
	
	/**
	 * \brief ���õ�������Ĳ���
	 * \param n ��ţ�ӦС�ڵ������
	 * \param pulsePin ��������
	 * \param dirPin ��������
	 * \param enablePin ʹ�����ţ��ɺ���
	 * \param limitPin ��λ���ţ��ɺ���
	 */
	void setMotor(uint8_t n, uint8_t pulsePin, uint8_t dirPin,uint8_t enablePin = 0xff, uint8_t limitPin = 0xff);

	/**
	 * \brief ��������Ƶ�ʣ�����ǰ������ô˺����Գ�ʼ����ʱ��
	 * \param f Ƶ�ʣ���λHz�����Ϊ125k
	 */
	void setPulseFrequency(double f);

	/**
	 * \brief ���õ���˶�����Ͳ���
	 * \param i ��i�����
	 * \param n ��������������������Ϊdir��Ÿߵ�ƽ
	 */
	void setMotorSteps(uint16_t i, int32_t n);
	/**
	 * \brief ���Ӳ������������෴������������ӣ�Ŀǰ�����ⲻҪʹ��
	 * ����+=����ԭ�Ӳ������ڲ��������б��жϻᵼ�����ݴ������޽������
	 * \param i ��i�����
	 * \param n ��������������������Ϊdir��Ÿߵ�ƽ
	 */
	void addMotorSteps(uint16_t i, int32_t n);
	void return2Zero(uint16_t i);
	void return2ZeroAll();

	void allStop();

	extern bool running;

	void run();
}

#endif //__STEPPER_MOTOR_CONTROLLER_H__
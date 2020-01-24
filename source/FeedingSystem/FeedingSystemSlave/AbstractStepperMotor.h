#ifndef __ABSTRACT_STEPPER_MOTOR_H__
#define __ABSTRACT_STEPPER_MOTOR_H__

#include <Arduino.h>

class AbstractStepperMotor
{
public:
	/**
	 * \brief ���죬ʹ�ܺ���λ��ſ��Ժ��Ի���0xff����
	 * \param pulse �������
	 * \param dir �������
	 * \param enable ʹ�����
	 * \param limit ��λ���
	 */
	AbstractStepperMotor(uint8_t pulse,uint8_t dir,uint8_t enable = 0xff,uint8_t limit = 0xff);
	AbstractStepperMotor();
	~AbstractStepperMotor();

	void setDirection(bool dir);
	bool getDirection();
	/**
	 * \brief �������������������
	 */
	void firstHalfStep();
	/**
	 * \brief ��������������½���
	 */
	void secondHalfStep();

	void setEnable();
	void setDisable();
	bool isEnabled() const;

	void resetPosition();
	int32_t getPosition() const;

private:
	uint8_t pulsePin, dirPin, enablePin, limitPin;
	bool direction, enabled;
	//���ź���Ч��ƽ������ʹ�ܴ���ʹ����ܿض����ѻ�
	const static bool pulseHigh = HIGH, dirHigh = HIGH, enableHigh = LOW;
	int32_t position;
};

#endif //__ABSTRACT_STEPPER_MOTOR_H__
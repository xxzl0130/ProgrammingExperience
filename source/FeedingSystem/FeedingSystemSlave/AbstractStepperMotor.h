#ifndef __ABSTRACT_STEPPER_MOTOR_H__
#define __ABSTRACT_STEPPER_MOTOR_H__

#include <Arduino.h>

class AbstractStepperMotor
{
public:
	/**
	 * \brief 构造，使能和限位针脚可以忽略或以0xff代替
	 * \param pulse 脉冲针脚
	 * \param dir 方向针脚
	 * \param enable 使能针脚
	 * \param limit 限位针脚
	 */
	AbstractStepperMotor(uint8_t pulse,uint8_t dir,uint8_t enable = 0xff,uint8_t limit = 0xff);
	AbstractStepperMotor();
	~AbstractStepperMotor();

	void setDirection(bool dir);
	bool getDirection();
	/**
	 * \brief 产生步进脉冲的上升沿
	 */
	void firstHalfStep();
	/**
	 * \brief 产生步进脉冲的下降沿
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
	//各信号有效电平，其中使能代表使电机受控而非脱机
	const static bool pulseHigh = HIGH, dirHigh = HIGH, enableHigh = LOW;
	int32_t position;
};

#endif //__ABSTRACT_STEPPER_MOTOR_H__
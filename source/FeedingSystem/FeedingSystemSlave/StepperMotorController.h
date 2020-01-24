#ifndef __STEPPER_MOTOR_CONTROLLER_H__
#define __STEPPER_MOTOR_CONTROLLER_H__

#include <Arduino.h>
#include "AbstractStepperMotor.h"
#include <FlexiTimer2.h>

namespace Controller
{
	/* ！！请不要直接修改该指针！！
	 * 可用于访问motor对象
	 * 其他操作请通过Controller函数进行
	 */
	extern AbstractStepperMotor* motors;
	/**
	 * \brief 初始化
	 * \param n 电机数量
	 */
	void init(uint16_t n);
	
	/**
	 * \brief 设置单个电机的参数
	 * \param n 序号，应小于电机总数
	 * \param pulsePin 脉冲引脚
	 * \param dirPin 方向引脚
	 * \param enablePin 使能引脚，可忽略
	 * \param limitPin 限位引脚，可忽略
	 */
	void setMotor(uint8_t n, uint8_t pulsePin, uint8_t dirPin,uint8_t enablePin = 0xff, uint8_t limitPin = 0xff);

	/**
	 * \brief 设置脉冲频率，工作前必须调用此函数以初始化定时器
	 * \param f 频率，单位Hz，最高为125k
	 */
	void setPulseFrequency(double f);

	/**
	 * \brief 设置电机运动方向和步数
	 * \param i 第i个电机
	 * \param n 步数，正负代表方向，正号为dir针脚高电平
	 */
	void setMotorSteps(uint16_t i, int32_t n);
	/**
	 * \brief 增加步数，若方向相反则先清零后增加，目前有问题不要使用
	 * 由于+=不是原子操作，在操作过程中被中断会导致数据错误，暂无解决方案
	 * \param i 第i个电机
	 * \param n 步数，正负代表方向，正号为dir针脚高电平
	 */
	void addMotorSteps(uint16_t i, int32_t n);
	void return2Zero(uint16_t i);
	void return2ZeroAll();

	void allStop();

	extern bool running;

	void run();
}

#endif //__STEPPER_MOTOR_CONTROLLER_H__
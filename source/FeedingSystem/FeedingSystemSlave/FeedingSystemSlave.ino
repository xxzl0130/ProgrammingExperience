/*
 Name:		FeedingSystemSlave.ino
 Created:	2018/9/11 13:51:39
 Author:	zaxs0130@gmail.com
*/

//https://github.com/wimleers/flexitimer2 
#include <FlexiTimer2.h>
#include "common.h"
#include "StepperMotorController.h"

#define comSer Serial
#define MAX_BUF_SIZE		256
#define DEFAULT_SPEED		300 //Ĭ���ٶȣ����ڹ���������ʹ��

//������
uint8_t buf[MAX_BUF_SIZE], buf2[MAX_BUF_SIZE];
//����ָ������
uint32_t commands[32];
//ָ����±�־
bool commandUpdateFlag = false;

enum Motors
{
	MotorX = 0,
	MotorY,
	MotorZ,
	MotorC,
};

//for index
const unsigned char motorNo[2][4] = { { 0,1,2,3},{ 4,5,6,7 } };

const char pumpPin = 50, sewingPin = 52,sewingFootPin = 53;

void work();
void pumpOn();
void pumpOff();
void sewingFootOn();
void sewingFootOff();
void sewingStart();
void sewingStop();


void setup() 
{
	comSer.begin(BAUD_RATE);
	comSer.setTimeout(2);
	pinMode(pumpPin, OUTPUT);
	pinMode(sewingPin, OUTPUT);
	pinMode(sewingFootPin, OUTPUT);

	Controller::init(8);
	Controller::setMotor(motorNo[0][MotorX], 13, 12);
	Controller::setMotor(motorNo[0][MotorY], 24, 25);
	Controller::setMotor(motorNo[0][MotorZ], 26, 27);
	Controller::setMotor(motorNo[0][MotorC], 28, 29);
	Controller::setMotor(motorNo[1][MotorX], 30, 31);
	Controller::setMotor(motorNo[1][MotorY], 32, 33);
	Controller::setMotor(motorNo[1][MotorY], 34, 35);
	Controller::setMotor(motorNo[1][MotorC], 36, 37);
	Controller::setPulseFrequency(1000.0f);
	//Controller::setMotorSteps(0, 500000L);
}

void loop() 
{
	
}

void work()
{
	
}

void pumpOn()
{
	digitalWrite(pumpPin, HIGH);
}

void pumpOff()
{
	digitalWrite(pumpPin, LOW);
}

void sewingFootOn()
{
	digitalWrite(sewingFootPin, HIGH);
}

void sewingFootOff()
{
	digitalWrite(sewingFootPin, LOW);
}

void sewingStart()
{
	digitalWrite(sewingPin, HIGH);
}

void sewingStop()
{
	digitalWrite(sewingPin, LOW);
}

/*
 * ��ÿ��loop֮��ִ�е�
 * ���ⱻ�жϴ��
 */
void serialEvent()
{
	
}


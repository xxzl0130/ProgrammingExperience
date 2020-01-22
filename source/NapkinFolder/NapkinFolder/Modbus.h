#pragma once
#include <cstdint>

/**
 * \brief CRC16У��
 * \param pDataIn ��������
 * \param len ����
 * \param sum ���У����
 */
void crc16CheckSum(const uint8_t *pDataIn, int len, uint8_t *sum);

/**
 * \brief ����modbus 03h�������ּĴ�������Ϣ
 * \param slave �ӻ���ַ
 * \param addr ��ȡ��ʼ��ַ
 * \param number ��ȡ�ֽ���
 * \param out �����������
 * \return ���ݳ���
 */
uint8_t makeModbus03(uint8_t slave, uint16_t addr, uint16_t number, uint8_t *out);

/**
 * \brief ����modbus 03h�������ּĴ�������Ϣ����Ӧ
 * \param slave �ӻ���ַ
 * \param number ���ݸ���
 * \param data ����
 * \param out �����������
 * \return ���ݳ���
 */
uint8_t makeModbus03Response(uint8_t slave, uint8_t number, const uint16_t* data, uint8_t *out);

/**
 * \brief ��ȡmodbus 03h�������ּĴ�����ָ������
 * \param data ����
 * \param size ����
 * \param addr ��ʼ��ַ
 * \param number ����
 */
void getModbus03(uint8_t* data, uint8_t size, uint16_t* addr,uint16_t* number);

/**
 * \brief ��ȡmodbus 03h�������ּĴ�������Ӧ����
 * \param data ����
 * \param size ����
 * \param out �����������
 * \return ��������
 */
uint8_t getModbus03Response(const uint8_t* data, uint8_t size, uint16_t* out);

/**
 * \brief ����modbus 06h��д�������ּĴ�������Ϣ
 * \param slave �ӻ���ַ
 * \param addr �Ĵ�����ַ
 * \param data ����
 * \param out �����������
 * \return ���ݳ���
 */
uint8_t makeModbus06(uint8_t slave, uint16_t addr, uint16_t data, uint8_t *out);

/**
 * \brief ��ȡmodbus 06h��д�������ּĴ�����ָ������
 * \param data ����
 * \param size ����
 * \param addr ��ַ
 * \param reg �Ĵ���ֵ
 */
void getModbus06(const uint8_t* data, uint8_t size, uint16_t* addr, uint16_t* reg);

/**
 * \brief ����modbus 10h��д������ּĴ�������Ϣ
 * \param slave �ӻ���ַ
 * \param addr �Ĵ�����ʼ��ַ
 * \param number д�Ĵ�������
 * \param data �Ĵ�������
 * \param out �����������
 * \return ���ݳ���
 */
uint8_t makeModbus10(uint8_t slave, uint16_t addr, uint16_t number, const uint16_t *data, uint8_t *out);

/**
 * \brief ��ȡmodbus 10h��д������ּĴ�����ָ������
 * \param data ����
 * \param size ����
 * \param addr ��ַ
 * \param number �Ĵ�������
 * \param reg �Ĵ���ֵ
 */
void getModbus10(const uint8_t* data, uint8_t size, uint16_t* addr, uint16_t* number, uint16_t* reg);

/**
 * \brief ����modbus 10h��д������ּĴ�������Ӧ
 * \param slave �ӻ���ַ
 * \param addr �Ĵ�����ʼ��ַ
 * \param number д�Ĵ�������
 * \param out �����������
 * \return ���ݳ���
 */
uint8_t makeModbus10Response(uint8_t slave, uint16_t addr, uint16_t number, uint8_t *out);

/**
 * \brief ��ȡmodbus 10h��д������ּĴ�������Ӧ
 * \param data ����
 * \param size ����
 * \param addr ���д��ĵ�ַ
 * \param number ���д��ļĴ�������
 */
void getModbus10Response(const uint8_t* data, uint8_t size, uint16_t* addr,uint16_t* number);

/**
 * \brief У������
 * \param data ����
 * \param size ����
 * \return �Ƿ�ͨ��
 */
bool checkModbusData(const uint8_t *data, uint8_t size);
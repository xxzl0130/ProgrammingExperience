#pragma once
#include <cstdint>

/**
 * \brief CRC16校验
 * \param pDataIn 输入数据
 * \param len 长度
 * \param sum 输出校验码
 */
void crc16CheckSum(const uint8_t *pDataIn, int len, uint8_t *sum);

/**
 * \brief 生成modbus 03h即读保持寄存器的信息
 * \param slave 从机地址
 * \param addr 读取起始地址
 * \param number 读取字节数
 * \param out 输出数据区域
 * \return 数据长度
 */
uint8_t makeModbus03(uint8_t slave, uint16_t addr, uint16_t number, uint8_t *out);

/**
 * \brief 生成modbus 03h即读保持寄存器的信息的响应
 * \param slave 从机地址
 * \param number 数据个数
 * \param data 数据
 * \param out 输出数据区域
 * \return 数据长度
 */
uint8_t makeModbus03Response(uint8_t slave, uint8_t number, const uint16_t* data, uint8_t *out);

/**
 * \brief 获取modbus 03h即读保持寄存器的指令数据
 * \param data 数据
 * \param size 长度
 * \param addr 起始地址
 * \param number 数量
 */
void getModbus03(uint8_t* data, uint8_t size, uint16_t* addr,uint16_t* number);

/**
 * \brief 获取modbus 03h即读保持寄存器的响应数据
 * \param data 数据
 * \param size 长度
 * \param out 输出数据区域
 * \return 数据数量
 */
uint8_t getModbus03Response(const uint8_t* data, uint8_t size, uint16_t* out);

/**
 * \brief 生成modbus 06h即写单个保持寄存器的信息
 * \param slave 从机地址
 * \param addr 寄存器地址
 * \param data 数据
 * \param out 输出数据区域
 * \return 数据长度
 */
uint8_t makeModbus06(uint8_t slave, uint16_t addr, uint16_t data, uint8_t *out);

/**
 * \brief 获取modbus 06h即写单个保持寄存器的指令数据
 * \param data 数据
 * \param size 长度
 * \param addr 地址
 * \param reg 寄存器值
 */
void getModbus06(const uint8_t* data, uint8_t size, uint16_t* addr, uint16_t* reg);

/**
 * \brief 生成modbus 10h即写多个保持寄存器的信息
 * \param slave 从机地址
 * \param addr 寄存器起始地址
 * \param number 写寄存器数量
 * \param data 寄存器数据
 * \param out 输出数据区域
 * \return 数据长度
 */
uint8_t makeModbus10(uint8_t slave, uint16_t addr, uint16_t number, const uint16_t *data, uint8_t *out);

/**
 * \brief 获取modbus 10h即写多个保持寄存器的指令数据
 * \param data 数据
 * \param size 长度
 * \param addr 地址
 * \param number 寄存器数量
 * \param reg 寄存器值
 */
void getModbus10(const uint8_t* data, uint8_t size, uint16_t* addr, uint16_t* number, uint16_t* reg);

/**
 * \brief 生成modbus 10h即写多个保持寄存器的响应
 * \param slave 从机地址
 * \param addr 寄存器起始地址
 * \param number 写寄存器数量
 * \param out 输出数据区域
 * \return 数据长度
 */
uint8_t makeModbus10Response(uint8_t slave, uint16_t addr, uint16_t number, uint8_t *out);

/**
 * \brief 获取modbus 10h即写多个保持寄存器的响应
 * \param data 数据
 * \param size 长度
 * \param addr 输出写入的地址
 * \param number 输出写入的寄存器数量
 */
void getModbus10Response(const uint8_t* data, uint8_t size, uint16_t* addr,uint16_t* number);

/**
 * \brief 校验数据
 * \param data 数据
 * \param size 长度
 * \return 是否通过
 */
bool checkModbusData(const uint8_t *data, uint8_t size);
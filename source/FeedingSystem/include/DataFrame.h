#ifndef __DATA_FRAME_H__
#define __DATA_FRAME_H__

#include <stdint.h>
#ifdef WIN32
#include <memory.h>
#else
#include <Arduino.h>
#include <string.h>
typedef unsigned int size_t;
#endif //WIN32

/*
 * ����֡��ʽ��
 * 0x5a 0xa5 size data... checksum 0xaa
 */

/*
����һ֡���ݣ�����dataΪ���ݣ�frameΪ����֡,countΪ�����ֽ�����
������ԭ�ز��������255�ֽڡ�
����֡���ֽ�����
*/
size_t makeDataFrame(const void* data, void* frame, size_t count);

// У��һ֡���ݣ��Ϸ�����true�����򷵻�false
bool checkDataFrame(const void* frame);

// ����һ֡���ݣ����صõ������ݸ���
template <typename DataType>
size_t decodeDataFrame(DataType* data, const void* frame)
{
	size_t count;
	auto frameData = static_cast<const uint8_t*>(frame), ptr = frameData + 3;
	count = frameData[2] / sizeof(DataType);
	for (auto i = 0u; i < count; ++i, ptr += sizeof(DataType))
	{
		data[i] = *reinterpret_cast<const DataType*>(ptr);
	}
	return count;
}

/*
��һ���������ҵ�һ��������֡
����Ϊ����ָ��������ֽ���
����ָ��֡ͷ����ָ��
*/
char* findDataFrame(void* data,size_t size);

#endif //__DATA_FRAME_H__
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
 * 数据帧格式：
 * 0x5a 0xa5 size data... checksum 0xaa
 */

/*
构造一帧数据，参数data为数据，frame为数据帧,count为数据字节数。
不允许原地操作，最大255字节。
返回帧总字节数。
*/
size_t makeDataFrame(const void* data, void* frame, size_t count);

// 校验一帧数据，合法返回true，否则返回false
bool checkDataFrame(const void* frame);

// 解码一帧数据，返回得到的数据个数
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
从一段数据中找到一个完整的帧
参数为数据指针和数据字节数
返回指向帧头部的指针
*/
char* findDataFrame(void* data,size_t size);

#endif //__DATA_FRAME_H__
#include "DataFrame.h"

size_t makeDataFrame(const void* data, void* frame, size_t count)
{
	auto *scr = static_cast<const char*>(data);
	auto *dst = static_cast<char*>(frame);
	if (count > 0xff)
		return 0;
	// ��ʼ��־
	dst[0] = 0xa5;
	dst[1] = 0x5a;
	// �����ֽ���
	dst[2] = count;
	// ��������
	memcpy(dst + 3, scr, count);
	// У��
	dst[count + 3] = 0;
	for (auto i = 0u; i <= count;++i)
		dst[count + 3] += dst[i + 2];
	// �������
	dst[count + 4] = 0xaa;
	return (count + 5);
}

bool checkDataFrame(const void* frame)
{
	auto *data = static_cast<const char*>(frame);
	char sum = 0;
	// �����ʼ���
	if (data[0] != static_cast<char>(0xa5) || data[1] != static_cast<char>(0x5a))
	{
		return false;
	}
	// У��
	for (auto i = 0u;i <= data[2];++i)
	{
		sum += data[i + 2];
	}
	// ���У��ֵ�ͽ������
	if (sum != data[data[2] + 3] || data[data[2] + 4] != static_cast<char>(0xaa))
	{
		return false;
	}
	return true;
}

char* findDataFrame(void* data, size_t size)
{
	auto *pData = static_cast<char*>(data);
	for (auto i = 0; i < size;++i)
	{
		if(pData[i] == static_cast<char>(0xa5) && checkDataFrame(pData + i))
		{
			return (pData + i);
		}
	}
	return nullptr;
}
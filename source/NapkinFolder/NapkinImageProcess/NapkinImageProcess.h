#pragma once

#include "NapkinImageParameters.h"

/**
 * \brief ��ʼ��ͼ������̵Ĳ������״δ���ͼ��ǰ������ã�û�е��ý�����imageProcess����δ֪�����
 * \param arg ͼ�����
 * \return �����Ƿ�Ϸ�
 */
bool NAPKIN_EXPORT imageProcessInit(const ImageParameters& arg);
/**
 * \brief ����napkinͼ���״ε���ǰ�����ȵ���imageProcessInit��
 * \param src ����ͼ��
 * \param dst ���ͼ��
 * \param out ������
 * \return �Ƿ�ɹ�
 */
bool NAPKIN_EXPORT napkinDetect(const cv::Mat& src, cv::Mat& dst, ImageResult& out);
/**
 * \brief ��������ͼ���״ε���ǰ�����ȵ���imageProcessInit��
 * \param src ����ͼ��
 * \param dst ���ͼ��
 * \param out ������
 * \return �Ƿ�ɹ�
 */
bool NAPKIN_EXPORT holderDetect(const cv::Mat& src, cv::Mat& dst, ImageResult& out);;
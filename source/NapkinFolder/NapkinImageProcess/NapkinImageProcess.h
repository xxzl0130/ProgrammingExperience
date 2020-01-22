#pragma once

#include "NapkinImageParameters.h"

/**
 * \brief 初始化图像处理过程的参数。首次处理图像前必须调用！没有调用将导致imageProcess返回未知结果！
 * \param arg 图像参数
 * \return 参数是否合法
 */
bool NAPKIN_EXPORT imageProcessInit(const ImageParameters& arg);
/**
 * \brief 处理napkin图像，首次调用前必须先调用imageProcessInit！
 * \param src 输入图像
 * \param dst 输出图像
 * \param out 输出结果
 * \return 是否成功
 */
bool NAPKIN_EXPORT napkinDetect(const cv::Mat& src, cv::Mat& dst, ImageResult& out);
/**
 * \brief 处理吸盘图像，首次调用前必须先调用imageProcessInit！
 * \param src 输入图像
 * \param dst 输出图像
 * \param out 输出结果
 * \return 是否成功
 */
bool NAPKIN_EXPORT holderDetect(const cv::Mat& src, cv::Mat& dst, ImageResult& out);;
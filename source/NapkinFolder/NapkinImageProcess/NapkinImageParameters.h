#pragma once

#ifdef NAPKIN_DLL
#define NAPKIN_EXPORT __declspec(dllexport)
#else
#define NAPKIN_EXPORT __declspec(dllimport)
#endif

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

// 图像处理结果，保留int[4]留作扩展
struct NAPKIN_EXPORT ImageResult
{
    // 中心点物理坐标
    double centerX, centerY;
    // 旋转角度
    double rotateAngle;
    // 布料长宽
    double width, length;
    // 布料面积
    double area;
    // 布料颜色，顺序BGR
    unsigned char color[3];
    // 是否被折叠了
    bool folded;
    // 多边形边数
    int polySides;
    // 污点面积
    double stainArea;
    // 时间消耗，单位s
    double timeCost;
    // 保留字
    int reserved[4];
    ImageResult(): centerX(0), centerY(0), rotateAngle(0), width(0), length(0), area(0), color{0}, folded(false),
                   polySides(0), stainArea(0), timeCost(0), reserved{0}
    {
    }
};

struct NAPKIN_EXPORT ImageParameters
{
    // 焦距，[fx,fy]
    double focalLength[2];
    // 主点，[cx,cy]
    double principalPoint[2];
    // 光轴倾斜率，通常为0
    double skew;
    // 径向畸变，通常用2个系数，最多用3个
    double radialDistortion[3];
    // 切向畸变，2个系数
    double tangentialDistortion[2];
    // 亮度调节系数，通常在[0,2]之间，不能为负，默认1即不变
    double brightnessAdjust;
    // 对比度调节，通常在[-100,100]之间，默认0即不变
    double contrastAdjust;
    // 二值化方法，默认为OTSU
    int binaryMethod;
    // 二值化阈值，在部分二值化方法下需要指定
    int binaryThreshold;
    // 开启滤波，默认否
    bool enableSmoothing;
    // 开启畸变校正，默认是
    bool enableUndistort;
    // 滤波块大小，默认5
    int smoothingSize;
    // 污点颜色容许阈值，默认32
    double stainThresh;
    // 物距，即镜头到吸盘的距离，默认1200，单位mm
    double objectDistance;
    // 检测折叠状态的精度，默认20，单位像素
    double foldEpsilon;
    // 检测折叠状态的多边形边数阈值，默认5
    unsigned int foldThresh;
    // 腐蚀大小，默认5
    int erosionSize;
    // 膨胀大小，默认5
    int dilationSize;
    // 保留字
    int reserved[4];
    ImageParameters(): focalLength{}, principalPoint{}, skew(0), radialDistortion{}, tangentialDistortion{},
                       brightnessAdjust(1.0), contrastAdjust(0), binaryMethod(cv::THRESH_OTSU), binaryThreshold(0),
                       enableSmoothing(false), enableUndistort(true), smoothingSize(5), stainThresh(32),
                       objectDistance(1200), foldEpsilon(20), foldThresh(5), erosionSize(5), dilationSize(5),
                       reserved{}
    {
    }
};
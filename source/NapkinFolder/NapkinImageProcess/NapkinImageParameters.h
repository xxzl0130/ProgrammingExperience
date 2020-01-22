#pragma once

#ifdef NAPKIN_DLL
#define NAPKIN_EXPORT __declspec(dllexport)
#else
#define NAPKIN_EXPORT __declspec(dllimport)
#endif

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

// ͼ������������int[4]������չ
struct NAPKIN_EXPORT ImageResult
{
    // ���ĵ���������
    double centerX, centerY;
    // ��ת�Ƕ�
    double rotateAngle;
    // ���ϳ���
    double width, length;
    // �������
    double area;
    // ������ɫ��˳��BGR
    unsigned char color[3];
    // �Ƿ��۵���
    bool folded;
    // ����α���
    int polySides;
    // �۵����
    double stainArea;
    // ʱ�����ģ���λs
    double timeCost;
    // ������
    int reserved[4];
    ImageResult(): centerX(0), centerY(0), rotateAngle(0), width(0), length(0), area(0), color{0}, folded(false),
                   polySides(0), stainArea(0), timeCost(0), reserved{0}
    {
    }
};

struct NAPKIN_EXPORT ImageParameters
{
    // ���࣬[fx,fy]
    double focalLength[2];
    // ���㣬[cx,cy]
    double principalPoint[2];
    // ������б�ʣ�ͨ��Ϊ0
    double skew;
    // ������䣬ͨ����2��ϵ���������3��
    double radialDistortion[3];
    // ������䣬2��ϵ��
    double tangentialDistortion[2];
    // ���ȵ���ϵ����ͨ����[0,2]֮�䣬����Ϊ����Ĭ��1������
    double brightnessAdjust;
    // �Աȶȵ��ڣ�ͨ����[-100,100]֮�䣬Ĭ��0������
    double contrastAdjust;
    // ��ֵ��������Ĭ��ΪOTSU
    int binaryMethod;
    // ��ֵ����ֵ���ڲ��ֶ�ֵ����������Ҫָ��
    int binaryThreshold;
    // �����˲���Ĭ�Ϸ�
    bool enableSmoothing;
    // ��������У����Ĭ����
    bool enableUndistort;
    // �˲����С��Ĭ��5
    int smoothingSize;
    // �۵���ɫ������ֵ��Ĭ��32
    double stainThresh;
    // ��࣬����ͷ�����̵ľ��룬Ĭ��1200����λmm
    double objectDistance;
    // ����۵�״̬�ľ��ȣ�Ĭ��20����λ����
    double foldEpsilon;
    // ����۵�״̬�Ķ���α�����ֵ��Ĭ��5
    unsigned int foldThresh;
    // ��ʴ��С��Ĭ��5
    int erosionSize;
    // ���ʹ�С��Ĭ��5
    int dilationSize;
    // ������
    int reserved[4];
    ImageParameters(): focalLength{}, principalPoint{}, skew(0), radialDistortion{}, tangentialDistortion{},
                       brightnessAdjust(1.0), contrastAdjust(0), binaryMethod(cv::THRESH_OTSU), binaryThreshold(0),
                       enableSmoothing(false), enableUndistort(true), smoothingSize(5), stainThresh(32),
                       objectDistance(1200), foldEpsilon(20), foldThresh(5), erosionSize(5), dilationSize(5),
                       reserved{}
    {
    }
};
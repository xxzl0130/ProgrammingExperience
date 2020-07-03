#pragma once
#include "stdafx.h"

/**
 * \brief S型速度曲线插值器
 */
class DLL_EXPORT InterpolatorS
{
private:
	enum ErrorDefinition{
		no_ERROR	= 0,
		init_ERROR	= 10,
		calc_ERROR	= 11,
	};

	double ds, ds_old, ds_n, s_n, s, S, Se, Sa, Sbr, Sr, sr, dsr;
	double dV, dVbr, Ve, Va, v_old, V;
	double T, t, ab, av, a_old, T3, T4, t2, t3, tbr, t2br, t3br;
	unsigned long i,j,k,l,m,n,nbr;
	int Ri, Rest;

    void ProfilInterpolator(char Phase);
	double MaxSpeed(double s_, double v, double va, double ve);

public:
	// 实际值
	double	interDeltaX;		// 位置增量
	double	interX;				// 位置
	double	interV;				// 带符号速度
	double	interVabs;			// 速度绝对值
	double	interA;				// 加速度
	double  interJ;				// 加加速度
	unsigned long interPhase;	// 阶段

	// 设定值
	double	argumentA;			// 加速度
	double	argumentAv;			// 减速度
	double	argumentVs;			// 初速度
	double	argumentVt;			// 末速度
	double	argumentV;			// 运行速度
	double	argumentXs;			// 初始位置
	double	argumentXt;			// 结束位置
	double	argumentT;			// 采样时间(s)

	// Debug用的数值
	double	debugV;
	double	debugDeltaV;
	double	debugDeltaVbr;		
	double	debugBreakDis;				// 制动距离
	double	debugDisTogo;				// 剩余距离
	double	debugBreakTime;				// 制动时间
	double	debugEndposition;			// 结束位置
	unsigned long debugAccelInterpN;	// 加速段插补点数
	unsigned long debugBreakInterpN;	// 制动段插补点数
	

public:
	InterpolatorS();
	virtual ~InterpolatorS();

	virtual int start();
	virtual int startOvr(double V_ovr, double A_ovr=0.0);
	virtual void interpolation();
	virtual void getDebugData();
};

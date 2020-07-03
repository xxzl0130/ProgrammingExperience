#pragma once
#include "stdafx.h"

/**
 * \brief S���ٶ����߲�ֵ��
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
	// ʵ��ֵ
	double	interDeltaX;		// λ������
	double	interX;				// λ��
	double	interV;				// �������ٶ�
	double	interVabs;			// �ٶȾ���ֵ
	double	interA;				// ���ٶ�
	double  interJ;				// �Ӽ��ٶ�
	unsigned long interPhase;	// �׶�

	// �趨ֵ
	double	argumentA;			// ���ٶ�
	double	argumentAv;			// ���ٶ�
	double	argumentVs;			// ���ٶ�
	double	argumentVt;			// ĩ�ٶ�
	double	argumentV;			// �����ٶ�
	double	argumentXs;			// ��ʼλ��
	double	argumentXt;			// ����λ��
	double	argumentT;			// ����ʱ��(s)

	// Debug�õ���ֵ
	double	debugV;
	double	debugDeltaV;
	double	debugDeltaVbr;		
	double	debugBreakDis;				// �ƶ�����
	double	debugDisTogo;				// ʣ�����
	double	debugBreakTime;				// �ƶ�ʱ��
	double	debugEndposition;			// ����λ��
	unsigned long debugAccelInterpN;	// ���ٶβ岹����
	unsigned long debugBreakInterpN;	// �ƶ��β岹����
	

public:
	InterpolatorS();
	virtual ~InterpolatorS();

	virtual int start();
	virtual int startOvr(double V_ovr, double A_ovr=0.0);
	virtual void interpolation();
	virtual void getDebugData();
};

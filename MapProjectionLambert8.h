#pragma once
#include "MapProjection8.h"
class CMapProjectionLambert8 :
	public CMapProjection8
{
public:
	CMapProjectionLambert8(float L0, float B0, float L1, float B1);
	void getXY(float L, float B, float *x, float *y);
	void Draw(CDC *pDC);
	//Ӧ��ָ��˫��׼γ����ͶӰ����
	float b1, b2;//����
	float r1, r2;//��������
	float n1, n2;//î��Ȧ�뾶
	float u1, u2;//���ֹ�ʽ��������ֵ
	float ac, c;//�ȽǸ�Բ��ͶӰ���賣��
	float ps;//�����γ��ͶӰ���賣��
	float lm;//���뾭��
	float us;
	float bs;
	~CMapProjectionLambert8();
};


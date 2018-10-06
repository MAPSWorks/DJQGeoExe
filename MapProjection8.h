#pragma once
#define pi 3.141592654

class CMapProjection8
{
public:
	CMapProjection8();
	float L0, L1, B0, B1;
	float ae;//��Բ���뾶
	float e;//��һƫ���ʣ�Լ���ڿ�ƽ����2�����ʣ���
	int mapShowScale;
	int mapScale;
	virtual void getXY(float L, float B, float *x, float *y);
	void getLB(float x, float y, float *L, float *B);
	virtual void Draw(CDC *pDC);
	CRect wcRect;
	~CMapProjection8();
};


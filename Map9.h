#pragma once
#include "afxtempl.h"
#include  <vector>
#include  <algorithm>
#include <string>
using namespace std;

class CMap9
{
public:
	CMap9();
	vector <CPoint> pts;//ԭʼ�㼯
	vector <CPoint> Chpts;//�㷨����ȡ�ı���ֱ�ߵĽ���
	void Draw(CDC *pDC);//���ƽ��
	void getPoint();//�õ��ڵ����
	static bool ismax(CPoint A, CPoint B);//�������躯��
	void getintersectPoint();//�õ�����ֱ�߽���ĺ���
	float x0, y0;//�ڵ����
	float xmin, ymin, xmax,ymax;//��Ӿ��β���
	~CMap9();
};


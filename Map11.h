#pragma once
#include "afxtempl.h"
#include  <vector>
#include  <algorithm>
#include <string>
#include  "Vector.h"
using namespace std;

class CMap11
{
public:
	CMap11();
	vector <CPoint> pts;//ԭʼ�㼯
	void Draw(CDC *pDC);//���ƽ��
	void clockJudge();//�õ��ڵ����
	float xmin, ymin, xmax, ymax;//��Ӿ��β���
	bool clockWise;//�Ƿ�Ϊ˳ʱ��
	~CMap11();
};


#include "stdafx.h"
#include "SpatialIndex12.h"


CSpatialIndex12::CSpatialIndex12()
{

}

CSpatialIndexArea12 * CSpatialIndex12::getCurrentIndexArea(float x, float y)
{
	for (int j = 0; j < 25; j++)
	{
		CRect rect = this->indexArea[j]->rect;
		//�ж���������ڲ��ڵ�ǰ������
		if ((x > rect.left) && (x < rect.right) && (y > rect.top) && (y < rect.bottom))
		{
			return this->indexArea[j];
		}
	}
	return nullptr;
}


CSpatialIndex12::~CSpatialIndex12()
{

}

// Tyuiu.BotterVV.Sprint0.CoursControl.Task2.V1.Lib.cpp : ���������� ������� ��� ����������� ����������.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: ��� ������ ������������ �������.
class Service2 :public ISprint0Task8V3
{
	virtual double Proizved(float a, float b, float c)
	{
		float d;
		d = 5 + (((2 * a) - c) / (3 + (b * b)));
		return d;
	}
};
// Tyuiu.BotterVV.Sprint0.CoursControl.Task1.V1.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: Это пример библиотечной функции.
class Service1 :public ISprint0Task8V0
{
	virtual int Control(int k)
	{
		int k1 = k / 100;
		int k2 = (k / 10) % 10;
		int k3 = k % 10;
		int j = k1 * k2 * k3;
		return j;
	}
};
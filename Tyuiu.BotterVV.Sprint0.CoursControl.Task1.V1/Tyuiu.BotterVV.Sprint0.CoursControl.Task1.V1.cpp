// Tyuiu.BotterVV.Sprint0.CoursControl.Task1.V1.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <iostream>
#include "../Tyuiu.BotterVV.Sprint0.CoursControl.Task1.V1.Lib/Tyuiu.BotterVV.Sprint0.CoursControl.Task1.V1.Lib.cpp"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int k;
	ISprint0Task8V0* task1 = new Service1();
	cout << "������� ���������� ����� :"; cin >> k;
	cout << "������������ ���� ����������� ����� :" << task1->Control(k);
}
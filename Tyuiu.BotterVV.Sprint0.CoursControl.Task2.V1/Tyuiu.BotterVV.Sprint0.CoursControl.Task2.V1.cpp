// Tyuiu.BotterVV.Sprint0.CoursControl.Task2.V1.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <iostream>
#include "../Tyuiu.BotterVV.Sprint0.CoursControl.Task2.V1.Lib/Tyuiu.BotterVV.Sprint0.CoursControl.Task2.V1.Lib.cpp"

using namespace std;
int main()
{
	ISprint0Task8V3* task2 = new Service2();
	int x, y, z;
	setlocale(LC_ALL, "Russian");
	cout << "������� x : "; cin >> x;
	cout << "������� y : "; cin >> y;
	cout << "������� z : "; cin >> z;
	cout << "��������� ����� : "; cout << task2->Proizved(x, y, z);
}
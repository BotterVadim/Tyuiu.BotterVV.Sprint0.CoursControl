// Tyuiu.BotterVV.Sprint0.CoursControl.Task2.V1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.BotterVV.Sprint0.CoursControl.Task2.V1.Lib/Tyuiu.BotterVV.Sprint0.CoursControl.Task2.V1.Lib.cpp"

using namespace std;
int main()
{
	ISprint0Task8V3* task2 = new Service2();
	int x, y, z;
	setlocale(LC_ALL, "Russian");
	cout << "Введите x : "; cin >> x;
	cout << "Введите y : "; cin >> y;
	cout << "Введите z : "; cin >> z;
	cout << "Выражение равно : "; cout << task2->Proizved(x, y, z);
}
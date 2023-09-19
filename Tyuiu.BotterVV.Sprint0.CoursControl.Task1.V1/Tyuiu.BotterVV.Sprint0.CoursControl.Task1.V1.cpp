// Tyuiu.BotterVV.Sprint0.CoursControl.Task1.V1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.BotterVV.Sprint0.CoursControl.Task1.V1.Lib/Tyuiu.BotterVV.Sprint0.CoursControl.Task1.V1.Lib.cpp"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int k;
	ISprint0Task8V0* task1 = new Service1();
	cout << "Введите трёхзначное число :"; cin >> k;
	cout << "Произведение цифр трёхзначного числа :" << task1->Control(k);
}
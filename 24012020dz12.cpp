﻿/*
13. Даны два действительных положительных числа х и у.Арифметические действия над числами пронумерованы(1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление).Составить программу, которая по введенному номеру выполняет то или иное действие над числами.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Арифметические действия над числами (1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление)\n";
	cout << "Введите номер детали чтобы вывести на экран ее название: ";
	int a;
	cin >> a;
	double x, y;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	switch (a) {
	case 1:cout << "Результат сложения: " << x + y; break;
	case 2:cout << "Результат вычитания: " << x - y; break;
	case 3:cout << "Результат умножения: " << x * y; break;
	case 4:cout << "Результат деления: " << x / y; break;
	default: cout << "Ошибка";
	}
	return 0;
}

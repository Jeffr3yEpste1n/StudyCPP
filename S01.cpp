#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	int a;
	float b;
	double c;
	string d;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Умножаем число а на 2: " << a * 2 << "\nВведите число b: ";
	cin >> b;
	cout << "Прибавляем к b 0.2: " << b + 0.2 << "\nВведите число c: ";
	cin >> c;
	cout << "Возводим c в квадрат: " << c * c << "\nВведите строку d: ";
	cin >> d;
	cout << "Копируем строку d: " << d + d;
	return 0;
}

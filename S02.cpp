#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	int a, b;
	cout << "Введите а: ";
	cin >> a;
	cout << "На какое число делим а: ";
	cin >> b;
	cout << "Остаток: " << a % b << "\nДеление нацело: " << a / b;
	return 0;
}

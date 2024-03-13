#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>
using namespace std;
char* RUS(const char* str)
{
	static char buf[BUFSIZ];
	OemToCharA(str, buf);
	return buf;
}
int main() {
	setlocale(LC_CTYPE, "Russian");
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
	cout << "Возводим c в квадрат: " << c * c << "\nВведите d: ";
	cin >> d;
	cout << "Копируем строку d: " << d + d;
	return 0;
}

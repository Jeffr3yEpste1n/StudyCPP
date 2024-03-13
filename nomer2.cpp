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
	int a,b;
	cout << "Введите а: ";
	cin >> a;
	cout << "На какое число делим а: ";
	cin >> b;
	cout << "Остаток: " << a % b << "\nДеление нацело: " << a / b;
	return 0;
}

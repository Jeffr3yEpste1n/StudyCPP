#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	int a;
	a = 0;
	while (a < 100) {
        a += 1;
        if (a % 3 == 0) {
            cout << a << '\t';
        }
	}
	return 0;
}

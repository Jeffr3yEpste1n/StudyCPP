#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	int a, b;
	cout << "������� �: ";
	cin >> a;
	cout << "�� ����� ����� ����� �: ";
	cin >> b;
	cout << "�������: " << a % b << "\n������� ������: " << a / b;
	return 0;
}

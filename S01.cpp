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
	float b;
	double c;
	string d;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "�������� ����� � �� 2: " << a * 2 << "\n������� ����� b: ";
	cin >> b;
	cout << "���������� � b 0.2: " << b + 0.2 << "\n������� ����� c: ";
	cin >> c;
	cout << "�������� c � �������: " << c * c << "\n������� ������ d: ";
	cin >> d;
	cout << "�������� ������ d: " << d + d;
	return 0;
}

#include <iostream>
#include <sstream>
#include <math.h>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	int A, N;
	double S;
	cout << "������� ����� ������� A: " << endl;
	cin >> A;
	cout << "������� ���������� ������ N: " << endl;
	cin >> N;
	if (N > 2)
    {
        S = (N*N*A)/(4*tan(M_PI/N));
        cout << "������� " << N << "���������: " << S << endl;
	}
    else
    {
        cout << "��� �� �������������" << endl;
    }
	return 0;
}

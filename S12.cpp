#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	int i;
    int sum = 0;
    for (i = 1; i <= 1000; i=i+4)
    {
        if (i % 7 == 0) {
            sum = sum + i;
            cout << i << '\t';
        }
    }
    cout << "\n����� ���� �����, ��������� �� 7: " << sum;
	return 0;
}

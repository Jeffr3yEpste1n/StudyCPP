#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	int i, j;
    for (int i=1;i<=10;i++)
    {
        for (int j=1;j<=10;j++)
            cout << i*j <<'\t';
        cout << endl;
    }
	return 0;
}

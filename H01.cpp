#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� �����
    double x,q,s=0;
    int n;
    cout << "������� x = ";
    cin >> x;
    q = x;
    //���������� ������:
    for (n=1;n <= 100/*������� ����*/;n++)
    {
        s+=q;
        q*=(-1)*x*x/(2*n)/(2*n+1);
    }
    cout << "sin(" << x << ") ��� math.h = " << s << endl;
    cout << "sin(" << x << ") � math.h = " << sin(x) << endl;
    return 0;
}

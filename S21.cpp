#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
    int a, b, i;
    cout << "������� �: " << endl;
    cin >> a;
    cout << "������� b: " << endl;
    cin >> b;
    ofstream fout("output.txt");
    while (b > a)
    {
        cout << "����� a: " << a << ", a*3: " << a*3 << endl;
        fout << a*3 << endl;
        a += 1;
    }
    fout.close();
    return 0;
}

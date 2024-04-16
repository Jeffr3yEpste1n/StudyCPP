#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
    int a, b, i;
    cout << "¬ведите а: " << endl;
    cin >> a;
    cout << "¬ведите b: " << endl;
    cin >> b;
    ofstream fout("output.txt");
    while (b > a)
    {
        cout << "„исло a: " << a << ", a*3: " << a*3 << endl;
        fout << a*3 << endl;
        a += 1;
    }
    fout.close();
    return 0;
}

#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывод
    double x,q,s=0;
    int n;
    cout << "введите x = ";
    cin >> x;
    q = x;
    //¬ычисление синуса:
    for (n=1;n <= 100/*граница р€да*/;n++)
    {
        s+=q;
        q*=(-1)*x*x/(2*n)/(2*n+1);
    }
    cout << "sin(" << x << ") без math.h = " << s << endl;
    cout << "sin(" << x << ") с math.h = " << sin(x) << endl;
    return 0;
}

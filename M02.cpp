#include <iostream>
#include <sstream>
#include <math.h>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	int A, N;
	double S;
	cout << "введите длину стороны A: " << endl;
	cin >> A;
	cout << "введите количество сторон N: " << endl;
	cin >> N;
	if (N > 2)
    {
        S = (N*N*A)/(4*tan(M_PI/N));
        cout << "Площадь " << N << "угольника: " << S << endl;
	}
    else
    {
        cout << "Это не многоугольник" << endl;
    }
	return 0;
}

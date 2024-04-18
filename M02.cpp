#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

double findarea(int N, double A) {
    double S;
    S = (N * A * A) / (4 * tan(M_PI / N));
    return S;
}

int main() {
    int N;
    double A, S;
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывод
    cout << "¬ведите количество сторон многоугольника: ";
    cin >> N;
    cout << "¬ведите длину стороны многоугольника: ";
    cin >> A;
    if (N < 3 || A <= 0) {
        cout << "wrong data!" << endl;
        return 1;
    }
    S = findarea(N, A);
    cout << "ѕлощадь многоугольника: " << S << endl;

    return 0;
}

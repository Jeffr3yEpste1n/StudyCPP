#include <iostream>
#include <math.h>
using namespace std;

const int N = 100; //Lim

double calcSin(double x) {
    double q = x;
    double s = 0.0;
    for (int n = 1; n <= N; ++n) {
        s += q;
        q *= (-1)*x*x/(2*n)/(2*n+1);
    }
    return s;
}

int main() {
    double x;
    cout << "Enter x = ";
    cin >> x;
    cout << "sin(" << x << ") = " << calcSin(x) << endl;
    cout << "sin(" << x << ") by math.h = " << sin(x) << endl;
    return 0;
}

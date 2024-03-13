#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>
using namespace std;
char* RUS(const char* str)
{
	static char buf[BUFSIZ];
	OemToCharA(str, buf);
	return buf;
}
int main() {
	setlocale(LC_CTYPE, "Russian");
	int i;
    int sum = 0;
    for (i = 1; i <= 1000; i=i+4)
    {
        if (i % 7 == 0) {
            sum = sum + i;
            cout << i << '\t';
        }
    }
    cout << "\nСумма всех чисел, делящихся на 7: " << sum;
	return 0;
}

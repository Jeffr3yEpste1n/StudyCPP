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
	int a, i;
	a = 0;
	while (a < 100) {
        a += 1;
        if (a % 3 == 0) {
            cout << a << '\t';
        }
	}
	return 0;
}

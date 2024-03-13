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
	int i, j;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
            cout << i*j <<'\t';
        cout << endl;
    }
	return 0;
}

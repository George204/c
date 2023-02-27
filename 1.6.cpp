#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<"naciœnij dowolny klawisz";getch();

using namespace std;
int main()
{
	int a = 1;
	setlocale(LC_CTYPE, "Polish");
	cout<<a>>a<<a;
	ndk;
	getch();
	return 0;
}


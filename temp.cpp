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
	setlocale(LC_CTYPE, "Polish");
	ndk;
	getch();
	return 0;
}


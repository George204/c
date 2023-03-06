#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<"naciœnij dowolny klawisz";getch();cout<<"\r                                      \r\n";

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	float a = 0;
	float b = 3;
	if (0 >= a or 0 >= b) {	
		cout<<"liczba podana w pokach nie wiêksza ni¿ 0"<<endl;
	}
	else{
		cout<<"pole prostok¹ta"<<a*b<<endl;
	}
	ndk;
	return 0;
}


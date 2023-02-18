#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <conio.h>
#include <cmath>
#include <windows.h>
#include <iomanip>
#include <unistd.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	
	int liczby[] = {7,12,16,33000};
	cout<<sizeof(liczby)<<liczby[3];
	

	
	
/*	
	float bok = 7.225;
	cout<<"obliczanie dla boku "<<bok<<endl;
	
	float kraw = bok*12;
	float obj = pow(bok,3);
	float pole = pow(bok,2)*6;
	
	cout<<"P="<<pole<<endl<<"O="<<obj<<endl<<"S="<<kraw;
*/	
	getch();
	return 0;
}

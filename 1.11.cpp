#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<endl<<"naci�nij dowolny klawisz";getch();cout<<"\r                                      \r\n";

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	float a=5,b=6,c=7;
	if(a==0){
		if(b==c){cout<<"r�wnanie tozszamo�ciowe";}
		else if (b!=c){cout<<"r�wnaie sprzeczne";}
	}
	else{cout<<"x="<<((c-b)/a);}
	ndk;
	return 0;
}


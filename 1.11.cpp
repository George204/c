#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<endl<<"naciœnij dowolny klawisz";getch();cout<<"\r                                      \r\n";

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	float a=5,b=2,c=3;
	if(a==0){
		if(b==c){cout<<"równanie tozszamoœciowe";}
		else if (b!=c){cout<<"równaie sprzeczne";}
	}
	else{cout<<"x="<<(c-b/a);}
	ndk;
	return 0;
}


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<"\nnaci�nij dowolny klawisz";getch();cout<<"\r                                      \r\n";

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	while(true){
	float a,b,c,d;
	cout<<fixed<<setprecision(2)<<"r�wnanie ax^2+bx+c=d"<<endl;
	cout<<"a:";	cin>>a;
	cout<<"b:"; cin>>b;
	cout<<"c:";	cin>>c;
	cout<<"d:";	cin>>d;
//	system("cls");
//	cout<<"obliczanie dla r�wnania"<<a<<"x^2+"<<b<<"x+"<<c<"="<<d;
	if(a==0){
		if(b==0){
			if(c==d){cout<<"r�wnanie tozszamo�ciowe";}
			else if (c!=d){cout<<"r�wnanie sprzeczne";}}
		else{cout<<"x="<<((d-c)/b);}}
	else{
		c = c-d;
		float delta = pow(b,2)-(4*a*c);
		if(delta == 0){
			float x = (-1*b)/(2*a);
			cout<<"x:"<<x;
		}
		else if(delta > 0){
			float x1 = (-b-sqrt(delta))/(2*a);
			float x2 = (-b+sqrt(delta))/(2*a);
			cout<<"x1:"<<x1<<"\nx2:"<<x2; }
		else if (delta < 0){cout<<"brak rozwi�za�";}}
	ndk;}
	return 0;
}


#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	__int64 a = 1;
	__int64 b = 1;
	__int64 c = 1;
	cout<<0<<endl;
	cout<<1<<endl;
	cout<<1<<endl;	
	for (int i = 1; i <= 1000; ++i) {
		c = a+b;
        cout<<c<<endl;
        a = b;
        b = c;
	}
}

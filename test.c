#include<iostream>
#include <iomanip>
using namespace std;

void pr( char *, int );
void pr( char *, double );

int main()
{
	int a = 15;
	double x = 3.141592653589793;

	pr( "a", a );
	pr( "x", x );
	pr( "a", a );

	return 0;
}

void pr( char *name, int a ) // int型の表示
{
	cout << name << " = " << dec << a << hex << ", hex(" << a << ")" << endl;
}

void pr( char *name, double x ) // double型の表示
{
	cout << name << " = " << setprecision(20) << x << endl;
}

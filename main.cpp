#include <iostream>
#include "complex.h"
using namespace std;
int main()
{
	Complex a(3.0,6.72), b(2.0,2.0), d(22.0,3.2);
	Complex c;
	cout << "a\t\t" << a << endl << "b\t\t" << b << endl;
	cout << "a+b\t\t" << a+b << endl;
	cout << "a+10\t\t" << a+10 << endl;
	cout << "a-b\t\t" << a-b << endl;
	cout << "a-10\t\t" << a-10 << endl;
	cout << "a*b\t\t" << a*b << endl;
	cout << "a*10\t\t" << a * 10 << endl;
	cout << "a/b\t\t" << a / b << endl;
	cout << "a/10\t\t" << a / 10 << endl;
	c = a;
	cout << "c = a\t\t" << c << endl;
	c = 10;
	cout << "c = 10\t\t" << c << endl;
	c+=a;
	cout << "c+=a\t\t" << c << endl;
	a += b += b;
	cout << "a-=b+=b\t\t" << a << endl;
	cout << "a i b\t\t" << a << "\t\t" << b << endl;
	if(c == d)
		cout << "c==d\t\t" << c << " == " << d << endl;
	else cout << "c!==d\t\t" << c << " !(==) " << d << endl;
	cout << "czesc rzeczywista(d)\t" << d.cz_Rzeczywista() << endl;
	cout << "czesc urojona(d)\t" << d.cz_Urojona() << endl;
	cout << "modul(d)\t\t" << d.modul() << endl;
	cout << "faza(d)\t\t\t" << d.faza() << endl;
	return 0;
}
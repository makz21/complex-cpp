// complex.cpp -- implementacja metod klasy complex
#include <iostream>
#include <cmath>
#include "complex.h"
using namespace std;

Complex::Complex()
{
	Real = 0.0; Imag = 0.0;
}
Complex::Complex(double re) : Real(re), Imag(0.0)
{
}

Complex::Complex(double re, double im) : Real(re), Imag(im)
{
}

Complex::Complex(const Complex& comp) : Real(comp.Real), Imag(comp.Imag)
{
}
					// **** FUNKCJE SKKLADOWE KLASY ****

Complex & Complex::operator=(const Complex & comp)
{
	if(&comp != this)
	{
		Real = comp.Real; Imag = comp.Imag;
	}
	return *this;
} 

Complex & Complex::operator+=( const Complex comp)
{
	Real += comp.Real;
	Imag += comp.Imag;
	return *this;
}

Complex & Complex::operator-=( const Complex comp) 
{
	Real -= comp.Real;
	Imag -= comp.Imag;
	return *this;
}

Complex & Complex::operator*=( const Complex comp) 
{
	Real = (Real * comp.Real - Imag * comp.Imag);
	Imag = (Real * comp.Imag + Imag * comp.Real);
	return *this;
}

Complex & Complex::operator/=( const Complex comp) 
{
	Real = (Real*comp.Real + Imag*comp.Imag) / (pow(comp.Real,2) + pow(comp.Imag,2));
	Imag = (Imag*comp.Real - Real*comp.Imag) / (pow(comp.Real,2) + pow(comp.Imag,2));
	return *this;
}

double Complex::cz_Rzeczywista()
{
	return Real;
}

double Complex::cz_Urojona()
{
	return Imag;
}

double Complex::modul() const
{
	return (sqrt(pow(Real,2)+pow(Imag, 2)));
}

double Complex::faza() const
{
	return atan(Real/Imag)* 180/M_PI;
}

 Complex Complex::operator+ (const Complex& co) const
 {
    Complex n;
    n.Real = this->Real + co.Real;
    n.Imag = this->Imag + co.Imag;
    return n;
 }

 Complex Complex::operator+ (const double dd) const
 {
 	return Complex(Real + dd, Imag);
 }

Complex Complex::operator-( const Complex & comp2)
{
	return (Complex(Real - comp2.Real, Imag - comp2.Imag));
}

Complex Complex::operator-( const double dd)
{
	return (Complex(Real - dd, Imag ));
}

bool Complex::operator==(const Complex &comp) const 
{
    if ((Real == comp.Real) && (Imag == comp.Imag))
        return true;
    else
        return false;
}
					// ***** FUNKCJE ZAPRZYJAZNIONE *****

Complex operator*(const Complex & comp1, const Complex & comp2)
{
	return (Complex((comp1.Real * comp2.Real - comp1.Imag * comp2.Imag), (comp1.Real * comp2.Imag + comp1.Imag * comp2.Real)));
}

Complex operator/(const Complex & comp1, const Complex & comp2)
{
	return (Complex((comp1.Real*comp2.Real + comp1.Imag*comp2.Imag) / (pow(comp2.Real,2) + pow(comp2.Imag,2)), (comp1.Imag*comp2.Real - comp1.Real*comp2.Imag) / (pow(comp2.Real,2) + pow(comp2.Imag,2))));
}

ostream & operator << (ostream & s, const Complex & comp)
{
	s << "(" << comp.Real << " + " << comp.Imag << "i)";
	return s;
}
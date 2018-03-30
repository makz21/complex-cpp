// complex.h -- klasa Complex z operatorami i funkcjami podstawowymi na liczbach zespolonych
#ifndef COMPLEX_H_
#define COMPLEX_H_
using namespace std;

class Complex
{
private:
	double Real;
	double Imag;
public:
	Complex();
	Complex(double re);
	Complex(double re, double im);
	Complex(const Complex & comp);
	Complex & operator=(const Complex & comp);			// operator Complex = Complex
	Complex & operator+=(const Complex comp) ;		
	Complex & operator-=(const Complex comp) ;			
	Complex & operator*=(const Complex comp) ;			
	Complex & operator/=(const Complex comp) ;
  	Complex operator+ (const Complex& co) const;
  	Complex operator+ (const double dd) const;
  	Complex operator- (const Complex& comp2);
  	Complex operator-( const double dd);
	double cz_Rzeczywista() ;  					// funkcja zwraca czesc rzeczywista l.z
	double cz_Urojona() ;							// funkcja zwraca czesc urojona l.z
	double modul() const;								// funkcja zwraca modul l.z.
	double faza() const;								// funkcja zwraca faze l.z.
	bool operator==(const Complex &comp) const;				// operator porównujący ==
		friend Complex operator*(const Complex & comp1, const Complex & comp2);	 //
		friend Complex operator/(const Complex & comp1, const Complex & comp2);	 //
		friend ostream & operator << (ostream & s, const Complex & c);		
};



#endif
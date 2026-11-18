#pragma once
class Complex
{
private:
	double re;
	double img;
public:
	Complex(double,double);
	Complex(const Complex &c);
	void afficher() ;
	~Complex();
	Complex operator+(Complex);
	Complex operator+( double);
	Complex operator-(Complex);
	Complex operator-(double);
	Complex operator*(Complex);
	Complex operator*(double);
	Complex operator /(Complex);
	Complex operator /(double);
	void operator ==(const Complex &c) ;
	void operator !=(const Complex &c);
	void operator <(const Complex &c) ;
	void operator >(const Complex & c) ;

};


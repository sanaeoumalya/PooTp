#include "Complex.h"
#include <iostream>
using namespace std;
Complex::Complex(double re,double img)
{
	this->re = re;
	this->img = img;
}

Complex::Complex(const Complex &c)
{
	this->re = c.re;
	this->img = c.img;

}


 void  Complex::afficher()
{
		cout << this->re << "+i" << this->img << endl;

}

Complex::~Complex()
{
}

Complex Complex::operator+(Complex c)
{
		Complex* res = new Complex(0, 0);
		res->re = this->re + c.re;
		res->img = this->img + c.img;
		return *res;
	
}

Complex Complex::operator+(double a)
{
	Complex* res = new Complex(0, 0);
	res->re = this->re + a;
		res->img = this->img;
	return *res;

	return *res;
}

Complex Complex::operator-(Complex c){
		Complex* res = new Complex(0, 0);
		res->re = this->re - c.re;
		res->img = this->img - c.img;
		return *res;
	
}

Complex Complex::operator-(double a)
{
	Complex* res = new Complex(0, 0);
	res->re = this->re - a;
	res->img = this->img  ;
	return *res;
}

Complex Complex::operator*(Complex c)
{
	Complex* res = new Complex(0, 0);
	res->re = (this->re * c.re) - (this->img * c.img);
	res->img = (this->re * c.img) + (this->img * c.re);
	return *res;
}

Complex Complex::operator*(double a)
{
	Complex* res = new Complex(0, 0);
	res->re = this->re * a;
	res->img = this->img * a;
	return *res;

}

Complex Complex::operator/(Complex c)
{
	Complex* res = new Complex(0, 0);
	double z = c.re * c.re + c.img * +c.img;
	res->re = (this->re * c.re + this->img * c.img)/z;
	res->img = (this->img * c.re - this->re * c.img) / z;
	return *res;
}

Complex Complex::operator/(double b)
{
	Complex* res = new Complex(0, 0);
	res->re = this->re / b;
	res->img = this->img /b;
	return *res;
}

void Complex::operator==(const Complex &c) 
{

	if (this->re == c.re && this->img == c.img)
		cout << "true"<<endl;
	else {
		cout << "false" << endl;
	}
}

void Complex::operator!=(const Complex& c){

	if (this->re != c.re || this->img != c.img)
		cout << "true"<<endl;
	else {
		cout << "false" << endl;
	}
}

void Complex::operator<(const Complex &c) {
	double module = this->re * this->re + this->img * this->img;
	double modulec = c.re * c.re + c.img * c.img;
	if (module < modulec)
		cout << "true" << endl;
}

void Complex::operator>(const Complex& c) {
	double module = this->re * this->re + this->img * this->img;
	double modulec = c.re * c.re + c.img * c.img;
	if (module > modulec)
		cout << "true" << endl;
}




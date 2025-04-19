#include<iostream>
#include<stdio.h>
using namespace std;

class Complex
{
	float real,imag;
	public:
		void getdata();
		void putdata();
		friend Complex sum(Complex A, Complex B);
};
void Complex::getdata()
{
	cout<<"Enter real part: ";
	cin>>real;
	cout<<"Enter imaginary part: ";
	cin>>imag;
}
void Complex::putdata()
{
	if (imag>=0)
	cout<<real<<" + "<<imag<<" I ";
	else
	cout<<real<<"I";
}
Complex sum (Complex A,	Complex B)
{
	Complex temp;
	temp.real= A.real+B.real;
	temp.imag= A.imag + B.imag;
	return temp;
}

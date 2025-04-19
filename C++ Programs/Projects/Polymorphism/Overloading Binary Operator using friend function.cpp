#include<iostream>
using namespace std;

class Complex
{
	double real, imag;
	public: 
	Complex(){}
	Complex (double,double);
	friend Complex operator+ (Complex , Complex);
	void print();
};
Complex::Complex(double r, double i)
{
	real=r;
	imag=i;
}
Complex operator + (Complex p, Complex q)
{
	Complex temp;
	temp.real=p.real=q.real;
	temp.imag=p.imag+q.imag;
	return(temp);
}
void Complex :: print()
{
	cout<<real<<"+i"<<imag<<endl;
}
int main()
{
	Complex c1(3.1,1.5);
	Complex c2(1.2,2.2);
	Complex c3;
	c3=c1+c2;
	c1.print();
	c2.print();
	c3.print();
}

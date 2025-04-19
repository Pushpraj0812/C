#include<iostream>
using namespace std;

class complex
{
	float real, imag;
	public:
		void getdata();
		void putdata();
		friend complex sum(complex A, complex B);
};
void complex::getdata()
{
	cout<<"Enter real part: ";
	cin>>real;
	cout<<"Enter imaginary part: ";
	cin>>imag;
}
void complex::putdata()
{
	if(imag>=0)
	cout<<real<<"+"<<imag<<"I";
	else
	cout<<real<<"I";
}
complex sum(complex A, complex B)
{
	complex temp;
	temp.real=A.real+B.real;
	temp.imag=A.imag+B.imag;
	return temp;
}
int main()
{
	complex x,y,z;
	x.getdata();
	y.getdata();
	z.getdata();
	z=sum(x,y);
	z.putdata();
}

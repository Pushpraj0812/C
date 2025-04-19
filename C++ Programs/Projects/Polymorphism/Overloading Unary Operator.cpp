#include<iostream>
using namespace std;

class Complex
{
	int a,b,c;
	public:
		complex() {}
			void getvalue()
			{
				cout<<"Enter the two number: ";
				cin>>a>>b;
			}
			void operator ++()
			{
				a=++a;
				b=++b;
			}
			void operator --()
			{
				a=--a;
				b=--b;
			}
			void display()
			{
				cout<<a<<"+\t"<<b<<"i"<<endl;
			}
};
int main()
{
	Complex obj;
	obj.getvalue();
	++ obj;
	cout<<"Increment Complex Number: "<<endl;
	obj.display();
	-- obj;
	cout<<"Decrement Complex Number: "<<endl;
	obj.display();
}

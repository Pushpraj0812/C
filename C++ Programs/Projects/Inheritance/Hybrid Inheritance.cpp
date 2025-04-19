#include<iostream>
#include<conio.h>
using namespace std;
class colorc //base class
{
	protected:
	int a;
	public:
	void get()
	{
	cout<<"Enter a value:";
	cin>>a;     
    }
}; 
class redc:virtual public colorc //first child class
{
	protected:
	int b;
	public:
	void get1()
	{
	cout<<"Enter b value";
	cin>>b;
    }
}; 
class greenc:virtual public colorc //second child class
{
	protected:
	int c;
	public:
	void get2()
	{
		cout<<"Enter c value:";
		cin>>c;    
    }
};
class yellowc:public redc,public greenc  //child class for first and second child class
{
	public:
	void display()
	{
	get();    get1();    get2();
	cout<<"Multiplication value is: "<<a*b*c;    
    }
};

int main()    
{
    yellowc a;
	a.display();   
	getch();    
}

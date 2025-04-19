#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

class example
{
	string*name;
	int length;
	public:
		example();
		example(string a);
		void display();
};
example::example()
{
	length=0;
	name=new string[length+1];
	*name="svim";
}
example::example(string a)
{
	name=new string[20];
	*name=a;
}
void example::display()
{
	cout<<*name<<endl;
}

int main()
{
	example e1, e2("Indore"), e3("Idiot");
	e1.display();
	e2.display();
	e3.display();
}

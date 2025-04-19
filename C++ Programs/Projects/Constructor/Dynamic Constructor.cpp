#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

class example
{
	string *name;
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
	*name="Pushpraj";
}


example::example(string a)
{
		
			
name=new string[10];
	*name=a;
		
}

void example::display()
{
	cout<<*name<<endl;
}

int main()
{
	
	example e1, e2("Pushpraj"),e3("Singh Kachhaway");
    e1.display();
	e2.display();
	e3.display();

	return 0;
}

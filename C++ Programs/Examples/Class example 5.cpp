#include<iostream>
#include<stdio.h>
using namespace std;

class Person
{
	char name[20], city;
	int age, salary;
	public:
		void getdata();
		void putdata();
};
void Person::getdata()
{
	cout<<"Enter your name: ";
	gets(name);
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your city: ";
	cin>>city;
	cout<<"Enter your salary: ";
	cin>>salary;
}
void Person::putdata()
{
	cout<<"My name is "<<name<<"."<<endl;
	puts(name);
	cout<<"I am "<<age<<" years old."<<endl;
	cout<<"I live in "<<city<<" ."<<endl;
	cout<<"I earn about "<<salary<<" per month."<<endl;
}
int main()
{
	Person p;
	p.getdata();
	p.putdata();
}

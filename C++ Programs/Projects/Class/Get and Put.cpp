#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
	int rollno;
	char name[20];
	public:
		void getdata();
		void putdata();
	};
	void student::getdata()
	{
		cout<<"Enter the name: "<<endl;
		gets(name);
		cout<<"Enter the rollno: "<<endl;
		cin>>rollno;
		}
		void student::putdata()
		{
			cout<<"Rollno: "<<rollno<<endl;
			cout<<"Name: ";
			puts(name);
		}
		int main()
		{
			student s;
			s.getdata();
			s.putdata();
			
			}
		
	


#include<iostream>
#include<string.h>
using namespace std;
class grandfather
{
	int age;
	string name;
	public:
		void get()
		{
			cout<<"Enter your grandfather's name:";
            getline(cin,name);
			cout<<"Enter your grandfather's age:";
			cin>>age;
		}
		void show()
		{
			cout<<"\n Your grandfather's name is:"<<name;
			cout<<"\n Your grandfather's age is:"<<age;
		}
};
class father:public grandfather
{
	int age;
	string fname;
	public: void get()
	{
		grandfather::get();
		cin.ignore();    // Its is used to clear the buffer space ,it is recommended to use while using getline 
		cout<<"Enter your father's name:";
		getline(cin,fname); // Its used to take strings with space which only cin functio cant and if you  want to use cin then you have to use cin(name,size of char variable)
		cout<<"Enter your father's age:";
		cin>>age;
	}
	void show()
	{
		cout<<"\n Your father's name is:"<<fname;
		cout<<"\n Your father's age is:"<<age;
	}
};
class son:public father{
	int age;
		string sname;
	public:
		void get()
		{
			
			father::get();
			cin.ignore(); 
			cout<<"Enter your name:";
			getline(cin,sname);
			cout<<"Enter your age:";
			cin>>age;
		}
		void show()
		{
			grandfather::show();
			father::show();
			cout<<"\n Your name is:"<<sname;
			cout<<"\n Your age is:"<<age;
		}
};
int main()
{
	son s;
	s.get();
	s.show();
}

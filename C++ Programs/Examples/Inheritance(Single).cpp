#include<iostream>
using namespace std;
class Person
{
	public:
		string name;
		int age;
		int rollno;
};
class student:public Person
{
	public:
		void show()
		{
			cout<<"Name: "<<endl;
			cin>>name;
			cout<<"Age: "<<endl;
			cin>>age;
			cout<<"Roll no: "<<endl;
			cin>>rollno;
		}
};
int main()
{
	student s;
	s.show();
}

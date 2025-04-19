#include<iostream>
using namespace std;
class A
{
	public:
		string name;
};
class B
{
	public:
		int marks;
};
class C:public A, public B
{
	public:
		void show()
		{
			cout<<"Name is:"<<name<<endl;
			cout<<"Marks are:"<<marks<<endl;
		}
};
int main()
{
	C c;
	c.name="Pushpraj Singh Kachhaway";
	c.marks=78;
	c.show();
}

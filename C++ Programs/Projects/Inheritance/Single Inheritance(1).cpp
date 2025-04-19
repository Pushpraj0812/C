#include<iostream>
using namespace std;

class person
{
	public: 
	string name;
	int age;
};
class student:public person
{
	public:
		void show()
		{
			cout<<"Name is:"<<name<<endl;
			cout<<"Age is:"<<age<<endl;
		}
};
int main()
{
	student s;
	s.name="Pushpraj Singh Kachhaway";
	s.age=21;
	s.show();
}

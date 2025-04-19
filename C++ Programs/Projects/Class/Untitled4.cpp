#include<iostream>
using namespace std;

class complex
{
	public:
		int salary;
		void getdata()
		{
			cout<<"Enter your salary: ";
			cin>>salary;
		}
		void putdata()
		{
			cout<<"Your salary is: "<<endl;
			cout<<salary;
		}
};
class bonus: public complex
{
	public:
		int bonus= (salary*20)/100;
};
int main()
{
	bonus b;
	b.getdata();
	b.putdata();
}
	

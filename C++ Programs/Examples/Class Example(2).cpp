#include<iostream>
using namespace std;
class student
{
	int Rollno;
	char Name[20];
	public:
		void getdata()
	{
		cout<<"Enter Rollno:"<<endl;
		cin>>Rollno;
		cout<<"Enter Name:"<<endl;
		gets(Name);
	}
	void putdata()
	{
		cout<<"Enter Rollno:"<<Rollno;
		cout<<"/nName";
		puts(Name);
	}
};
int main()
{
	student s;
	s.putdata();
	s.getdata();
	return 0;
}

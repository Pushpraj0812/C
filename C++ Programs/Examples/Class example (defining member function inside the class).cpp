#include<iostream>
using namespace std;

class student
{
	int rollno;
	char name[20];
	public:
		void getdata()
		{
			cout<<"Enter your name: ";
			gets(name);
			cout<<"Enter your roll no: ";
			cin>>rollno;
		}
		void putdata()
		{
			cout<<"Roll no: "<<rollno<<endl;
			cout<<"Name: ";
			puts(name);
		}
};
int main()
{
	student s;
	s.getdata();
	s.putdata();
	return 0;
}

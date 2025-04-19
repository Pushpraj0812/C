#include<iostream>
using namespace std;
class person 
    {   private:
	        char Name[25];
	        int Age;
	        char City[25];
	        float Salary;
	    public:
	    	void getdata();
	    	void putdata();
    };
    void person::getdata()
    {
    	cout<<" Enter Name: "<< endl;
    	cin>>Name;
    	cout<<"Enter Age:"<<endl;
    	cin>>Age;
    	cout<<"Enter City:"<<endl;
    	cin>>City;
    	cout<<"Enter Salary:"<<endl;
    	cin>>Salary;
	}
	void person::putdata()
	{
		cout<<"My name is "<<Name<<endl;
		cout<<"and I am "<<Age<<" years old."<<endl;
		cout<<"I live in "<<City<<endl;
		cout<<"and I earn "<<Salary<<" per month";
	}
	int main()
	{
		person p;
		p.getdata();
		p.putdata();
		return 0;
	}

#include<iostream>
using namespace std;

class Addition
{
	public:
		void sum(int a, int b)
		{
			cout<<"Using function with 2 arguments"<<endl;
		    cout<<"a+b:"<<a+b;
		}
		void sum(int a,int b,int c)
		{
			cout<<"using function with 3 arguments"<<endl;
			cout<<"a+b+c:"<<a+b+c;
		}		
};
int main()
{
	Addition obj;
	obj.sum(10,20);
	cout<<endl;
	obj.sum(10,20,30);
}

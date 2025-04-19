#include<iostream>
using namespace std;

int main()
{
	int i=1,x;
	cout<<"Enter any number: ";
	cin>>x;
	do
	{
		cout<<x<<" * "<<i<<" = "<<x*i<<endl;;
		i++;
	}while(i<=10);
}

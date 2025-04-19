#include<iostream>
using namespace std;

int main()
{
	int arr[6],n,i;
	cout<<"Enter the element:";
	for(i=0;i<=5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to be searched:";
	cin>>n;
	for(i=0;i<=5;i++)
	{
		if(arr[i]==n)
		{
			cout<<"Number is found"<<endl;
			exit(0);
		}
		else
		cout<<"Number is not found"<<endl;
	}
}

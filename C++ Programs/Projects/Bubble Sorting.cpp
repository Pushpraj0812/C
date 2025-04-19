#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,n,temp,arr[5];
	cout<<"Enter element of array:"<<endl;
	for(i=0;i<=4;i++)
	cin>>arr[i];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
cout<<"Sorted array element are= "<<endl;
	for(i=0;i<5;i++)
	cout<<arr[i]<<endl;
}

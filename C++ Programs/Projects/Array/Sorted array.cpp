#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,n,temp,arr[5];
	cout<<"Enter element of array:"<<endl;
	for(i=0;i<=4;i++)
	cin>>arr[i];
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
cout<<"Sorted array element are= "<<endl;
	for(i=0;i<5;i++)
	cout<<arr[i]<<endl;
}

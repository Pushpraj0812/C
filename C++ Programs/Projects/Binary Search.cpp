#include<iostream>
using namespace std;

int main() 
{
	int i, arr[10], num, first, last, middle;
	cout<<"Enter 10 elements (In ascending order): ";
	for(i=0;i<10;i++)
	cin>>arr[i];
	cout<<"\n Enter elements to be searched:";
	cin>>num;
	first=0;
	last=9;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(arr[middle]<num)
		first=middle+1;
	 else if(arr[middle]==num)
		{
			cout<<"\n The number "<<num<<" found at position "<<middle+1;
			break;
		}
		else 
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	cout<<"\nThe number "<<num<<" is not found in given array"<<endl;
}

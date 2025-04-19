#include<iostream>
using namespace std;
int main()
{
	int n,rem,rev=0;
	cout<<"Enter a number:";
	cin>>n;
	
	while(n!=0)
	{
		rem=n%10;
		rev=rem+rev*10;
		n=n/10;
	}
	cout<<"Reverse of the number:"<<rev<<endl;
	return 0;
}

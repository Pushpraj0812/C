#include<iostream>
using namespace std;
int main()
{
	int n,rem,sum=0;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	for(;n!=0;n%10)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	cout<<"Sum of digits="<<sum;
	return 0;
}

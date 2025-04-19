#include<iostream>
using namespace std;
int main()
{
	float A,B;
	cout<<"Enter the value of A:";
	cin>>A;
	cout<<"Enter the value of B:";
	cin>>B;
	A=A+B;
	B=A-B;
	A=A-B;
	cout<<"Swap the value of A="<<A<<endl;
	cout<<"Swap the value of B="<<B<<endl;
}

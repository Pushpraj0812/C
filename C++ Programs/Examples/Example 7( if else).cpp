#include<iostream>
using namespace std;
int main()
{
	float A, B, Substraction;
	cout<<"Enter the value of A: "<<endl;
	cin>>A;
	cout<<"Enter the value of B: "<<endl;
	cin>>B;
	
	Substraction= A-B;
	
	cout<<"Substraction= "<<Substraction<<endl;
	
	if (Substraction>=0)
	{
		cout<<"Number is positive"<<endl;
	}
	else if (Substraction<0)
	{
		cout<<"Answer is Negative"<<endl;
	}
	return 0;
}

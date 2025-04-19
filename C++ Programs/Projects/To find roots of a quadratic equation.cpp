#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float A,B,C,D,R1,R2,R3;
	cout<<"Enter the value of A,B,C"<<endl;
	cin>>A>>B>>C;
	D=B*B-4*A*C;
	if (D>0)
	{
		R1=(-B+sqrt(D))/2*A;
		R2=-B-sqrt(D)/2*A;
		cout<<"Roots are real and unequal"<<endl;
		cout<<"Root 1 = "<<R1<<" and Root 2 = "<<R2<<endl;
	}
	else if (D==0)
	{
		R3=B/2*A;
		cout<<"Roots are equal and real"<<endl;
		cout<<"Root = "<<R3<<endl;
	}
	else
	{
		cout<<"Roots are unreal"<<endl;
		
	}
}

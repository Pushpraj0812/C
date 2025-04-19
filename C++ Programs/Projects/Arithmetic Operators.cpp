#include<iostream>
using namespace std;
int main()
{
	float A, B, Sum, Substraction, Multiply, Division, Percentage;
	cout<<"Enter the value of A:\n";
	cin>>A;
	cout<<"Enter the value of B:"<<endl;
	cin>>B;
	
	Sum= A+B;
	Substraction= A-B;
	Multiply= A*B;
	Division= A/B;
    Percentage= Division*100;
    
    cout<<"Sum= "<<Sum<<endl;
    cout<<"Substraction= "<<Substraction<<endl;
    cout<<"Multiply= "<<Multiply<<endl;
    cout<<"Division= "<<Division<<endl;
    cout<<"Percentage= "<<Percentage<<endl;
    return 0;
}	

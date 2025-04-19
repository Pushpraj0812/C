#include<iostream>
using namespace std;
int main()
{
	float A, B;
	cout<<"Enter the value of A:"<<endl;
	cin>>A;
	cout<<"Enter the value of B:"<<endl;
	cin>>B;
	// a+=b -> a=a+b
	A+=B;
	
	cout<<"A = "<<A<<endl;
	return 0;
}

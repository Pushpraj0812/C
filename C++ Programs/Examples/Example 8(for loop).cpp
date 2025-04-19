#include<iostream>
using namespace std;
int main()
{
	float A, Sum;
	Sum=0;
	
	cout<<"Enter the value: "<<endl;
	cin>>A;
	
	for (int i = 1; i <= A; ++i)
	{
		Sum+=i;
	}
	
	cout << "Sum = " << Sum << endl;
	return 0;
}

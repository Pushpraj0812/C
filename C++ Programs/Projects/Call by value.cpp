#include<iostream>
using namespace std;
void change(int data);
int main()
{
	int data=3;
	change(data);
	cout<<"Value of th data is: "<<data<<endl;
}
void change(int data)
{
	data=5;
}

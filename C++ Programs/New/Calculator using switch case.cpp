#include<iostream>
using namespace std;

int main(){
	
	char op;
	float num1, num2;
	
	cout<<"Enter the operator"<<endl;
	cin>>op;
	
	cout<<"Enter the numbers = "<<endl;
	cin>>num1>>num2;
	
	switch (op) {
		case '+' :
			cout<<num1+num2;
			break;
		case '-' :
			cout<<num1-num2;
			break;
		case '*' :
			cout<<num1*num2;
			break;
		case '/' :
			cout<<num1/num2;
			break;
		default:
			cout<<"error";
	}
	return 0;
}

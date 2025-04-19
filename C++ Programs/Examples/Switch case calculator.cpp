#include <iostream>
using namespace std;

int main()
{
	char op;
	float num1, num2;
	
	cout<<"Select operator +,-,*,/:"<<endl;
	cin >> op;
    cout<<"Enter the number:"<<endl;
	cin >> num1 >> num2;

	// Switch statement begins
	switch (op) {

	case '+':
		cout << num1 + num2;
		break;

	case '-':
		cout << num1 - num2;
		break;

	case '*':
		cout << num1 * num2;
		break;

	case '/':
		cout << num1 / num2;
		break;

	default:
		cout << "Error! operator is not correct";
	}
	
	return 0;
}


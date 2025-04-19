#include<iostream>
using namespace std;
int main()
{
	char Shape;
	float Radius,Area,Length,Width;
	cout<<"Enter your Shape(Circle,Rectangle,Square)"<<endl;
	cin>>Shape;
	cout<<"Enter the values"<<endl;
	switch (Shape) {
		case "Circle":
			cout<<"Radius=";
			cin>>Radius;
			Area=3.14*Radius*Radius;
			cout<<"Area of Circle="<<Area<<endl;
		case "Rectangle" :
			cout<<"Lenght=";
			cin>>Lenght;
			cout<<"Width";
			cin>>Width;
			Area=Lenght*Width;
			cout<<"Area of Rectangle="<<Area<<endl;
		case "Square" :
			cout<<"Length=";
			cin>>Length;
			Area=Length*Length;
			cout<<"Area of Square="<<Area<<endl;
		 default:
            // Shape is doesn't match any case constant 
            cout << "Error! The operator is not correct";
            break;
	}
	return 0;
	// ERROR=case label does not reduce to an integer constant
}

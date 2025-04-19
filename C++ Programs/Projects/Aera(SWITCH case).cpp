#include<iostream>
#include<math.h>

using namespace std;
int main()
{
float a, b, c, s, radius, area;

int ch;

cout<<"1.Area Of Circle"<<endl;
cout<<"2.Area Of Rectangle"<<endl;
cout<<"3.Area Of Triangle"<<endl;
cout<<"Enter Your Choice :";

cin>>ch;

switch(ch)
{
case 1:
{
cout<<"Enter the Radius of Circle: "<<endl;
cin>>radius;
area=3.14159*radius*radius;
cout<<"Area of Circle = "<<area<<endl;
break;
}
case 2:
{
cout<<"Enter the Length and Breadth of Rectangle: "<<endl;
cin>>a>>b;
area=a*b;
cout<<"Area of Rectangle = "<<area<<endl;
break;
}
case 3:
{
cout<<"Enter All Three Sides of Triangle: "<<endl;
cin>>a>>b>>c;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"Area of Triangle = "<<area<<endl;
break;
}
default: cout<<"Invalid Choice Try Again...!!!";
break;
}
return 0;
}

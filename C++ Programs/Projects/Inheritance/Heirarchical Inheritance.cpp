#include<iostream>
using namespace std;
class shape
{
	protected:
		float width,height;
		public:
			void set_data(float a, float b)
			{
				width=a;
				height=b;
			}
};
class rectangle:public shape
{
	public:
	float area()
	{
		return(width*height);
	}
};
class triangle:public shape
{
	public:
		float area()
		{
			return(width*height/2);
		}
};
int main()
{
	//creating an object of class rectangle
	rectangle rect;
	//creating an object of class triangle
	triangle tri;
	rect.set_data(5,3);
	tri.set_data(3,5);
	cout<<"Area of rectangle is:"<<rect.area()<<endl;
	cout<<"Area of triangle is:"<<tri.area()<<endl;
}

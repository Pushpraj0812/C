#include<iostream>
using namespace std;
class base
{
	int x;
	public:
		virtual void fun()=0;
		int getX()
		{return x;}
}; //This class inherits from base and implements fun()
class derived:public base
{
	int y;
	public:
		void fun()
		{
			cout<<"Fun() called ";
		}
};
int main(void)
{
	derived d;
	d.fun();
	return 0;
}

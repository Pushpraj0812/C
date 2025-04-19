#include<iostream>
using namespace std;

class base
{
	public:virtual void show()
	{
		cout<<"Content of base class: "<<endl;
	}
};
class derived: public base
	{
		public:void show()
		{
			cout<<"Content of derived class"<<endl;
		}
	};

int main(void)
{
	base*bp=new derived;
	bp->show();//runtime polymorphism
	return 0 ;
}

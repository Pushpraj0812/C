#include<iostream>
#include<conio.h> 
using namespace std;
int main()
{
	int i,j;
	int a[2][2],b[2][2],c[2][2];
	cout<<"Enter the value of First Matrix:"<<endl;
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the value of Second Matrix"<<endl;
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"Solution:"<<endl;
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			cout<<c[i][j]<<endl;
		}
	}
	return 0;
	getch();
}

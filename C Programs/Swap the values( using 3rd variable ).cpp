#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the value of a\n");
	scanf("%f",&a);
	printf("enter the value of b\n");
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("swap the value of a=%f\n",a);
	printf("swap the value of b=%f\n",b);
	getch();	
}

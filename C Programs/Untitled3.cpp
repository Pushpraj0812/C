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
	c=a+b;
	printf("sum=%f\n",c);
	c=a-b;
	printf("sub=%f\n",c);
	c=a*b;
	printf("multiply=%f\n",c);
	c=a/b;
	printf("division%f\n",c);
	getch();
	return 0;
}

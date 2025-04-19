#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float a,b;
	printf("enter the value of a\n");
	scanf("%f",&a);
	printf("enter the value of b\n");
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swap the value of a=%f",a);
	printf("Swap the value of b=%f",b);
	getch();
}

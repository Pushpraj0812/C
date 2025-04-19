#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("enter the value of p\n");
	scanf("%f",&p);
	printf("enter the value of r\n");
	scanf("%f",&r);
	printf("enter the value of t\n");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("si=%f",si);
	getch();
}

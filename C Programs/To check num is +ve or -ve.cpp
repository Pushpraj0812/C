#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float x;
	printf(" Enter the value of x\n");
	scanf("%f", &x);
	if (x>0)
	printf(" Number is positive");
	else if (x<0)
	printf(" Number is negative");
	else 
	printf(" NUmber is zero");
	getch();
}

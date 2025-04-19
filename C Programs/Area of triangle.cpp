#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float area,b,c,d,s;
	printf(" Enter the three sides of a triangle\n");
	scanf("%f%f%f", &b,&c,&d);
	s= (b+c+d)/2;
	area= sqrt(s*(s-b)*(s-c)*(s-d));
	printf("area=%f",area);
	getch();
}

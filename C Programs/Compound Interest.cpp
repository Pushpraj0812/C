#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float p,r,t,ci;
	printf("enter the value of p,r and t\n");
	scanf("%f%f%f", &p,&r,&t);
	ci=p*(pow(1+(r/100),t));
	printf("ci=%f",ci);
	getch();
}

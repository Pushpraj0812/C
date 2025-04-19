#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float sales,commission;
	printf("enter the value of sales\n");
	scanf("%f", &sales);
	if
	(sales<500)
	commission=0.2*sales;
	else if
	(500<sales<2000)
	commission=0.3*sales;
	else if
	(2000<sales<5000)
	commission=0.5*sales;
	else if
	(sales>5000)
	commission=5*sales;
	printf("commission=%f",commission);
	getch();
}

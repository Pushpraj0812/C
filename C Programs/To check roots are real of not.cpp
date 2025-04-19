#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float A,B,C,D,R1,R2,R3;
	printf("enter the value of A,B,C,D\n");
	scanf("%f%f%f%f", &A,&B,&C,&D);
	D=B*B-4*A*C;
	if (D>0)
	{
		R1=(-B+sqrt(D))/2*A;
		R2=-B-sqrt(D)/2*A;
		printf("Roots are real and unequal\n");
		printf("Root1=%f\t Root2=%f",R1,R2);
	}
	else if (D==0)
	{
		R3=-B/2*A;
		printf("Roots are equal and real\n");
		printf("Root=%f",R3);
	}
	else 
	{
		printf("Roots are unreal");
	}
	getch();
}

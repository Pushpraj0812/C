#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float a,b,choice;
	printf("Enter value of a\n");
	scanf("%f", &a);
	printf("enter value of b\n");
	scanf("%f", &b);
	printf("1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("enter your choice\n");
	scanf("%f", &choice);
	if (choice==1)
	{
	printf("Addition=%f\n",a+b);
    }
    else if (choice==2)
    {
    	printf("Substraction=%f\n",a-b);
	}
	else if (choice==3)
	{
	printf("Multiplication=%f\n",a*b);
    }
    else if (choice==4)
    {
    	printf("Division=%f",a/b);
	}
	else 
	{
		printf("Invalid Choice....!");
	}
	getch();
}

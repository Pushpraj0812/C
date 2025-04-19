#include<math.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,d,Answer;
	printf("Enter the value of a\n");
	scanf("f", &a);
	printf("Enter the value of b\n");
	scanf("%f", &b);
	printf("Enter the value of c\n");
	scanf("%f", &c);
	printf("Enter the value of d\n");
	scanf("%f", &d);
	
	Answer=((a/b)+(c/d));
	
	printf("Answer=%f", Answer);
	getch();
}

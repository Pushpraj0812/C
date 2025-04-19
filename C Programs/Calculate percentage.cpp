#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float commerce,maths,english,accounts,economics,percentage,sum;
	printf("enter the marks of commerce\n");
	scanf("%f", &commerce);
	printf("enter the value of maths\n");
	scanf("%f", &maths);
	printf("enter the marks of english\n");
	scanf("%f", &english);
	printf("enter the marks of accounts\n");
	scanf("%f", &accounts);
	printf("enter the value of economics\n");
	scanf("%f", &economics);
	sum=(commerce+maths+english+accounts+economics);
	percentage =sum/5;
	if (percentage>60)
	{
	printf("conguralations on first devision\n");
    }
	else if (60>percentage>45){
	printf("conguralations on second devision\n");
    }
	else if (45>percentage>35){
	printf("work little hard\n");
    }
	else if (percentage<35){
	printf("paadle sale\n");
    }
    getch();
}

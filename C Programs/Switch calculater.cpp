 #include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	char ch;
	float a,b;
	printf("enter your choice\n");
	scanf("%c", &ch);
	printf("enter two number\n");
	scanf("%f%f", &a,&b);
	switch (ch)
	{
		case '+':
			printf("addition=%f\n",a+b);
			break;
			case '-':
				printf("substraction=%f\n",a-b);
				break;
				case '*':
					printf("multilpication=%f\n",a*b);
					break;
						case '/':
							printf("division%f\n",a/b);
							break;
							default:
								printf("error.......!");
	}
	getch ();
}

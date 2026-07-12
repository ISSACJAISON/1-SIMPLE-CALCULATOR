#include<stdio.h>
void main()
{
	int a,b,ch;
	printf("SIMPLE CALCULATOR\n");
	printf("1.ADDITION\n2.SUBRACTION\n3.MULTIPLICATION\n4.DIVISON\n5.MODULUS");
	printf("\nenter the option");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("enter two numbers");
		       scanf("%d%d",&a,&b);
		       printf("\nthe result is %d",a+b);
		       break;
		case 2:printf("\nenter two number");
		       scanf("%d%d",&a,&b);
		       printf("\nthe result i s%d",a-b);
		       break;
		case 3:printf("\nenter two numbers");
		       scanf("%d%d",&a,&b);
		       printf("\nthe result is %d",a*b);
		       break;
		case 4:printf("\nenter the numbers");
		       scanf("%d%d",&a,&b);
		       
			   printf("\nthe result is %d",a/b);
			   break;
		case 5:printf("\nenter the two numbers");
		       scanf("%d%d",&a,&b);
		       printf("\n\the result is %d",a%b);
		       break;
		default:printf("\nthe number in invaild");
		       
	}
	
}

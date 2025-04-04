#include<stdio.h>
main()
{
	int a,b,c,e;
	float d;
	printf("\n Enter first number : ");
	scanf("%d",&a);
	
	printf("\n Enter Second number : ");
	scanf("%d",&b);
	c=a+b;
	printf("\n Addition of %d and %d is %d", a,b,c);
	c=a*b;
	printf("\n Mulplication of %d and %d is %d", a,b,c);
	c=a-b;
	printf("\n Substraction of %d and %d is %d", a,b,c);
	d=a/b;
	printf("\n Division of %d and %d is %f", a,b,d);
	e=a%b;
	printf("\n Reminder of %d divided by %d is %d", a,b,e);
	
}

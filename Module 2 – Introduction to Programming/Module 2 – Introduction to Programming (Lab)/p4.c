#include<stdio.h>
main(){
	int a,b,c;
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
	
	printf("\n \n enter marks (1-100) : ");
	scanf("%d", &a);
	
	if(a<30){
		printf("Grade C");	
	}
	
	else if(a>=30 && a<=70)
	{
	printf("Grade B");	
	}
	else if(a>70 && a<=90)
	{
	printf("Grade A");	
	}

	else if(a>90 && a<=100)
	{
	printf("Grade A+");	
	}

	else {
		printf("wrong marks");
	}	

}

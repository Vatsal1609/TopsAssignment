#include<stdio.h>
main (){
	
	int a;
	printf("enter marks (1-100) : ");
	scanf("%d", &a);
	
	if(a>90 && a<=100){
		printf("Grade A");	
	}
	
	else if(a>75 && a<=90)
	{
	printf("Grade B");	
	}
	else if(a>50 && a<=75)
	{
	printf("Grade C");	
	}

	else if(a<=50)
	{
	printf("Grade D");	
	}

	else {
		printf("wrong marks");
	}	
	
}

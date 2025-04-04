#include<stdio.h>
#include<math.h>
 int main()
{
	int a,ch;
	printf("enter number : ");	
	scanf("%d", &a);
	
	if(a%2==0){
		printf("Even Number");
	}else 
	printf("Odd Number");
	

	printf("\n \n Enter the number of mounth (1-12) :");
	scanf("%d",&ch);
	
	switch(ch)
	{
	case 1:	
		printf("\n January");
		break;
		
	case 2:
		printf("\n February");
		break;
		
	case 3:
		printf("\n March");
		break;
	case 4:
		printf("\n April");
		break;
		
	case 5:
		printf("\n May");
		break;
		
	case 6:
		printf("\n June");
		break;	
	
	case 7:
		printf("\n July");
		break; 
		
	case 8:
		printf("\n August");
		break;
		
	case 9:
		printf("\n September");
		break;
		
	case 10:
		printf("\n Octomber");
		break;
	
	case 11:
		printf("\n November");
		break;
		
	case 12:
		printf("\n December");
		break;
		
		

	default:
	printf("\n Wrong Choice");	
	}

}

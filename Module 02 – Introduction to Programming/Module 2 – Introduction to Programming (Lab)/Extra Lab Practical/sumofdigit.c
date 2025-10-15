#include <stdio.h>
main()
{
	int num,i,rem,rev=0,sum=0;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	while(num !=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		sum+=rem;
		num=num/10;
		
	}
	printf("\n Reverse number is %d", rev);
	printf("\n Sum of all is %d",sum);

}

   

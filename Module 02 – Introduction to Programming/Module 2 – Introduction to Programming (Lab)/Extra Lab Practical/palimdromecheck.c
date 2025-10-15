#include <stdio.h>

void palimdrome(int num,int i,int rem,int rev,int original){
	printf("Enter the Number : ");
	scanf("%d",&num);
	original=num;
	
	while(num !=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(original==rev)
	{
	printf("\n This is palindrome Number" );
	}
	else{
		printf("\n This number is not palindrome number");
	}
}
	
	
	
main (){
	palimdrome(505,0,0,0,0);
}


   

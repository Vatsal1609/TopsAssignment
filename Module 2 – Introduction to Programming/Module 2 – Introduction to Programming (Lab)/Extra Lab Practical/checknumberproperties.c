#include<stdio.h>
main(){
	int a;
	printf("Enter Number : ");
	scanf("%d", &a);
	
	if(a%2==0){
		printf("\n this is even number");
	}else {
		printf("\n this is odd number");
	}
	
	if(a<0){
		printf("\n this is negative number");
	}else {
		printf("\n this is positive number");
	}
	
	if((a%3==0) && (a%5==0)){
		printf("\n this number is multiple of both 3 and 5 number");
	}else {
		printf("\n this number is not multiple of both 3 and 5 number ");
	}
	
}

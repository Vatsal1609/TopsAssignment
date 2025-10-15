#include <stdio.h>
main(){
	int num;
	for(;;){
	printf("Enter Number : ");
	scanf("%d", &num);
	if(num==5){
		break;
	}
	if(num==3){
		continue;
	}
	}
	
}

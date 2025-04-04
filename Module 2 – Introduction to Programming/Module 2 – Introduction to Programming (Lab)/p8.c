#include <stdio.h>

// function declaration
	int fact(int num);

main() {

   // function call
   printf("\n factorial = %d",fact(5));
}

// function definition
	int fact(int num){
	int f;
	if (num==1){
		return 1 ;
	}else {
		f=num*fact(num-1);
	}
}

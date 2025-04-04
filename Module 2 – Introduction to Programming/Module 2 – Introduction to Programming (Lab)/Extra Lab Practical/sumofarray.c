#include<stdio.h>
main(){
	int a[5];
	int i,sum=0;
	for(i=0;i<5;i++){
		printf("\n Enter a[%d] : ",i);
		scanf("\n %d",&a[i]);
	}
	for(i=0;i<5;i++){
		sum+=a[i];
	}
	printf("\n Sum of all element is %d", sum);
	printf("\n Average of all element is %d", sum/5);
}

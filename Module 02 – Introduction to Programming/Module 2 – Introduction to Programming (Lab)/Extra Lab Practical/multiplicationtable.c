#include <stdio.h>
main(){
	int i,a,j;
	printf("Enter the Number : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=10;j++){
	printf("\n  %d*%d=%d",i,j,j*i);

	}
	printf("\n");
}
}

#include<stdio.h>
main(){
	int i,a,b,temp=0,j;
	printf("Enter starting number : ");
	scanf("%d",&a);
	printf("Enter ending number : ");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++)
	{
		for(j=2;j<i;j++){
			if (i%j==0)
			{
			temp=1;
			}
		}
		
	if(temp==0)
	{
	printf("\t %d",j);
	}
	temp=0;
	}
}

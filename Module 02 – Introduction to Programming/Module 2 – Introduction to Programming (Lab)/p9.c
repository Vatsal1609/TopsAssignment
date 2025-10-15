#include<stdio.h>
int i,j;
void getarray(int a[3][3]){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter number: a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void printarray(int a[3][3]){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		for(j=0;j<3;j++){
		printf("\t %d",a[i][j]);
		}
	}
	printf("\n");
	}
}



main()
{
	int a[3][3],b[3][3],c[3][3];
	getarray(a);
	printf("\n");
	getarray(b);
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("\n \n \n");
	printarray(a);
	printf("\n \n \n");
	printarray(b);
	printf("\n \n \n");
	printarray(c);
}	

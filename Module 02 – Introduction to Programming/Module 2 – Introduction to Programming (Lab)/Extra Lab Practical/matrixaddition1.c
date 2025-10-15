#include<stdio.h>
int i,j;
void getarray(int a[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter number: a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void printarray(int a[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		for(j=0;j<2;j++){
		printf("\t %d",a[i][j]);
		}
	}
	printf("\n");
	}
}



main()
{
	int a[2][2],b[2][2],c[2][2];
	getarray(a);
	printf("\n");
	getarray(b);
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		c[i][j]=a[i][j]*b[i][j];
		}
	}
	printf("\n \n \n__________________________ Matrix 1 ____________________________________");
	printf("\n \n \n ");
	printarray(a);
	printf("\n \n \n__________________________ Matrix 2 ____________________________________");
	printf("\n \n \n ");
	printarray(b);
	printf("\n \n \n_________________________Multiplication Matrix  ____________________________________");
	printf("\n \n \n ");
	printarray(c);
}

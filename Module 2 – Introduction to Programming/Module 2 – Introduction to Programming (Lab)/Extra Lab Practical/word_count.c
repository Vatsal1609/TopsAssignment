#include<stdio.h>
main(){
	char str1[20], str2[20];
	int i=0,j=0,flag=0;
	printf("\n Enter Str : ");
	gets(str1);

	while(str1[i] != '\0'){
		i++;
	}
	printf("\n length of str=%d",i);
}

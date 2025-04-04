#include<stdio.h>
main(){
	char str1[20], str2[20];
	
	printf("\n Enter Str : ");
	gets(str1);
	printf("\n str=");
	puts(str1);
	
	printf("\n Enter Str 2 : ");
	gets(str2);
	printf("\n str 2=");
	puts(str2);
	
	strcat(str1,str2);
	printf("\n Concatenate str2 to str1 =%s", str1);
	
	printf("\n length of Concatenate str= %d",strlen(str1));
}

#include<stdio.h>
main(){
	char str1[20], str2[20];
	int i=0,j=0,flag=0;
	printf("\n Enter Str : ");
	gets(str1);

	while(str1[i] != '\0'){
		i++;
	}
	i--;
	while (i>=0){
		str2[j]=str1[i];
		j++;
		i--;
	}
	printf("\n String Reverse =%s \n ",str2);
	i=0;
	while(str1[i] != '\0'){
		if(str1[i]!=str2[i]){
			flag=1;
		}
		i++;
	}
}

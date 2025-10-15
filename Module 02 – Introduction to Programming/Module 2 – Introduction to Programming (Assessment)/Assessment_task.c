#include<stdio.h>
#include<string.h>
void reverse(){
	char str1[20], str2[20];
	int i=0,j=0,flag=0;
	printf("\n Enter Str : ");
	scanf("%s",str1);
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
void concat(){
			char str1[20], str2[20];
            printf("\n Enter Str1 : ");
			scanf("%s",str1);
			printf("\n Enter Str2 : ");
			scanf("%s",str2);
            strcat(str1, str2);
            printf("\n Concatenation of str1 & str2 is %s", str1);
            return 0;
}
void palimdrome(){
	char str1[20], str2[20];
	int i=0,j=0,flag=0;
	printf("\n Enter Str : ");
	scanf("%s",str1);
	
	while(str1[i] != '\0'){
	i++;
	}
	i--;
	while (i>=0){
		str2[j]=str1[i];
		j++;
		i--;
	}
	i=0;
	while(str1[i] != '\0'){
		if(str1[i]!=str2[i]){
			flag=1;
		}
		i++;
	}
	(flag==0)?printf("palindrome"): printf("Not palindrome");
}
void vowel(){
	    char str[200];                                    //character array
    int i, vowels, consonants, digits, space,special;  
    vowels =  consonants = digits =  space= special = 0;
    printf("Enter a line of string: ");
    scanf("%s",str);                                      //reading string
    for(i=0; str[i]!='\0'; ++i){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' || str[i]=='A' ||
           str[i]=='E' || str[i]=='I' || str[i]=='O' ||
           str[i]=='U')
        {
            ++vowels;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            ++consonants;
        }
       
    }
    printf("\n Vowels: %d",vowels);
    printf("\nConsonants: %d \n\n",consonants);
		}
void length(){
	char str[20];
	printf("Enter a string: ");
    scanf("%s",str);
    printf("\n Length of string = %d",strlen(str));
}
main(){
	int a,b,c,ch,choice;
	for(;;){
	   	
	printf("\n Main Menu");
	printf("\n \nPress 1 for Reverse a string");
	printf("\n Press 2 for Concatenation");
	printf("\n Press 3 for Palindrome");
	printf("\n Press 4 for Length of the string ");
	printf("\n Press 5 for Find number of vowels and consonants  ");
	printf("\n Press 6 for Exit ");
	
	printf("\n \n Enter Your Choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1:
		reverse();
		break;
		
	case 2:
		concat();
		break;
		
	case 3:
		palimdrome();
		break;

	case 4:
		length();
		break;
	
	case 5:
		vowel();
		break;
		
	case 6:
		printf("\n Thank You");
		return 0;
		break;
	
	default:
        printf("\n\nInvalid choice. Please enter a number between 1 and 6\n");
	}
	
	printf("\n\n Do you want to continue? (1 for yes, 0 for no): ");
    scanf("%d", &ch);
	if(ch==0){
		printf("\n Thank You");
		return 0;
	}

}
}

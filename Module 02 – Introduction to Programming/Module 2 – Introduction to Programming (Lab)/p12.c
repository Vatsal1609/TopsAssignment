#include<stdio.h>
struct student {
		int enroll,mark;
		char name[20];
	};

main(){
	struct student s[3];
	int i;
	for(i=0;i<3;i++){
		printf("Enter Name : ");
		scanf("%s",&s[i].name);
		printf("Enter Roll No : ");
		scanf("%d",&s[i].enroll);		
		printf("Enter Marks : ");
		scanf("%d",&s[i].mark);		
	}
	for(i=0;i<3;i++){
		printf("\n Name : %s \t Roll No : %d \t Marks : %d",s[i].name,s[i].enroll,s[i].mark); 
	}
	
	
}

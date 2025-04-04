#include<stdio.h>
main(){
	int i,m1,m2,m3;
	char name[20], email[20];
	FILE* fp;
	char ch;
	fp=fopen("mark1.csv","w");
	fprintf(fp,"%s","No,Name,Email,mark1,mark2,mark3");
	for(i=1;i<=3;i++){
		printf("\n Enter Name : ");
		scanf("%s",name);
		printf("\n Enter Email : ");
		scanf("%s",email);
		printf("\n Enter m1 : ");
		scanf("%d",&m1);
		printf("\n Enter m2 : ");
		scanf("%d",&m2);
		printf("\n Enter m3 : ");
		scanf("%d",&m3);
		
		fprintf(fp,"\n%d,%s,%s,%d,%d,%d",i,name,email,m1,m2,m3);
	}
	fclose(fp);
	
	fp=fopen("mark1.csv","r");
	while((ch=fgetc(fp))!=EOF){

		putchar(ch);
	
}
	fclose(fp);
}

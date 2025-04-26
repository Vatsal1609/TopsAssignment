#include<iostream>
using namespace std;
int i,j;
void getarray(int a[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"enter number: a["<<i<<"]["<<j<<"] : ";
			cin>>a[i][j];
		}
	}
}

void printarray(int a[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		for(j=0;j<2;j++){
		cout<<"\t"<<a[i][j];
		}
	}
	cout<<"\n";
	}
}



main()
{
	int a[2][2],b[2][2],c[2][2];
	getarray(a);
	cout<<"\n";
	getarray(b);
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"\n \n \n__________________________ Matrix 1 ____________________________________";
	cout<<"\n \n \n ";
	printarray(a);
	cout<<"\n \n \n__________________________ Matrix 2 ____________________________________";
	cout<<"\n \n \n ";
	printarray(b);
	cout<<"\n \n \n__________________________Addition Matrix  ____________________________________";
	cout<<"\n \n \n ";
	printarray(c);
}

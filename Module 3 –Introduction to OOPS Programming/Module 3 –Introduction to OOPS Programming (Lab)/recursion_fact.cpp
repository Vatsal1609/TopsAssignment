#include<iostream>
using namespace std;
int fact(int num){
	if (num==1){
		return 1 ;
	}else {
		return num*fact(num-1);
	}
}
main(){
	int num;
	cout<<"\n Enter Number :";
	cin>>num; 
	cout<<"\n Factorial of "<<num<<"="<<fact(num);
}
	

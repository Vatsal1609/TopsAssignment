#include<iostream>.
using namespace std;
int a,b,c;
void get(){
	cout<<"\n Enter Value of a :";
	cin>>a; 
	cout<<"\n Enter Value of b :";
	cin>>b; 
}
void add(){
	cout<<"\n Addition of a and b is  :"<<a+b;
}
void sub(){
	cout<<"\n Substraction of a and b is  :"<<a-b;
}
void mul(){
	cout<<"\n Multiplication of a and b is  :"<<a*b;
}
void div(){
	cout<<"\n Division of a and b is  :"<<a/b;
}

main(){
	get();
	add();
	sub();
	mul();
	div();
}

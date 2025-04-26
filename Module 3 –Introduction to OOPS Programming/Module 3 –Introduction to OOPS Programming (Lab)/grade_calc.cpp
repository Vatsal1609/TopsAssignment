#include<iostream>
using namespace std;
main (){
	
	int a;
	cout<<"enter marks (1-100) : ";
	cin>>a;
	
	if(a<30){
		cout<<"Grade C";	
	}
	
	else if(a>=30 && a<=70)
	{
	cout<<"Grade B";	
	}
	else if(a>70 && a<=90)
	{
	cout<<"Grade A";	
	}

	else if(a>90 && a<=100)
	{
	cout<<"Grade A+";	
	}

	else {
		cout<<"wrong marks";
	}	
	
}

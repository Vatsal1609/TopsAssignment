#include<iostream>
using namespace std;
main(){
	int a[5];
	int i,sum=0;
	for(i=0;i<5;i++){
		cout<<"\n Enter a["<<i<<"] : ";
	//	cin>>a[i];
	}
	for(i=0;i<5;i++){
		sum+=a[i];
	}
	cout<<"\n Sum of all element is :"<<sum;
	cout<<"\n Average of all element is : "<<sum/5;
}

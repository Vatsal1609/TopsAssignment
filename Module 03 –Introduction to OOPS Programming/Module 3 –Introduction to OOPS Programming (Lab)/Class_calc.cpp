#include<iostream>
using namespace std;
class maths{
	public:
		float a,b;
		void getnumber(){
			cout<<"Enter Number of A : ";
			cin>>a;
			cout<<"Enter Number of B : ";
			cin>>b;
		}
		void add(){
			cout<<"\n Addition of A and B is "<<a+b;
		}
		void sub(){
			cout<<"\n Substraction of A and B is "<<a-b;
		}
		void mul(){
			cout<<"\n Multiplication of A and B is "<<a*b;
		}
		void Div(){
			cout<<"\n Division of A and B is "<<a/b;
		}		
};
main(){
	maths m1;
	m1.getnumber();
	m1.add();
	m1.sub();
	m1.mul();
	m1.Div();
}

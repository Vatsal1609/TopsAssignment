#include<iostream>
using namespace std;

class person{
	public:
	int id;
	char name[20];
	
	void getinfo(){
		cout<<"\n Enter Student Name: ";
		cin>>name;
		cout<<"\n Enter Student Age : ";
		cin>>id;
	}
};

class student : public person {
	public:
	int sid;
	char sname[20];
	void sinfo(){
		cout<<"\n Enter Student ID: ";
		cin>>sid;
		cout<<"\n Enter Student Subject : ";
		cin>>sname;
	}
};


class teacher : public student{
	public:
	int tid,tage;
	char tname[30],td[30];
	void gettinfo(){
	cout<<"\n Enter Teacher Name: ";
	cin>>tname;
	cout<<"\n Enter Teacher Age : ";
	cin>>tage;
	cout<<"\n Enter Teacher ID : ";
	cin>>tid;
	cout<<"\n Enter Department : ";
	cin>>td;
	}
	
	void show(){
		cout<<"\n \n Student Information :-";
		cout<<"\n Name :"<<name; cout<<"\n Age :"<<id;
		cout<<"\n Student Id: "<<sid; cout<<"\n Subject Name :"<<sname;
		cout<<"\n\n";
		cout<<"\n Teacher Information :-";
		cout<<"\n Name :"<<tname; cout<<"\n Age :"<<tage;
		cout<<"\n Employee Id: "<<tid; cout<<"\n Depatment :"<<td; 
	}
};

main(){
	teacher t1;
	t1.getinfo();
	t1.sinfo();
	t1.gettinfo();
	t1.show();
}

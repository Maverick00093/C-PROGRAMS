#include<iostream>
using namespace std;
void sum(){
	float a,b,c;
	cout<<"enter the value of  A:";
	cin >>a;
	cout<<"enter the value of  B:";
	cin >>b;
	c =a+b ;
	cout<<endl;
	cout<<"YOUR ANS. IS :"<<c;
}
void sub(){
	float a,b,c;
	cout<<"enter the value of  A:";
	cin >>a;
	cout<<"enter the value of  B:";
	cin >>b;
	c =a-b ;
	cout<<endl;
	cout<<"YOUR ANS. IS :"<<c;
}
void multi(){
	float a,b,c;
	cout<<"enter the value of  A:";
	cin >>a;
	cout<<"enter the value of  B:";
	cin >>b;
	c =a*b ;
	cout<<endl;
	cout<<"YOUR ANS. IS :"<<c;
}
void devide(){
	float a,b,c;
	cout<<"enter the value of  A:";
	cin >>a;
	cout<<"enter the value of  B:";
	cin >>b;
	c =a/b ;
	cout<<endl;
	cout<<"YOUR ANS. IS :"<<c;
}
void modul(){
	int a,b,c;
	cout<<"enter the value of  A:";
	cin >>a;
	cout<<"enter the value of  B:";
	cin >>b;
	c =a%b;
	cout<<endl;
	cout<<"YOUR ANS. IS :"<<c;
}
int main(){
	int choice;
	cout<<"1.ADDITION"<<endl;
	cout<<"2.SUBTRACTION"<<endl;
	cout<<"3.MULTIPLICATION"<<endl;
	cout<<"4.DIVISION"<<endl;
	cout<<"5.MODULAS"<<endl<<endl;
	cout<<"ENTER YOUR CHOICE :";
	cin>>choice;
	switch(choice){
		case 1:{
			sum();
			break;
		}
		case 2:{
			sub();
			break;
		}
		case 3:{
			multi();
			break;
		}
		case 4:{
			devide();
			break;
		}
		case 5:{
			modul();
			break;
		}
	}
}

#include<iostream>
using namespace std;
int main(){
	int choice,pizza,meggie,pasta,drink,total;
	cout<<"=================MENU==================="<<endl;
	cout<<"======1.PIZZA-----400rs."<<endl;
	cout<<"======2.MEGGIE-----200rs."<<endl;
	cout<<"======3.PASTA-----250rs."<<endl;
	cout<<"======4.DRINK-----500rs."<<endl;
	cout<<"Enter Your Order Number:";
	cin>>choice;
	switch(choice){	
		case 1:
			cout<<"PIZZA HERE"<<endl;
			cout<<"SELECT QUENTITY";
			cin>>pizza;
			total=400*pizza;
			cout<<"YOUR BILL IS:"<<total;
			break;
		case 2:
			cout<<"MEGGIE HERE"<<endl;
			cout<<"SELECT QUENTITY";
			cin>>meggie;
			total=200*meggie;
			cout<<"YOUR BILL IS:"<<total;
			break;
		case 3:
			cout<<"PASTA HERE"<<endl;
			cout<<"SELECT QUENTITY:";
			cin>>pasta;
			total=250*pasta;
			cout<<"YOUR BILL IS:"<<total;
			break;
		case 4:
			cout<<"DRINK HERE"<<endl;
			cout<<"SELECT QUENTITY:";
			cin>>drink;
			total=500*drink;
			cout<<"YOUR BILL IS:"<<total;
			break;
		default:
		    cout<<"INVALID ORDER";
			break;	
	}
}

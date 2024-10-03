#include<iostream>
using namespace std;
int main(){
	int choice,qtt,total=0,grandtotal=0;
	char y;
	while(true){
	
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
			cout<<"SELECT QUANTITY";
			cin>>qtt;
			total=400*qtt;
			cout<<"YOUR BILL IS:"<<total <<endl <<endl;
			break;
		case 2:
			cout<<"MEGGIE HERE"<<endl;
			cout<<"SELECT QUANTITY";
			cin>>qtt;
			total=200*qtt;
			cout<<"YOUR BILL IS:"<<total <<endl <<endl;
			break;
		case 3:
			cout<<"PASTA HERE"<<endl;
			cout<<"SELECT QUANTITY:";
			cin>>qtt;
			total=250*qtt;
			cout<<"YOUR BILL IS:"<<total <<endl <<endl;
			break;
		case 4:
			cout<<"DRINK HERE"<<endl;
			cout<<"SELECT QUANTITY:";
			cin>>qtt;
			total=500*qtt;
			cout<<"YOUR BILL IS:"<<total <<endl <<endl;
			break;
		default:
		    cout<<"INVALID ORDER"<<endl;
			break;	
	}
	grandtotal=grandtotal+total;
	cout<<"DO YOU WANT TO ORDER ANYMORE ? "<<endl <<endl;
	cout<<"For Yes-->Type y or Y  ||  For No-->Type n or N : ";
	cin>>y;
	if(y=='Y'||y=='y'){
		cout<<"CONTINUE" <<endl <<endl;
	}
	else if(y=='n'||y=='N'){
	    cout<<"TOTAL BILL" <<endl <<endl;
	    cout<<"INVOICE "<<grandtotal;
	    break;
	}
	else{
		cout<<"INVALID INPUT";
	}
}
}


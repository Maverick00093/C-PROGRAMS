#include<iostream>
using namespace std;
int qty,total,grandtotal=0;
void pizza(){
	int price=299;
	cout<<"YOU SELECTED PIZZA "<<endl;
	cout<<"ENTER THE QUANTITY :";
	cin>>qty;
	total=price*qty;
	grandtotal+=total;
}
void vadapav(){
	int price=69;
	cout<<"YOU SELECTED VADAPAV "<<endl;
	cout<<"ENTER THE QUANTITY :";
	cin>>qty;
	total=price*qty;
	grandtotal+=total;
}
void drinks(){
	int price=259;
	cout<<"YOU SELECTED DRINKS "<<endl;
	cout<<"ENTER THE QUANTITY :";
	cin>>qty;
	total=price*qty;
	grandtotal+=total;
}
void ice_cream(){
	int price=369;
	cout<<"YOU SELECTED ICE CREAM "<<endl;
	cout<<"ENTER THE QUANTITY :";
	cin>>qty;
	total=price*qty;
	grandtotal+=total;
}
void menu(){
	int choice;
	cout<<"================MENU==================="<<endl;
	cout<<"1. PIZZA-------299 Rs."<<endl;
	cout<<"2. VADAPAV----- 69 Rs."<<endl;
	cout<<"3. DRINKS------259 Rs."<<endl;
	cout<<"4. ICE CREAM---369 Rs."<<endl;	
	cout<<"ENTER YOUR CHOICE :";
	cin>>choice;
	switch(choice){
		case 1:
			pizza();
			break;
		case 2:
			vadapav();
			break;
		case 3:
			drinks();
			break;
		case 4:
			ice_cream();
			break;
	}
	char repeat;
	cout<<"DO YOU WANT TO ORDER MORE ? [Y or y FOR YES & N or n FOR NO]";
	cin>>repeat;
	if(tolower(repeat)=='y'){
		menu();
	}
	else{
		cout<<endl;
		cout<<"YOUR TOTAL BILL IS :"<<grandtotal <<endl;
		cout<<"THANK YOU...ENJOY YOUR MEAL";
	}
}
int main(){
	menu();
}

#include<iostream>
using namespace std;
int main(){
	int choice,num1,num2,total;
	cout<<"1.ADDITION +"<<endl;
	cout<<"2.SUBTRACTION -"<<endl;
	cout<<"3.MULTIPLICATION *"<<endl;
	cout<<"4.DIVISION /"<<endl;
	cout<<"ENTER YOUR CHOICE:";
	cin>>choice;
	switch(choice){
		case 1 :
			cout<<"ENTER THE 1st NUMBER:";
			cin>>num1;
			cout<<"ENTER THE 2nd NUMBER:";
			cin>>num2;
			total=num1+num2;
			cout<<"YOUR ANSWER IS:"<<total;
			break;
		case 2 :
			cout<<"ENTER THE 1st NUMBER:";
			cin>>num1;
			cout<<"ENTER THE 2nd NUMBER:";
			cin>>num2;
			total=num1-num2;
			cout<<"YOUR ANSWER IS:"<<total;
			break;
		case 3 :
			cout<<"ENTER THE 1st NUMBER:";
			cin>>num1;
			cout<<"ENTER THE 2nd NUMBER:";
			cin>>num2;
			total=num1*num2;
			cout<<"YOUR ANSWER IS:"<<total;
			break;
		case 4 :
			cout<<"ENTER THE 1st NUMBER:";
			cin>>num1;
			cout<<"ENTER THE 2nd NUMBER:";
			cin>>num2;
			total=num1/num2;
			cout<<"YOUR ANSWER IS:"<<total;
			break;
		default:
			cout<<"ERROR";
	}
}


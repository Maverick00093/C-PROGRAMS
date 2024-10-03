#include<iostream>
using namespace std;
int main(){
	int choice,qtt,total;
	cout<<"===========MENU==========="<<endl;
	cout<<"1.---100"<<endl;
	cout<<"2.---200"<<endl;
	cout<<"3.---300"<<endl;
	cout<<"4.---400"<<endl;
	cout<<"5.---500"<<endl;
	cout<<"6.---600"<<endl;
	cout<<"7.---700"<<endl;
	cout<<"8.---800"<<endl;
	cout<<"Enter your order no:";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"1. here" <<endl;
			cout<<"enter qtt";
			cin>>qtt;
			total=100*qtt;
			cout<<"your bill is:"<<total;
			break;
		case 2:
			cout<<"2. here" <<endl;
			cout<<"enter qtt";
			cin>>qtt;
			total=200*qtt;
			cout<<"your bill is:"<<total;
			break;
		case 3:
			cout<<"3. here" <<endl;
			cout<<"enter qtt";
			cin>>qtt;
			total=300*qtt;
			cout<<"your bill is:"<<total;
			break;
		case 4:
			cout<<"4. here" <<endl;
			cout<<"enter qtt";
			cin>>qtt;
			total=400*qtt;
			cout<<"your bill is:"<<total;
			break;
		case 5:
			cout<<"5. here" <<endl;
			cout<<"enter qtt";
			cin>>qtt;
			total=500*qtt;
			cout<<"your bill is:"<<total;
			break;
		case 6:
			cout<<"6. here" <<endl;
			cout<<"enter qtt";
			cin>>qtt;
			total=600*qtt;
			cout<<"your bill is:"<<total;
			break;
		case 7:
			cout<<"7. here" <<endl;
			cout<<"enter qtt";
			cin>>qtt;
			total=700*qtt;
			cout<<"your bill is:"<<total;
			break;
		case 8:
			cout<<"8. here" <<endl;
			cout<<"enter qtt";
			cin>>qtt;
			total=800*qtt;
			cout<<"your bill is:"<<total;
			break;
		default:
			cout<<"Invelid";
			break;
	}
}

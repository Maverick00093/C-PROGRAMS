#include<iostream>
using namespace std;
int n,ans,choice;
void square(){
	ans=n*n;
	cout<<endl;
	cout<<"YOUR ANS. IS :"<<ans;
}
void cube(){
	ans=n*n*n;
	cout<<endl;
	cout<<"YOUR ANS. IS :"<<ans;
}
void upar4(){
	ans=n*n*n*n;
	cout<<endl;
	cout<<"YOUR ANS. IS :"<<ans;
}
int main(){
	cout<<"ENTER THE NUMBER :";
	cin>>n;
	cout<<endl;
	cout<<"WHAT YOU WANT TO DO WITH THIS NUMBER ? "<<endl<<endl;
	cout<<"1.SQUAER"<<endl;
	cout<<"2.CUBE"<<endl;
	cout<<"3.^4"<<endl<<endl;
	cout<<"ENTER YOUR CHOICE :";
	cin>>choice;
	switch(choice){
		case 1:
			square();
			break;
		case 2:
			cube();
			break;
		case 3:
			upar4();
			break;
	}
}

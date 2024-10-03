#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter Your Age:";
	cin>>age;
	if(age>18){
		cout<<"DL";
	}
	else if(age<18){
		cout<<"not applicable";
	}
	else{
		cout<<"LL";
	}
}

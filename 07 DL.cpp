#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"ENTER YOUR AGE:";
	cin>>age;
	if(age>=18){
		if(age>18){
			cout<<"YOU ARE ELIGIBLE FOR DL";
		}
		else{
			cout<<"YOU ARE JUST ELIGIBLE FOR LL";
		}
	}
	else{
		cout<<"YOU ARE NOT ELIGIBLE FOR LL AND DL";
	}
}

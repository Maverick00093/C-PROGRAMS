#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"ENTER THE NUMBER:";
	cin>>a;
	if(a>0){
		cout<<"NUMBER IS POSITIVE";
	}
	else{
		if(a<0){
			cout<<"NUMBER IS NEGATIVE";
		}
		else{
			cout<<"NUMBER IS ZERO";
		}
	}
}

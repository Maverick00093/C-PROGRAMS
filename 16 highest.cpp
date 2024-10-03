#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"ENTER THE VALUE OF a:";
	cin>>a;
	cout<<"ENTER THE VALUE OF b:";
	cin>>b;
	cout<<"ENTER THE VALUE OF c:";
	cin>>c;
	if(a>b){
		if(a>c){
			cout<<"a IS HIGHEST NUMBER";
		}
		else{
			cout<<"c IS HIGHEST NUMBER";
		}
	}
	else{
	if(b>c){
		cout<<"b IS HIGHEST NUMBER";
	}
	else{
		cout<<"c is HIGHEST NUMBER";
	}
}

}

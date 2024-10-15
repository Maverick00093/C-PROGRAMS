#include<iostream>
using namespace std;
int main(){
	int a,b;
	int* abc=&a;
	int* xyz=&b;
	cout<<"ENTER THE VALUE OF A :";
	cin>>a;
	cout<<"ENTER THE VALUE OF B :";
	cin>>b;
	if(*abc>*xyz){
		cout<<"HIGHEST NUMBER IS :"<<*abc<<endl<<"ADD. IS :"<<&a;
	}
	else{
		cout<<"HIGHEST NUMBER IS :"<<*xyz<<endl<<"ADD. IS :"<<&a;
	}
} 

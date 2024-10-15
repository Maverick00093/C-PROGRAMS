#include<iostream>
using namespace std;
int a,b;
void swap(int &a , int &b){
	a=a+b;
	b=a-b;
	a=a-b;
}
int main(){
	cout<<"ENTER THE VALUE OF A : "
	;																	
	cin>>a;
	cout<<"ENTER THE VALUE OF B : ";
	cin>>b;
	cout<<"BEFORE SWAP : "<<a <<" & " <<b <<endl;
	swap(a,b);
	cout<<"AFTER SWAP : "<<a <<" & " <<b;
}

#include<iostream>
using namespace std;
int main(){
	int n,rem,rev,no;
	cout<<"ENTER THE NUMBER :";
	cin>>n;
	no=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev=no){
		cout<<"NUMBER IS PALINDROM";
	}
	else{
		cout<<"NUMBER IS NOT PALINDROM";
	}
}

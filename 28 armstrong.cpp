#include<iostream>
using namespace std;
int main(){
	int num,n,rem,sum;
	cout<<"ENTER THE NUMBER :";
	cin>>num;
	n=num;
	while(num!=0){
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(n==sum){
		cout<<"NUMBER IS ARMSTRONG";
	}
	else{
		cout<<"NUMBER IS NOT AN ARMSTRONG";
	}
}

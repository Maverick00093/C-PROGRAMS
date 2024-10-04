#include<iostream>
using namespace std;
void armstrong(){
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
void prime(){
	int num,i;
 	bool isPrime=true;
 	cout<<"Enter The Number :";
 	cin>>num;
 	
 	for(i=2;i<=num/2;i++){
 		if(i%2==0){
 			isPrime=false;
 			break;
		 }
	 }
	 if(isPrime==true){
	 	cout<<"prime number";
	 }
	 else{
	 	cout<<"not prime";
	 }
}
void palindrom(){
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
int main(){
	int choice;
	cout<<"1.ARMSTRONG"<<endl;
	cout<<"2.PRIME NUMBER"<<endl;
	cout<<"3.PALINDROM"<<endl;
	cout<<"ENTER YOUR CHOICE :";
	cin>>choice;
	switch(choice){
		case 1:
			armstrong();
		    break;
		case 2:
			prime();
			break;
		case 3:
			palindrom();
			break;
	}
}

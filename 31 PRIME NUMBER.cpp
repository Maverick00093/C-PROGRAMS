#include<iostream>
using namespace std;

 int main(){
 	int num,i;
 	bool isPrime=true;
 	cout<<"Enter The Number :";
 	cin>>num;
 	
 	for(i=2;i*i<=num;i++){
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

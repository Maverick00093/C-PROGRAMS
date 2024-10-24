#include<iostream>
using namespace std;
int main(){
	try{
		int age ;
		cout<<"ENTER YOUR AGE :";
		cin>>age;
		if(age>=18){
			cout<<"Elig"<<endl;
		}
		else{
			throw (age);
		}
	
	}
	catch (int a){
		cout<<"NOT Elig"<<endl;
		cout<<"YOUR AGE IS :"<<a;
	}
}

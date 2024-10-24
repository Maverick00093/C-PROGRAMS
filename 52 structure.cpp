#include<iostream>
using namespace std;
int main(){
	struct{
		int age;
		string name;
	}myStruct;
	
	myStruct.age=18;
	myStruct.name="HELLO";
	
	cout<<myStruct.age<<endl;
	cout<<myStruct.name;
}

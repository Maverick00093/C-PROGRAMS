''#include<iostream>
using namespace std;
class car{
	public :
	string name;
	string model;
	int year;	
	car(string a , string b , int c);
};
car::car(string a , string b , int c){
		name=a;
		model=b;
		year=c;
	}
int main(){
	car obj("BMW" , "GT" , 1997);
	cout<<obj.name<<endl;
	cout<<obj.model<<endl;
	cout<<obj.year<<endl;
} 

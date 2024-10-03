#include<iostream>
using namespace std;
int main(){
	float h,w,bmi;
	cout<<"ENTER YOUR HEIGHT IN ft. :";
	cin>>h;
	h=0.305*h;
	cout<<"YOUR HEIGHT IS :"<<h<<"m"<<endl;
	cout<<"ENTER YOUR WEIGHT IN KG :";
	cin>>w;
	cout<<"YOUR WEIGHT IS :"<<w<<"kg"<<endl<<endl;
	bmi=w/(h*h);
	cout<<"YOUR BMI IS :"<<bmi;
}

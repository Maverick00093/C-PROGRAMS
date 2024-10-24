#include<iostream>
using namespace std;
class add{
	public:
	void ad(){
	   	int a,b,c;
	   	cout<<"ENTER THE 2 VALUE FOR ADDITION"<<endl;
	   	cout<<"ENTER THE VALUE OF a :";
	   	cin>>a;
	   	cout<<"ENTER THE VALUE OF b :";
	   	cin>>b;
	   	c=a+b;
	   	cout<<c<<endl;
	}
};
class sub: public add{
	public :
		void sb(){
		int a,b,c;
		cout<<"ENTER THE 2 VALUE FOR SUBTRACTION"<<endl;
		cout<<"ENTER THE VALUE OF a :";
		cin>>a;
		cout<<"ENTER THE VALUE OF b :";
		cin>>b;
		c=a-b;	
		cout<<c<<endl;
	}
};
class mul: public sub{
	public :
		void ml(){
		int a,b,c;
		cout<<"ENTER THE 2 VALUE FOR MULTIPLY"<<endl;
		cout<<"ENTER THE VALUE OF a :";
		cin>>a;
		cout<<"ENTER THE VALUE OF b :";
		cin>>b;
		c=a*b;
		cout<<c<<endl;
		}
};
class dev : public mul{
	public :
		void dv(){
		int a,b,c;
		cout<<"ENTER THE 2 VALUE FOR DEVISION"<<endl;
		cout<<"ENTER THE VALUE OF a :";
		cin>>a;
		cout<<"ENTER THE VALUE OF b :";
		cin>>b;
		c=a/b;
		cout<<c<<endl;
		
		}
};
int main(){
	add obj;
	sub obj1;
	mul obj2;
	dev obj3;
	
	obj.ad();
	obj1.sb();
	obj2.ml();
	obj3.dv();
}

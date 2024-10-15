#include<iostream>
using namespace std;
class abc{
	public:
		void mno(){
			cout<<"abc"<<endl;
		}
};
class pqr: public abc{
	public:
		void mno(){
			cout<<"pqr"<<endl;
		}
};
class xyz : public abc{
	public :
		void mno(){
			cout<<"xyz"<<endl;
		}
};
int main(){
	abc obj;
	pqr obj1;
	xyz obj2;
	obj.mno();
	obj1.mno();
	obj2.mno();
}

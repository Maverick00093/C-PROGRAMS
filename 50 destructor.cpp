#include<iostream>
using namespace std;
class abc {
	public :
		abc(){
			cout<<"CONSTRUCTOR"<<endl;
		}
		~abc(){
			cout<<"DESTRUCTOR";
		}
};
int main(){
	abc obj;
}

#include<iostream>
using namespace std;
class a{
	private:
		float len=6.9,width=8.7;
		friend void one (a);
};
void one(a obj){
	cout<<obj.len * obj.width;
}
int main(){
	a obj;
	one(obj);
}

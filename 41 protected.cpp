#include<iostream>
using namespace std;
class emply{
	protected:
		int salary;
};
class con: public emply{
	public:
		int bonus;
		void setSalary(int s){
			salary=s;
		}
		int getSalary(){
			return salary;
		}
};
int main(){
	con obj;
	obj.setSalary(15000);
	obj.bonus=10;
	cout<<obj.bonus<<endl;
	cout<<obj.getSalary();
}

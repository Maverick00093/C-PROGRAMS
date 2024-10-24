#include<iostream>
using namespace std;
class Address{
	public :
	string addressLine,city,state;
	Address(string addressLine , string city , string state){
		this->addressLine=addressLine;
		this->city=city;
		this->state=state;
	}
};
class Employee{
	private :
		Address*address;
	public :
	    int id;
	    string name;
	    Employee(int id , string name , Address*address){
	    	this->id=id;
	    	this->name=name;
	    	this->address=address;
		}
		void display();
};
void Employee::display(){
	cout<<"Emp Id :"<< id << endl << "Emp Name :" << name <<endl <<"Emp Address :" <<address->addressLine <<endl << endl; 
}
int main(){
	Address a=Address("Royal arcade, 306-311, Varachha Main Rd, opp. Dipkamal Multiplex, Marutidham Society, Sarthana Jakat Naka" , "Surat" , "Gujarat");
	Employee emp=Employee(1 , "xyz" , &a);
	Employee emp1=Employee(2 , "pqr" , &a);
	
	emp.display();
	emp1.display();
}

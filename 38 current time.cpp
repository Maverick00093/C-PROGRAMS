#include<iostream>
#include<ctime>
using namespace std;
int main(){
	time_t abc;
	time(&abc);
	cout<<ctime(&abc);
}

#include<iostream>
using namespace std;

 int main(){
     char val;
	 cout<<"Enter The Character:";
	 cin>>val;
	 val=tolower(val); 
	 switch(val){
	case'a':
	 	cout<<"This vowel";
	 	break;
	case'e':
	 	cout<<"This vowel";
	 	break;
	case'i':
	 	cout<<"This vowel";
	 	break;
	case'o':
	 	cout<<"This vowel";
	 	break;
	case'u':
	 	cout<<"This vowel";
	 	break;
	default:
	 	cout<<"This is Consonants";
	 	break;
	 }	 
 }

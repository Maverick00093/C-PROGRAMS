#include<iostream>
 
using namespace std;

  int main(){
  	
  	 int num[50],size,i;
  	 float sum=0,avg=0;
  	 
  	 cout<<"Enter The Size:";
  	 cin>>size;
  	 
  	 for(i=0;i<size;i++){
  	 	cout<<"Enter The Number:";
  	 	cin>>num[i];
  	 	sum = sum+=num[i];
  	    }
  	    
  	    cout<<"Sum of number is :"<<sum<<endl;
  	    
  	    avg=sum/size;
  	    
  	    cout<<"Average of Num:"<<avg<<endl;
  }

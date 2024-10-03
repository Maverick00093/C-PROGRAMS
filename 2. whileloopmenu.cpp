#include<iostream>
using namespace std;
  
   int main(){
   	 
   	  int choice; 
   	  float total=0;
   	  
   	  while(true){
		 cout<<"::::::::::Menu::::::::::"<<endl;
           cout<<"1.Pizza Rs 999"<<endl;                         
           cout<<"2.Burger Rs 159"<<endl;
           cout<<"3.Sandwich Rs 199"<<endl;
           cout<<"4.Meggie Rs 99"<<endl;
           cout<<"5.Vadapav Rs 49"<<endl;
           cout<<"6.Frankie Rs 129"<<endl;
           cout<<"7.French fries Rs 40"<<endl;                                                
           cout<<"8.Water Rs 20"<<endl;
           cout<<"select choice:";
           cin>>choice;
           
           switch(choice){
           	   case 1:
           	      total += 999;
           	    cout<<"Pizza added to your order"<<endl;
           	   break;
           	   
           	   case 2:
           	   	  total += 159;
           	   	cout<<"Burger added to your order"<<endl;
           	   	break;
           	   	
           	case 3:
           		total +=199;
           	  cout<<"Sandwich added to your order"<<endl;
           	  break;
           	  
           	case 4:
           		total += 99;
           	  cout<<"Maggie added to your order"<<endl;
           	break;
           	
           	case 5:
           		 total += 49;
           	cout<<"Vadapav added to your order"<<endl;
           	break;
           	
           	case 6:
           		total += 129;
           	cout<<"Frankie added to your order"<<endl;
           	break;
           	
           	case 7:
           		total += 40;
           	cout<<"French fries added to your order"<<endl;
           	break;
           	
           	case 8:
           		 total += 20;
            cout<<"Water added to your oreder"<<endl;
            break;
            
            case 9:
              cout<<"Exiting"<<endl;
               cout<<"Your Bill is:Rs"<<total<<endl;
            break;
             
               default:
                cout<<"Invalid choic";
            break;
    
                   
		   }
	}
   }

#include<iostream>
using namespace std; 
 int current_balance=50000,cd,wb;
void opn_acc(){
	string first_name , last_name;
    int mob_no , acc_no;
	cout<<"ENTER YOUR ACCOUNT NO. :";
	cin>>acc_no;
	cout<<"ENTER YOUR FIRST NAME :";
	cin>>first_name;
	cout<<"ENTER YOUR LAST NAME :";
	cin>>last_name;
	cout<<"ENTER YOUR MOBILE NO. :";
	cin>>mob_no;
	cout<<endl;
	cout<<"Your Account No Is :"<<acc_no <<endl;
	cout<<"Your First Name Is :"<<first_name <<endl;
	cout<<"Your Last Name Is :"<<last_name <<endl;
	cout<<"Your Mobile No Is :"<<mob_no <<endl;
		
}


void balance(){
    cout<<"Your Current Balance is:"<<current_balance<<endl;
	    
}

void deposit(){
	int dm;
	cout<<"How Many Money You Like to Deposite:";
	cin>>dm;
	cd=dm+current_balance;
	cout<<"Your Balance is Now:"<<cd<<endl;
}

void withdraw(){
	int wd;
   cout<<"How Many Money You Like to Withdraw:";
   cin>>wd;
   wb=current_balance-wd;
   if(wd<=current_balance){
   cout<<"Your Balance is Now:"<<wb<<endl;
   }
   else{
   	cout<<"Sorry,You Have Only:"<<current_balance<<endl;
   }
   
}

void transaction(){
                     
	
	

}

void modify_acc(){
	
          string fname,lname;
		  
		  int mno;	
        cout<<"Your Old Bank Details"<<endl;
        cout<<"Your First Name Is :Abhi"<<endl;
        cout<<"Your Last Name Is:Prajapati"<<endl;
        cout<<"Your Mobile Number Is:7096581585"<<endl;
        
        cout<<"Enter A new details"<<endl;
        
        cout<<"Enter a fisrt Name:";
        cin>>fname;
        cout<<"Enter a last Name:";
        cin>>lname;
        cout<<"Enter a Mobile Number:";
        cin>>mno;
        
        cout<<"Your details are Successfully Updated"<<endl;
        cout<<"Your First Name is:"<<fname<<endl;
        cout<<"Your Last Name is:"<<lname<<endl;
        cout<<"Your Mobile Number is:"<<mno<<endl;
        
        
}

void menu(){
	int choice;
	cout<<"========Bank System========"<<endl;
	cout<<"SELECT YOUR CHOICE"<<endl;
	cout<<"1. OPEN ACCOUNT"<<endl;
	cout<<"2. BALANCE "<<endl;
	cout<<"3. DEPOSIT"<<endl;
	cout<<"4. WITHDRAW"<<endl;
	cout<<"5. TRANSACTION"<<endl;
	cout<<"6. MODIFY ACCOUNT"<<endl;
	cout<<"7. EXIT"<<endl;
	cout<<"ENTER YOUR CHOICE :";
	cin>>choice;
	
	switch(choice){
		case 1:
			opn_acc();
		break;
		
		case 2:
			balance();
		break;
		
		case 3:
			deposit();
		break;
		
		case 4:
			withdraw();
		break;
		
		case 5:
			transaction();
		break;
		
		case 6:
			modify_acc();
		break;
		
	    default :
		    cout<<"THANK YOU ....";
	    break;
	}
	  char repeat;
        cout<<"You Like to Do any Other Process? [y for yes || n for no]):";
        cin>>repeat;
        if(repeat=='y'||repeat=='Y'){
            menu();
		}
		else{
			cout<<"Thank you......";
		}
}
int main(){
	menu();

}

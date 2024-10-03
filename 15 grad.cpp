#include<iostream>
using namespace  std;
int main(){
	int sub,sub1,sub2,sub3,sub4,sub5,sub6,total,pr,grd;
	    cout<<"SELECT THE MARKS OF SUB.1:";
	    cin>>sub1;
	    cout<<"SELECT THE MARKS OF SUB.2:";
	    cin>>sub2;
	    cout<<"SELECT THE MARKS OF SUB.3:";
	    cin>>sub3;
	    cout<<"SELECT THE MARKS OF SUB.4:";
	    cin>>sub4;
	    cout<<"SELECT THE MARKS OF SUB.5:";
	    cin>>sub5;
	    cout<<"SELECT THE MARKS OF SUB.6:";
	    cin>>sub6;
	    total=sub1+sub2+sub3+sub4+sub5+sub6;
	    		cout<<"YOUR TOTAL MARKS IS:"<<total<<endl;
	    pr=total*100/600;
	            cout<<"YOUR PERCENTAGE IS:%"<<pr<<endl;
         switch(pr/10) {
    case 10:
    case 9:
        cout<<"The grade is:A"<<endl;
        cout<<"Excellent work"<<endl;
        cout<<"Congratulation you are eligible for the next level"<<endl;
        break;
    case 8:
        cout<<"The grade is:B"<<endl;
        cout<<"Well Done"<<endl;
        cout<<"Congratulation you are eligible for the next level"<<endl;
        break;
    case 7:
        cout<<"The grade is: C"<<endl;
        cout<<"Good job"<<endl;
        break;
        cout<<"Congratulation you are eligible for the next level"<<endl;
    case 6:
        cout<<"The grade is: D"<<endl;
        cout<<"You passed, but you could do better"<<endl;
        cout<<"Congratulation you are eligible for the next level"<<endl;
        break;
    default:
        cout<<"The grade is: F"<<endl;
        cout<<"Khada Hu Aaj Bhi Wahi...!!!"<<endl;
        cout<<"Please try again next time"<<endl;
        break;
}
}

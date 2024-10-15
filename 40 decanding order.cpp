#include <iostream>

using namespace std;

int main(){
    int a, b, c ;
    cout << "Enter the number a: ";
    cin >> a;
    cout << "Enter the number b: ";
    cin >> b;
    cout << "Enter the number c: ";
    cin >> c;
    int L, M, S;
    if(a>=b && a>=c){
        L = a;
    }
    else{
        if(b>=c){
            L = b;
        } 
        else{
            L = c;
        }
    }
    if((a<=b && a>=c) || (a>=b && a<=c)) {  
        M = a;
    }   
    else{
        if((b<=a && b>=c) || (b>=a && b<=c))
        {
            M = b;
        }
        else{
            M = c;
        }
    }
    S = (a+b+c) - (L+M);
    cout << L << " " << M << " " << S << endl;
}

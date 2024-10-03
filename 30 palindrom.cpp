#include<iostream>
using namespace std;

bool isPalindrome(int n) {
    int reversed = 0, original = n;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    return (original == reversed);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPalindrome(num))
        cout << num << " is a palindrome number.";
    else
        cout << num << " is not a palindrome number.";
    return 0;
}

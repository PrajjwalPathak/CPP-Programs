//Program to find the reverse of a number

#include<iostream>

using namespace std;

int reverse(int n) {
    int rem, rev = 0;
    while(n!=0) {
        rem = n%10;
        rev = rev*10 + rem;
        n /=10;
    }
    return rev;
}

int main() {

    int n,r;
    cout<<"Enter Number: ";
    cin>>n;
    r = reverse(n);
    cout<<"Reversed Number: "<<r;
    
    return 0;
}
//Program to find the quotient and remainder when a number is divided

#include<iostream>
using namespace std;
int main() {
    int D,d,q,r;
    
    cout<<"Enter a number to find its quotient and remainder: ";
    cin>>D;
    cout<<"Enter the divisor: ";
    cin>>d;
    q=D/d;
    r=D%d;
    cout<<"\nQuotient: "<<q;
    cout<<"\nRemainder: "<<r;

    return 0;
}
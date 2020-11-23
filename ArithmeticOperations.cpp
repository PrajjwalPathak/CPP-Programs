//Program to demonstrate Arithmetic Operations

#include<iostream>
using namespace std;
int main() {
    float a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"\nEnter b: ";
    cin>>b;
    cout<<"\nAddition: "<<a+b;
    cout<<"\nSubtraction: "<<a-b;
    cout<<"\nMultiplication: "<<a*b;
    c=a/b;
    cout<<"\nDivision: "<<c;
    return 0;
}
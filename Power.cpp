//Program to find the pth power of a number

#include<iostream>

using namespace std;

int main() {

    int b,p,i,r=0;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter Power: ";
    cin>>p;
    r=b;
    for(i=2;i<=p;i++) {
        r=r*b;
    }
    cout<<"Result: "<<r;
    
    return 0;
}
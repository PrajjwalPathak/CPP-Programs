//Program to find largest of 3 numbers
#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter 3 numbers to compare: ";
    cin>>a>>b>>c;
    if(a>b) {
        if(a>c) {
            cout<<a<<" is the largest number";
        }
        else {
            cout<<c<<" is the largest number";
        }
    }
    else {
        cout<<b<<" is the largest number";
    }
    return 0;
}
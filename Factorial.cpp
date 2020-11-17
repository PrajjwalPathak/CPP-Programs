//Program to calculate the factorial of a number

#include<iostream>

using namespace std;

int main() {
    int n,i;
    long int f=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1;i<=n;i++) {
        f=f*i;
    }
    cout<<"Factorial is "<<f;
    
    return 0;
}
//Program to find if a number is prime or not

#include<iostream>

using namespace std;

int main() {
    int i,n,flag=0;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0) {
        cout<<"Invalid - Write numbers greater than 0";
    }
    else if(n==0 || n==1) {
        cout<<"Not a Prime";
    }
    else if(n==2 || n==3) {
        cout<<"Prime";
    }
    else {
        for(i=2;i<=n/2;i++) {
            if(n%i==0) {
                flag=1;
                break;
            }
        }
        if(flag==0) {
            cout<<"Prime";
        }
        else {
            cout<<"Not a Prime";
        }
    }
    
    return 0;
}
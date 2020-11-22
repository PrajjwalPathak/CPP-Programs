//Program to generate Fibonacci series of n elements

#include<iostream>
using namespace std;

int main() {
    int n, i, t1=1, t2=1, t3=0;
    cout<<"Write a positive number to print Fibonaci series: ";
    cin>>n;
    if(n==1) {
        cout<<t1;
    }
    else if(n==2) {
        cout<<t1<<" "<<t2<<" ";
    }
    else {
        cout<<t1<<" "<<t2;
        for(i=2;i<n;i++) {
            t3=t1+t2;
            cout<<t3<<" ";
            t1=t2;
            t2=t3;
        }
    }
    return 0;
}
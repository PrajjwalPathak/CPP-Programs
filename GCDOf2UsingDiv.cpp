//Program to find the GCD of two numbers using divisibility test

#include<iostream>

using namespace std;

int gcd(int a, int b) {
    int c,i,hcf=1;
    if(a==b) {
        hcf=a;
    }
    if(a>b) {
        c=b;
    }
    else {
        c=a;
    }
    for(i=1;i<=c;i++) {
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}

int main() {
    int a,b,hcf;
    cout<<"Enter two numbers to find GCD: ";
    cin>>a>>b;
    hcf=gcd(a,b);
    cout<<"HCF = "<<hcf;
    
    return 0;
}
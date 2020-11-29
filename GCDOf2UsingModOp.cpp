//Program to find the GCD of two numbers

#include<iostream>

using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int main() {
    int a,b,hcf;
    cout<<"Enter two numbers to find GCD: ";
    cin>>a>>b;
    hcf=gcd(a,b);
    cout<<"HCF = "<<hcf;
    
    return 0;
}
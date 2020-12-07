//Program to find the GCD of multiple numbers

#include<iostream>

using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int gcdMultiple(int a[], int n) {
    int i;
    for(i=0;i<n-1;i++) {
        a[i+1] = gcd(a[i],a[i+1]);
    }
    return a[n-1];
}

int main() {
    int i,n,hcf;
    cout<<"Enter n: ";
    cin>>n;
    int a[n];
    cout<<"Enter n numbers to find gcd: ";
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    hcf=gcdMultiple(a,n);
    cout<<"HCF = "<<hcf;
    
    return 0;
}
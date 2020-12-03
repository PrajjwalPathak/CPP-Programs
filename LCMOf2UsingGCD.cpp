//Program to find LCM of 2 numbers

#include<iostream>

using namespace std;

int gcd(int a, int b) {
    if(a==0) {
        return b;
    }
    else {
        return gcd(b%a,a);
    }
}

int main() {
    int a, b, hcf=1, lcm=1;
    cout<<"Enter 2 numbers to find LCM: ";
    cin>>a>>b;
    hcf = gcd(a,b);
    lcm = a*b/hcf;
    cout<<"LCM = "<<lcm;
}
//Program to find the pth power of a number using recursion

#include<iostream>

using namespace std;


int power(int b, int p) {
    if (p!=0)
        return (b*power(b,p-1));
    else
        return 1;
}

int main() {

    int b,p,r=1;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter Power: ";
    cin>>p;
    r = power(b,p);
    cout<<"Result: "<<r;
    
    return 0;
}
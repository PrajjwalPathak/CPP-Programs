#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter first number to swap: ";
    cin>>a;
    cout<<"Enter second number to swap: ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swaping: \n";
    cout<<"a: "<<a<<"  b: "<<b;

    return 0;
}
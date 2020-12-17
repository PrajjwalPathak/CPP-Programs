//Program to find the reverse of a number

#include<iostream>

using namespace std;

int reverse(int n) {
    int rem, temp = 0;
    while(n!=0) {
        rem = n%10;
        temp = temp*10 + rem;
        n /=10;
    }
    return temp;
}

int main() {

    int n,r;
    cout<<"Enter Number: ";
    cin>>n;
    r = reverse(n);
    cout<<"Reversed Number: "<<r;
    
    return 0;
}
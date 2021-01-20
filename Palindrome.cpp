//Program to find if a number is a palindrome or not

#include<iostream>

using namespace std;

int main() {
    int i,ori,rev=0;
    cout<<"Enter a number: ";
    cin>>i;
    ori=i;
    while(i!=0) {
        rev=rev*10;
        rev=rev+i%10;
        i=i/10;
    }
    if(rev==ori) {
        cout<<"Palindrome";
    }
    else {
        cout<<"Not a Palindrome";
    }
    
    return 0;
}
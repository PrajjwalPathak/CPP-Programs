//Program to generate multiplication table

#include<iostream>
using namespace std;

int main() {
    int n, i, p;
    cout<<"Enter a number for multiplication table: ";
    cin>>n;
    for(i=1;i<11;i++) {
        p=n*i;
        cout<<n<<" x "<<i<<" = "<<p<<"\n";
    }
    return 0;
}
//Program to calculate the sum of natural numbers till n 

#include <iostream>

using namespace std;

int main() {

    int n,i,Sum=0;
    cout<<"Enter n to find sum of n natural numbers:\n";
    cin>>n;
    for(i=1;i<=n;i++) {
        Sum = Sum + i;
    }
    cout<<"Sum is "<<Sum;

    return 0;
}
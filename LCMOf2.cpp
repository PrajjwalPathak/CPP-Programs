//Program to find LCM of 2 numbers

#include<iostream>

using namespace std;

int lcm(int a, int b) {
    int max;
    if(a==0 || b==0) {
        return 0;
    }
    else {
        max = (a>b)?a:b;
        while(1) {
            if(max%a==0  && max%b==0) {
                return max;
            }
            max++;
        }
    }
}

int main() {
    int a, b, l=1;
    cout<<"Enter 2 numbers to find LCM: ";
    cin>>a>>b;
    l = lcm(a,b);
    cout<<"LCM = "<<l;
}
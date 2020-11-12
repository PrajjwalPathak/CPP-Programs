//Program to calculate the area of triangle

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
    float a,b,c,A,s;
    cout<<"Enter the length of the sides: ";
    cin>>a>>b>>c;
    if(a+b > c && b+c > a && c+a > b) {
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area is "<<setprecision(3)<<A; 
    }
    else {
        cout<<"Invalid Triangle";
    }

    return 0;        
}
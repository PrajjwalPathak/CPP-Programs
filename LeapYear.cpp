//Program to tell if the year is a Leap Year or not

#include<iostream>

using namespace std;

int main() {

    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if(year%4==0) {
        if(year%100==0) {
            if(year%400==0) {
                cout<<"It is a Leap Year";
            }
            else {
            cout<<"It is not a Leap Year";
            }
        }
        else {
            cout<<"It is a Leap Year";
        }
    }
    else {
        cout<<"It is not a Leap Year";
    }
    return 0;
}
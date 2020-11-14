//Program to check if a character is a Vowel or a Consonant

#include<iostream>
using namespace std;
int main() {
    char a;
    cout<<"Enter the character to check if Vowel or Consonant: ";
    cin>>a;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U') {
        cout<<"Vowel";
    }
    else {
        cout<<"Consonant";
    }
    return 0;
}
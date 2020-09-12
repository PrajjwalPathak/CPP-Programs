#include<iostream>
using namespace std;
int main() {
    char a;
    cout<<"Enter the character to check if Vowel or Consonent: ";
    cin>>a;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U') {
        cout<<"Vowel";
    }
    else {
        cout<<"Consonent";
    }
    
    return 0;
}
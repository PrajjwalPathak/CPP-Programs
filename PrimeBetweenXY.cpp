//Program to print prime numbers in between x and y

#include<iostream>

using namespace std;

void primeBetweenXY(int x, int y) {
    int n,i;
    int isPrime = 1;
    for(n=x; n<=y; n++) {
        if(n==0 || n==1) {
            isPrime = 0;
        }
        else if (n==2) {
            isPrime = 1;
        }
        else {
            for(i=2;i<=n/2;i++) {
                if(n%i==0) {
                    isPrime = 0;
                    break;
                }
                else {
                    isPrime = 1;
                }
            }
        }
        if(isPrime == 1) {
            cout<<n<<" ";
        }
    }
}

int main() {
    int x,y;
    cout<<"Enter x and y to print prime numbers in between them:\n";
    cin>>x>>y;
    primeBetweenXY(x, y);
    
    return 0;
}
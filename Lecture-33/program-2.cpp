#include<iostream>
#include<cmath>
using namespace std;

void printDigits(int n){
    int count = 0;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        count++;
        cout<<digit<<endl;
        sum += digit;
        n = n / 10;
    }
    cout<<count<<endl;
    cout<<sum<<endl;
}

int main(){

        // Digits in a number.

        int n = 3568;
        printDigits(n);
        cout<<(int)(log10(n)+1)<<endl;

    
    return 0;
}
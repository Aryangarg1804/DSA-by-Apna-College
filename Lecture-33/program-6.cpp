#include<iostream>
using namespace std;

int reverse(int x) {
    int revNum = 0;
    while(x!=0){
        int rem = x % 10;
        if(revNum < INT32_MIN/10 || revNum > INT32_MAX/10){
            return 0;
        }
        revNum = revNum * 10 + rem;
        x/=10;
    }
    return revNum;
}

int main(){

    //  reverse a number.
    // Leetcode 7.
    cout<<reverse(123456789)<<endl;;
    cout<<reverse(1234567898);



    return 0;
}
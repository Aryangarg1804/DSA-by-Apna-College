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

bool isPalindrome(int x){
    if(x < 0 ) return false;
    int revNum = reverse(x);
    return x==revNum;
}

int main(){


    // palindrome number.
    cout<<isPalindrome(121);





    return 0;
}
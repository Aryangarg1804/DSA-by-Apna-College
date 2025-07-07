#include<iostream>
using namespace std;
// Binary to decimal.

int BinaryDecimal(int decNum){
    int ans=0,pow=1;
    while(decNum>0){
        int rem = decNum%10;
        ans += rem*pow;
        decNum/=10;
        pow*=2;
    }
    return ans;
}

int main(){
    int Binary = 1100101;
    cout<<BinaryDecimal(Binary)<<endl;
}
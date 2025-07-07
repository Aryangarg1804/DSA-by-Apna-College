#include<iostream>
using namespace std;
// number To binary.

int decimalBinary(int decNum){
    int ans=0, pow = 1;
    while(decNum>0){
        int rem = decNum%2;
        ans += rem*pow;
        decNum/=2;
        pow*=10;
    }
    return ans;
}

int main(){

   
    for(int i=2;i<=10;i++){
        cout<<decimalBinary(i)<<endl;
    }
    
    return 0;
}


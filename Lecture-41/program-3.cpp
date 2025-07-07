#include<iostream>
using namespace std;

int sumOfNNums(int n){
    if(n==1){
        return 1;
    }
    return n + sumOfNNums(n-1);
}

int main(){

    cout<<sumOfNNums(5);

    return 0;
}
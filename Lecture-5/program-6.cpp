#include<iostream>
using namespace std;

int sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){

    //  Calculate sum of number from 1 to n;
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    cout << sumN(n) << endl;;

    return 0;
}
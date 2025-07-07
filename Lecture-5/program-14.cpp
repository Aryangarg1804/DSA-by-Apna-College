#include<iostream>
using namespace std;

bool prime(int n){
    int flag = true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    // write a function to check if a number from 2 to n is prime or not.
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
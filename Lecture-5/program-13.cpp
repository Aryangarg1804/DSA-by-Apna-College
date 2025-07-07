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
    // write a function to check if a number is prime or not.
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    if(prime(n)){
        cout<<"Given number is a prime number : ";
    } else{
        cout<<"Given number is not a prime number  : ";
    }
    return 0;
}
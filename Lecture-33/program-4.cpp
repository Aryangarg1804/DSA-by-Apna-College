#include<iostream>
using namespace std;

int gcd(int a,int b){
   
    while(a>0 && b>0){
        if(a>b){
            a = a % b;
        } else{
            b = b % a;
        }
    }
    if(a==0) return b;
    if(b==0) return a;
}


int gcdRecursion(int a,int b){
    if(b==0) return a;
    return gcdRecursion(b,a%b);
}

int main(){

    // GCD.

    // Euclid's Algorithm
    cout<<gcd(20,28)<<endl;
    cout<<gcd(6,12)<<endl;
    cout<<gcd(24,0)<<endl;

    cout<<"Using recursion : "<<endl;
    cout<<gcdRecursion(20,28)<<endl;
    cout<<gcdRecursion(6,12)<<endl;
    cout<<gcdRecursion(24,0)<<endl;
    




}
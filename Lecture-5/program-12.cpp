#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int ncr(int n,int r){
    int num = factorial(n);
    int deno = factorial(r) * factorial(n-r);
    return num/deno;
}

int main(){
    // calculate the binomial coefficient for n & r.
    int n,r;
    cout<<"Enter n and r :";
    cin>>n>>r;
    
    cout<<"Binomial coefficient : "<<ncr(n,r)<<endl;
    return 0;
}

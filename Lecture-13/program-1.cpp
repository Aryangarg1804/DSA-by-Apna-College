#include<iostream>
using namespace std;

double mypow(double x, int n){
    if(x==0) return 0.0;
    if(n==0) return 1.0;
    if(x==1) return 1.0;
    if(x== -1 && n%2==0) return 1.0;
    if(x== -1 && n%2!=0) return -1.0;

    long binform = n;
    if(n<0){
        x=1/x;
        binform = -binform;
    }
    double ans = 1;
    while(binform > 0){
        if(binform %2==1){
            ans *= x;
        }
        x*=x;
        binform/=2;
    }
    return ans;
}

int main(){

    // leetcode - 50
    // Compute x^n;
    // leetcode 50th question.
    double x;
    int n;
    cout<<"Enter your number : ";
    cin>>x;
    cout<<"Enter your power : ";
    cin>>n;
    cout<< mypow(x,n)<<endl;



    return 0;
}
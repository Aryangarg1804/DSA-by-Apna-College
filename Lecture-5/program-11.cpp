#include<iostream>
using namespace std;

int sumdigit(int n){
    int sum=0;
    while(n!=0){
        int temp = n%10;
        sum+=temp;
        n/=10;
    }
    return sum;
}



int main(){
    // calculate sum of digit of a number.
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    cout<<"Sum of digit of a number is : "<<sumdigit(n)<<endl;
    return 0;
}
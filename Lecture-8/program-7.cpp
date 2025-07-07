#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int product(int arr[],int n){
    int product = 1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    return product;
}

int main(){
    // wap to calculate sum and the product of all number in a array.
    int n;
    cout<<"Enter the length of a array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< "Sun of a array is : "<<sum(arr,n)<<endl;
    cout<<"Product of a array is  : "<<product(arr,n)<<endl;

    
    return 0;
}
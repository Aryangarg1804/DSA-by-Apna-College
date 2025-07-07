#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int start = 0,end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++,end--;
    }
}

int main(){
    // reverse an array;
    // in this we use two pointer approach.
    int n;
    cout<<"Enter the length of a array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter number : ";
        cin>>arr[i];
    }
    reverseArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    // time complexity os "O(n)";


    return 0;
}
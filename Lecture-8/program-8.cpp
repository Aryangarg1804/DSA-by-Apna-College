#include<iostream>
using namespace std;
void MaxMinSwap(int arr[],int n){
    int max = INT32_MIN, min = INT32_MAX;
    int minIndex,maxIndex;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            maxIndex=i;
        }
        if(min>arr[i]){
            min=arr[i];
            minIndex=i;
        }
    }
    swap(arr[maxIndex],arr[minIndex]);

}

int main(){
    // wap to swap the max and min number of an array.
    int n;
    cout<<"Enter the length of a array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MaxMinSwap(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
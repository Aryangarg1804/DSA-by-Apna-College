#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){ // O(n^2)
    for(int i = 0;i<n-1;i++){
        bool isSwap = false;
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){  // Array is already sorted
            return;
        }
    }
}

void printArray(int arr[],int n){
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n = 5;
    int arr[] = {4,1,5,2,3};

    BubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}
#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){ // O(n^2)
    for(int  i= 0;i<n-1;i++){
        int SmallestIdx = i; // unsorted part starting
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[SmallestIdx]){
                SmallestIdx = j;
            }
        }
        swap(arr[i],arr[SmallestIdx]);
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

    SelectionSort(arr,n);
    printArray(arr,n);

    return 0;
}
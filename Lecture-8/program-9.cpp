#include<iostream>
using namespace std;

void uniqueValue(int arr[],int n){
    bool flag = true;
    for(int i=0;i<n;i++){
        flag = true;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<arr[i]<<" ";
        } 
    }
}

int main(){
    // wap to print all the unique values in an array.
    int n;
    cout<<"Enter the length of a array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter number : ";
        cin>>arr[i];
    }
    uniqueValue(arr,n);
    return 0;
}
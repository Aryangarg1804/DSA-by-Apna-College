#include<iostream>
using namespace std;
int main(){

    
    int n;
    cout<<"Enter your number of element in a array : ";
    cin>>n;
    int arr[n];
    int smallest = INT32_MAX;
    int maximum = INT32_MIN;
    int minIndex,maxIndex;
    for(int i=0;i<n;i++){
        cout<<"Enter number : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            minIndex = i;
        }
        if(arr[i]>maximum){
            maximum = arr[i];
            maxIndex = i;
        }
    }
    cout<<"Minimun Index of a smallest number is  : "<<minIndex<<endl;
    cout<<"Maximum index of a maximum number is : "<<maxIndex<<endl;


    return 0;
}
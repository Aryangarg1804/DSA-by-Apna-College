#include<iostream>
using namespace std;

void changeArr(int arr[],int size){
    cout<<"In function"<<endl;
    for(int i=0;i<size;i++){
        arr[i] = 2*arr[i];
    }
}

int main() {
    // array is a non-primitive datatype.
    // array is a call by reference.
    

    int arr[] = {1,2,3};
    changeArr(arr,3);
    cout<<"In main"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }

   

    return 0;
}
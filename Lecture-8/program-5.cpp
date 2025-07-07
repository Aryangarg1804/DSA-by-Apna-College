#include <iostream>
using namespace std;

int linearSearch(int arr[],int size,int number){
    for(int i=0;i<size;i++){
        if(arr[i]==number){
            return i;
        }
    }
    return -1;
}

int main(){
    // Linear search.
     // time Complexity of linear search is = "O(n)";
    int n;
    cout<<"Enter the length of a array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter number : ";
        cin>>arr[i];
    }
    int number;
    cout<<"Enter your number : ";
    cin>>number;
    cout<<"Index of a match number is : "<<linearSearch(arr,n,number)<<endl;;

    return 0;
}

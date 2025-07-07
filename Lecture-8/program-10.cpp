#include<iostream>
using namespace std;

void InterSection(int arr1[], int arr2[],int n,int m){
    bool visited[m] = {false}; 

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr1[i] == arr2[j] && !visited[j]) {
                cout << arr2[j] << " ";
                visited[j] = true; 
                break;
            }
        }
    }
}

int main(){

    // wap to find the intersection of 2 array;
    int n;
    cout<<"Enter your length of First array : ";
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cout<<"Enter number : ";
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter your length of second array : ";
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cout<<"Enter number : ";
        cin>>arr2[i];
    }
    InterSection(arr1,arr2,n,m);
    return 0;
}
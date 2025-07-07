#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
       int st = 1, end = arr.size() - 2;
       while (st<=end){
            int mid = st + (end-st)/2;
            if(arr[mid-1] < arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            } else if(arr[mid - 1] < arr[mid]){
                st = mid+1;
            } else{
                end = mid -1;
            }
       }
       return -1;
}

int main(){

    //leetcode 852.
    // apna college.

    int n;
    cout<<"Enter the length of a array : ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cout<<"Enter number : ";
        cin>>a;
        arr.push_back(a);
    }
    cout<<"Peak index of a Mountain array : "<<peakIndexInMountainArray(arr)<<endl;




    return 0;
}

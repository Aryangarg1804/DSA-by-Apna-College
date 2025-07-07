#include<iostream>
#include<vector>
using namespace std;

int recbinarySearch(vector<int> arr,int tar,int st, int end){
    if(st<=end){
        int mid = st + (end-st)/2;

        if(tar > arr[mid]){ // 2nd half
            return recbinarySearch(arr,tar,mid+1,end);
        } else if(tar < arr[mid]){ // 1st half
            return recbinarySearch(arr,tar,st,mid-1);
        } else{ // mid = ans
            return mid;
        }
    }
    return -1;
}

int main(){

    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; //odd
    int tar1 = 12;

    cout<<recbinarySearch(arr1,tar1,0,arr1.size()-1)<<endl;


    cout<<recbinarySearch(arr1,100,0,arr1.size()-1)<<endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; //even
    int tar2 = 0;
    cout<<recbinarySearch(arr2,tar2,0,arr2.size()-1)<<endl;
    cout<<recbinarySearch(arr2,10,0,arr2.size()-1)<<endl;

    return 0;
}
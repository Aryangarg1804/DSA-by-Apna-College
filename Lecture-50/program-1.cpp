#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end){ // O(n)
    vector<int> temp;
    int i = st, j = mid + 1;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){ // this is for assending order if we want to do this in descending order then we have to change only (arr[i] >= arr[j])
            temp.push_back(arr[i]);
            i++;
        } else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // left
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    // right
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++){
        arr[idx + st] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end){ // O(logn)
    if(st < end) {
        int mid = st + (end - st) / 2;

        mergeSort(arr, st, mid); //left half
        mergeSort(arr, mid+1, end); // Right half

        merge(arr, st, mid, end);
    }
}

int main(){

    // merge Sort
    vector<int> arr = {12, 31, 35, 8, 32, 17};


    mergeSort(arr, 0, arr.size()-1); // O(n*log(n))

    for(int val : arr){
        cout<<val<<" ";
    }

    return 0;
}
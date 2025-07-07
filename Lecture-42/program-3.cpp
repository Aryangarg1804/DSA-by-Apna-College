#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> nums, int target, int st, int end){
    if(st <= end){
        int mid = st + (end - st) / 2;
        if(nums[mid] == target){
            return mid;
        } else if(nums[mid] > target){
            return binarySearch(nums,target,st,mid-1);
        } else{
            return binarySearch(nums,target,mid+1,end);
        }
    }
    return -1;
}

int main(){

    // leetcode - 704 
    // Recursive Binary search;
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout<<binarySearch(nums,target,0,nums.size()-1);

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &nums,int target){
    int st = 0, end = nums.size() - 1;
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[st] <= nums[mid]){ // left Sorted
            if(nums[st] <= target && target <= nums[mid]){ //left
                end = mid - 1;
            } else{ // right
                st = mid + 1;
            }
        } else{ //right Sorted
            if(nums[mid] <= target && target <= nums[end]){ // right
                st = mid + 1;
            } else{ //left
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){

    // leetcode 33
    // Search in a rotated sorted array.
    // time complexity is O(logn).
    
    int n;
    cout<<"Enter the length of a array : ";
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int a;
        cout<<"Enter number : ";
        cin>>a;
        nums.push_back(a);
    }
    int tar;
    cout<<"Enter target number : ";
    cin>>tar;
    cout<<"Index of a number is : "<<search(nums,tar)<<endl;
    

    return 0;
}
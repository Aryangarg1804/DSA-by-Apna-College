#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) { // O(n) TC and SC = O(1). 
    int pivot = -1,n = nums.size();
    for(int i = n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(nums.begin(),nums.end()); // in place changes.
        return;
    }

    // 2nd step : next larger number.
    for(int i = n-1; i>pivot ;i--){
        if(nums[i]>nums[pivot]){
            swap(nums[i],nums[pivot]);
            break;
        }
    }

    // 3rd step : reverse (piv+1 to n-1)
    // reverse(nums.begin() + pivit + 1,nums.end());

    int i = pivot+1,j = n-1;
    while(i<=j){
        swap(nums[i++],nums[j--]);
    }


    // or
    // next_permutation(nums.begin(),nums.end());
}

int main(){

    // leetcode 31
    // next permutation.
    vector<int> nums = {1,2,3};
    nextPermutation(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }




    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int count  = 0, n = nums.size();

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum += nums[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
}

int main(){

    // leetcode 560.
    // bruteforce approach

    // Dome by me.
    vector<int> nums = {9,4,20,3,10,5};
    int k = 33;
    cout<<subarraySum(nums, k)<<endl;


    return 0;
}
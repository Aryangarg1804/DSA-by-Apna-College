#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void next(vector<int> &ans, vector<int> & nums, stack<int> &s, int idx){
        ans[idx] = nums[idx];
        for(int i =0;i<idx;i++){
            if(ans[idx] < nums[i]){
                ans[idx] = nums[i];
                s.push(nums[i]);
                break;
            }
        }

        if(ans[idx] == nums[idx]){
            ans[idx] = -1;
            s.push(nums[idx]);
        }
    }

    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        stack<int> s;


        for(int i = n - 1; i >= 0; i--){
            while(s.size() > 0 && nums[i] >= s.top()){
                s.pop();
            }

            if(s.empty()){
                next(ans, nums, s, i);
            } else{
                ans[i] = s.top();
            }

            s.push(nums[i]);
        }
        return ans;
    }

int main(){

    // TC = O(n) According to leetcode
    // leetcode - 503
    // next Greater Element II
    // Done By Aryan


    // vector<int> nums = {1,2,3,4,5};
    // vector<int> nums = {5,4,3,2,1};
    // vector<int> nums = {1,2,1};
    // vector<int> nums = {1,2,3,4,3};
     vector<int> nums = {1,2,3,2,1};

    vector<int> ans = nextGreaterElements(nums);

    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;
}
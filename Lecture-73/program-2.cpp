#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> s;

        for(int i = 2*n-1; i>=0; i--){
            while(s.size() > 0 && nums[i%n] >= nums[s.top()]){
                s.pop();
            }

            ans[i%n] = s.empty() ? -1 : nums[s.top()];
            s.push(i%n);
        }

        return ans;
}

int main(){

    // TC = O(n);
    // leetcode - 503
    // next Greater Element II

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
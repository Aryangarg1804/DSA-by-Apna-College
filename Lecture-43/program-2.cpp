#include<iostream>
#include<vector>
using namespace std;
void getAllSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets){
        if(i == nums.size()){
            // store
            allSubsets.push_back({ans});
            return;
        }

        // INSERT
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, i+1, allSubsets);

        // BACKTRACK
        ans.pop_back();

        // EXCLUDE
        getAllSubsets(nums, ans, i+1, allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;
        getAllSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
    }

int main(){

    // subarray.
    // leetcode - 78
    vector<int> arr = {1, 2, 3};
    
    vector<vector<int>> ans = subsets(arr);
    for(auto val : ans){
        for(int v : val){
            cout<<v<<" ";
        }
        cout<<endl;
    }

    return 0;
}
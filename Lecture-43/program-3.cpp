#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getAllSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets){
        if(i == nums.size()){
            allSubsets.push_back({ans});
            return;
        }

        // INCLUDE
        ans.push_back(nums[i]);
        getAllSubsets(nums,ans,i+1,allSubsets);

        // BACKTRACK
        ans.pop_back();

        // SKIP DUPLICATE
        int idx = i+1;
        while(idx < nums.size() && nums[idx] == nums[idx -1]) idx++;
        

        // EXCLUDE
        getAllSubsets(nums,ans,idx,allSubsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> allSubsets;
        vector<int> ans;
        
        getAllSubsets(nums,ans,0,allSubsets);

        return allSubsets;
    }
int main(){

    // subarray 2.
    // leetcode - 90
    vector<int> arr = {1, 2, 3};
    
    vector<vector<int>> ans = subsetsWithDup(arr);
    for(auto val : ans){
        for(int v : val){
            cout<<v<<" ";
        }
        cout<<endl;
    }

    return 0;
}
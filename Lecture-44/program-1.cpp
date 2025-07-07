#include<iostream>
#include<vector>
using namespace std;

void getPerms(vector<int> &nums,int idx,vector<vector<int>> &ans){
    if(idx == nums.size()){
        ans.push_back({nums});
        return;
    }

    for(int i = idx; i<nums.size(); i++){
        swap(nums[idx], nums[i]); // idx place => ith element choice
        getPerms(nums, idx+1, ans);

        // Backtracking
        swap(nums[idx], nums[i]);
    }
}

vector<vector<int>> permute(vector<int> &nums){
    vector<vector<int>> ans;
    getPerms(nums, 0 ,ans);
    return ans;
}

int main(){

    // permutation
    // leetcode -46
    vector<int> arr = {1, 2, 3};
    
    vector<vector<int>> ans = permute(arr);
    for(auto val : ans){
        for(int v : val){
            cout<<v<<" ";
        }
        cout<<endl;
    }


    return 0;
}
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int ans;
    unordered_set<int> s;
    for(int i=0;i<nums.size();i++){
        if(s.find(nums[i]) != s.end()){
            ans = nums[i];
            break;
        }
        s.insert(nums[i]);
    }
    return ans;
}

int main(){

    // leetcode 287
    // find the duplicate number

    // done by aryan.
    vector<int> nums = {1,3,4,2,2};
    int ans = findDuplicate(nums);
    cout<<ans<<endl;
    


    return 0;
}
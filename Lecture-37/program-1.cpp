#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        int first = nums[i];
        int second = target - first;

        if(m.find(second) != m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }

        m[first] = i;
    }

    return ans;
}

int main(){

    // two sum
    // leetcode - 1

    vector<int> nums = {5,2,11,7,15};
    int target = 9;
    // Optimised solution.
    vector<int> ans = twoSum(nums,target);
    cout<<ans[0] << " "<<ans[1]<<endl;

    

    return 0;
}
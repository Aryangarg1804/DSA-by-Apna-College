#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int findDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for(int val : nums){
        if(s.find(val) != s.end()){
            return val;
        }
        s.insert(val);
    }
    return -1;
}

int main(){

    // leetcode 287
    // find the duplicate number

    // done by youtube.
    vector<int> nums = {1,3,4,2,2};
    int ans = findDuplicate(nums);
    cout<<ans<<endl;
    // but we have to solve this question in content extra space.
    
    


    return 0;
}
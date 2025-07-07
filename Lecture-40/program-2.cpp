#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    vector<int> prefixSum(n, 0);

    prefixSum[0] = nums[0];
    for(int i = 1; i<n; i++){
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }

    unordered_map<int,int> m; // PS, freq
    for(int j = 0; j<n; j++){
        if(prefixSum[j] == k) count++;

        int val = prefixSum[j] - k;
        if(m.find(val) != m.end()){
            count += m[val];
        }

        if(m.find(prefixSum[j]) == m.end()){
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }

    return count;
}

int main(){

    // leetcode 560.
    // optimal approach

    // vector<int> nums = {9,4,20,3,10,5};
    vector<int> nums = {9,4,0,20,3,10,5};
    int k = 33;
    cout<<subarraySum(nums, k)<<endl;


    return 0;
}
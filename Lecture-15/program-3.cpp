#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n,1);

    // prefix => ans
    for(int i=1;i<n;i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    // Suffix
    int suffix = 1;
    for(int i=n-2;i>=0;i--){
        suffix *= nums[i+1]; //ith suffix
        ans[i] *= suffix;

    }

    return ans;
}


int main(){

    // Product of Array except self
    // Leetcode 238 
    // optimal approach.
    // in this time  complexity is O(n) and space complexity O(1);
    
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    vector<int> nums;
    int a;
    for(int i=0;i<n;i++){
        cout<<"Enter number : ";
        cin>>a;
        nums.push_back(a);
    }
    vector<int> answer = productExceptSelf(nums);
    for(int i=0;i<n;i++){
        cout<<answer[i]<<" ";
    }
    
    return 0;
}
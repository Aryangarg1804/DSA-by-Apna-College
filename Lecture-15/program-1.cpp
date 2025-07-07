#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                ans[i]*=nums[j];
            }
        }
    }
    return ans;
}


int main(){

    // Product of Array except self
    // Leetcode 238 
    // Brute force approach.

    
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
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int trap(vector<int>& height) { // O(n)
    int n = height.size();
    int ans = 0;
    int l = 0, r = n - 1;
    int lmax = 0, rmax = 0;
    while (l < r){
        lmax = max(lmax, height[l]);
        rmax = max(rmax, height[r]);

        if(lmax < rmax){
            ans += lmax - height[l];
            l++;
        } else{
            ans += rmax - height[r];
            r--;
        }
    }
    
    return ans;
}

int main(){

    // leetcode - 42
    // Done by apna college    
    // optimized
    // TC : O(n) , SC : O(1)
    // vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> height = {4,2,0,3,2,5};
    cout<<trap(height)<<endl;


    return 0;
}
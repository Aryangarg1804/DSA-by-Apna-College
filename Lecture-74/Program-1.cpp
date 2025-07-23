#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int trap(vector<int>& height) {

        // completed in college with anhad and me
        int n = height.size();
        int water = 0;

        if(n<=2){
            return 0;
        }
        vector<int> leftMax(n,0);
        vector<int> rightMax(n,0);

        leftMax[0] = height[0];
        for(int i =1;i<n;i++){
            leftMax[i] = max(leftMax[i-1], height[i]);
        }

        rightMax[n-1] = height[n-1];
        for(int i = n - 2;i >=0;i--){
        rightMax[i] = max(rightMax[i+1], height[i]);
        }


        for(int i =0;i<n;i++){
            int minHeight = min(leftMax[i], rightMax[i]);
            water += minHeight - height[i];
        }

        return water;
}

int main(){

    // leetcode - 42
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height)<<endl;


    return 0;
}
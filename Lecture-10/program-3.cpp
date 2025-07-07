#include<iostream>
#include<vector>
using namespace std;
int main(){

    // maximum subarray sum.
    // Kadane's Algorithm (most optimised)

    vector<int> nums = {3,-4,5,4,-1,7,-8};
    int currSum =0,maxSum = INT32_MIN;
    for(int val : nums){
        currSum+=val;
        maxSum = max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum<<endl;
    

    return 0;
}
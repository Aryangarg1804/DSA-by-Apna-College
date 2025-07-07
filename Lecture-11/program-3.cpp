#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){


    // majority element.
    // vector<int> nums = {2,2,1,1,1,2,2};
    // int n = nums.size();
    // for(int val : nums){
    //     int freq = 0;
    //     for(int el : nums){
    //         if(val == el){
    //             freq++;
    //         }
    //     }
    //     if(freq>n/2){
    //         cout<<val<<endl;
    //         break;
    //     }
    // }


    // optimised approach.

    // vector<int> nums = {2,2,1,1,1,2,2};
    // int n = nums.size();

    // // sort
    //    sort(nums.begin(),nums.end());

    // // freq count
    // int freq =1 , ans = nums[0];
    // for(int i=1;i<n;i++){
    //     if(nums[i]==nums[i-1]){
    //         freq++;
    //     } else{
    //         freq = 1;
    //         ans = nums[i];
    //     }
    //     if(freq>n/2){
    //         cout<<ans<<endl;
    //     }
    // }
    // cout<<ans<<endl;
    return 0;
}
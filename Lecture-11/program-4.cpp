#include<iostream>
#include<vector>
using namespace std;
int main(){

    // Moore's voting algorithm.
    vector<int> nums = {2,2,1,1,1,2,2};
    int n = nums.size();
    int freq =0 ,ans=0;
    for(int i=0;i<n;i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        } else{
            freq--;
        }
    }
    cout<<ans<<endl;


    //  in case if there is no majority element.
    // then we need to find the frequency of than find freq of ans and then check if it is greater than n/2 if not return -1.
    // if not given that answer is already exist.
    // int count =0;
    // for(int val : nums){
    //     if(val==ans){
    //         count++;
    //     }
    // }
    // if(count>n/2){
    //     cout<<ans<<endl;;
    // } else{
    //     cout<<-1<<endl;
    // }

    return 0;
}
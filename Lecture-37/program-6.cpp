#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0],fast = nums[0];

    do{
        slow = nums[slow]; // +1
        fast = nums[nums[fast]]; // +2;
    } while(slow != fast);

    slow = nums[0];

    while(slow != fast){
        slow = nums[slow]; // +1
        fast = nums[fast]; // +1
    }

    return slow;
}

int main(){

    // leetcode 287
    // find the duplicate number

    // done by youtube.
    // slow and fast pointer.
    vector<int> nums = {1,3,4,2,2};
    int ans = findDuplicate(nums);
    cout<<ans<<endl;
   
    
    


    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());

        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            for(int j = i+1; j<n; j++){
                if(j>i+1 && nums[j] == nums[j-1]){
                    continue;
                }
                int k = j+1, l = n-1;
                while(k < l){
                    long long int sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum > target){
                        l--;
                    } else if(sum < target){
                        k++;
                    } else{
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++,l--;

                        while(k<l && nums[k] == nums[k-1]){
                            k++;
                        }
                        while(k<l && nums[l] == nums[l+1]){
                            l--;
                        }
                    }
                }
            }
        }
        return ans;
}

int main(){

    // leetcode 18
    // four sum

    // Dome by aryan.
    vector<int> nums = {-2,-1,-1,1,1,2,2};
    int target = 0;
    vector<vector<int>> ans = fourSum(nums,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
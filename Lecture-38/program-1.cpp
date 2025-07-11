#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        set<vector<int>> s; // set<uniqueTriplets>

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> trip = {nums[i] , nums[j] , nums[k]};
                        sort(trip.begin(),trip.end());

                        if(s.find(trip) == s.end()){
                            s.insert(trip);
                            ans.push_back(trip);
                        }
                    }
                }
            }
        }
        return ans;
}

int main(){

    // leetcode 15 
    // three sum 
     
    // Brute force approach
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
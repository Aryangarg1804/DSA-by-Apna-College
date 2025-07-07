#include<iostream>
#include<vector>
#include<set>
using namespace std;

set<vector<int>> s;
void getAllCombination(vector<int>& arr, int idx, int target, vector<vector<int>> &ans, vector<int> &combin){
    if(idx == arr.size() || target<0){
        return;
    }

    if(target == 0){
        if(s.find(combin) == s.end()){
            ans.push_back(combin);
            s.insert(combin);
        }
        return;  
    }

    combin.push_back(arr[idx]);
    // single
    getAllCombination(arr, idx+1, target - arr[idx],ans,combin);
    // multiple
    getAllCombination(arr, idx, target - arr[idx],ans,combin);
    combin.pop_back(); // backtrack.

    // exclution
    getAllCombination(arr, idx+1, target,ans,combin);

}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> combin;

    getAllCombination(candidates,0,target,ans,combin);

    return ans;
}

int main(){

    // leetcode - 39
    vector<int> candidates = {2,3,5};
    int target = 8;
    vector<vector<int>> ans = combinationSum(candidates,target);

    for(int i =0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
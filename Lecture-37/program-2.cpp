#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    unordered_map<int,int> m;
    vector<int> ans;
    int n = grid.size();

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(m.find(grid[i][j]) != m.end()){
                ans.push_back(grid[i][j]);
            }
            m[grid[i][j]]++;
        }
    }
    for(int i=1;i<=n*n;i++){
        if(m.find(i) == m.end()){
            ans.push_back(i);
            break;
        }
    }
    return ans;
}

int main(){

    // leetcode 2965
    // find missing repeated number.

    // done by aryan.
    vector<vector<int>> grid = {{1,3},{2,2}};
    vector<int> ans = findMissingAndRepeatedValues(grid);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    

    return 0;
}
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    vector<int> ans;
    unordered_set<int> s;
    int n = grid.size();
    int a,b;

    int expectedSum = 0, actualSum = 0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actualSum+=grid[i][j];
            if(s.find(grid[i][j]) != s.end()){
                a=grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expectedSum =  (n*n) * (n*n +1) / 2;
    b = expectedSum + a - actualSum;
    ans.push_back(b);

    return ans;
}

int main(){

    // leetcode 2965
    // find missing repeated number.

    // done by youtube.
    // O(n^2)
    vector<vector<int>> grid = {{1,3},{2,2}};
    vector<int> ans = findMissingAndRepeatedValues(grid);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    


    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) { // O(rows + log(cols))
    int rows = matrix.size(),cols = matrix[0].size();
    int row = -1;
    for(int i=0;i<rows;i++){
        if(matrix[i][0] <= target && matrix[i][cols-1] >= target){
            row = i;
            break;
        } 
    }   
    if(row >= 0){
        int st = 0,end = cols-1;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(target > matrix[row][mid]){
                st = mid + 1;
            } else if(target < matrix[row][mid]){
                end = mid - 1;
            } else{
                return true;
            }
        }
    }
    return false;
}

int main(){

    // Search in 2D matrix
    // leetcode -74
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    cout<<searchMatrix(matrix,target);



    return 0;
}
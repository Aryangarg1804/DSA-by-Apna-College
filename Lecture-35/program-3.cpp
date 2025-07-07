#include<iostream>
#include<vector>
using namespace std;

bool searchElement(vector<vector<int>> &matrix,int target,int row){
    int m = matrix.size(),n = matrix[0].size();
    int st = 0, end = n-1;
    while(st<=end){
        int mid = st + (end - st) / 2;
        if(target > matrix[row][mid]){
            st = mid +1;
        } else if(target < matrix[row][mid]){
            end = mid -1;
        } else{
            return true;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    for(int i=0;i<m;i++){
        if(matrix[i][0] <= target && target <= matrix[i][n-1]){
            if(!(searchElement(matrix,target,i))){
                continue;
            }
            return true;
        }
    }
    return false;
}

int main(){

    // Search in a 2D matrix II.
    // leetcode 240 
    // done by aryan
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 5;
    cout<<searchMatrix(matrix,target);


    return 0;
}
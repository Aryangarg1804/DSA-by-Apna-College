#include<iostream>
#include<vector>
using namespace std;

bool searchInRow(vector<vector<int>> &matrix,int target,int row){ // O(log(n))
    int n = matrix[0].size();
    int st = 0,end = n-1;
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
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) { //O(log(m))
    // BS on total number of rows.
    int m = matrix.size(),n = matrix[0].size();
        int stRow = 0 , endRow = m-1;
        while(stRow<=endRow){
            int midRow = stRow + (endRow - stRow) / 2;
            if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
                // fount the row. => BS on this row
                return searchInRow(matrix,target,midRow);
            } else if(target >= matrix[midRow][n-1]){
                // down => right
                stRow = midRow + 1;
            } else{
                // up => left
                endRow = midRow -1;
            }
        }

        return false;
}

int main(){
   

    // Search in 2d matrix
    // leetcode 74
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    cout<<searchMatrix(matrix,target);










    return 0;
}
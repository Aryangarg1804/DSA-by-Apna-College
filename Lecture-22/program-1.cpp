#include<iostream>
#include<vector>
using namespace std;


bool ispossible(vector<int> &arr,int n,int m,int maxAllowTime){ // O(n).
    int painters = 1 ,time = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowTime){
            return false;
        }
        if(time + arr[i] <= maxAllowTime){
            time += arr[i];
        } else{
            painters++;
            time = arr[i];
        }
    }

    return painters <= m ? true : false;
}

int minTimeTopaint(vector<int> &arr,int n,int m){
    if(m > n){
        return -1;
    }

    int sum = 0, maxVal = INT32_MIN;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxVal = max(maxVal,arr[i]);
    }

    int ans = -1;
    int st = maxVal , end = sum;
    while(st <= end){ // O(log(sum) * n)
        int mid = st + (end - st) / 2;
        if(ispossible(arr, n, m, mid)){ // left
            ans = mid;
            end = mid -1;
        } else{ //right
            st = mid + 1;
        }
    }
    return ans;
}

int main(){

    /*
    Painter's Partition Problem

    Given are N boards of length of each given in the form of array, and M painters, such that each painter takes 1 unit of time to paint 1 unit of the board.

    The task is to find the minimum time to paint all boards under the constraints that any painter will only paint continuous sections of boards.
    */

    vector<int> arr = {40, 30, 10, 20};
    int n = 4,m =2;
    cout<<minTimeTopaint(arr,n,m);



    return 0;
}
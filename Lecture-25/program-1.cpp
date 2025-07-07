#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void sortColor(vector<int> &nums){
    sort(nums.begin(),nums.end());
}

int main(){

    // brute Force approach 
    // O(nlogn);
    int n;
    cout<<"Enter number of element : ";
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int a;
        cout<<"Enter Element : ";
        cin>>a;
        nums.push_back(a);
    }
    sortColor(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}
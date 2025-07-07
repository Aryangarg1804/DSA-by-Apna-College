#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void sortColor(vector<int> &nums){
    int n = nums.size();
    int low = 0 ,mid = 0 ,high = n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        } else if(nums[mid]==1){
            mid++;
        } else{ //2
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    
}

int main(){

    // most Optimise approach
    // Dutch National flag Algorithm.
    // O(n);
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
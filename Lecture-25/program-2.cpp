#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void sortColor(vector<int> &nums){
    int countOfZero = 0,countOfOne = 0,countOfTwo = 0;
    int count = nums.size();

    // O(n); 
    // 2 passes
    for (int i = 0; i < count; i++)
    {
        if(nums[i] == 0) countOfZero++;
        else if(nums[i]==1) countOfOne++;
        else countOfTwo++;
    }
    for (int i = 0; i < count; i++)
    {
        if(i<countOfZero){
            nums[i] = 0;
        } else if(i<countOfOne + countOfZero){
            nums[i] = 1;
        } else{
            nums[i] = 2;
        }
    }
}

int main(){

    // Optimise approach
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
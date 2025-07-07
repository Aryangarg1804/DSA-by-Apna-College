#include<iostream>
#include<vector>
using namespace std;

void reverseVector(vector<int> &nums){
    int start = 0,end= nums.size() -1 ;
    while(start<end){
        swap(nums[start],nums[end]);
        start++,end--;
    }
}

int main(){
    int n;
    cout<<"Enter the number of element in vector : ";
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cout<<"Enter number : ";
        int a;
        cin>>a;
        nums.push_back(a);
    }
    reverseVector(nums);
    for(int val : nums){
        cout<<val<<" ";
    }

    return 0;
}
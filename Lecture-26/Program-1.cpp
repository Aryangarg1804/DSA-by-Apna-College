#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &nums1,int m,vector<int> &nums2,int n){
    int idx = m+n-1, i= m - 1,j = n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>=nums2[j]){
            nums1[idx--] = nums1[i--];
        } else{
            nums1[idx--] = nums2[j--];
        }
    }
    while(j>=0){
        nums1[idx--] = nums2[j--];
    }
}


int main(){
    // leetcode 88
    // merge two sorted array.
    int m,n;
    vector<int> nums1,nums2;
    cout<<"Enter the length of first sorted array : ";
    cin>>m;
    for(int i=0;i<m;i++){
        int a;
        cout<<"Enter element : ";
        cin>>a;
        nums1.push_back(a);
    }
    cout<<"Enter the length of Second sorted array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cout<<"Enter element : ";
        cin>>a;
        nums2.push_back(a);
        nums1.push_back(0);
    }
    merge(nums1,m,nums2,n);

    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<" ";
    }



    return 0;
}
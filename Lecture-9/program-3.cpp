#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &nums,int number){
    int i=0;
    for(int val : nums){
        if (val==number)
        {
            return i;
        }
        i++;
    }
    return -1;
}

int main(){

    // Linear search using vector.
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
    int number;
    cout<<"Enter number you want to Search : ";
    cin>>number;
    cout<<"Value at index : "<<linearSearch(nums,number)<<endl;



    return 0;
}
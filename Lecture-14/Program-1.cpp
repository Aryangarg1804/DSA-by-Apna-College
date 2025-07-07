#include<iostream>
#include<vector>
using namespace std;

int MaxArea(vector<int> &height){
    int maxWater = 0;
    int n = height.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int width = j-i;
            int high = min(height[i],height[j]);
            int currWater = width*high;
            maxWater = max(currWater,maxWater);
        }
    }
    return maxWater;
}

int main(){


    // Container with most water.
    // Brute Force approach with time complexity O(n^2);
    int n;
    cout<<"Enter your length of array : ";
    cin>>n;
    vector<int> height;
    int a;
    for(int i=0;i<n;i++){
        cout<<"Enter height : ";
        cin>>a;
        height.push_back(a);
    }
    cout<<"Maximum Area : "<<MaxArea(height)<<endl;




    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int MaxArea(vector<int> &height){
   int maxWater = 0;
   int lp=0,rp=height.size()-1;
   while(lp<rp){
    int w = rp-lp;
    int ht = min(height[lp],height[rp]);
    int currWater = w * ht;
    maxWater = max(maxWater,currWater);
    height[lp]<height[rp] ? lp++ : rp--;
   }
   return maxWater;
}

int main(){

    // Container with most water.
    // Optinal two pointer approach O(n).
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
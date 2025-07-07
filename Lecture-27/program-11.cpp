#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comparator(pair<int ,int>p1,pair<int,int> p2){
    if(p1.second < p2.second) return true;
    // else return false;
    if(p1.second > p2.second) return false;


    if(p1.first < p2.first) return true;
    else return false;
}


int main(){


    vector<pair<int,int>> vec = {{3,3},{2,1},{7,1},{5,2}}; // sort on the basis of second parameter.

    sort(vec.begin(),vec.end(),comparator);

    for(auto val : vec){
        cout<<val.first<<" "<<val.second<<endl;;
    }


    return 0;
}
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> prevSmallerElement(vector<int> arr){
    
    stack<int> s;
    vector<int> ans(arr.size() , 0);

    for(int i =0;i<arr.size();i++){
        while(s.size() > 0 && arr[i] <= s.top()){
            s.pop();
        }

        if(s.empty()){
            ans[i] = -1;
        } else{
            ans[i] = s.top();
        }

        s.push(arr[i]);
    }
    return ans;
}


int main(){

    // previous smallest element
    vector<int> arr = {3, 1, 0, 8, 6};

    vector<int> ans = prevSmallerElement(arr);

    for(int val : ans){
        cout<<val<<" ";
    }

    return 0;
}
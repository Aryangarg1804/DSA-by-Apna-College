#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> left(n, 0); // left smaller nearest
    vector<int> right(n, 0); // right smaller nearest
    stack<int> s;

    // Right smaller
    for(int i = n-1; i>=0; i--){ // O(n)
        while(s.size() > 0 && heights[s.top()] >= heights[i]){
            s.pop();
        }

        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    // Left smaller
    for(int i =0; i<n; i++){ // O(n)
        while(s.size() > 0 && heights[s.top()] >= heights[i]){
            s.pop();
        }

        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    int ans = 0;
    for(int i =0; i<n; i++){ // O(n)
        int width = right[i] - left[i] - 1;
        int currArea = heights[i] * width;
        ans = max(ans, currArea);
    }

    return ans;
}

int main(){

    // leetcode - 84
    vector<int> heights = {2,1,5,6,2,3};
    cout<<largestRectangleArea(heights)<<endl;

    return 0;
}
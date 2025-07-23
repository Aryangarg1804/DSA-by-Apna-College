#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int getCelebrity(vector<vector<int>> arr){
    int n = arr.size();
    stack<int> s;

    for(int i =0;i<n;i++){ // O(n)
        s.push(i);
    }

    while(s.size() > 1){ // O(n)
        int i = s.top();
        s.pop();

        int j = s.top();
        s.pop();

        if(arr[i][j] == 0){
            s.push(i);
        } else{
            s.push(j);
        }
    }

    int celeb = s.top();

    for(int i =0;i<n;i++){ // O(n)
        if((i != celeb) && (arr[i][celeb] == 0 || arr[celeb][i] == 1)){
            return -1;
        }
    }

    return celeb;
}

int main(){

    // Celebrity Problem
    // vector<vector<int>> arr = {
    //     {0,1,0},
    //     {0,0,0},
    //     {0,1,0}
    // };

     vector<vector<int>> arr = {
        {0,1,0},
        {1,0,0},
        {0,1,0}
    };
    
    // TC = O(n);
    // SC = O(n);

    int ans = getCelebrity(arr);

    cout<<"Celebrity is : "<<ans<<endl;




    return 0;
}
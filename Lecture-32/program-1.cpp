#include<iostream>
#include<vector>
#include<string>
using namespace std;

int compress(vector<char>& chars) { //O(n)
    int len = chars.size();
    int n = 0;
    for(int i=0;i<len;i++){
        char ch = chars[i];
        int count = 0;
        while(i<len && ch == chars[i]){
            count++;
            i++;
        }
        chars[n++] = ch;

        if(count>1){
            string s = to_string(count);
            for(char c : s){
                chars[n++] = c;
            }
        }
        i--;
    }
    chars.resize(n);
    return n;
}

int main(){
    // leetcode 443 
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int n = compress(chars);
    for(int i=0;i<n;i++){
        cout<<chars[i]<<" ";
    }


    return 0;
}
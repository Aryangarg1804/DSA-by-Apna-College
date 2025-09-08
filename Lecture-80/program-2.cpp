#include<iostream>
#include<string>
#include<queue>
#include<unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> m;
    queue<int> Q;

    for(int i =0; i<s.size(); i++){
        if(m.find(s[i]) == m.end()){
            Q.push(i);
        }

        m[s[i]]++; 

        while(Q.size() > 0 && m[s[Q.front()]] > 1){
            Q.pop();
        }

    }

    return Q.empty() ? -1 : Q.front();
}

int main(){

    // Find Unique Character in String
    // leetcode - 387
    // Done by Apna College

    string s = "leetcode";
    // string s = "loveleetcode";
    // string s = "aabb";
    // string s = "level";
    int result = firstUniqChar(s);  
    cout << "The first unique character is at index: " << result << endl;

    return 0;
}
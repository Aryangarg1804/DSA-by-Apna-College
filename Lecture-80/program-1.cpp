#include<iostream>
#include<vector>
#include<string>
using namespace std;

int firstUniqChar(string s) {
    vector<int> count(26, 0);
    for(int i = 0;i < s.length();i++){
        count[s[i] - 'a']++;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i] - 'a'] == 1){
            return i;
        }
    }

    return -1;
}

int main(){

    // Find Unique Character in String
    // leetcode - 387
    // Done by Aryan

    // string s = "leetcode";
    // string s = "loveleetcode";
    // string s = "aabb";
    string s = "level";
    int result = firstUniqChar(s);  
    cout << "The first unique character is at index: " << result << endl;

    return 0;
}
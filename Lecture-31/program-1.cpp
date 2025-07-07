#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseWord(string s){
    int n = s.length();
    string ans = "";
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        string word = "";
        while(i<n && s[i] != ' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()> 0){
            ans += " " + word;
        }
    }
    return ans.substr(1);
}

int main(){

    
    // leetcode 151 O(n).
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    cout<<reverseWord(s);


    return 0;
}
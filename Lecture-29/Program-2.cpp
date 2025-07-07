#include<iostream>
#include<string>
using namespace std;

bool isAlphaNum(char ch){
    if((ch >= '0' && ch <= '9') || tolower(ch) >= 'a' && tolower(ch)<='z'){
        return true;
    }
    return false;
}

bool ispalindrome(string s){
    int st = 0,end = s.length()-1;
    while(st<end){
        if(!isAlphaNum(s[st])){
            st++; continue;
        }
        if(!isAlphaNum(s[end])){
            end--; continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++,end--;

    }
    return true;
}

int main(){


    // this question is done by Shradha khapra (apna college).

    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    if(ispalindrome(s)){
        cout<<"Given string is Palindrome";
    } else{
        cout<<"Given string is not a palindrome";
    }

    return 0;
}
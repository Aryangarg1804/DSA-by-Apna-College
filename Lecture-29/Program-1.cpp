#include<iostream>
#include<string>
using namespace std;

bool ispalindrome(string s){
    int st = 0,end = s.length()-1;
    while(st<end){
        if(!((tolower(s[st]) >=97 && tolower(s[st]<=122)) || (s[st] >=48 && s[st] <=57))){
            st++;
        } else if(!((tolower(s[end]) >=97 && tolower(s[end]<=122)) || (s[end] >=48 && s[end] <=57))){
            end--;
        } else{
            if(tolower(s[st])==tolower(s[end])){
                st++;
                end--;
            } else{
                return false;
            }
        }  
    }
    return true;
}

int main(){


    // this question is done by me.
    // leetcode -125
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
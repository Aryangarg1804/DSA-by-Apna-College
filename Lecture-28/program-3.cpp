#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool ispalindrome(string str){
    string str1 = str;
    reverse(str1.begin(),str1.end());
    return (str1==str);
}

int main(){

    // question Find if a string is palindrome or not.
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    if(ispalindrome(str)){
        cout<<"String is a palindrome";
    } else{
        cout<<"String is not a palindrome";
    }


    return 0;
}
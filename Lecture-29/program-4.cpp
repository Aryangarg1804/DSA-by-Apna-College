#include<iostream>
#include<string>
using namespace std;

string removeOccurrences(string s, string part) {
    
    while(s.length() > 0 && s.find(part) < s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){

    // leetcode - 1910
    string s,part;
    cout<<"Enter the string : ";
    getline(cin,s);
    cout<<"Enter the sub string : ";
    getline(cin,part);
    cout<<removeOccurrences(s,part)<<endl;;



    
    return 0;
}
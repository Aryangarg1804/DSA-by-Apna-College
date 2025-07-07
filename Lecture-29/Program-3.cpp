#include<iostream>
#include<string>
using namespace std;

string removeOccurrences(string s, string part) {
    int n = s.length() , m = part.length();
    while(true){
        int idx = s.find(part);
        if(idx < s.length()){
            s.erase(idx,m);
        } else{
            break;
        }
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
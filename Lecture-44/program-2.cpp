#include<iostream>
#include<vector>
#include<string>
using namespace std;

void getPerms(string &str, int idx){
   if(idx == str.length()){
    cout<<str<<endl;
    return;
   }

   for(int i = idx; i < str.length(); i++){
    swap(str[idx],str[i]);
    getPerms(str, idx+1);

    swap(str[idx],str[i]); // backtrack
   }
}

void permute(string &nums){
    
    getPerms(nums, 0);
}

int main(){

    // permutation of string
    // Homework and print them not store.
    string str = "abc";
    
    permute(str);
    

    return 0;
}
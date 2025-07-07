#include<iostream>
#include<string>
using namespace std;


bool isFreqSame(int freq1[] , int freq2[]){ // O(1)
    for(int i=0;i<26;i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }

        int windSize = s1.length();

        for(int i=0;i<s2.length();i++){ 
            int windIdx = 0 , idx = i;
            int windowFreq[26] = {0};

            while(windIdx < windSize && idx < s2.length()){
                windowFreq[s2[idx]-'a']++;
                windIdx++; idx++;
            }

            if(isFreqSame(freq , windowFreq)){ // found
                return true;
            }
        }

        return false;
}

int main(){
    // leetcode 567

    string s1,s2;
    cout<<"Enter first string : ";
    getline(cin,s1);
    cout<<"Enter second String : ";
    getline(cin,s2);
    cout<<checkInclusion(s1,s2);






    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){

    // pair


    // pair<int , int> p = {1 , 5};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;



    // pair<string , int> p = {"Hello Aryan" , 5};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;



    // pair<int , pair<char , int>> p = {1 , {'a' , 3}};
    // cout<<p.first<<endl; //1
    // cout<<p.second.first<<endl; //a
    // cout<<p.second.second<<endl; //3


    // vector<pair<int,int>> vec = {{1,2},{3,4},{5,6},{7,8},{9,10}};

    // for(pair<int ,int> p: vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    // cout<<endl;



    // vector<pair<int,int>> vec = {{1,2},{3,4},{5,6},{7,8},{9,10}};

    // for(auto p: vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    // cout<<endl;




    vector<pair<int,int>> vec = {{1,2},{3,4},{5,6},{7,8},{9,10}};

    // this is real difference between push_back or emplace_back.
    vec.push_back({11,12}); // insert
    vec.emplace_back(13,14); // in-place object create

    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;




    return 0;
}
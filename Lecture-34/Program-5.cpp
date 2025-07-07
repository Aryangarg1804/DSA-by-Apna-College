#include<iostream>
#include<vector>
using namespace std;
int main(){

    // 2D Vector.


    // vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}}; // 3X3
    // // rows = mat.size();
    // // cols = 1 row kitna element ha.
    // // cols  = mat[i].size();

    // cout<<mat[0][0]<<endl;

    // for(int i=0;i<mat.size();i++){
    //     for(int j =0 ;j<mat[i].size();j++){
    //         cout<<mat[i][i]<<" ";
    //     }
    //     cout<<endl;
    // }




    vector<vector<int>> mat = {{1,2,3},{4,5,6,10,11},{7,8,9}}; // 3X3
    // rows = mat.size();
    // cols = 1 row kitna element ha.
    // cols  = mat[i].size();

    cout<<mat[0][0]<<endl;

    for(int i=0;i<mat.size();i++){
        for(int j =0 ;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
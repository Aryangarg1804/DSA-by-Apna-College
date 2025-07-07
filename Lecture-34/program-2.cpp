#include<iostream>
using namespace std;

// bool linearSearch(int matrix[][3],int row,int col,int key){
//     for(int i=0;i<row;i++){
//         for(int j =0 ;j<col;j++){
//             if(key == matrix[i][j]){
//                 cout<<"Element at index matrix["<<i<<"]"<<"["<<j<<"]"<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

pair<int,int> linearSearch(int matrix[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j =0 ;j<col;j++){
            if(key == matrix[i][j]){
                cout<<"Element at index matrix["<<i<<"]"<<"["<<j<<"]"<<endl;
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){

    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;
    int col = 3;
    int key = 7;
    pair<int,int> ans = linearSearch(matrix,row,col,key);
    if(ans.first != -1) {
        cout << "Element at index : " << ans.first << " and " << ans.second << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
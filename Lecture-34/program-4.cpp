#include<iostream>
using namespace std;
 
// int diagonalSum(int matrix[][4],int n){ // O(n * n);
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 sum += matrix[i][j];
//             } else if(j == n - i -1){
//                 sum+=matrix[i][j];
//             }
//         }
//      }
//      return sum;
// }


int diagonalSum(int matrix[][4],int n){ // O(n * n);
    int sum = 0;

    // pd : j = i;
    // sd : n - i -1;

    for(int i=0;i<n;i++){ // O(n);
        sum+=matrix[i][i];
        if(i!=n-i-1){
            sum+= matrix[i][n-i-1];
        }
     }
     return sum;
}


int main(){

    // Diagonal Sum.
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = 4;
    cout<<diagonalSum(matrix,n)<<endl;



    return 0;
}
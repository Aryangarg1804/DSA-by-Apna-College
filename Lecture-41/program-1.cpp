#include<iostream>
using namespace std;

void printNums(int n){ // recursive function

    if(n == 1){
        cout << 1 << endl;
        return;
    }

    cout << n << " "; // n , n-1,n-2.... to 1
    printNums(n-1);
    // last
}

int main(){

    int n = 4;
    printNums(n);



    return 0;
}
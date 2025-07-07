#include<iostream>
#include<cmath>
using namespace std;

bool IsArmstrong(int n){
    
    int copy = n;
    int sumOfCubes = 0;

    // Sum of each digit raised to the power of 'len'
    while(copy != 0){
        int rem = copy % 10;
        sumOfCubes += (rem * rem*rem);
        copy /= 10;
    }
    return sumOfCubes == n;
}

int main(){
    int n = 153;

    if(IsArmstrong(n)){
        cout << n << " is an Armstrong number.\n";
    } else{
        cout << n << " is not an Armstrong number.\n";
    }

    return 0;
}

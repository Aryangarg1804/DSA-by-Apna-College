#include<iostream>
using namespace std;

void changeA(int* ptr){ // pass by reference using pointers.
    *ptr = 20;
}

int main(){
    int a =10;
    changeA(&a);
    cout<<"Inside main function : "<<a<<endl; // 20
    return 0;
}

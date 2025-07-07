#include<iostream>
using namespace std;

int min(int a,int b){ // parameter.
    if(a>=b){
        return b;
    } else{
        return a;
    }
}

int main(){
    // minimum of two number.
    int a,b;
    cin>>a>>b;
    cout << min(a,b)  <<endl; //arguments
    
    return 0;
}
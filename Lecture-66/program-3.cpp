#include<iostream>
#include<stack>
using namespace std;
int main(){


    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}
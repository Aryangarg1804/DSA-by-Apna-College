#include<iostream>
#include<stack>
using namespace std;

class MinStack { // SC : O(2*N)
public:
    stack<pair<int,int>> s; // val, minVal
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val, val});
        } else{
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

int main(){


    // leetcode - 155
    MinStack* minStack = new MinStack();
    minStack->push(-2);
    minStack->push(0);
    minStack->push(-3);
    cout<<minStack->getMin()<<" "; // return -3
    minStack->pop();
    cout<<minStack->top()<< " ";    // return 0
    cout<<minStack->getMin()<<" "; // return -2

    
    return 0;
}
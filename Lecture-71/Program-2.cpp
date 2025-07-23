#include<iostream>
#include<stack>
using namespace std;

class MinStack { // SC : O(N)
public:
    stack<long long int> s; 
    long long int minVal;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            minVal = val;
        } else{
            if(val < minVal){
                s.push((long long)2*val - minVal);
                minVal = val;
            } else{
                s.push(val);
            }
        }
    }
    
    void pop() {
       if(s.top() < minVal){
        minVal = 2*minVal - s.top();
       }

       s.pop();
    }
    
    int top() {
       if(s.top() < minVal){
            return minVal;
       }
       return s.top();
    }
    
    int getMin() {
       return minVal;
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
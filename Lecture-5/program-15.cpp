#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) return -1; // Invalid input
    if (n == 1) return 0;
    if (n == 2) return 1;

    int prev = 0, curr = 1, next;
    
    for (int i = 3; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    return curr;
}

int main(){
    // write a function to print the fibonacci series.
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    cout << "Fibonacci term " << n << " is: " << fibonacci(n) << endl;
    return 0;
}

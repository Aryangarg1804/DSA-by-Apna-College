#include<iostream>
#include<vector>
using namespace std;

int isPrime(int n){
    int count = 0;
    vector<bool> isPrime(n+1,true);
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            count++;
            for(int j = i*i;j<n;j+=i){
                isPrime[j] = false;
            }
        }
    }
    return count;
}

int main(){
    // math for DSA.


    // sieve of Eratosthenes.
    // best optimal solution to find the count of prime number between 1 to N.
    // leetcode 204 - count Primes.
    int n = 50;
    cout<<isPrime(n);




    return 0;
}
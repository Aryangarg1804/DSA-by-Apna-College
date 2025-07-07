#include<iostream>
using namespace std;
int main(){

    // maximum subarray sum.
    // Brute force approach.


    int n=5;
    int arr[n] = {1,2,3,4,5};
    int maxsum = INT32_MIN;
    for(int st = 0;st<n;st++){
        int currSum = 0;
        for(int end = st;end<n;end++){
            currSum+=arr[end];
            maxsum = max(currSum,maxsum);
        }
    }
    cout<<"Maximum subarray Sum = "<<maxsum<<endl;




    return 0;
}
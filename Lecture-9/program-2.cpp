#include<iostream>
#include<vector>
using namespace std;
int main(){

    // Static and Dynamic allocation.
    // Static is run on compile time and dynamic allocation of a memory run on run time.
    // vector run on runtime.
    // array run on compile time.
    // static is fixed and dynamic is resize.
    // static is stored in stack and dynamic is done in a heap.


    
    // vector<int> vec;
    // vec.push_back(0);
    // vec.push_back(1);
    // vec.push_back(2);
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;


    vector<int> vec1;
    vec1.push_back(0);
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    cout<<vec1.size()<<endl;
    cout<<vec1.capacity()<<endl;


    return 0;
}
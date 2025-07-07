#include<iostream>
using namespace std;
int main() {

    // Data type modifiers.
    // long,short, long long, signed,unsigned.
    cout<< sizeof(int)<<endl;
    cout<< sizeof(long int)<<endl; // my version of ming32 so it show 4 byte.
    cout<< sizeof(short int)<<endl;
    cout<< sizeof(long long int)<<endl;
    // byDefault our variable is signed
    // in unsigned they canot store negative value.
    unsigned int x = -10;
    cout<<x<<endl;
    return 0;
}


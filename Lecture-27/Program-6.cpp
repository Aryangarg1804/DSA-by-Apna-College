#include<iostream>
#include<queue>
using namespace std;
int main(){


    // queue

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<q.front() << " ";
        q.pop();
    }
    cout<<endl;



//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

//     queue<int> q2;
//     q2.swap(q);

//    cout<<"q size = "<<q.size()<<endl; // 0
//    cout<<"q2 size = "<<q2.size()<<endl; // 3



    return 0;
}
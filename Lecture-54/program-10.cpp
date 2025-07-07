// #include<iostream>
// #include<string>
// using namespace std;

// class Shape{ // abstract class
//     virtual void draw() = 0; // pure virtual function
// };

// class Circle : public Shape{
//     public:
//         void draw() {
//             cout<<"Drawing a circle\n";
//         }
// };

// // we can also create rectangle , square etc.

// int main(){

//     // Abstraction
//     Circle c1;
//     c1.draw();

//     return 0;
// }
































// Static Keyword

// #include<iostream>
// #include<string>
// using namespace std;

// void fun(){
//     static int x = 0; // initialization statement - 1 run
//     cout<<" x : "<< x << endl;
//     x++;
// }

// int main(){
//     fun();
//     fun();
//     fun();

//     return 0;
// }










// #include<iostream>
// #include<string>
// using namespace std;

// class A{
//     public:
//         int x;

//         void incX() {
//             x = x + 1;
//         }

// };

// int main(){
//     // A obj;
//     // obj.x = 0;
//     // cout<<obj.x<<endl;
//     // obj.incX();
//     // cout<<obj.x<<endl;




//     A obj1;
//     A obj2;

//     obj1.x = 100;
//     obj2.x = 200;

//     cout<<obj2.x<<endl;
//     cout<<obj1.x<<endl;



//     return 0;
// }





























// #include<iostream>
// #include<string>
// using namespace std;

// class ABC{
// public:
//     ABC(){
//         cout<< "Constructor\n";
//     }
//     ~ABC(){
//         cout<< "destructor\n";
//     }
// };

// int main(){
//     if(true){
//         ABC obj;
//     }
//     cout<<"End of main function\n";
//     return 0;
// }


























#include<iostream>
#include<string>
using namespace std;

class ABC{
public:
    ABC(){
        cout<< "Constructor\n";
    }
    ~ABC(){
        cout<< "destructor\n";
    }
};

int main(){
    if(true){
        static ABC obj;
    }
    cout<<"End of main function\n";
    return 0;
}

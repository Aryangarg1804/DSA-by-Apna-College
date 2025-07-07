// #include<iostream>
// #include<string>
// using namespace std;

// class Student{
// public:
//     string name;

//     Student(){
//         cout<<"non-parameterized constructor\n";
//     }

//     Student(string name){
//         this->name = name;
//         cout<<"parameterized constructor\n";
//     }
// };

// int main(){

//     // POlymorphism

//     // Compile time Polymorphism

//     // 1) Constructor overloading.

//     // Student s1;

//     Student s1("tony stark");



//     return 0;
// }




















// #include<iostream>
// #include<string>
// using namespace std;

// class Print{
// public:
//     void show(int x){
//         cout<<"INT : "<< x <<endl;
//     }
//     void show(char ch){
//         cout<<"CHAR : "<< ch <<endl;
//     }
// };

// int main(){

//     // POlymorphism

//     // Compile time Polymorphism

//     // 2) function overloading.

//     Print p1;
//     p1.show(101);
//     p1.show('&');


//     return 0;
// }


























// #include<iostream>
// #include<string>
// using namespace std;

// class Parent{
// public:
//     void getInfo(){
//         cout<<"parent class\n";
//     }
// };

// class Child : public Parent{
// public:
//     void getInfo(){
//         cout<<"Child class\n";
//     }
// };

// int main(){

//     // POlymorphism

//     // run time Polymorphism

//     // 1) function overriding.

//     Child c1;
//     c1.getInfo();

//     Parent p1;
//     p1.getInfo();

//     return 0;
// }


























// #include<iostream>
// #include<string>
// using namespace std;

// class Parent{
// public:
//     void getInfo(){
//         cout<<"parent class\n";
//     }

//     virtual void hello(){
//         cout<< "Hello from parent\n";
//     }
// };

// class Child : public Parent{
// public:
//     void getInfo(){
//         cout<<"Child class\n";
//     }

//     void hello(){
//         cout<< "Hello from child\n";
//     }
// };

// int main(){

//     // POlymorphism

//     // run time Polymorphism

//     // 2) virtual FUnction.

//     Child c1;
//     c1.hello();

//     Parent p1;
//     p1.hello();

//     return 0;
// }
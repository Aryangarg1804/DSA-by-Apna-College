#include<iostream>
#include<string>
using namespace std;

class Teacher {
// private:
public :
    // properties/attributes
    string name;
    string dept;
    string subject;
    double salery;

    // methods / member function
    void changeDept(string newDept) {
        dept = newDept;
    }
};



int main(){

    Teacher T1;
    // Teacher T2;
    // Teacher T3;
    // Teacher T4;
    T1.name = "Shradha";
    T1.subject = "C++";
    T1.dept = "Computer Science";
    T1.salery = 25000;

    cout<<T1.name<<endl;


    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Teacher {
private :
    double salery;
public :
    // properties/attributes
    string name;
    string dept;
    string subject;
    
    // methods / member function
    void changeDept(string newDept){
        dept = newDept;
    }

    // setter : setter ka kam hota ha private value ko set karna
    void setSalery(double a){
        salery = a;
    }

    // getter : getter ka kam private value ko get karna ka lia.
    double getSalery(){
        return salery;
    }
};



int main(){

    Teacher T1;
 
    T1.name = "Shradha";
    T1.subject = "C++";
    T1.dept = "Computer Science";
    T1.setSalery(25000);

    cout<<T1.name<<endl;
    cout<<T1.getSalery();

    return 0;
}
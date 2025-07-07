// #include<iostream>
// #include<string>
// using namespace std;


// class Student{
// public:
//     string name;
//     double* cgpaPtr;

//     Student(string name, double cgpa){
//         this->name = name;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }


//     // normal destructor
//     ~Student(){
//         cout<<"Hi, I delete everything\n";
//     }

//     void getInfo(){
//         cout<<"name : " << name << endl;
//         cout<<"CGPA : " << *cgpaPtr << endl;
//     }
// };

// int main(){
    
//     Student s1("rahul kumar", 8.9);
//     s1.getInfo();

//     return 0;
// }


















#include<iostream>
#include<string>
using namespace std;


class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // to delete dynamically allocated memory destructor
    ~Student(){
        cout<<"Hi, I delete everything\n";
        delete cgpaPtr; // 
    }

    void getInfo(){
        cout<<"name : " << name << endl;
        cout<<"CGPA : " << *cgpaPtr << endl;
    }
};

int main(){
    
    Student s1("rahul kumar", 8.9);
    s1.getInfo();

    return 0;
}

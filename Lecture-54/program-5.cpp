// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher {
// private :
//     double salery;

// public :
//     Teacher(){
//         cout<<"Hi i am constructor\n";
//     }

//     string name;
//     string dept;
//     string subject;
    
//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     // setter
//     void setSalery(double a){
//         salery = a;
//     }

//     // getter 
//     double getSalery(){
//         return salery;
//     }
// };



// int main(){

//     Teacher T1; // constructor call
//     // Teacher T2; // constructor call
 
//     T1.name = "Shradha";
//     T1.subject = "C++";
//     T1.dept = "Computer Science";
//     T1.setSalery(25000);

//     cout<<T1.name<<endl;
//     cout<<T1.getSalery();

//     return 0;
// }





















// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher {
// private :
//     double salery;

// public :
//     Teacher(){  // always public declare karta ha
//         dept = "Computer Science";
//     }

//     string name;
//     string dept;
//     string subject;
    
//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     // setter
//     void setSalery(double a){
//         salery = a;
//     }

//     // getter 
//     double getSalery(){
//         return salery;
//     }
// };



// int main(){

//     Teacher T1; // constructor call
//     // Teacher T2; // constructor call
 
//     T1.name = "Shradha";
//     T1.subject = "C++";
//     T1.setSalery(25000);

//     cout<<T1.dept<<endl;

//     return 0;
// }
































// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher {
// private :
//     double salary;

// public :
//     // non-parameterized constructor
//     // Teacher(){  // always public declare karta ha
//     //     dept = "Computer Science";
//     // }

//     // parameterized
//     Teacher(string n, string d, string s,double sal){
//         name = n;
//         dept = d;
//         subject = s;
//         salary = sal;
//     }

//     string name;
//     string dept;
//     string subject;
    
//     void changeDept(string newDept){
//         dept = newDept;
//     }


   
//     void getInfo(){
//         cout<<" name : "<< name<<endl;
//         cout<< " Subject : "<< subject << endl;
//     }
// };



// int main(){

//     Teacher T1("Aryan" , "Computer Science", "C++", 25000);
//      // constructor call
//     T1.getInfo();

//     return 0;
// }




























// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher {
// private :
//     double salary;

// public :
//     string name;
//     string dept;
//     string subject;

//     // non-parameterized constructor
//     Teacher(){  // always public declare karta ha
//         dept = "Computer Science";
//     }

//     // parameterized
//     Teacher(string name, string dept, string subject,double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }

  
    
//     void changeDept(string newDept){
//         dept = newDept;
//     }


   
//     void getInfo(){
//         cout<<" name : "<< name<<endl;
//         cout<< " Subject : "<< subject << endl;
//     }
// };



// int main(){

//     Teacher T1("Aryan" , "Computer Science", "C++", 25000);
//      // constructor call
//     T1.getInfo();

//     return 0;
// }

























// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher {
// private :
//     double salary;

// public :
//     string name;
//     string dept;
//     string subject;

//     // non-parameterized constructor
//     Teacher(){  
//         dept = "Computer Science";
//     }

//     // parameterized
//     Teacher(string name, string dept, string subject,double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }

  
    
//     void changeDept(string newDept){
//         dept = newDept;
//     }


   
//     void getInfo(){
//         cout<<" name : "<< name<<endl;
//         cout<< " Subject : "<< subject << endl;
//     }
// };



// int main(){

//     Teacher T1("Aryan" , "Computer Science", "C++", 25000);
//     // T1.getInfo();

//     Teacher t2(T1); // default copy constructor -invoke
//     t2.getInfo();
//     return 0;
// }
























// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher {
// private :
//     double salary;

// public :
//     string name;
//     string dept;
//     string subject;

//     // parameterized
//     Teacher(string name, string dept, string subject,double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }

//     // copy constructor
//     Teacher(Teacher &orgObj){ // pass by reference
//         cout<<"I am Custom Copy Constructor...\n";
//         this->name = orgObj.name;
//         this->dept = orgObj.dept;
//         this->subject = orgObj.subject;
//         this->salary = orgObj.salary;
//     }
    
//     void changeDept(string newDept){
//         dept = newDept;
//     }


   
//     void getInfo(){
//         cout<<" name : "<< name<<endl;
//         cout<< " Subject : "<< subject << endl;
//     }
// };



// int main(){

//     Teacher T1("Aryan" , "Computer Science", "C++", 25000);
//     // T1.getInfo();

//     Teacher t2(T1); // custom copy constructor -invoke
//     t2.getInfo();
//     return 0;
// }































// #include<iostream>
// #include<string>
// using namespace std;


// class Student{
// public:
//     string name;
//     double cgpa;

//     Student(string name, double cgpa){
//         this->name = name;
//         this->cgpa = cgpa;
//     }

//     Student(Student &obj){
//         this->name = obj.name;
//         this->cgpa = obj.cgpa;
//     }

//     void getInfo(){
//         cout<<"name : " << name << endl;
//         cout<<"CGPA : " << cgpa << endl;
//     }
// };

// int main(){
//     // shalllow copy
//     Student s1("rahul kumar", 8.9);
//     s1.getInfo();

//     Student s2(s1);
//     s2.getInfo();
//     return 0;
// }




















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

//     // default and custom copy constructor both give same problem.
//     Student(Student &obj){ 
//         this->name = obj.name;
//         this->cgpaPtr = obj.cgpaPtr;
//     }

//     void getInfo(){
//         cout<<"name : " << name << endl;
//         cout<<"CGPA : " << *cgpaPtr << endl;
//     }
// };

// int main(){

//     // because of dynamic memory allocation (shallow copy) this problem will come.
//     Student s1("rahul kumar", 8.9);
//     Student s2(s1); // "neha kumar"

//     s1.getInfo();
//     *(s2.cgpaPtr) = 9.2;
//     s1.getInfo();

//     return 0;
// }



































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

//     Student(Student &obj){ 
//         this->name = obj.name;
//         cgpaPtr = new double;
//         *cgpaPtr = *(obj.cgpaPtr);
//     }

//     void getInfo(){
//         cout<<"name : " << name << endl;
//         cout<<"CGPA : " << *cgpaPtr << endl;
//     }
// };

// int main(){
    
//     // deep copy
//     Student s1("rahul kumar", 8.9);
//     Student s2(s1); // "neha kumar"

//     s1.getInfo();
//     *(s2.cgpaPtr) = 9.2;
//     s1.getInfo();

//     s2.name = "neha kumar";
//     s2.getInfo();

//     return 0;
// }

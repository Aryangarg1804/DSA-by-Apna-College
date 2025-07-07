// #include<iostream>
// #include<string>
// using namespace std;

// class Person{
// public:
//     string name;
//     int age;

//     // Person(string name, int age){
//     //     this->name = name;
//     //     this->age = age;
//     // }

//     Person() {

//     }
// };

// class Student : public Person {
// public:
//     // name, age, rollnumber
//     int rollno;

//     void getInfo(){
//         cout<< "name : " << name << endl;
//         cout<<"age : "<< age << endl;
//         cout<<"rollno : " << rollno << endl;
//     }
// };

// int main(){

//     Student s1;
//     s1.name = "rahul kumar";
//     s1.age = 21;
//     s1.rollno = 1234;
//     s1.getInfo();

//     return 0;
// }

































// #include<iostream>
// #include<string>
// using namespace std;

// class Person{
// public:
//     string name;
//     int age;

//     // Person(string name, int age){
//     //     this->name = name;
//     //     this->age = age;
//     // }

//     Person() {
//         cout<<"Parent constructor..."<<endl;
//     }
// };

// class Student : public Person {
// public:
//     // name, age, rollnumber
//     int rollno;

//     Student(){
//         cout<<"Child constructor...\n";
//     }

//     void getInfo(){
//         cout<< "name : " << name << endl;
//         cout<<"age : "<< age << endl;
//         cout<<"rollno : " << rollno << endl;
//     }
// };

// int main(){

//     Student s1;
//     s1.name = "rahul kumar";
//     s1.age = 21;
//     s1.rollno = 1234;
//     s1.getInfo();

//     return 0;
// }





















// #include<iostream>
// #include<string>
// using namespace std;

// class Person{
// public:
//     string name;
//     int age;

//     // Person(string name, int age){
//     //     this->name = name;
//     //     this->age = age;
//     // }

//     Person() {
//         cout<<"Parent constructor..."<<endl;
//     }

//     ~Person(){
//         cout<<"base destructor...\n";
//     }
// };

// class Student : public Person {
// public:
//     // name, age, rollnumber
//     int rollno;

//     // constructor
//     Student(){
//         cout<<"Child constructor...\n";
//     }

//     // Destructor
//     ~Student(){
//         cout<<"Derived destructor...\n";
//     }

//     void getInfo(){
//         cout<< "name : " << name << endl;
//         cout<<"age : "<< age << endl;
//         cout<<"rollno : " << rollno << endl;
//     }
// };

// int main(){

//     Student s1;
//     s1.name = "rahul kumar";
//     s1.age = 21;
//     s1.rollno = 1234;
//     s1.getInfo();

//     return 0;
// }

























// #include<iostream>
// #include<string>
// using namespace std;

// class Person{
// public:
//     string name;
//     int age;

//     Person(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

// };

// class Student : public Person {
// public:
//     // name, age, rollnumber
//     int rollno;

//     // constructor
//     Student(string name, int age, int rollno) : Person(name, age){
//         this->rollno = rollno;
//     }


//     void getInfo(){
//         cout<< "name : " << name << endl;
//         cout<<"age : "<< age << endl;
//         cout<<"rollno : " << rollno << endl;
//     }
// };

// int main(){

//     Student s1("rahul kumar", 21, 1234);
//     s1.getInfo();

//     return 0;
// }































// #include<iostream>
// #include<string>
// using namespace std;

// class Person{
// public:
//     string name;
//     int age;

//     Person(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

// };

// class Student : private Person {
// public:
//     // name, age, rollnumber
//     int rollno;

//     // constructor
//     Student(string name, int age, int rollno) : Person(name, age){
//         this->rollno = rollno;
//     }


//     void getInfo(){
//         cout<< "name : " << name << endl;
//         cout<<"age : "<< age << endl;
//         cout<<"rollno : " << rollno << endl;
//     }
// };

// int main(){

//     Student s1("rahul kumar", 21, 1234);
//     s1.getInfo();

//     // cout<<s1.name<<endl; this give error because mode is private

//     return 0;
// }
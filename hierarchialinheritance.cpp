#include<iostream>
#include<string>
using namespace std;


// BASE CLASS
class Person {
    public:
        string name;
        int age;
};


// CHILD-1
class Student : public Person{
    public:
        int rollno;
};


// CHILD-2
class Teacher : public Person {
    public:
        string subject;
        double salary;
};


int main(){
    Student s;
    s.name = "Student\n";
    cout<<s.name;

    Teacher t;
    t.subject = "OOPS\n";
    cout<<t.subject;

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;
        int rollno;
};

class Teacher {
    public:
        string subject;
        double salary;
};

class TA : public Student , public Teacher {
    public:
        void getInfo(){
            cout<<"Name : "<<name<<endl;
            cout<<"Subject : "<<subject<<endl;
            cout<<"Roll No : "<<rollno<<endl;
            cout<<"Salary : "<<salary<<endl;
        }
};


int main(){
    TA t1;
    t1.name = "Sameer";
    t1.rollno = 49;
    t1.salary = 25000.00;
    t1.subject = "Analysis And Design Of Algorithm";

    t1.getInfo();
    return 0;
}
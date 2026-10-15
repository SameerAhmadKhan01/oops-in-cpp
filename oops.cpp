#include<iostream>
#include<string>
using namespace std;


class Teacher {
public:
    // properties
    string name;
    string dept;
    string subjects;
    double salary;

    // methods / member functions
    void changeDept(string newDept){
        dept = newDept;
    }
};


int main() {
    //creating an object
    Teacher t1;
    Teacher t2;
    Teacher t3;
    t1.name = "Sameer";
    t1.dept = "CSE";
    t1.subjects = "C++";
    t1.salary = 25000;
    cout<<t1.name;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
        string name;
        int age;
};

class Student : public Person{
    public:
        int roll;
        string dept;
};


class gradStudent : public Student {
    public:
        string researchField;
};


/*
*    inheritance between Person and Student is  __SINGLE INHERITANCE__
*/


/*
* Inheritance between Person , Student , gradStudent is __MULTILEVEL INHERITANCE__
* gradStudent will have property of Student as well as person class!
*/


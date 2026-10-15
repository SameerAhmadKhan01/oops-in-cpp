#include<iostream>
#include<string>
using namespace std;


// 4 Pillar of OOPS
/*
    1) Encapsulation
    2) Abstraction
    3) Inheritance
    4) Polymorphism
*/


// wrapping up of data members and functions into a single unit(class) is called encapsulation

class Student {
    private:
        string name;
        string dept;
        string sec;
        int rollNumber;
        long enrNumber;
    public:
        void setName(string n ){}
        string getName(){}
        void setDept(string d){}
}; //end of class

// in the above example we can see we succesfully wrapped up properties (name , sec , dept , roll , enrNumber) and functions ( getters and setters) into a single unit / class named Student 
// Hence ENCAPSULATION IMPLEMENTED
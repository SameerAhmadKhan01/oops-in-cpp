#include<iostream>
#include<string>
using namespace std;

// BASE CLASS
class Person {
    public:
        string name;
        int age;
    
        // PARAMETARISED CONSTRUCTOR
        Person(string name , int age){
            this->name = name;
            this->age = age;
        } 
        
        Person(){
            cout<<"Base Constructor Called"<<endl;
        }
        
        ~Person(){
            cout<<"Base Destructor Called\n";
        }
};

/*
* Constructor of Base Class is ALWAYS called First then child class' is called
* Destructor of Child CLass is ALWAYS called FIRST then base class' is called 
*/


// derived class inhereting a Person class
class Student : public Person {
    // name , age , rollNo
    public:
        int rollno;

        //PARAMETARISED CONSTRUCTOR AND CALLING SUPER CLASS CONSTRUCTOR
        Student(string name , int age , int rollNo) : Person(name , age){
            this->rollno = rollNo;
        }

        // NON PARAMETARISED CONSTRUCTOR
        Student(){
            cout<<"Students Constructor Called\n";
        }

        ~Student(){
            cout<<"Child Destructor Called\n";
        }


        void getInfo(){
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
            cout<<"rollno : "<<rollno<<endl;
        }
};


int main(){
    Student s1("Sameer",19,49); // Base and Child Params contructor called
    s1.getInfo();
    return 0;
}

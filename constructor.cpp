/*
CONSTRUCTOR are special methods which are called automatically when an object is created , it helps us to initialise member variables

> it has same name as className
> it has no return type
> it can either parametarised or non-parametarised!
> Multiple constructor can be there but there should be difference in parameter as it should have different number of params
> Constructor Can be Overloaded too

# Different Types of constructor are as follows :
 - parametarised constructor 
 - non parametarised constructor
 - copy constructor
*/

/*
'this' pointer is a special pointer in C++ which points to the instance of the current object!
SYNTAX to use it 
(*this).prop
this->prop
*/


/*
COPY CONSTRUCTORS are used in C++ to copy the properties of one object to other if not defined explicitly C++ does it for us 'default copy constructor'
-> Teacher t2("TEACHER2", "CSE", "ANALYSIS OF ALGORITHM", 50000);

-> if we want to make a object t3 with all properties of t2 so we can take help of copy constructor

> Teacher t3(t2);

*/

#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // PROPERTIES
    string name;
    string dept;
    string subjects;

    // CONSTRUCTOR
    // NON-PARAMETARISED CONSTRUCTOR
    Teacher()
    {
        cout << "Non-Parametarised Constructor Called\n";
        salary = 26000;
        name = "Sameer";
        dept = "CSE";
        subjects = "DSA";
    }

    // PARAMETARISED CONSTRUCTOR
    Teacher(string n, string d, string sb, double sal)
    {
        cout << "Parametarised Constructor" << endl;
        this->name = n;
        this->dept = d;
        this->subjects = sb;
        this->salary = sal;
    }


    //COPY CONSTRUCTOR
    Teacher(Teacher& obj){
        cout<<"COPY CONSTRUCTOR CALLED"<<endl;
        this->name = obj.name;
        this->dept = obj.dept;
        this->subjects = obj.subjects;
        this->salary = obj.salary;
    }

    //Destructor
    // it is also called automatically just like a constructror
    ~Teacher(){
        cout<<"Destructor is Called !\n";
    }

    // METHODS

    void getInfo()
    {
        printf("%-12s %-6s %-20s %s\n", "NAME", "DEPT", "SUBS", "SALARY");
        printf("%-12s %-6s %-20s %.0f\n", name.c_str(), dept.c_str(), subjects.c_str(), salary);
    }

    void changeDept(string d)
    {
        dept = d;
    }

    // setter method
    void setSalary(double s)
    {
        salary = s;
    }

    // getter method
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    // OBJECT 1
    Teacher t1;
    t1.setSalary(20000);
    t1.name = "TEACHER-1";
    t1.dept = "ECE";
    t1.subjects = "ANALOG ELECTRONICS";
    t1.getInfo();

    // OBJECT 2
    Teacher t2("TEACHER2", "CSE", "ANALYSIS OF ALGORITHM", 50000);
    t2.getInfo();
}
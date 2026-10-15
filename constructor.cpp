/*
CONSTRUCTOR are special methods which are called automatically when an object is created , it helps us to initialise member variables

> it has same name as className
> it has no return type
> it can either parametarised or non-parametarised!
> Multiple constructor can be there but there should be difference in parameter as it should have different number of params
> Constructor Can be Overloaded too
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
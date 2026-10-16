#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "Fun in BASE" << endl;
    }
};

class Child : public Base
{
public:
    void fun()
    {
        cout << "Fun in CHILD" << endl;
    }
};

int main()
{
    Base *b = new Child();
    b->fun(); // if fun in BASE is virtual then Child's Fun is called else base class' Fun is called
}
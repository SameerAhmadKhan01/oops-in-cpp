#include <iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout << "Display From Parents\n";
    }
};

class Child : public Parent
{
public:
    void display()
    {
        cout << "Display from Child\n";
    }
};

int main()
{
    Parent p;
    Child c;

    p.display();
    c.display(); // BASE CLASS display gets overridden by Child class
}
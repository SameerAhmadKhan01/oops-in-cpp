#include<iostream>

class Base {
    public:
        void greet1(){
            std::cout<<"Hello from Base"<<std::endl;
        }
};


class Child : public Base{
    public:
        void greet1(){
            std::cout<<"Hello From Child"<<std::endl;
        }
};


int main(){
    Base *b = new Child();  
    b->greet1();
    //b->greet2(); //* INVALID
    // the only functions will be accessible whose object type is there not the reference!
}
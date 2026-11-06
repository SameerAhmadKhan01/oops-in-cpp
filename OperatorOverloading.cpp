#include<iostream>
#include<string>
using namespace std;


class COMPLEX {
    public:
        int real;
        int imaginary;
    public:
        // OVERLOADING A '+' OPERATOR , returns an object which has the sum of 2 complex numbers
        COMPLEX operator+(COMPLEX& c)
        {
            COMPLEX temp;
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;
            return temp;
        }
        //OVERLOADING A << OPERATION
        //OVERLOADING INSERTION OPERATION << IT TAKES 2 PARAMS OBJECT OF CLASS AND OBJECT OF OSTREAM
        friend ostream& operator<<(ostream& o , COMPLEX& c);
};


ostream& operator<<(ostream& o , COMPLEX& c){
    o<<c.real<<"+i"<<c.imaginary<<"\n";
    return o;
}



int main(){
    COMPLEX c1;
    c1.real = 10;
    c1.imaginary = 15;
    cout<<"Complex Number 1 : "<<endl<<c1<<endl;
    
    COMPLEX c2;
    c2.real = 20;
    c2.imaginary = 25;
    cout<<"Complex Number 2 : "<<endl<<c2<<endl;


    COMPLEX sum = c1 + c2;
    cout<<"SUM : ";
    cout<< sum;


}


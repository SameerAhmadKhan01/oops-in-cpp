#include<iostream>
#include<exception>
#include<string>
using namespace std;

// TRY AND CATCH
// int main()
// {
//     int x = 10 , y = 0 , z;
//     try {
//         if(y == 0) throw 1;
//         z = x / y;
//         std::cout<<z<<std::endl;
//     }
//     catch(int e){
//         std::cout<<"Division by Zero\n";
//     }
//     std::cout<<"END"<<std::endl;
// }


// user defined exception



class MyException : public exception {};

// Division function throwing MyException (no throw(string) specifier)
int division(int a, int b) {
    if (b == 0) {
        throw MyException();
    }
    return a / b;
}

int main() {
    int x = 10, y = 0, z;
    try {
        z = division(x, y);
        cout << z << endl;
    }
    catch (MyException e) {
        cout << "DIVISION BY 0" << endl;
    }

    return 0;
}





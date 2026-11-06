#include<iostream>
using namespace std;

// A Template class for stack

template <class T>
class Stack {
    private :
     T *stack;
     int size;
     int top;
    public:
     Stack(int size) : top(-1) , stack(new T[size]) , size(size) {}
     void push(T val);
     T pop();
};

template<class T>
void Stack<T>::push(T val){
    if(top == size-1) {
        cout<<"STACK OVERFLOW";
        return;
    }
    stack[++top] = val;
}

template<class T>
T Stack<T>::pop(){
    int x;
    if(top == -1){
        cout<<"STACK UNDERFLOW";
        return -1;
    }
    x = stack[top--];
    return x;
}


int main(){
    Stack<char> st(6);
    string s = "SAMEER";
    for(auto& ch : s) st.push(ch);
    cout<<st.pop()<<endl;

}
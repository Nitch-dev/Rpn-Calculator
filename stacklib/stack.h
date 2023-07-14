#include <iostream>
using namespace std;
#define STACKSIEZE 10
template <typename T>
class stack
{
private:
    int size;
    T stck[STACKSIEZE] = {0};
    int stackPointer = 0;

public:
    stack();
    void push(T);
    T pop();
    void show();
};

template <typename T> void stack<T>::show() {
    for(int i=0; i < STACKSIEZE; i++){
        cout << "Address: "<< i << " Value: " << stck[i] << "\n";
    };
}
template <typename T> stack<T>::stack(){
    cout << "Stack Called";
}


template <typename T> void stack<T>::push(T i){
    stackPointer++;
    stck[stackPointer] = i;
}

template <typename T> T stack<T>::pop(){

    int temp;
    temp = stck[stackPointer];
    stck[stackPointer] = 0;
    stackPointer--;
    return temp;
}
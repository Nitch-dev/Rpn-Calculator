#include <iostream>
#include <stack>
#include "main.h"
using namespace std;
stack <int>s;
void add() {
    int num1 = s.top();
    s.pop();
    int num2 = s.top();
    int res = num1 + num2;
    s.push(res);
}

void sub() {
    int num1 = s.top();
    s.pop();
    int num2 = s.top();
    int res = num1 - num2;
    s.push(res);
}


void setup(){
    char choice;
    cin >> choice;
    switch (choice)
    {
    case 'p':
        if(s.size() != 0){cout << s.top(); break;}
        else {cout << "Stack Empty\n";}
        break;
    case 'h':
        calculate();
    case '+':
        add();
        setup();
    case '-':
        sub();
        setup();

    default:
        if(choice != 'p' || 'n' || 'h') {
            invalid();
        }
        
    }
    setup();
}

void pushOnStack(int num1,int num2){
    s.push(num1);
    s.push(num2);
    setup();
}

void calculate(){
    int num1;
    int num2;
    cin >> num1;
    cin >> num2;
    pushOnStack(num1,num2);
    setup();
}

void invalid() {
    cout << "?\n";
    setup();
}
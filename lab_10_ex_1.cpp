//Example 1: Write a C++ program to demonstrate the working of pointers.
#include<iostream>
using namespace std;
int main()
{
    int* pc, c;
    c = 22;
    cout<<"Address of 5c: "<<&c<<endl;
    cout<<"Value of c: "<< c<<endl;
    pc = &c;
    cout<<"Address of pointer: "<<pc<<endl;
    cout<<"Content of pointer pc: "<< *pc<<endl;
    c = 11;
    cout<<"Address of pointer: "<<pc<<endl;
    cout<<"Content of pointer pc: "<< *pc<<endl;
    *pc = 2;
    cout<<"Address of c: "<<&c<<endl;
    cout<<"Value of c: "<< c<<endl;
    return 0;
}

//Example : Write a C++ Program to get a calculator using the function.
#include<iostream>
using namespace std;

int addition(int num1, int num2)
{
    return num1 + num2;
}
int substraction(int num1, int num2)
{
    return num1 - num2;
}
int multiplication(int num1, int num2)
{
    return num1 * num2;
}
int division(int num1, int num2)
{
    return num1 / num2;
}
int main()
{
    int var1, var2;
    double result;
    char type;
    cout<<"Enter number 1: "<<endl;
    cin>> var1;
    cout<<"Enter number 2: "<<endl;
    cin>> var2;
    cout<<"Type(+, -, *, /)"<<endl;
    cin>> type;
    if(type == '+')
    {
        result = addition(var1,var2);
        cout<<"Output: "<< result;
    }
    else if(type == '-')
    {
        result = substraction(var1,var2);
        cout<<"Output: "<< result;
    }
    else if(type == '*')
    {
        result = multiplication(var1,var2);
        cout<<"Output: "<< result;
    }
    else if(type == '/')
    {
        result = division(var1,var2);
        cout<<"Output: "<< result;
    }
    return 0;
}

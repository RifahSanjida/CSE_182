//Example 2: Write a C++ program to print the Fibonacci series using recursion.
#include<iostream>
using namespace std;
int fib(int x)
{
    if((x == 1) || (x == 0))
    {
        return x;
    }
    else
    {
        return fib(x-1)+fib(x-2);
    }
}
int main()
{
    int terms, i = 0;
    cout<<"Enter the number of terms: "<<endl;
    cin>>terms;
    cout<<"Fibonacci series :"<<endl;
    while(i < terms)
    {
        cout<<" "<<fib(i);
        i++;
    }
    return 0;
}

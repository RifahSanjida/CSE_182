//Practice Exercise 2: Write a C++ program to add two numbers using pointers.
#include<iostream>
using namespace std;
int main()
{
    int num1 = 20, num2 = 40;
    int* p1 = &num1;
    int* p2 = &num2;
    int sum = *p1 + *p2;
    cout << "The sum of the two numbers is: " << sum << endl;
    return 0;
}

//Example 3: Write a C++ program to understand how the addresses can be passed as arguments to a function.
#include<iostream>
using namespace std;
void Swap(int *n1, int *n2);
int main()
{
    int num1 = 20, num2 = 40;
    Swap(&num1, &num2);
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
    return 0;
}
void Swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

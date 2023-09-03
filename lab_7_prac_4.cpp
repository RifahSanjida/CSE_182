//Practice Exercise 4: Write a C++ program to print all unique elements in the array.
#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {12, 3, 5, 65, 12, 12, 45, 65, 7, 42}, i, j;
    cout<<"Given Array:"<<endl;
    for(i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Array with distinct elements:"<<endl;
    for(i = 0; i < 10; i++)
    {
       for(j = 0; j < 10; j++)
       {
           if(arr[i] == arr[j])
           {
               break;
           }
       }
       if(i == j)
           {
               cout<<arr[i]<<endl;
           }

    }
    return 0;
}

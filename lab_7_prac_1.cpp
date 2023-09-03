//Practice Exercise 1: Write a C++ program to find the maximum and minimum elements from an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, max, min;
    for(i = 0; i < 5; i++)
    {
        cout<<"Enter "<<i+1<<" Number:";
        cin>>arr[i];
    }
    max = min = arr[0];
    for(i = 0; i < 5; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    for(i = 0; i < 5; i++)
    {
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<<"The maximum number is: "<<max<<endl;
    cout<<"The minimum number is: "<<min<<endl;
    return 0;
}

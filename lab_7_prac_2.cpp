//Practice Exercise 2: Write a C++ program to find the second largest element in an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[5], i, j, x;
    cout<<"Enter array elements: "<<endl;
    for(i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
           if(arr[i]<arr[j])
           {
             x = arr[i];
             arr[i] = arr[j];
             arr[j] = x;
           }
        }
    }
    cout<<"Second largest element is : "<<arr[i]<<endl;
    return 0;
}

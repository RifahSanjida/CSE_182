//Practice Exercise 3: Write a C++ program to count the total number of even and odd elements in an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[5], i;
    cout<<"Enter array elements: "<<endl;
    for(i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"Even elements: "<<endl;
    for(i = 0; i < 5; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Odd elements: "<<endl;
    for(i = 0; i < 5; i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}

//Practice Exercise 9: Write a C++ program to delete an element from an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[15], n, i, pos, count = 0;
    cout<<"The number of elements: "<<endl;
    cin>> n;
    cout<<"Enter the numbers: "<<endl;
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position at which you want to delete: ";
    cin>>pos;
    for(i = pos-1; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    cout<<"New array is: ";
    for(i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}

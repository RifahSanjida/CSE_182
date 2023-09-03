//Practice Exercise 8: Write a C++ program to insert an element into an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[15], n, i, pos, x;
    cout<<"The number of elements: "<<endl;
    cin>> n;
    cout<<"Enter the numbers: "<<endl;
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position at which you want to insert: ";
    cin>>pos;
    cout<<"Enter the new element: ";
    cin>>x;
    pos--;
    for(i = n-1; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
    n++;
    cout<<"Array after inserting element:"<<endl;
    for(i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

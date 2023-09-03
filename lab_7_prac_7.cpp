//Practice Exercise 7: Write a C++ program to find the reverse of an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[15], n, i, s, e;
    cout<<"The number of elements: "<<endl;
    cin>> n;
    cout<<"Enter the numbers: "<<endl;
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    s = 0;
    e = n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
   for(i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}

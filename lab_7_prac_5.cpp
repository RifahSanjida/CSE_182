//Practice Exercise 5: Write a C++ program to count the total number of duplicate elements in an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[15];
    int i, j, n, count = 0;
    cout<<"The number of elements: "<<endl;
    cin>> n;
    cout<<"Enter the numbers: "<<endl;
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<"Total number of duplicate elements in the array:"<<count;
    return 0;
}

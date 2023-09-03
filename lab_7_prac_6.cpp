//Practice Exercise 6: Write a C++ program to count the frequency of each element in an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[15], n, i, j, count;
    cout<<"The number of elements: "<<endl;
    cin>> n;
    cout<<"Enter the numbers: "<<endl;
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int a[n] = {0};
    cout<<"Frequency of all elements of the array: ";
    for(i = 0; i < n; i++)
    {
        count = 0;
        if(a[i] != 1)
        {
            for(j = 0; j < n; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    a[j] = 1;
                }
            }
            if(count>1 || count == 1)
            {
                cout<<arr[i]<<" occurs "<<count<<" times, ";
            }
        }
    }
    return 0;
}

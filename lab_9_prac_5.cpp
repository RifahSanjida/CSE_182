//Practice Exercise 5: Write a C++ program to find the sum of two one-dimensional arrays using the function.
#include <iostream>
using namespace std;
int sum_of_arrays(int*arr1, int*arr2, int size)
{
    int i,sum = 0;
    for(i = 0; i < size; i++)
    {
        sum += arr1[i] + arr2[i];
    }
    return sum;
}
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int sum = sum_of_arrays(arr1, arr2, 5);
    cout << "The sum of the two arrays is: " << sum << endl;
    return 0;
}

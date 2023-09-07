//Example 2: A C++ Program to find the upper triangular matrix.
#include<iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int row, col, total_row, total_col, isupper;
    cout<<"Enter the rows and columns: "<<endl;
    cin>>total_row>>total_col;
    cout<<"The elements of the matrix: "<<endl;
    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col; col++)
        {
            cin>>arr[row][col];
        }
    }
    cout<<"The matrix: "<<endl;
    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    isupper = 1;
    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col; col++)
        {
           if(col < row && arr[row][col] != 0)
           {
               isupper = 0;
           }
        }
    }
    if(isupper == 1)
    {
        cout<<"\nThe matrix is Upper triangular matrix."<<endl;
    }
    else
    {
        cout<<"\nThe matrix is not Upper triangular matrix."<<endl;
    }
    return 0;
}

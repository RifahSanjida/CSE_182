//Practice Exercise 8: Write a C++ program to find the sum of the upper triangular matrix.
#include<iostream>
using namespace std;
int main()
{
  int a[10][10],r,c,i,j,sum = 0;
  cout<<"Enter the number of rows = ";
  cin>>r;
  cout<<"Enter the number of columns = ";
  cin>>c;
  cout<<"Enter the elements of the matrix:"<<endl;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>a[i][j];
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(i<j)
      {
          sum += a[i][j];
      }
    }
  }
  cout<<"The sum of the upper triangular matrix: "<<sum;
  return 0;
}

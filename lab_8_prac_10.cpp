//Practice Exercise 10: Write a C++ program to check whether a matrix is an identity matrix or not.
#include<iostream>
using namespace std;
int main()
{
  int a[10][10],r,c,i,j,f=0;
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
      if(i == j && a[i][j] != 1)
      {
          f = 1;
          break;
      }
      else if(i != j && a[i][j] != 0)
      {
          f = 1;
          break;
      }
    }
  }
  if(f == 0)
  {
      cout<<"The matrix is an identity matrix."<<endl;
  }
  else
  {
      cout<<"The matrix is not an identity matrix."<<endl;
  }
  return 0;
}

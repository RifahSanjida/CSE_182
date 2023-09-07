//Practice Exercise 9: Write a C++ program to check whether a matrix is sparse or not.
#include<iostream>
using namespace std;
int main()
{
   int a[10][10],r,c,i,j,count = 0;
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
      if(a[i][j] == 0)
      {
          count++;
      }
    }
  }
  if(count >= r*c/2)
  {
      cout<<"The matrix is sparse.";
  }
  else
  {
      cout<<"The matrix is not sparse.";
  }
  return 0;
}

//Practice Exercise 7: Write a C++ program to find the lower triangular matrix.
#include<iostream>
using namespace std;
int main()
{
   int a[10][10],r,c,i,j;
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
  cout<<"Lower triangular matrix: "<<endl;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(i>j)
      {
          cout<<a[i][j]<<" ";
      }
    }
  }
  return 0;
}

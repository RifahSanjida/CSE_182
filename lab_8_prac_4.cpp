//Practice Exercise 4: Write a C++ program to check whether two matrices are equal or not.
#include<iostream>
using namespace std;
int main()
{
  int a[10][10],b[10][10],r,c,i,j;
  cout<<"Enter the number of rows = ";
  cin>>r;
  cout<<"Enter the number of columns = ";
  cin>>c;
  //first matrix
  cout<<"Enter the first matrix elements"<<endl;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>a[i][j];
    }
  }
  //second matrix
  cout<<"Enter the second matrix elements"<<endl;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>b[i][j];
    }
  }
  if(a[i][j] == b[i][j])
  {
      cout<<"The matrices are equal."<<endl;
  }
  else
  {
      cout<<"The matrices are not equal."<<endl;
  }
  return 0;
}

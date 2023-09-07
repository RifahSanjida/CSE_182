//Practice Exercise 2: Write a C++ program to subtract two matrices.
#include<iostream>
using namespace std;
int main()
{
  int a[10][10],b[10][10],result[10][10],subtract[10][10],r,c,i,j,k;
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
  cout<<endl<<"Subtraction of two matrices: "<<endl;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        result[i][j] = a[i][j] - b[i][j];
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;

}

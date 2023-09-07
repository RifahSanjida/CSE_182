//Practice Exercise 3: Write a C++ program to perform Scalar matrix multiplication.
#include<iostream>
using namespace std;
int main()
{
    int a[10][10],r,c,i,j,k;
    cout<<"Enter the number of rows = ";
    cin>>r;
    cout<<"Enter the number of columns = ";
    cin>>c;
    cout<<"Enter the first matrix elements"<<endl;
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        cin>>a[i][j];
      }
    }
   cout<<"Input Scalar: ";
   cin>>k;
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
        a[i][j] = a[i][j] * k;
      }
   }
   cout<<"Multiplication result: \n";
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
   }
   return 0;
}

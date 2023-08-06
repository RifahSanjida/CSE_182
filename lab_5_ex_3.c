//Example 3: A C Program to demonstrate the use of continue statement.
#include<stdio.h>
void main()
{
  int i, n=20;
  for(i = 1; i <= n; ++i){
    if(i % 5 == 0){
        printf("pass ");
        continue;
    }
    printf("%d ",i);
  }
}

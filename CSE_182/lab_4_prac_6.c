#include<stdio.h>
int main()
{
   int n, first, last, a;
   printf("Enter an integer number: \n");
   scanf("%d",&n);
   last = n%10;
   while(n >= 10){

       n = n/10;
   }
   first = n;

   printf("First digit = %d\nLast digit = %d\n",first,last);

   return 0;
}

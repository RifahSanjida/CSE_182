#include<stdio.h>
int main()
{
    int n, a, fact = 1;
    printf("Enter a number a find its factorial: ");
    scanf("%d",&n);
    for(a = 1; a <= n; ++a)
    {
        fact = fact * a;

    }
    printf("Factorial of %d is %d\n",n,fact);

    return 0;
}

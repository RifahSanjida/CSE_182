//Example 1: A C Program to demonstrate the use of nested for loop.
#include<stdio.h>.
int main()
{
    int a, b;
    for(a = 1; a <= 5; a++)
    {
        for(b = 1; b <= 5; b++)
        {
            printf("%d ", b);
        }
        printf("\n");
    }
    return 0;
}

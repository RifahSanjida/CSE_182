//Practice Exercise 3:Write a C program to count the total number of even and odd elements in an array.
#include<stdio.h>
int main()
{
    int i, a[5], even = 0, odd = 0;
    printf("Enter 5 integers: \n");
    for(i = 0; i < 5; ++i)
    {
        scanf("%d", &a[i]);
    }
    printf("Displaying integers: \n");
    for(i = 0; i < 5; ++i)
    {
        printf("%d, ", a[i]);
    }
    for(i = 0; i < 5; ++i)
    {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("\nTotal Even = %d and total Odd = %d", even, odd);
    return 0;
}

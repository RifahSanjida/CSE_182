//Practice Exercise 6: Write a C Program to find the sum of n numbers using array.
#include<stdio.h>
int main()
{
    int i, a[5], sum = 0;
    printf("Enter array elements: \n");
    for(i = 0; i < 5; ++i)
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements: \n");
    for(i = 0; i < 5; ++i)
    {
        printf("%d\n", a[i]);
    }
    printf("Sum of array elements: ");
    for(i = 0; i <= 5; i++)
    {
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}

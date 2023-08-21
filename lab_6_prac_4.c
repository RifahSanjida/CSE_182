//Practice Exercise 4: Write a C program to copy all elements from an array to another array.
#include<stdio.h>
int main()
{
    int i, a[5], b[5];
    printf("Enter elements of a: \n");
    for(i = 0; i < 5; ++i)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements of a: \n");
    for(i = 0; i < 5; ++i)
    {
        printf("%d\n", a[i]);
    }
    for(i = 0; i < 5; ++i)
    {
        b[i] = a[i];
    }
    printf("Elements of b: \n");
    for(i = 0; i < 5; ++i)
    {
        printf("%d\n", b[i]);
    }
    return 0;
}

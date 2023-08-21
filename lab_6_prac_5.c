//Practice Exercise 5: Write a C program to find the reverse of an array.
#include<stdio.h>
int main()
{
    int i, a[5];
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
    printf("Reverse array elements: \n");
    for(i = 4; i >= 0; --i)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}

//Practice Exercise 2: Write a C program to print all negative elements in an array.
#include<stdio.h>
int main()
{
    int i, num[5];
    printf("Enter Array elements: \n");
    for(i = 0; i <= 4; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nDisplaying integers: \n");
    for(i = 0; i <= 4; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("\nDisplaying negative integers: \n");
    for(i = 0; i <= 4; i++)
    {
        if(num[i] < 0)
        {
           printf("%d, ", num[i]);
        }
    }
    return 0;
}

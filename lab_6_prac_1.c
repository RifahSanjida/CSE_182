//Practice Exercise 1:
#include<stdio.h>
int main()
{
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    //pattern 1:
    printf("Pattern 1:\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    //pattern 2:
    printf("\nPattern 2:\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    //pattern 3:
    printf("\nPattern 3:\n");
    for(i = rows; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    //pattern 4:
    printf("\nPattern 4:\n");
    for(i = rows; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

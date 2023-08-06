//Example 2: A C Program to demonstrate the use of break statement.
#include<stdio.h>
int main()
{
    int i;
    for(i = 0; i<10; i++)
    {
        printf("%d ",i);
        if(i == 6)
        break;
    }
    printf("came outside of loop i = %d",i);
}

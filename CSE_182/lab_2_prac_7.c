#include<stdio.h>
int main()
{
    int a;

    printf("Enter a number: \n");
    scanf("%d",&a);

    (a %2==0)? (printf("The number is even.\n")):(printf("The number is odd.\n"));
}

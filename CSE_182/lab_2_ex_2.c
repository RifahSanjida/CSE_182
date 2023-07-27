#include<stdio.h>

void main()
{

    int a,b,max;

    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);

    (a>b)? (printf("Max = %d",a)): (printf("Max = %d",b));
}

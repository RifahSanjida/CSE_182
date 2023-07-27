#include<stdio.h>

void main()
{
    int l,b,p,area;

    printf("Enter the length of rectangle :\n");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle :\n");
    scanf("%d",&b);

    p = 2*(l+b);
    area = l*b;
    printf("Area = %d\nPerimeter = %d\n",area,p);
}

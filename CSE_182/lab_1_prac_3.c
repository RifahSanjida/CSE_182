#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,perimeter;
    float s,area;

    a=5;
    b=8;
    c=10;
    perimeter=a+b+c;
    s=perimeter/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area and perimeter of a triangle with sides measuring %d,%d and %d are %f and %d\n",a,b,c,area,perimeter);

}

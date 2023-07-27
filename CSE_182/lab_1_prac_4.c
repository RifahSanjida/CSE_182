#include<stdio.h>
main()
{
    int l,w,area,perimeter;

    l=12;
    w=5;
    area=l*w;
    perimeter=2*(l+w);

    printf("The area and perimeter of a rectangle of the length %d and width %d are %d and %d\n",l,w,area,perimeter);
}

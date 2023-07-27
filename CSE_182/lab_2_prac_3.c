#include<stdio.h>

int main()
{
    float cm,m,km;

    printf("Enter the length in centimeter: \n");
    scanf("%f",&cm);

    m = cm/100;
    km = cm/100000;

    printf("Length in Meter = %.2f\n",m);
    printf("Length in Kilometer = %.5f\n",km);

}

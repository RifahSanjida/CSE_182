#include<stdio.h>

int main()
{
    float c,f;

    printf("Enter the temperature in °Celsius: \n");
    scanf("%f",&c);

    f = c * 9/5 + 32;

    printf("Temperature in °Fahrenheit = %.2f\n",f);
}

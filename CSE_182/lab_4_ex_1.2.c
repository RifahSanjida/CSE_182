#include<stdio.h>
int main()
{
    int num, a, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    for (a = 1; a <= num; ++a){
        sum += a;
    }
    printf("Sum = %d",sum);
    return 0;
}

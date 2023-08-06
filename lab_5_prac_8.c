//8. Write a C program to check whether a number is Strong number or not.
#include<stdio.h>
int main()
{
    int n, a, rem, i, fact=1, result=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    a = n;
    while(a != 0){
        rem = a%10;
        for(i=1; i<=rem; i++)
        {
            fact = fact*i;
        }
        result = result + fact;
        fact = 1;
        a = a/10;
    }
    if(result == n){
        printf("%d is a strong number.",n);
    }
    else{
        printf("%d is not a strong number.",n);
    }
    return 0;
}

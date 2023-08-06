//1. Write a C program to enter any number and check whether the number is palindrome or not.
#include<stdio.h>
int main()
{
    int n, rev = 0, remainder, a;
    printf("Enter an integer: ");
    scanf("%d", &n);
    a=n;
    while(n != 0){
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
    if(a == rev){
        printf("%d is a palindrome number.",a);
    }
    else{
        printf("%d is not a palindrome number.",a);
    }

    return 0;
}

//3. Write a C program to find LCM of two numbers.
#include<stdio.h>
int main()
{
    int a, b, lcm;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    lcm = (a>b)? a:b;
    while(1){
        if(lcm%a==0 && lcm%b==0)
        {
            printf("The LCM of %d and %d is %d.",a,b,lcm);
            break;
        }
        ++lcm;
    }
    return 0;
}

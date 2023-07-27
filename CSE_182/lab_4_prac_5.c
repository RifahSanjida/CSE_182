#include<stdio.h>

int main()
{
    int n, a=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    while(n>0){
            n = n/10;
            a++;
    }
    printf("Total %d digits.\n",a);
    return 0;
}

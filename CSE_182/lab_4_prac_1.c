#include<stdio.h>
int main()
{
    int n;

    printf("Enter starting value: ");
    scanf("%d",&n);
    while(n>=1){
        printf("%d\n",n);
        n--;
    }
    return 0;
}

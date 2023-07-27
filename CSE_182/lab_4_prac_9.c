#include<stdio.h>
int main()
{
    int n, a;
    printf("Enter a number to find factors: ");
    scanf("%d",&n);
    printf("Factors of %d are\n",n);

    for(a = 1; a <= n; ++a){

        if(n%a == 0)
        printf("%d ",a);
    }

    return 0;

}

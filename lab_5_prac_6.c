//6. Write a C program to find sum of all prime numbers between 1 to n.
#include<stdio.h>
int main()
{
    int i,j,n,count,sum=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }

       if(count==2)
        {
            sum+=i;

        }
        else
        continue;
    }
    printf("The sum of all prime numbers between 1 to %d is %d", n, sum);
    return 0;
}

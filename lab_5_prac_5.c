//5. Write a C program to print all Prime numbers between 1 to n.
#include<stdio.h>
int main()
{
    int i,j,n,count;
    printf("Enter a number:  ");
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
            printf("%d ",i);
        }
        else
        continue;
    }
}


#include<stdio.h>
int main()
{
    int a;
    printf("Enter the score: ");
    scanf("%d",&a);
    if(a<=100 && a>=0)
        {
        if(a>=80){
            printf("%d grade A+\n",a);
        }
        else if(a>=75){
            printf("%d grade A\n",a);
        }
        else if(a>=70){
            printf("%d grade A-\n",a);
        }
        else if(a>=65){
            printf("%d grade B+\n",a);
        }
        else if(a>=60){
            printf("%d grade C\n",a);
        }
        else if(a>=50){
            printf("%d grade D\n",a);
        }
        else if(a>=45){
            printf("%d grade E\n",a);
        }
        else {
            printf("%d grade fail\n",a);
        }

     }
    else
    {
        printf("Number is invalid");
    }
}

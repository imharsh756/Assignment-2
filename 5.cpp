#include<stdio.h>
int main()
{
    int a,x,y;
    x=0;
    printf("Enter a 3 digit number: ");
    scanf("%d",&a);
    if(a>0)
    {
        y=a%10;
        a=a/10;
        x=x+y;
    }if(a>0)
    {
        y=a%10;
        a=a/10;
        x=x+y;
    }if(a>0)
    {
        y=a%10;
        a=a/10;
        x=x+y;
    }
    printf("Sum of 3 digit number is %d",x);
    return 0;
}
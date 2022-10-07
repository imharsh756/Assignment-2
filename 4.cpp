#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&x,&y);
    printf("Value of x and y before swapping is %d and %d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Value of x and y after swapping is %d and %d",x,y);
    return 0;
}
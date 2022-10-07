#include<stdio.h>
int main()
{
    int x,y,m;
    printf("Enter 2 values: ");
    scanf("%d%d",&x,&y);
    printf("Value of x and y before swapping is %d and %d\n",x,y);
    m=x;
    x=y;
    y=m;
    printf("Value of x and y after swapping is %d and %d",x,y);
    return 0;
}
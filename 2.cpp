#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    x = x / 10;
    printf("value of x without last digit is %d",x);
    return 0;
}
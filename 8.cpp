#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a&1==1)
    {
        printf("odd");
    }
    else
    {
        printf("Even");
    }
    return 0;
}
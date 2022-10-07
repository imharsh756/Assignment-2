#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    a/=10;
    a*=10;
    printf("New number is: %d",a);
    return 0;
}
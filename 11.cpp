#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first and other number you want to append at last of first number: ");
    scanf("%d%d",&a,&b);
    a*=10;
    a+=b;
    printf("Your new number is: %d",a);
    return 0;
}
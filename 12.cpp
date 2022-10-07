#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("Enter Rs in INR to convert in dollars: ");
    scanf("%d",&a);
    b=a*1/76.23;
    printf("Your INR in dollars is: %f",b);
    return 0;
}
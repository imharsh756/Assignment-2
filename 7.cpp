#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>=0)
    {
        if(a&1==1)
        {
            printf("First one is at %d position",i);
            break;
        }
        i++;
        a=a>>1;
    }
    return 0;
}
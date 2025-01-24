#include<stdio.h>
int main()
{
    int base,power,i,pow=1;
    printf("Enter the base and power:");
    scanf("%d%d",&base,&power);
    for(i=1;i<=power;i++)
    {
        pow =pow*base;
    }
    printf("The %d to the power %d is %d",base,power,pow);
    return 0;
}
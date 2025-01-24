#include<stdio.h>
int main()
{
    int i,j,sum=0,fact,num,p;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact =1;
        p=i*i;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+(p*fact);
    }
    printf("The sum of the factorial is %d",sum);
    return 0;
}
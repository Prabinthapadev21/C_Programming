#include<stdio.h>
int main()
{
    int i,j,num,sum=0,p;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        p=1;
        for(j=1;j<=i;j++)
        {
            p=p*i;
        }
        sum=sum+p;
    }
    printf("The sum is %d",sum);
    return 0;
}
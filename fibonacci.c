#include<stdio.h>
int main()
{
    int num1,num2,sum=0,i;
    printf("Enter the tow numbers:");
    scanf("%d%d",&num1,&num2);
    for(i=num1;i<=num2;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("The the odd numbers between %d and %d is %d",num1,num2,sum);
    return 0;
}
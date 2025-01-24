#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+(rem*rem);
        num=num/10;
    }
    printf("The sum of the square is %d",sum);
    return 0;
}
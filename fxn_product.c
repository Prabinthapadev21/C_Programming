#include<stdio.h>
int product(int,int);
int main()
{
    int num1,num2,result;
    printf("Enter the value of num1 and num2:");
    scanf("%d%d",&num1,&num2);
    result=product(num1,num2);
    printf("The product of %d*%d=%d",num1,num2,result);
    return 0;
}
int product(int num1,int num2)
{
    if(num1==0 || num2==0)
    {
        return 0;
    }
    else
    {
        return num1+product(num1,num2-1);
    }
}
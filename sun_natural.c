#include<stdio.h>
int sum(int);
int main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=sum(num);
    printf("The sum of the natiyral number is %d",result);
    return 0;
}
int sum(int num)
{
    if(num==0)
    {
        return 0;
    }
    else 
    {
        return num+sum(num-1);
    }
}
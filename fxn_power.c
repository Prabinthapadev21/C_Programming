#include<stdio.h>
int power(int,int);
int main()
{
    int base,pow,result;
    printf("Enter the base and power:");
    scanf("%d%d",&base,&pow);
    result= power(base,pow);
    printf("The power is %d",result);
    return 0;
}
int power(int base,int pow)
{
    if(pow==0)
    {
        return 1;
    }
    else 
    {
        return base * power(base,pow-1);
    }
}
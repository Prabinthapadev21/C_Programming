#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime");
    }
    else 
    {
        printf("Composite");
    }
    return 0;
}
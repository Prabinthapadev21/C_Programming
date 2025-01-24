#include<stdio.h>
int main()
{
    int a,b,i,j,count=0,sum=0,pcount=0;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i==1)
        {
            continue;
        }
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            sum=sum+i;
            pcount++;

        }

    }
    printf("The prime number between %d and %d are %d\n",a,b,pcount);
    printf("The sum of the prime number is %d",sum);
    return 0;
}
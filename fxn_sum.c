#include<stdio.h>
#define r 10
void sum(int a[r])
{
    int sum=0,i;
    for(i=0;i<r;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is %d",sum);
}
int main()
{
    int a[r],i;
    printf("Enter the elements of the array:");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a);
    return 0;
}
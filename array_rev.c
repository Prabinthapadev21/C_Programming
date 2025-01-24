#include<stdio.h>
int main()
{
    int a[10],b[10],i,j=0;
    printf("Enter the elements of the array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=10-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}
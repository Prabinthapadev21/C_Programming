#include<stdio.h>
int main()
{
    int arr[10],i,large;
    printf("Enter the elements of the array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("The largest number is %d",large);
    return 0;
}
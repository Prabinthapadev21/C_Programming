#include<stdio.h>
int main()
{
    int arr[10],even=0,odd=0,i;
    printf("Enter the elements of the array:");
    for(i=0;i<10;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            even=even+arr[i];
        }
        else
        {
            odd = odd+arr[i];
        }
    }
    printf("The sum of even numbers is %d",even);
    printf("The sum of odd numbers is %d",odd);
    return 0;
}
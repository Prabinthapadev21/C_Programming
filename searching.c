#include<stdio.h>
int main()
{
    int arr[10],i,num,flag=0,key;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the key for searching:");
    scanf("%d",&key);
    printf("Enter the elements of the arrray up to %d",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        if(key == arr[i])
        {
            printf("NUmber is found!!");
            break;
        }
        if(arr[i]==num)
        {
            printf("Number not found");
            break;
        }
    }
    return 0;
}
// use of calloc function
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,max,min,num;
    printf("Enter the number:");
    scanf("%d",&num);
    ptr=(int *)calloc(num,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory cannot be allocated!!");
        exit(1);
    }
    printf("Enter the elements of the array:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&ptr[i]);
    }
    max=min=ptr[0];
    for(i=0;i<num;i++)
    {
        if(ptr[i]>max)
        {
            max=ptr[i];
        }
        if(ptr[i]<min)
        {
            min=ptr[i];
        }
    }
    printf("The maximum value is %d and minimum value is %d",max,min);
    return 0;
}
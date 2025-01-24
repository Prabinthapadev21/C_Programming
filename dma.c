//example of mallco
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,num,i,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    ptr=(int *)malloc(num*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory cannot be allocated");
        exit(1);
    }
    printf("Enter the elements of the array:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<num;i++)
    {
        if(ptr[i]>18 && ptr[i]<25)
        {
            count++;
        }
    }
    printf("The number between 18 and 25 is %d",count);
    return 0;
}
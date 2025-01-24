#include<stdio.h>
int main()
{
    int mark[5],total=0,i;
    float per;
    printf("Enter the marks in 5 subject:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&mark[i]);
    }
    for(i=0;i<5;i++)
    {
        total += mark[i];
    }
    per=total/5;
    printf("Result = ");
    if(per>=80)
    {
        printf("distinction");
    }
    else if(per>=70)
    {
        printf("B+");
    }
    else if(per>=60)
    {
        printf("B");
    }
    else if(per>=50)
    {
        printf("C+");
    }
    else 
    {
        printf("Fail");
    }
    return 0;
}
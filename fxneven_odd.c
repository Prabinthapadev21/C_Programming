#include<stdio.h>
void evod(int num)
{
    if(num%2==0)
    {
        printf("Even");
    }
    else 
    {
        printf("Odd");
    }
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    evod(num);
    return 0;
}
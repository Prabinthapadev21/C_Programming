#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 3 numbers:");
    scanf("%d%D%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is greatest");
    }
    else if(b>a && b>c)
    {
        printf("B is greatest");
    }
    else
    printf("c is greatest");
    return 0;
}
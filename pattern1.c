#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=2+i;j<=5+i;j++)
        {
            printf("%d\t",j*j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=2;j<=6;j=j+2)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}
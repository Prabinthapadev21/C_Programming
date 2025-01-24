#include<stdio.h>
int main()
{
    int i,j;
    char ch = '*';
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
    return 0;
}
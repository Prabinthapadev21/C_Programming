#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates x,y:");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)
    {
        printf("%d,%d lies in 1st quardant",x,y);
    }
    else if(x<0 && y>0)
    {
        printf("%d,%d lies in the 2nd quardant",x,y);
    }
    else if(x>0 && y<0)
    {
        printf("%d,%d lies in the 3rd quardant",x,y);
    }
    else
    {
        printf("%d,%d lies in 4th quardant",x,y);
    }
    return 0;
}
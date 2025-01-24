//program to read name of 10 student and sort in alphabetical order
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[10][20],temp[20];
    printf("Enter the name of 10 student:");
    for(i=0;i<10;i++)
    {
        scanf("%s",str[i]);
    }
    for(i=0;i<10-1;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("The students name in alphabetical order is:\n");
    for(i=0;i<10;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}
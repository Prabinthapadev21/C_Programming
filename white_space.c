#include<stdio.h>
int main()
{
    int i,count=0;
    char str[30],ch;
    printf("Enter the sentence:");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("The number of white spaces are %d",count);
    return 0;
}
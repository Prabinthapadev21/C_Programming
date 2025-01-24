#include<stdio.h>
int main()
{
    int i,count=0;
    char str[30];
    printf("Enter a sentence:");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]!=' ') &&(str[i+1]==' ') || (str[i+1]=='\0'))
        {
            count++;
        }
    }
    printf("The numbers of words are %d",count);
    return 0;
}
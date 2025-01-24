#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,len;
    char str[20],str2[20];
    printf("Enter the string:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    len=i;
    j=i-1;
    for(i=0;i<len;i++)
    {
        str2[i]=str[j];
        j--;
    }
    str2[i]='\0';
   
        if(strcmp(str,str2)!=0)
        {
            printf("String is not palindrome");
        }
        else
        {
            printf("string is palindrome");
        }
    return 0;
}
#include<stdio.h>
int main()
{
    int i=0,j=0,len;
    char str[20],str1[20];
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
        str1[i]=str[j];
        j--;
    }
    str1[i]='\0';
    printf("The reverse of str is %s",str1);
    return 0;
}
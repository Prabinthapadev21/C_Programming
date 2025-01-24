#include<stdio.h>
int main()
{
    int i;
    char str[20],str2[20];
    printf("Enter the string:");
    scanf("%s",str);
    i=0;
    while(str[i]!='\0')
    {
        str2[i]=str[i];
        i++;
    }
    str2[i]='\0';
    printf("The string2 is %s",str2);
    return 0;
}
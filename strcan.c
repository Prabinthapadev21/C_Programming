#include<stdio.h>
int main()
{
    int i=0,j=0;
    char str1[20],str2[20],str3[40];
    printf("Enter the string1:");
    scanf("%s",str1);
    printf("Enter the string2:");
    scanf("%s",str2);
    while(str1[i]!='\0')
    {
        str3[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0')
    {
        str3[i]=str2[j];
        i++;
        j++;
    }
    str3[i]='\0';
    printf("The concnation string is %s",str3);
    return 0;
}
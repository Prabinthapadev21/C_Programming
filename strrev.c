//to reverse string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int len;
    printf("Enter the string:");
    scanf("%s",str);
    len=strlen(str);
    printf("The length of the string is %d",len);
    return 0;
}
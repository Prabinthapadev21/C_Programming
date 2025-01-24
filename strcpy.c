// to copy string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter the string:");
    scanf("%s",str1);
    strcpy(str2,str1);
    printf("The copied string is %s",str2);
    return 0;
}

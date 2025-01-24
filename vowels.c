//wap to input a string and count vowels,consonent,commas,space,semicolon in the string.
#include <stdio.h>
int main()
{
    int i, v = 0, c = 0, comma = 0, space = 0, semi = 0;
    char str[50],ch;
    printf("Enter the string:");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            v++;
        }
        else if (ch == ' ')
        {
            space++;
        }
        else if (ch == ',')
        {
            comma++;
        }
        else if (ch == ';')
        {
            semi++;
        }
        else
        {
            c++;
        }
    }
    printf("The no of vowels are %d", v);
    printf("The no of consonent are %d", c);
    printf("The no of space are %d", space);
    printf("The no of commas are %d", comma);
    printf("The no of semicolon are %d", semi);
    return 0;
}
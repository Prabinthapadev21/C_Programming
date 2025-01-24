#include <stdio.h>
int main()
{
    int i, j, num, fact;
    float sum = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum=sum+(float)i/fact;
    }
    printf("The sum is %.2f", sum);
    return 0;
}
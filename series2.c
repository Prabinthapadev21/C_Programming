#include <stdio.h>
int main()
{
    int i, sum = 0, x, num, p = 1;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Enter the value of the x:");
    scanf("%d", &x);
    for (i = 1; i <= num; i++)
    {
        p = p * x;
        if (i % 2 != 0)
        {
            sum = sum + p;
        }
        else
        {
            sum = sum - p;
        }
    }
    printf("The sum of the series is %d", sum);
    return 0;
}
#include <stdio.h>
int main()
{
    int a[3][3], i, j, choice,sum,even;
    printf("Enter the elements of the matrix:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the choice 1. print matrix 2. sum of even values 3. sum of square diagonal element:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d", a[i][j]);
            }
        }
        break;
    case 2:
         even = 0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (a[i][j] % 2 == 0)
                {
                    even = even + a[i][j];
                    printf("%d\t",a[i][j]);
                }
            }
            printf("\n");
        }
        break;
    case 3:
         sum = 0;
        for (i = 0; i < 3; i++)
        {
            sum = sum + a[i][i] * a[i][i];
        }
        printf("The sum of the diagonal element of matrix is %d",sum);
        break;
        default :
        printf("Please enter the correct choice!!");
        break;
    }
    return 0;
}
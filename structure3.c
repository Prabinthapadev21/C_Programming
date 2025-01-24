#include <stdio.h>
struct employee
{
    int id;
    char name[20];
    char address[20];
    int salary;
};
int main()
{
    struct employee e[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the id of the student:");
        scanf("%d", &e[i].id);
        printf("Enter the name of the employee:");
        scanf("%s", e[i].name);
        printf("Enter the address of the employee:");
        scanf("%s", e[i].address);
        printf("Enter the salary of the employee:");
        scanf("%d", &e[i].salary);
    }
    printf("Id\tName\t\tAddress\t\tSalary\n");
    for (i = 0; i < 3; i++)
    {
        if (e[i].salary > 45000)
        {
            printf("%d\t%s\t\t%s\t\t%d\n", e[i].id, e[i].name, e[i].address, e[i].salary);
        }
    }
    return 0;
}
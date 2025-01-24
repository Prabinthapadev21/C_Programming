#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
    FILE *fp;
    fp=fopen("/Users/prabinthapa/Desktop/simple/employee.txt","w");
    if(fp==NULL)
    {
        printf("file cannot be opened!!");
        exit(1);
    }
    else
    {
        for(i=0;i<3;i++)
        {
            printf("Enter the id of the employee:");
            scanf("%d",&e[i].id);
            printf("Enter the name of the mploye:");
            scanf("%s",e[i].name);
            printf("Enter the address of the employee:");
            scanf("%s",e[i].address);
            printf("Enter the salary of the the employee:");
            scanf("%d",&e[i].salary);
        }
        for(i=0;i<3;i++)
        {
            fprintf(fp,"%d\t%s\t%s\t%d\n",e[i].id,e[i].name,e[i].address,e[i].salary);
        }
        printf("File sucesfully copied\n");
    }
    fclose(fp);
    fp=fopen("/Users/prabinthapa/Desktop/simple/employee.txt","r");
    if(fp==NULL)
    {
        printf("file cannot be readed!!");
        exit(1);
    }
    printf("Id\tName\tAddress\tSalary\n");
    while(fscanf(fp,"%d\t%s\t%s\t%d\n",&e[i].id,e[i].name,e[i].address,&e[i].salary)!=EOF)
    {
        if(e[i].salary>45000 && strcmp(e[i].address,"chitwan")==0)
        {
            printf("%d\t%s\t%s\t%d\n",e[i].id,e[i].name,e[i].address,e[i].salary);
        }
    }
    fclose(fp);
    return 0;
}
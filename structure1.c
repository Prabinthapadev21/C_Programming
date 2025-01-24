#include<stdio.h>
struct student
{
    int id;
    char name[20];
    char gender[10];
    int marks[5];
};
int main()
{
    struct student stu[2];
    int i,j;
    for(i=0;i<2;i++)
    {
        printf("Enter the id of the student:");
        scanf("%d",&stu[i].id);
        printf("Enter the name of the student:");
        scanf("%s",stu[i].name);
        printf("Enter the gender of the student:");
        scanf("%s",stu[i].gender);
        printf("Enter the marks of student n5 subject:");
        for(j=0;j<5;j++)
        {
            scanf("%d",&stu[i].marks[j]);
        }
    }

}
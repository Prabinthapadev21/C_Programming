#include<stdio.h>
struct student
{
    int id;
    char name [20];
    int mark[5];
};
int main()
{
    struct student s;
    int i,sum=0;
    float percentage;
    printf("Enter the id of the student:");
    scanf("%d",&s.id);
    printf("Enter the name of the student:");
    scanf("%s",s.name);
    printf("Enter the marks of the student in 5 subject:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&s.mark[i]);
    }
    for(i=0;i<5;i++)
    {
       sum+=s.mark[i];
    }
    percentage=(float)sum/5;
    printf("Id\tName\tMarks\n");
    printf("%d\t%s\t%.2f\n",s.id,s.name,percentage);
    return 0;
}
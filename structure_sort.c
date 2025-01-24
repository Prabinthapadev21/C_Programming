#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    int marks;
};
int main()
{
    struct student s[3],temp;
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("Enter the id of the student:");
        scanf("%d",&s[i].id);
        printf("Enter the name of the student:");
        scanf("%s",s[i].name);
        printf("Enter the marks of the student:");
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<3-1;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(s[i].name,s[j].name)>0)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("ID\tName\tMarks\n");
    for(i=0;i<3;i++)
    {
        printf("%d\t%s\t%d\n",s[i].id,s[i].name,s[i].marks);
    }
    return 0;
}
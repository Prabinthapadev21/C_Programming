#include<stdio.h>
struct book
{
    char name[20];
    char author[20];
    int pages;
    float price;
};
int main()
{
    struct book b[3],temp;
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("Enter the name of the book:");
        scanf("%s",b[i].name);
        printf("Enter the author of book:");
        scanf("%s",b[i].author);
        printf("Enter the pages of the book:");
        scanf("%d",&b[i].pages);
        printf("Enter the price of the book");
        scanf("%f",&b[i].price);
    }
    for(i=0;i<3-1;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(b[i].price>b[j].price)
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printf("Name\tAuthor\tPages\tPrice\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t%s\t%d\t%.2f\n",b[i].name,b[i].author,b[i].pages,b[i].price);
    }
    return 0;
}
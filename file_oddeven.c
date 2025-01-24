#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],i;
    FILE *fp1,*fp2;
    fp1 = fopen("/Users/prabinthapa/Desktop/simple/even.txt","w");
    fp2= fopen("/Users/prabinthapa/Desktop/simple/odd.txt","w");
    if(fp1==NULL || fp2== NULL)
    {
        printf("File cannot be opened!!");
        exit(1);
    }
    else
    {
        printf("Enter the elements of the array");
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<10;i++)
        {
            if(a[i]%2==0)
            {
                fprintf(fp1,"%d",a[i]);
            }
            else
            {
                fpintf(fp2,"%d",a[i]);
            }
        }
        printf("The numbers are succesfully copied");
    }
    fclose(fp1);
    fclose(fp2);
    fp2=fopen("/Users/prabinthapa/Desktop/simple/odd.txt","r");
        if(fp2==NULL)
        {
            printf("File cannot be read");
            exit(1);
        }
        
}
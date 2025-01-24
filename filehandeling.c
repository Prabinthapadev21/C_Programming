#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[30],ch;
    int i,count=0;
    FILE *fp;
fp=fopen("/Users/prabinthapa/Desktop/simple/vowel.txt","w");
if(fp==NULL)
{
    printf("File cannot be opened");
    exit(1);
}
else
{
    printf("Enter the text:");
    scanf("%[^\n]",str);
    fprintf(fp,"%s",str);
}
printf("Text is succesfully copied into the file\n");
fclose(fp);
fp=fopen("/Users/prabinthapa/Desktop/simple/vowel.txt","r");
if(fp==NULL)
{
    printf("File cannot be readed!!");
}
while(fscanf(fp,"%s",str)!=EOF)
{
    for(i=0;str[i]!='\0';i++)
    {
        ch=str[i];
        if(ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
}
printf("The number of vowels letters in the file is %d",count);
fclose(fp);
return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char c;
	int count = 0;
	char text[20];
	fp = fopen("/Users/prabinthapa/Desktop/simple/sentence.txt","w");
	
	if(fp == NULL)
	{
		printf("error!!!");
		
	}
	else
	{
		printf("enter the text");
		scanf("%[^\n]",text);
		
		fprintf(fp,"%s",text);
	}
	
		
	printf("succesfully written");
	     printf("\n");
	 fclose(fp);
	 // now reading the sentences 
	 
	 fp = fopen("/Users/prabinthapa/Desktop/simple/sentence.txt","r");
	 
	 if(fp == NULL)
	 {
	 	printf("eroor !!");
	 	exit(1);
	 }
	 while(1)
	 {
	 	c = fgetc(fp);
		 
		 if ( c == 'a' || c== 'e' || c=='i'|| c=='o'||c=='u')
		 {
		 	count ++ ;
		 }
		 if(c == EOF)
		 break ;
		  
	 }

printf("\n");

printf("the total num of vowel lettrs are %d",count);

		fclose(fp);
	
	return 0;
}
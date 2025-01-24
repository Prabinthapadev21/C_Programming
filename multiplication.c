#include<stdio.h>
int main()
{
	 int a[3][3],b[3][3],c[3][3]={0},i,j,k=0,m,n;
	printf("enter the rows of 1st matrix :");
	scanf("%d",&m);
	
	
	
		printf("enter the  rcolumnmatrix :");
	scanf("%d",&n);
	
	
	printf("enter the elements of 1st matrix :");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
		scanf("%d",&a[i][j]);
	    }
       }
       printf("\n");
       
       printf("enter the elements of 2nd matrix :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
		scanf("%d",&b[i][j]);
	    }
      }
      
      	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
			
               c[i][j] = a[i][k] * b[k][j];
			}
		       
		    }
		}
		printf("\n");
		
		  	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		      printf("%d\t",c[i][j]);
		  }
		  printf("\n");
	}
	
	return 0;
}
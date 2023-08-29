#include<stdio.h>
int main()
{
	int r1, c1, r2,c2,i,j,k,temp=0;
	printf("enter the dimensions of your first matrix\n");
	scanf("%d",&r1);
	scanf("%d",&c1);
	printf("enter the dimensions of the second matrix. \n");
	scanf("%d",&r2);
	scanf("%d",&c2);
	int a[r1][c1], b[r2][c2];
	
	
		printf("enter the numbers of your first matrix. \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			
			}
		}
		
		
		
		printf("enter the numbers of your second matrix. \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&b[i][j]);
				
			}
		}
		
	
	
	if((r1!=r2)||(c1!=c2))
	{
	
	printf("Matrix addition and subtraction is not possible.\n");
    }
	else
	{
		
			
		printf("Sum of the matrices: \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",a[i][j]+b[i][j]);
			}
			printf("\n");
		}
		
		
		
		printf("difference of the matrices: \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",a[i][j]-b[i][j]);
			}
			printf("\n");
		}		
	}
	
	
	if(c1!=r2)
	printf("Matrix multiplication is not possible. \n");
	else
	{
		
		
		
		printf("product of the matrices is: \n");
		
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				temp=0;
				for(k=0;k<c1;k++)
				{
					temp= temp+ ( a[i][k] * b[k][j]);
				}
				
				printf("%d \t",temp);
			
			
			}
			printf("\n");
		}
	}
	return 0;
	
}

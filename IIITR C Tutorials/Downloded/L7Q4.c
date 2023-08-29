#include<stdio.h>
int main()
{
	int p,q,r,s;
	printf("enter the dimensions of your 3D matrix: \n");
	scanf("%d%d%d%d",&p,&q,&r,&s);
	printf("enter the values of your array row wise.\n");
	int a[p][q][r][s];
	 
	 
	int i,j,k,l;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<r;k++)
			{
				for(l=0;l<s;l++)
				{
					scanf("%d",&a[i][j][k][l]);
				}
			}
		}
	}
	printf("the values of the 4D matrix are: \n");	
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<r;k++)
			{
				for(l=0;l<s;l++)
				{
					printf("%d  ",a[i][j][k][l]);
				}printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

//In this program, we first read the dimensions of the 4D matrix from the user. We then read the elements of the matrix using four nested for loops. After that, we display the matrix using four nested for loops as well. Note that we print two blank lines between each three-dimensional slice of the matrix to make it more readable.
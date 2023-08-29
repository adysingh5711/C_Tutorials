#include<stdio.h>
int main()
{
	int p,q,r;
	printf("enter the dimensions of your 3D matrix: \n");
	scanf("%d%d%d",&p,&q,&r);
	printf("enter the values of your array row wise.\n");
	 int a[p][q][r];
	 
	 
	int i,j,k;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<r;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("the values of the 3D matrix are: \n");	
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<r;k++)
			{
				printf("%d  ",a[i][j][k]);
			}
			 printf("\n");
		}
		 printf("\n");
	}
	return 0;
}


//In this program, we first read the dimensions of the 3D matrix from the user. We then read the elements of the matrix using three nested for loops. After that, we display the matrix using three nested for loops as well. Note that we print a blank line between each two-dimensional slice of the matrix to make it more readable.

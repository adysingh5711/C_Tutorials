#include <stdio.h>
int main()
{
	int r1, c1, r2, c2, i, j, k, temp = 0;
	printf("Enter the dimensions of your first matrix");
	scanf("%d", &r1);
	scanf("%d", &c1);
	printf("Enter the dimensions of your second matrix");
	scanf("%d", &r2);
	scanf("%d", &c2);

	int a[r1][c1], b[r2][c2];
	printf("Enter the numbers of your first matrix \n");
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the numbers of your Second matrix \n");
	for (i = 0; i < r2; i++)
	{
		for (j = 0; j < c2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	int sum[r1][c1];
	int diff[r1][c1];
	if ((r1 != r2) || (c1 != c2))
	{
		printf("Matrix Addition & Substraction is not possible \n");
	}
	else
	{
		// adding two matrices
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				sum[i][j] = a[i][j] + b[i][j];
			}
		}
		printf("Sum of matrices : \n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				printf("%d \t", sum[i][j]);
			}
			printf("\n");
		}

		// Subtracting two matrices
		for (i = 0; i < r1; i++)
		{

			for (j = 0; j < c1; j++)
			{
				diff[i][j] = a[i][j] - b[i][j];
			}
		}
		printf("Difference of matrices : \n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				printf("%d \t", diff[i][j]);
			}
			printf("\n");
		}
	}

	int pro[r1][c2];
	if ((c1 != r2))
	{
		printf("Matrix Multiplication is not possible");
	}
	else

	{
		//	Product of matrices
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				for (k = 0; k < r1; k++)
				{
					temp = temp + a[i][k] * b[k][j];
				}
				pro[i][j] = temp;
				temp = 0;
			}
		}
		printf("Product of matrices is : \n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				printf("%d \t", pro[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

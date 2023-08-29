#include<stdio.h>
int main()
{
	int i,j,n, temp=0;
	printf("enter the number of students: \n");
	scanf("%d",&n);
	float details[n][6];
	
	for(i=0;i<n;i++)
	{
		printf("enter the details of the student; Roll no:, and marks in 4 subjects. \n");
		for(j=0;j<5;j++)
		{
			scanf("%f",&details[i][j]);
			if(j>=1)
			{
				temp+=details[i][j];
			}
		}
		details[i][5]= temp/4;
		temp=0;
	}
	printf("details of students are: \n");
	for(i=0;i<n;i++)
	{
		printf("Roll no. : %.0f Average marks : %.2f ", details[i][0], details[i][5]);
	printf("\n");
	}
	return 0;
}

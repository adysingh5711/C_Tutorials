#include <stdio.h>
int main()
{
	int i, j, n;
	printf("Enter the number of Students : \n");
	scanf("%d", &n);
	int temp = 0;
	float details[n][6];
	for (i = 0; i < n; i++)
	{
		printf("Enter the details of students :: Roll No.: \nMarks in 4 subjects : \n");
		for (j = 0; j < 5; j++)
		{
			scanf("%f", &details[i][j]);
			if (j >= 1)
			{
				temp += details[i][j];
			}
		}
		details[i][5] = temp / 4;
		temp = 0;
	}
	printf("Details of students are : \n");
	for (i = 0; i < n; i++)
	{
		printf("Roll No. : %.0f  and Average : %.2f", details[i][0], details[i][5]);
		printf("\n");
	}
	return 0;
}

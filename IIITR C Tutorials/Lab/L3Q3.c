#include <stdio.h>
int main()
{
	char name;
	int rno;
	float marks;
	float sum = 0;
	printf("Enter character");
	scanf("%c", &name);
	printf("Enter Roll No ");
	scanf("%d", &rno);
	int n = 5;
	while (n > 0)
	{
		printf("Enter marks");
		scanf("%f", &marks);
		sum += marks;
		n--;
	}
	float per = sum / 5;
	printf("character %c \n", name);
	printf("Roll no %d \n", rno);
	printf("Percentage %f \n", per);
	if (per >= 90)
		printf("Grade O \n");
	else if (per >= 80)
		printf("Grade E \n");
	else if (per >= 70)
		printf("Grade A \n");
	else if (per >= 60)
		printf("Grade B \n");
	else if (per >= 50)
		printf("Grade C \n");
	else if (per >= 40)
		printf("Grade D \n");
	else if (per >= 30)
		printf("Grade E \n");
	else
		printf("Fail");
	return 0;
}

#include <stdio.h>
int main()
{
	int marks;
	printf("Enter your marks \n");
	scanf("%d", &marks);
	if(marks>=90)
	printf("Grade O \n");
	else if(marks>=80)
	printf("Grade E \n");
    else if(marks>=70)
	printf("Grade A \n");
	else if(marks>=60)
	printf("Grade B \n");
	else if(marks>=50)
	printf("Grade C \n");
	else
	printf("Fail");
	return 0;
}

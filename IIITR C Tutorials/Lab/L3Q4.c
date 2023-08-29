#include <stdio.h>
int main()
{
	int number;
	printf("Enter the number\n");
	scanf("%d", &number);
	int sum = 0;
	int temp;
	while (number != 0)
	{
		temp = number % 10;
		sum += temp;
		number = number / 10;
	}
	printf("The sum of digits is : %d", sum);
	return 0;
}

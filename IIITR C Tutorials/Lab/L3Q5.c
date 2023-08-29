#include <stdio.h>
int main()
{
	int num, rem;
	printf("Enter integer to be reversed \n");
	scanf("%d", &num);

	int rev = 0;
	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	printf("Reversed number = %d", rev);
	return 0;
}

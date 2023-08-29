#include <stdio.h>
int main()
{
	int n;
	printf("enter the length of your array.\n");
	scanf("%d", &n);
	int a[n], b[n];
	printf("enter the values of your array.\n");
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		b[i] = a[n - i - 1];
	}
	printf("The reversed array is: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", b[i]);
	}
	return 0;
}

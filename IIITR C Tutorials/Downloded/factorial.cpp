#include<stdio.h>
int fact(int n);
int main()
{
	printf("enter the number. \n");
	int n;
	scanf("%d",&n);
	int f= fact(n);
	printf("factorial: %d\n",f);
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	{
		return (n* fact(n-1));
	}
}

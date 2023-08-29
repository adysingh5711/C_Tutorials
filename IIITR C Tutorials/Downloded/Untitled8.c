#include<stdio.h>
int main()
{
	int a[100], b[100], i, j, size;
	printf("\nPlease enter the size of an array");
	scanf("%d",&size);
	for(i=0; i< size; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=size-1, j=0; i>=0; i--,j++)
	{
		b[j]=a[i];
	}
	printf("\nResult of reverse array is:");
	for(i=0;i <size;i++)
	{
		printf("%d \t", b[i]);
	}
	
	
	return 0;
}

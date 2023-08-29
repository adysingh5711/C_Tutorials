#include <stdio.h>
int main()
{
	int i,j,k;
	i=1;
	j=0;
	for(j;j<4;j++)
	{
		k=0;
		while(k<i)
		{
			printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}

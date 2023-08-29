#include <stdio.h>
int main()
{
	int i,j,k,l=1;
	i=1;
	j=0;
	for(j;j<4;j++)
	{
		k=0;
		while(k<i)
		{
			printf("%d",l);
			k++;
			l++;
		}
		printf("\n");
		i++;
	}
}

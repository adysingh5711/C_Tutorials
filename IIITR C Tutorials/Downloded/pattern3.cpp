#include <stdio.h>
int main()
{
	int i,j,k;
	i=1;
	j=0;
	for(j;j<5;j++)
	{
		k=0;
		int l=65;
		while(k<i)
		{
			printf("%c",l);
			k++;
			l++;
		}
		printf("\n");
		i++;
	}
}

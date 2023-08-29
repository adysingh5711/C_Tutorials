#include <stdio.h>
int main()
{
	int i,j,k,l=65;
	i=1;
	j=0;
	for(j;j<6;j++)
	{
		k=0;
		while(k<i)
		{
			printf("%c",l);
			k++;
		}
		printf("\n");
		i++;
		l++;
	}
}

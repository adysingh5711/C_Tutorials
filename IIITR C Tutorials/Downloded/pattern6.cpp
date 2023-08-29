#include <stdio.h>
int main()
{
	int i,j,k,l,m,x;
	i=1;
	x=1;
	j=0;
	l=3;
	for(j;j<4;j++)
	{
		m=0;
		while(l>m)
		{
			printf(" ");
			m++;
		}
		l--;
		k=0;
		while(k<i)
		{
			printf("%d",x);
			k++;
		}
		printf("\n");
		i++;
		x++;
	}
}

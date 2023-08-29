#include <stdio.h>
int main()
{
	int i,j,k,l; k=0;
	for(i=0; i<10;i++);
	{
		printf("i=%d \n",i);
		k++;
		 printf("k=%d \n",k);
		for(j=0; j<10;j++)
		{
			printf("j=%d \n",j);
			k++;
		    printf("k=%d \n",k);
		    
		    
			for(l=0; l<10;l++)
		{
			printf("l=%d \n",l);
			k++;
		    printf("k=%d \n",k);
			
		}
		}
	}
	return 0;
}

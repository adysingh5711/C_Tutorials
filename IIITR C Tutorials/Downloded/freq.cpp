#include<stdio.h>

int main()
{
	int n,i,j;
	
	printf("enter the length of your array.\n");
	scanf("%d",&n);
	int a[n];
	int b[n];
	printf("enter the values of your array.\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=0;
	}
	printf("\n");
	
	 int counter =0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((a[i]==a[j])&& b[i]!=-1)
			{
			
			counter++;
			if(counter>1)
		 	b[j]=-1;
		 
		    }
    	}
    	if(b[i]!=-1)
    	printf(" The frequency of %d  is %d\n", a[i], counter);		
    	counter=0;
	}
	return 0;
	
}

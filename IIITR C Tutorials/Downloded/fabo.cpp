#include<stdio.h>
 int fab(int n);
 int main()
 {
 	int a=0,b=1,c=1,n,i;
 	printf("enter the value of n. \n");
 	 scanf("%d",&n);
 	 printf("fibonacci series without recursion: \n");
 	 printf("%d\n%d\n %d\n",a,b,c);
 	for(i=4;i<=n;i++)
 	{
 		a=b;
 		b=c;
 		c=a+b;
 		printf("%d\n",c);
	 }
		 printf("fibonacci series with recursion: \n");
		 
		 for( i=1;i<=n;i++)
		 {
		 	int fa= fab(i);
		 	 printf("%d\n",fa);
		 }
		 
 }
 int fab(int n)
 {
 	if(n==2)
 	return 1;
 	if(n==1)
 	return 0;
 	
 	return fab(n-1)+ fab(n-2);
 }

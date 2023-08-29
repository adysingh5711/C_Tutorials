#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50]="Rahul";
	char str2[]="Ranjan";
	int len= strlen(str1);
	printf("str1: %s  \nstr2: %s\n",str1, str2);
	printf("length using library function: %d\n",len);
	len=0;
	int i=0;
	while(str1[i]!='\0')
	{
		len++;
		i++;
		
	}
	printf("length using user defined function: %d\n",len);
	

	char str3[50];	
	
		printf("copying str1 to str3 using library function,str3: %s\n",str3);
		i=0;
		
		while(str1[i]!='\0')
		{
			str3[i]= str1[i];
			i++;
		}
		printf("copying str1 to str3 using user defined function, str3: %s\n",str3);

	 strcat(str1, str2);
	printf("concatenating str1 and str2 using library function: %s\n",str1);
	
	i= len;
	int j=0;
	while(str2[j]!='\0')
	{
		str3[i]=str2[j];
		i++;
		j++;
	}
	printf("concatenating str1 and str2 using self defined function: %s\n",str3);
	
	strrev(str1);
	printf("reversed string using library function str1: %s\n",str1);
	 strrev(str1);
	   strcpy(str3,str1);
	   int k= strlen(str3);
	   i=0;
		while(str3[i]!='\0')
		{
			str1[k-i-1]= str3[i];
			i++;
		}
	printf("reversed string using user defined function str1: %s\n str2: %s",str1,str2);
	
	printf("string compare %d \n", strcmp(str1, str2));
	
	
	return 0;
}

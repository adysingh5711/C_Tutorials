#include <stdio.h>
int main()
{
	printf("Size of char %d \n",sizeof(char));
	printf("Size of unsigned char %d \n",sizeof(unsigned char));
	printf("Size of signed char %d \n",sizeof(signed char));
	
	printf("Size of int %d \n",sizeof(int));
	printf("Size of unsigned int %d \n",sizeof(unsigned int));
	printf("Size of signed short int %d \n",sizeof(signed short int));
	
	printf("Size of signed int %d \n",sizeof(signed int));
	printf("Size of short int %d \n",sizeof(short int));
	printf("Size of unsigned short int %d \n",sizeof(unsigned short int));
	
	printf("Size of long int %d \n",sizeof(long int));
	printf("Size of unsigned long int %d \n",sizeof(unsigned long int));
	printf("Size of signed long int %d \n",sizeof(signed long int));
	
	printf("Size of float %d \n",sizeof(float));
	printf("Size of double %d \n",sizeof(double));
	printf("Size of long double %d \n",sizeof(long double));
	return 0;
}

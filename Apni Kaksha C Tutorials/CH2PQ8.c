#include<stdio.h>
/*
Print 1 (true) or O(false) for following statements :
a. if it's sunday & it's snowing ->true
b. if it's monday or it's raining ->true
c. if a number is greater than 9 & less than 100 ->true
*/
int main() {
int isSunday=1;
int isSnowing =1;
printf("%d \n",isSunday && isSnowing);
int isMonday=1;
int isRaining =0;
printf("%d \n",isMonday || isRaining);
int a;
printf("Enter the number: \n");
scanf("%d", &a);
printf("%d \n", a>9 && a<100);
    return 0;
}
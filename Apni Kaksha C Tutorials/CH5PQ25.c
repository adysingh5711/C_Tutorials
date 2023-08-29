#include <stdio.h>
//PQ-24,25 & 26 not shown in video thus named 28th as 25
// Declaration or Prototype
void namaste();
void bonjour();
int main()
{
    printf("Enter f for French and i for Indian :");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}

void namaste()
{
    printf("\n Namaste");
}
void bonjour()
{
    printf("\n Bonjour");
}
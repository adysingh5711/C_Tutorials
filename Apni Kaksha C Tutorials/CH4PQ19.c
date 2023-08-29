#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 10; i++){
        if (i == 6)
        {
            continue;
        }
        printf("%d \t", i);
        
    }
    printf("\n\n");
    for (i = 0; i <= 10; ++i){
        if (i == 6)
        {
            continue;
        }
        printf("%d \t", i);
        
    }
    return 0;
}
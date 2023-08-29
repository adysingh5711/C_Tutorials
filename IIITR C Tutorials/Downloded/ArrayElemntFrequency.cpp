#include<stdio.h>
int main()
{
	int size , count;
	scanf("%d",&size);
	int a[size],freq[size],i,j;

for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }

    return 0;
}

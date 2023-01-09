#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

unsigned int find_negative_numbers (double* ARRAY, int N);

int main()
{
    double ARRAY[ARRAY_SIZE];
    for(int i=0; i<ARRAY_SIZE; i++)
    {
        printf("Enter value for [%d]\t", i);
        scanf("%lf", &ARRAY[i]);
    }
    printf("Number of negative values: %u", find_negative_numbers(&ARRAY[0], ARRAY_SIZE));
    return 0;
}


unsigned int find_negative_numbers (double* ARRAY, int N)
{
    unsigned int k=0;
    for(int i=0; i<N; i++)
    {
        if(ARRAY[i]<0)
        {
            k+=1;
        }
    }
    return k;
}

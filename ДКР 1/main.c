#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double a;
    double sum=0;

    do
    {
    printf("Enter value for N>=1\n");
    scanf("%d", &N);

    printf("Enter value for a>=0\n");
    scanf("%lf", &a);

    } while(N<1 || a<0);

    double AxN=1;

    for(int n=1; n<=N; n++)
    {
        AxN*=a;
        sum+=AxN/(a+n);
    }
    sum=sum+1;

    printf("Sum=%lf", sum);

    return 0;
}

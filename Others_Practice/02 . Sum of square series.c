#include<stdio.h>

int main()
{
    int N,I,S;

    printf("Series End To : ");
    scanf("%d", &N);

    S = (N * (N + 1) * ((2 * N) + 1)) / 6;

    printf("\nSum Of The Series : ");
    for(I=1; I<=N; I++)
    {
        if(I < N) printf("%d^2 + ",I);
        else printf("%d^2 = %d\n",I,S);
    }
    return 0;
}


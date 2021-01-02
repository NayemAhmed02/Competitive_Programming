#include<stdio.h>

int main()
{
    int N,I,S;

    printf("Series End To : ");
    scanf("%d", &N);

    S = (N * (N + 1)) / 2;

    printf("\nSum Of The Series : ");
    for(I=1; I<=N; I++)
    {
        if(I < N) printf("%d + ",I);
        else printf("%d = %d\n",I,S);
    }
    return 0;
}


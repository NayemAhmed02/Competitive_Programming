#include<stdio.h>

int main()
{
    int N,I,S1,S2;

    printf("Series End To : ");
    scanf("%d", &N);

    S1 = (N * (N + 1)) / 2;
    S2 = S1;

    printf("\nSum Of The Series : ");
    for(I=1; I<=N; I++)
    {
        if(I < N) printf("%d^3 + ",I);
        else printf("%d^3 = %d\n",I,S1*S2);
    }
    return 0;
}

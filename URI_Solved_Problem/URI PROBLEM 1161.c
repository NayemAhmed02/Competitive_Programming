#include<stdio.h>

int main()
{
    int I,J,K,M,N,S1,S2;
    for(I=0; I<3; I++)
    {
        S1=1;
        S2=1;
        scanf("%d %d",&M,&N);
        for(J=M; J>=1; J--)
        {
          S1 = S1*J;
        }
        for(K=N; K>=1; K--)
        {
            S2 = S2*K;
        }
        printf("%d\n",S1+S2);
    }
    return 0;
}

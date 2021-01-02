#include<stdio.h>

int main()
{
    int N,I,J,Min=10000;
    scanf("%d",&N);
    int X[N];
    for(I=0; I<N; I++)
    {
        scanf("%d",&X[I]);
        if(Min > X[I])
        {
            Min = X[I];
            J = I;
        }
    }
    printf("Menor valor: %d\n",Min);
    printf("Posicao: %d\n",J);
    return 0;
}

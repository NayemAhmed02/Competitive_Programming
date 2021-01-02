#include<stdio.h>

int main()
{
    int A,B,N,T=0,G=0,I=0,E=0;
    for( ; ; )
    {
        scanf("%d %d", &A, &B);
        if(A > B) I++;
        else if(A < B) G++;
        else if(A == B) E++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &N);
        if(N == 2) break;
        else if(N == 1) continue;
    }
    T = (I + G) + E;
    printf("%d grenais\n",T);
    printf("Inter:%d\n",I);
    printf("Gremio:%d\n",G);
    printf("Empates:%d\n",E);
    if(I > G) printf("Inter venceu mais\n");
    else if(I < G) printf("Germio venceu mais\n");
    else printf("Não houve vencedor\n");

    return 0;
}

#include<stdio.h>

int main()
{
    int N,I,J,K,L;
    char M[1001],RM[1001];
    scanf("%d", &N);
    getchar();
    for(I=0; I<N; I++)
    {
        gets(M);
        J = 0;
        while(M[J] != '\0')
        {
          if(M[J]>=65 && M[J]<=90) M[J] = M[J] + 3;
          else if(M[J]>=97 && M[J]<=122) M[J] = M[J] + 3;
          else M[J] = M[J];
          J++;
        }
        M[J] = '\0';
        L = 0;
        for(K=J-1; K>=0; K--)
        {
            RM[L] = M[K];
            L++;
        }
        RM[L] = '\0';
        K = L/2;
        for(J=K; J<L; J++)
            RM[J] = RM[J] - 1;
        RM[J] = '\0';
        printf("%s\n",RM);
    }
    return 0;
}

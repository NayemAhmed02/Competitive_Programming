#include<stdio.h>

int main()
{
    int N,L,I,J;
    while(scanf("%d", &N) != EOF)
    {
        int A[N][N];
        L = N / 3;
        for(I=0; I<N; I++)
        {
            for(J=0; J<N; J++)
            {
                if(I < L || I >= N-L)
                {
                    if(I == J) A[I][J] = 2;
                    else if(J == N-1-I) A[I][J] = 3;
                    else A[I][J] = 0;
                }
                else
                {
                    if(J < L || J >= N-L) A[I][J] = 0;
                    else A[I][J] = 1;
                }
                if(N % 2 != 0) A[N/2][N/2] = 4;
                printf("%d",A[I][J]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

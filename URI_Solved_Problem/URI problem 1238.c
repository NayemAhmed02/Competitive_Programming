#include<stdio.h>

int main()
{
    int N,I,J,K,L,M,A,B,C,D;
    char S1[51],S2[51],RS[102];
    scanf("%d", &N);
    for(I=0; I<N; I++)
    {
        scanf("%s %s",S1,S2);
        J = 0;
        K = 0;
        while(S1[J] != '\0')
            J++;
        while(S2[K] != '\0')
            K++;
        D = J + K;
        if(J >= K) L = K;
        else L = J;
        L = 2 * L;
        A = 0;
        B = 0;
        for(M=0; M<L; )
        {
           RS[M] = S1[A];
           M++;
           RS[M] = S2[B];
           M++;
           A++;
           B++;
        }
        if(J >= K)
        {
            for(C=M ; C<D; C++)
                RS[C] = S1[A++];
        }
        else
        {
            for(C=M; C<D; C++)
                RS[C] = S2[B++];
        }
        RS[C] = '\0';
        printf("%s\n",RS);

    }
    return 0;
}

#include<stdio.h>

int main()
{
    int N,M,I,J;
    char S[51];
    scanf("%d", &N);
    for(I=0; I<N; I++)
    {
        scanf("%s %d",S, &M);
        for(J=0; S[J] != '\0'; J++)
        {
            if((S[J]-M) >= 65) S[J] = S[J] - M;
            else S[J] = (S[J] - M) + 26;
        }
        S[J] = '\0';
        printf("%s\n",S);
    }
    return 0;
}

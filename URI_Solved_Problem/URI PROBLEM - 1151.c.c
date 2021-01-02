#include<stdio.h>

int main()
{
    int T,N,X,P,M,I,J;

        scanf("%d",&N);
        if(N==0)
            printf("0");
        else if(N == 1)
            printf("1");
        else
        {
            P = 0;
            M = 1;
            X = 0;
            printf("%d %d",P,M);

        for(J=2; J<N; J++)
        {
                X = P + M;
                P = M;
                M = X;
                printf(" %d",X);
        }

        }
        printf("\n");

        return 0;
}

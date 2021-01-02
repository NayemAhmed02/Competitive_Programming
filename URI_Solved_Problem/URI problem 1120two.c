#include<stdio.h>
#include<string.h>

int main()
{
    int D,I,J,K,L,L1;
    char N[101],R[101];
    for( ; ; )
    {
        scanf("%d %s", &D, &N);
        if(D==0 && N[0]=='0') break;
        else
        {
            L = strlen(N);
            K = 0;
            for(J=0; J<L; J++)
            {
                if(N[J] != D+48)
                {
                    R[K] = N[J];
                    K++;
                }
                R[K] = '\0';

            }
            if(K == 0) printf("0\n");
            else if(R[0]=='0')
            {
                J = 0;
                L1 = strlen(R);
                for(I=0; I<L1; I++)
                {
                    if(R[I] > 48) break;
                    J++;
                }
                if(J==K) printf("0\n");
                else
                {

                for(I=J; I<K; I++)
                    printf("%c",R[I]);
                printf("\n");
                }
            }
            else printf("%s\n",R);
        }
    }
    return 0;
}

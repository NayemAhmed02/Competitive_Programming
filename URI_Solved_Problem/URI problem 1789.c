#include<stdio.h>

int main()
{
    int L,V,I,J,K;
    while(scanf("%d", &L) != EOF)
    {
        I = 0;
        for(J=0; J<L; J++)
        {
            scanf("%d", &V);
            if(V > I) I = V;
        }
        if(I < 10) K = 1;
        else if(I < 20) K = 2;
        else K = 3;
        printf("%d\n",K);
    }
    return 0;
}

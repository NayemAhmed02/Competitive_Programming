#include<stdio.h>

int main()
{
    int C,N,I,S;
    scanf("%d", &C);
    for(I=0; I<C; I++)
    {
        scanf("%d", &N);
        if(N % 2 == 0) S = 0;
        else S = 1;
        printf("%d\n",S);
    }
    return 0;
}

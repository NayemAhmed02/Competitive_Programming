#include<stdio.h>

int main()
{
    int N,I;
    scanf("%d", &N);
    for(I=1; I<=N; I++)
    {
        if(I < N) printf("Ho ");
        else printf("Ho!\n");
    }
    return 0;
}

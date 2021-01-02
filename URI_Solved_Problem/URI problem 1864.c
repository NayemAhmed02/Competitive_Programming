#include<stdio.h>

int main()
{
    char str[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int N,I;
    while(scanf("%d", &N) != EOF)
    {
       for(I=0; I<N; I++)
            printf("%c",str[I]);
       printf("\n");
    }
    return 0;
}

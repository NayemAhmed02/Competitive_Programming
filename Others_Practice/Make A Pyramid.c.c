#include<stdio.h>

int main()
{
    int i,j,k,N;

    printf("Enter A Number : ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(k=0; k<=N-i; k++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*",j);
        }
        printf("\n");
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int i,j,k=1,N;

    printf("Enter A Number : ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        printf("\n");
        for(j=1; j<=i; j++,k++)
        {
                printf(" %d",k);

        }

    }
    return 0;
}

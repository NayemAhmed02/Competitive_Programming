#include<stdio.h>

int main()
{
    int I,J,N,S=1;
    printf("Enter A Number: ");
    scanf("%d",&N);
    printf("\nLet's See The %d Line Floyd's Triangle...\n\n",N);

    for(I=1; I<=N; I++)
    {
        for(J=1; J<=I; J++)
        {
            printf("%d ",S);
            S = S+1;
        }
        printf("\n");
    }
    return 0;
}

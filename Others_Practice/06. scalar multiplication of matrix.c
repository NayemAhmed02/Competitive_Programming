#include<stdio.h>

int main()
{
    int Mat[10][10];
    int I,J,R,C,N;
    printf("Enter First Row Number Then Column Number : ");
    scanf("%d %d", &R, &C);

    printf("Enter the Matrix : ");
    for(I=0; I<R; I++)
        for(J=0; J<C; J++)
            scanf("%d", &Mat[I][J]);

    printf("The Matrix Is :\n");
    for(I=0; I<R; I++)
    {
        printf("\n");
        for(J=0; J<C; J++)
            printf("%d\t",Mat[I][J]);
    }
    printf("\n\nEnter any number to multiply with given matrix : ");
    scanf("%d", &N);

    printf("\n\nResultant matrix Is :\n");
    for(I=0; I<R; I++)
    {
        printf("\n");
        for(J=0; J<C; J++)
            printf("%d\t",Mat[I][J] * N);
    }

    printf("\n\n");
    return 0;
}
